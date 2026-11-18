// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// FHeightfieldRaycastVisitor @ 143afa1a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FHeightfieldRaycastVisitor * __thiscall
Chaos::FHeightfieldRaycastVisitor::FHeightfieldRaycastVisitor
          (FHeightfieldRaycastVisitor *this,FData<unsigned_short> *param_1,
          TVector<double,3> *param_2,TVector<double,3> *param_3,double param_4)

{
  undefined8 uVar1;
  double dVar2;
  __m128 _Var3;
  bool bVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  
  uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar5 = __real_3e45798ee2308c3a;
  this->OutTime = 1.7976931348623157e+308;
  this->OutFaceIndex = -1;
  this->GeomData = param_1;
  uVar1 = *(undefined8 *)&param_2->field_0x8;
  *(undefined8 *)&this->Start = *(undefined8 *)param_2;
  *(undefined8 *)&(this->Start).field_0x8 = uVar1;
  *(undefined8 *)&(this->Start).field_0x10 = *(undefined8 *)&param_2->field_0x10;
  uVar1 = *(undefined8 *)&param_3->field_0x8;
  *(undefined8 *)&this->Dir = *(undefined8 *)param_3;
  *(undefined8 *)&(this->Dir).field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&param_3->field_0x10;
  this->Thickness = param_4;
  *(undefined8 *)&(this->Dir).field_0x10 = uVar1;
  dVar13 = __real_3ff0000000000000;
  dVar2 = *(double *)&this->Dir;
  bVar4 = (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) & uVar7,SUB84(dVar2,0) & uVar6) <= dVar5
  ;
  this->bParallel[0] = bVar4;
  if (bVar4) {
    dVar10 = 0.0;
  }
  else {
    dVar10 = dVar13 / dVar2;
  }
  *(double *)&this->InvDir = dVar10;
  dVar10 = *(double *)&(this->Dir).field_0x8;
  bVar4 = (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & uVar7,SUB84(dVar10,0) & uVar6) <=
          dVar5;
  this->bParallel[1] = bVar4;
  if (bVar4) {
    dVar11 = 0.0;
  }
  else {
    dVar11 = dVar13 / dVar10;
  }
  *(double *)&(this->InvDir).field_0x8 = dVar11;
  dVar11 = *(double *)&(this->Dir).field_0x10;
  bVar4 = (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & uVar7,SUB84(dVar11,0) & uVar6) <=
          dVar5;
  this->bParallel[2] = bVar4;
  if (bVar4) {
    dVar13 = 0.0;
  }
  else {
    dVar13 = dVar13 / dVar11;
  }
  *(double *)&(this->InvDir).field_0x10 = dVar13;
  _Var3.m128_f32[1] = (float)*(double *)&(this->Start).field_0x8;
  _Var3.m128_f32[0] = (float)*(double *)&this->Start;
  _Var3.m128_f32[2] = (float)*(double *)&(this->Start).field_0x10;
  _Var3.m128_f32[3] = 0.0;
  this->StartPointSimd = _Var3;
  uVar6 = -(uint)((float)(__xmm_7fffffff7fffffff7fffffff7fffffff & (uint)(float)dVar2) <
                 GlobalVectorConstants::SmallNumber.m128_f32[0]);
  uVar7 = -(uint)((float)(_UNK_15061cc74 & (uint)(float)dVar10) <
                 GlobalVectorConstants::SmallNumber.m128_f32[1]);
  uVar8 = -(uint)((float)(_UNK_15061cc78 & (uint)(float)dVar11) <
                 GlobalVectorConstants::SmallNumber.m128_f32[2]);
  uVar9 = -(uint)(0.0 < GlobalVectorConstants::SmallNumber.m128_f32[3]);
  (this->Parallel).m128_u32[0] = uVar6;
  (this->Parallel).m128_u32[1] = uVar7;
  (this->Parallel).m128_u32[2] = uVar8;
  (this->Parallel).m128_u32[3] = uVar9;
  auVar12._4_4_ = (float)dVar10;
  auVar12._0_4_ = (float)dVar2;
  auVar12._8_4_ = (float)dVar11;
  auVar12._12_4_ = 0;
  auVar12 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar12);
  (this->InvDirSimd).m128_u32[0] = ~uVar6 & auVar12._0_4_;
  (this->InvDirSimd).m128_u32[1] = ~uVar7 & auVar12._4_4_;
  (this->InvDirSimd).m128_u32[2] = ~uVar8 & auVar12._8_4_;
  (this->InvDirSimd).m128_u32[3] = ~uVar9 & auVar12._12_4_;
  return this;
}

// operator() @ 143b03b40

bool __thiscall
`Chaos::FHeightfieldRaycastVisitor::VisitRaycast'::__l2::<lambda_1>::operator()
          (void *this,int param_1,TVector<double,3> *param_2,TVector<double,3> *param_3,
          TVector<double,3> *param_4)

{
  double dVar1;
  double *pdVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  bool bVar17;
  undefined1 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined8 uVar26;
  double dVar27;
  double dVar28;
  undefined8 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  double dStack_e0;
  
  pdVar2 = *(double **)this;
  dVar22 = *(double *)param_3 - *(double *)param_2;
  dVar24 = *(double *)&param_2->field_0x10;
  dVar27 = *(double *)&param_3->field_0x10 - dVar24;
  dVar1 = *(double *)&param_2->field_0x8;
  dVar8 = *(double *)&param_3->field_0x8 - dVar1;
  dVar19 = *(double *)&param_4->field_0x10 - dVar24;
  dVar9 = *(double *)param_4 - *(double *)param_2;
  dVar7 = *(double *)&param_4->field_0x8 - dVar1;
  dVar14 = dVar19 * dVar8 - dVar7 * dVar27;
  dVar25 = dVar9 * dVar27 - dVar19 * dVar22;
  dVar28 = dVar7 * dVar22 - dVar9 * dVar8;
  uVar34 = (uint)__xmm_80000000000000008000000000000000;
  uVar35 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar20 = (double)CONCAT44((uint)((ulonglong)pdVar2[0x13] >> 0x20) ^ uVar35,
                            SUB84(pdVar2[0x13],0) ^ uVar34);
  uVar32 = SUB84(pdVar2[0x14],0) ^ uVar34;
  uVar33 = (uint)((ulonglong)pdVar2[0x14] >> 0x20) ^ uVar35;
  uVar34 = SUB84(pdVar2[0x12],0) ^ uVar34;
  uVar35 = (uint)((ulonglong)pdVar2[0x12] >> 0x20) ^ uVar35;
  dVar10 = dVar25 * dVar20 + dVar14 * (double)CONCAT44(uVar35,uVar34) +
           dVar28 * (double)CONCAT44(uVar33,uVar32);
  if (__real_3e45798ee0000000 <=
      (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    uVar30 = SUB84(__real_3ff0000000000000,0);
    uVar31 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    dVar1 = pdVar2[0x10] - dVar1;
    dVar24 = pdVar2[0x11] - dVar24;
    dVar15 = pdVar2[0xf] - *(double *)param_2;
    dVar23 = __real_3ff0000000000000 / dVar10;
    dVar11 = (dVar14 * dVar15 + dVar25 * dVar1 + dVar28 * dVar24) * dVar23;
    auVar5._8_4_ = SUB84(dVar11,0);
    auVar5._0_8_ = dVar11;
    auVar5._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    if ((0.0 <= dVar11) &&
       (dVar11 < **(double **)((longlong)this + 8) || dVar11 == **(double **)((longlong)this + 8)))
    {
      dVar21 = dVar20 * dVar24 - (double)CONCAT44(uVar33,uVar32) * dVar1;
      dVar12 = (double)CONCAT44(uVar33,uVar32) * dVar15 - (double)CONCAT44(uVar35,uVar34) * dVar24;
      dVar1 = (double)CONCAT44(uVar35,uVar34) * dVar1 - dVar20 * dVar15;
      dVar24 = (dVar7 * dVar12 + dVar21 * dVar9 + dVar19 * dVar1) * dVar23;
      if ((__real_be45798ee0000000 <= dVar24) &&
         (((dVar24 <= __real_3ff0000002af31dc &&
           (dVar23 = (dVar22 * dVar21 + dVar12 * dVar8 + dVar1 * dVar27) * dVar23,
           dVar23 <= __real_3e45798ee0000000)) && (dVar24 - dVar23 <= __real_3ff0000002af31dc)))) {
        dVar24 = dVar14 * dVar14 + dVar25 * dVar25 + dVar28 * dVar28;
        uVar26 = dVar25;
        uVar29 = dVar28;
        uVar16 = dVar14;
        if ((dVar24 != __real_3ff0000000000000) &&
           (uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
           uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
           uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
           __real_3e45798ee0000000 <= dVar24)) {
          dVar24 = __real_3ff0000000000000 / SQRT(dVar24);
          uVar26 = dVar25 * dVar24;
          uVar29 = dVar28 * dVar24;
          uVar16 = dVar14 * dVar24;
        }
        if (dVar10 <= 0.0) {
          if (0.0 <= dVar10) {
            uVar30 = 0;
            uVar31 = 0;
          }
          else {
            uVar30 = (undefined4)__real_bff0000000000000;
            uVar31 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
          }
        }
        dVar24 = (double)uVar26 * (double)CONCAT44(uVar31,uVar30);
        if (dVar11 < *pdVar2) {
          uVar34 = param_1 / 2;
          if ((-1 < (int)uVar34) &&
             (dVar1 = pdVar2[0xe], (int)uVar34 < *(int *)((longlong)dVar1 + 0x28))) {
            uVar35 = 0;
            if ((int)uVar34 < *(int *)((longlong)dVar1 + 0x28)) {
              uVar35 = ~uVar34 >> 0x1f;
            }
            if ((uVar35 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar4 = (code *)swi(3);
              uVar18 = (*pcVar4)();
              return (bool)uVar18;
            }
            if (*(char *)((longlong)(int)uVar34 + *(longlong *)((longlong)dVar1 + 0x20)) == -1) {
              return false;
            }
          }
          lVar3 = *(longlong *)this;
          dStack_e0 = auVar5._8_8_;
          *(double *)(lVar3 + 8) = dVar11 * *(double *)(lVar3 + 0x90) + *(double *)(lVar3 + 0x78);
          dVar1 = *(double *)(lVar3 + 0xa0) * dStack_e0 + *(double *)(lVar3 + 0x88);
          auVar6._8_4_ = SUB84(dVar1,0);
          auVar6._0_8_ = *(double *)(lVar3 + 0x98) * dVar11 + *(double *)(lVar3 + 0x80);
          auVar6._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
          *(undefined1 (*) [16])(lVar3 + 0x10) = auVar6;
          lVar3 = *(longlong *)this;
          auVar13._8_4_ = SUB84(dVar24,0);
          auVar13._0_8_ = (double)uVar16 * (double)CONCAT44(uVar31,uVar30);
          auVar13._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
          *(undefined1 (*) [16])(lVar3 + 0x20) = auVar13;
          *(double *)(lVar3 + 0x30) = (double)CONCAT44(uVar31,uVar30) * (double)uVar29;
          **(double **)this = dVar11;
          *(int *)(*(longlong *)this + 0x38) = param_1;
          return true;
        }
      }
    }
  }
  return false;
}

// operator() @ 143b082e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`Chaos::FHeightfieldRaycastVisitor::VisitSweep'::__l2::<lambda_1>::operator()
          (void *this,int param_1,TVector<double,3> *param_2,TVector<double,3> *param_3,
          TVector<double,3> *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar14;
  undefined1 auVar13 [16];
  double dVar15;
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  uint uVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStackY_348 [32];
  int local_2f8 [2];
  double local_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  undefined1 local_2d0 [16];
  double local_2c0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  undefined1 local_268 [32];
  undefined1 local_248 [16];
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  FCapsule local_218;
  FCapsule local_1d8;
  FCapsule local_198;
  double local_158;
  double local_150;
  double local_148 [2];
  undefined1 local_138 [16];
  double dStack_128;
  TVector<double,3> local_120;
  TVector<double,3> local_108;
  undefined1 local_e8 [24];
  TVector<double,3> local_d0;
  TVector<double,3> local_b8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_348;
  dVar20 = *(double *)&param_3->field_0x10 - *(double *)&param_2->field_0x10;
  dVar18 = *(double *)&param_4->field_0x8 - *(double *)&param_2->field_0x8;
  dVar17 = *(double *)&param_4->field_0x10 - *(double *)&param_2->field_0x10;
  dVar15 = *(double *)&param_3->field_0x8 - *(double *)&param_2->field_0x8;
  dVar21 = dVar17 * dVar15 - dVar18 * dVar20;
  dVar18 = dVar18 * (*(double *)param_3 - *(double *)param_2) -
           (*(double *)param_4 - *(double *)param_2) * dVar15;
  dVar17 = (*(double *)param_4 - *(double *)param_2) * dVar20 -
           dVar17 * (*(double *)param_3 - *(double *)param_2);
  auVar13._0_8_ = dVar21 * dVar21;
  auVar13._8_8_ = 0;
  dVar15 = dVar17 * dVar17 + auVar13._0_8_ + dVar18 * dVar18;
  if (dVar15 < __real_3f1a36e2e0000000) {
LAB_143b08a1b:
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<592749347054026881>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\HeightField.cpp"
                       ,0x81,"Len2 > (1.e-8f)");
    if (!bVar8) {
      return false;
    }
    pcVar3 = (code *)swi(3);
    uVar9 = (*pcVar3)();
    return (bool)uVar9;
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar15;
  auVar13 = sqrtpd(auVar13,auVar4);
  dVar15 = __real_3ff0000000000000 / auVar13._0_8_;
  dVar18 = dVar15 * dVar18;
  local_2a8 = dVar18;
  if (auVar13._0_8_ <= __real_3e45798ee0000000) goto LAB_143b08a1b;
  Chaos::FImplicitObject::FImplicitObject((FImplicitObject *)local_268,0,'\x02');
  lVar1 = *(longlong *)this;
  local_248._0_8_ = *(undefined8 *)param_2;
  local_248._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_238 = *(double *)&param_2->field_0x10;
  local_268._0_8_ = &___7__TPlane_N_02_Chaos__6B_;
  local_2e8 = 0.0;
  dStack_2e0 = 0.0;
  bVar8 = false;
  local_2d0 = ZEXT816(0);
  local_2f0 = __real_7fefffffffffffff;
  local_2d8 = 0.0;
  local_2c0 = 0.0;
  local_2f8[0] = -1;
  local_230 = dVar21 * dVar15;
  local_228 = dVar15 * dVar17;
  local_220 = dVar18;
  bVar5 = Chaos::TCorePlane<double,3>::Raycast
                    ((TCorePlane<double,3> *)local_248,(TVector<double,3> *)(lVar1 + 0x78),
                     (TVector<double,3> *)(lVar1 + 0x90),**(double **)((longlong)this + 8),
                     *(double *)(lVar1 + 200),&local_2f0,(TVector<double,3> *)&local_2e8,
                     (TVector<double,3> *)local_2d0,local_2f8);
  dVar18 = local_2f0;
  uVar22 = SUB84(local_2f0,0);
  uVar23 = (undefined4)((ulonglong)local_2f0 >> 0x20);
  if (bVar5) {
    if (local_2f0 == 0.0) {
      Chaos::FindClosestPointOnTriangle<double,3>
                ((TVector<double,3> *)&local_2a0,(TPlane<double,3> *)local_268,param_2,param_3,
                 param_4,(TVector<double,3> *)(*(longlong *)this + 0x78));
      puVar2 = *(undefined8 **)this;
      dVar20 = ((double)puVar2[0xf] - local_2a0) * ((double)puVar2[0xf] - local_2a0) +
               ((double)puVar2[0x10] - local_298) * ((double)puVar2[0x10] - local_298) +
               ((double)puVar2[0x11] - local_290) * ((double)puVar2[0x11] - local_290);
      if (dVar20 < **(double **)((longlong)this + 0x10) ||
          dVar20 == **(double **)((longlong)this + 0x10)) {
        *puVar2 = 0;
        lVar1 = *(longlong *)this;
        *(double *)(lVar1 + 8) = local_2a0;
        *(double *)(lVar1 + 0x10) = local_298;
        *(double *)(lVar1 + 0x18) = local_290;
        lVar1 = *(longlong *)this;
        *(double *)(lVar1 + 0x20) = dVar21 * dVar15;
        *(double *)(lVar1 + 0x28) = dVar15 * dVar17;
        *(double *)(lVar1 + 0x30) = local_2a8;
        bVar8 = true;
        *(int *)(*(longlong *)this + 0x38) = param_1;
        goto LAB_143b089fa;
      }
      goto LAB_143b0861f;
    }
    Chaos::FindClosestPointOnTriangle<double,3>
              ((TVector<double,3> *)&local_288,(TVector<double,3> *)&local_2e8,param_2,param_3,
               param_4,(TVector<double,3> *)&local_2e8);
    dVar15 = (local_2e8 - local_288) * (local_2e8 - local_288) +
             (dStack_2e0 - local_280) * (dStack_2e0 - local_280) +
             (local_2d8 - local_278) * (local_2d8 - local_278);
    bVar8 = dVar15 <= __real_3e45798ee0000000;
    if (__real_3e45798ee0000000 < dVar15) goto LAB_143b0861f;
    uVar16 = local_2d0._0_4_;
    uVar19 = local_2d0._4_4_;
    uVar26 = local_2d0._8_4_;
    uVar27 = local_2d0._12_4_;
LAB_143b08938:
    if ((double)CONCAT44(uVar23,uVar22) < **(double **)this) {
      uVar24 = param_1 / 2;
      if ((-1 < (int)uVar24) &&
         (dVar15 = (*(double **)this)[0xe], (int)uVar24 < *(int *)((longlong)dVar15 + 0x28))) {
        uVar25 = 0;
        if ((int)uVar24 < *(int *)((longlong)dVar15 + 0x28)) {
          uVar25 = ~uVar24 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return (bool)uVar9;
        }
        if (*(char *)((longlong)(int)uVar24 + *(longlong *)((longlong)dVar15 + 0x20)) == -1)
        goto LAB_143b089f8;
      }
      lVar1 = *(longlong *)this;
      *(double *)(lVar1 + 8) = local_2e8;
      *(double *)(lVar1 + 0x10) = dStack_2e0;
      *(double *)(lVar1 + 0x18) = local_2d8;
      lVar1 = *(longlong *)this;
      *(undefined4 *)(lVar1 + 0x20) = uVar16;
      *(undefined4 *)(lVar1 + 0x24) = uVar19;
      *(undefined4 *)(lVar1 + 0x28) = uVar26;
      *(undefined4 *)(lVar1 + 0x2c) = uVar27;
      *(double *)(lVar1 + 0x30) = local_2c0;
      **(undefined8 **)this = CONCAT44(uVar23,uVar22);
      *(int *)(*(longlong *)this + 0x38) = param_1;
      bVar8 = true;
      **(undefined8 **)((longlong)this + 8) = CONCAT44(uVar23,uVar22);
      goto LAB_143b089fa;
    }
  }
  else {
LAB_143b0861f:
    Chaos::FCapsule::FCapsule(&local_198,param_2,param_3,*(double *)(*(longlong *)this + 200));
    bVar5 = Chaos::FCapsule::Raycast
                      (&local_198,(TVector<double,3> *)(*(longlong *)this + 0x78),
                       (TVector<double,3> *)(*(longlong *)this + 0x90),
                       **(double **)((longlong)this + 8),0.0,&local_158,
                       (TVector<double,3> *)local_138,(TVector<double,3> *)local_e8,local_2f8);
    Chaos::FCapsule::FCapsule(&local_1d8,param_3,param_4,*(double *)(*(longlong *)this + 200));
    bVar6 = Chaos::FCapsule::Raycast
                      (&local_1d8,(TVector<double,3> *)(*(longlong *)this + 0x78),
                       (TVector<double,3> *)(*(longlong *)this + 0x90),
                       **(double **)((longlong)this + 8),0.0,&local_150,&local_120,&local_d0,
                       local_2f8);
    Chaos::FCapsule::FCapsule(&local_218,param_2,param_4,*(double *)(*(longlong *)this + 200));
    bVar7 = Chaos::FCapsule::Raycast
                      (&local_218,(TVector<double,3> *)(*(longlong *)this + 0x78),
                       (TVector<double,3> *)(*(longlong *)this + 0x90),
                       **(double **)((longlong)this + 8),0.0,local_148,&local_108,&local_b8,
                       local_2f8);
    dVar15 = 0.0;
    if (bVar5) {
      bVar8 = true;
      dVar15 = local_158;
    }
    iVar11 = bVar5 - 1;
    if ((bVar6) && ((!bVar8 || (local_150 < dVar15)))) {
      iVar11 = 1;
      bVar8 = true;
      dVar15 = local_150;
    }
    if ((!bVar7) || ((bVar8 && (dVar15 <= local_148[0])))) {
      if (iVar11 != -1) goto LAB_143b087ee;
      uVar16 = local_2d0._0_4_;
      uVar19 = local_2d0._4_4_;
      uVar26 = local_2d0._8_4_;
      uVar27 = local_2d0._12_4_;
    }
    else {
      iVar11 = 2;
      bVar8 = true;
      dVar15 = local_148[0];
LAB_143b087ee:
      lVar10 = (longlong)iVar11;
      lVar1 = *(longlong *)this;
      local_2d0 = *(undefined1 (*) [16])(local_e8 + lVar10 * 0x18);
      uVar16 = local_2d0._0_4_;
      uVar19 = local_2d0._4_4_;
      uVar26 = local_2d0._8_4_;
      uVar27 = local_2d0._12_4_;
      dVar21 = *(double *)(lVar1 + 200);
      local_2c0 = *(double *)(local_e8 + lVar10 * 0x18 + 0x10);
      local_2e8 = *(double *)(local_138 + lVar10 * 0x18) - dVar21 * local_2d0._0_8_;
      dStack_2e0 = *(double *)(local_138 + lVar10 * 0x18 + 8) - local_2d0._8_8_ * dVar21;
      local_2d8 = (&dStack_128)[lVar10 * 3] - local_2c0 * dVar21;
      if (dVar18 == 0.0) {
        uVar24 = SUB84(local_220,0);
        uVar25 = (uint)((ulonglong)local_220 >> 0x20);
        dVar18 = local_230;
        dVar21 = local_228;
        if ((*(double *)(lVar1 + 0x80) - (double)local_248._8_8_) * local_228 +
            (*(double *)(lVar1 + 0x78) - (double)local_248._0_8_) * local_230 +
            (*(double *)(lVar1 + 0x88) - local_238) * local_220 < 0.0) {
          uVar12 = (uint)__xmm_80000000000000008000000000000000;
          uVar14 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
          dVar18 = (double)CONCAT44((uint)((ulonglong)local_230 >> 0x20) ^ uVar14,
                                    SUB84(local_230,0) ^ uVar12);
          dVar21 = (double)CONCAT44((uint)((ulonglong)local_228 >> 0x20) ^ uVar14,
                                    SUB84(local_228,0) ^ uVar12);
          uVar24 = uVar24 ^ uVar12;
          uVar25 = uVar25 ^ uVar14;
        }
        local_2c0 = (double)CONCAT44(uVar25,uVar24);
        uVar16 = SUB84(dVar18,0);
        uVar19 = (undefined4)((ulonglong)dVar18 >> 0x20);
        uVar26 = SUB84(dVar21,0);
        uVar27 = (undefined4)((ulonglong)dVar21 >> 0x20);
        local_2d0._8_4_ = uVar26;
        local_2d0._0_8_ = dVar18;
        local_2d0._12_4_ = uVar27;
        local_2a8 = local_2c0;
      }
      uVar22 = SUB84(dVar15,0);
      uVar23 = (undefined4)((ulonglong)dVar15 >> 0x20);
      local_2f0 = dVar15;
    }
    local_218._padding_ = (longlong)&___7FCapsule_Chaos__6B_;
    Chaos::FImplicitObject::~FImplicitObject((FImplicitObject *)&local_218);
    local_1d8._padding_ = (longlong)&___7FCapsule_Chaos__6B_;
    Chaos::FImplicitObject::~FImplicitObject((FImplicitObject *)&local_1d8);
    local_198._padding_ = (longlong)&___7FCapsule_Chaos__6B_;
    Chaos::FImplicitObject::~FImplicitObject((FImplicitObject *)&local_198);
    if (bVar8) goto LAB_143b08938;
  }
LAB_143b089f8:
  bVar8 = false;
LAB_143b089fa:
  local_268._0_8_ = &___7__TPlane_N_02_Chaos__6B_;
  Chaos::FImplicitObject::~FImplicitObject((FImplicitObject *)local_268);
  return bVar8;
}

// VisitSweep @ 143b4f600

bool __thiscall
Chaos::FHeightfieldRaycastVisitor::VisitSweep
          (FHeightfieldRaycastVisitor *this,int param_1,double *param_2)

{
  uint uVar1;
  double dVar2;
  FData<unsigned_short> *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double local_res8;
  double local_188 [3];
  FHeightfieldRaycastVisitor *local_170;
  double *local_168;
  double *local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8 [24];
  
  pFVar3 = this->GeomData;
  lVar10 = 0;
  local_res8 = this->Thickness + __real_3e45798ee0000000;
  local_res8 = local_res8 * local_res8;
  uVar1 = param_1 / (int)(pFVar3->NumCols - 1) + param_1;
  local_160 = &local_res8;
  uVar9 = 0;
  if ((int)uVar1 < (pFVar3->Heights).ArrayNum) {
    uVar9 = ~uVar1 >> 0x1f;
  }
  local_170 = this;
  local_168 = param_2;
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  uVar11 = uVar1 + 1;
  uVar9 = 0;
  if ((int)uVar11 < (pFVar3->Heights).ArrayNum) {
    uVar9 = ~uVar11 >> 0x1f;
  }
  dVar21 = (double)*(ushort *)((pFVar3->Heights).AllocatorInstance.Data + (longlong)(int)uVar1 * 2)
           * pFVar3->HeightPerUnit + pFVar3->MinValue;
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  uVar12 = pFVar3->NumCols + uVar1;
  uVar9 = 0;
  if ((int)uVar12 < (pFVar3->Heights).ArrayNum) {
    uVar9 = ~uVar12 >> 0x1f;
  }
  dVar22 = (double)*(ushort *)((pFVar3->Heights).AllocatorInstance.Data + (longlong)(int)uVar11 * 2)
           * pFVar3->HeightPerUnit + pFVar3->MinValue;
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  uVar11 = pFVar3->NumCols + 1 + uVar1;
  uVar9 = 0;
  if ((int)uVar11 < (pFVar3->Heights).ArrayNum) {
    uVar9 = ~uVar11 >> 0x1f;
  }
  dVar18 = (double)*(ushort *)((pFVar3->Heights).AllocatorInstance.Data + (longlong)(int)uVar12 * 2)
           * pFVar3->HeightPerUnit + pFVar3->MinValue;
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  dVar15 = *(double *)&(pFVar3->Scale).field_0x10;
  local_148 = dVar15 * dVar21;
  dVar14 = *(double *)&(pFVar3->Scale).field_0x8;
  local_130 = dVar15 * dVar22;
  local_118 = dVar15 * dVar18;
  dVar16 = (double)*(ushort *)((pFVar3->Heights).AllocatorInstance.Data + (longlong)(int)uVar11 * 2)
           * pFVar3->HeightPerUnit + pFVar3->MinValue;
  bVar6 = false;
  local_100 = dVar15 * dVar16;
  dVar19 = dVar16;
  if (dVar16 <= dVar18) {
    dVar19 = dVar18;
  }
  if (dVar18 <= dVar16) {
    dVar16 = dVar18;
  }
  dVar18 = (double)((int)uVar1 % (int)(uint)pFVar3->NumCols);
  dVar20 = (double)((int)uVar1 / (int)(uint)pFVar3->NumCols);
  if (dVar19 <= dVar22) {
    dVar19 = dVar22;
  }
  local_150 = dVar14 * dVar20;
  if (dVar22 <= dVar16) {
    dVar16 = dVar22;
  }
  if (dVar19 <= dVar21) {
    dVar19 = dVar21;
  }
  if (dVar21 <= dVar16) {
    dVar16 = dVar21;
  }
  dVar21 = *(double *)&pFVar3->Scale;
  dVar17 = dVar21 * (dVar18 + __real_3ff0000000000000);
  local_120 = dVar14 * (dVar20 + __real_3ff0000000000000);
  local_158 = dVar21 * dVar18;
  local_140 = dVar21 * (dVar18 + __real_3ff0000000000000);
  dVar5 = dVar14 * (dVar20 + __real_3ff0000000000000);
  dVar22 = this->Thickness;
  dVar21 = dVar21 * dVar18;
  dVar14 = dVar14 * dVar20;
  dVar18 = dVar17;
  if (dVar21 <= dVar17) {
    dVar18 = dVar21;
  }
  dVar20 = *(double *)&(this->Start).field_0x8;
  dVar13 = dVar5;
  if (dVar14 <= dVar5) {
    dVar13 = dVar14;
  }
  dVar19 = dVar15 * dVar19;
  dVar2 = *(double *)&(this->Start).field_0x10;
  dVar15 = dVar15 * dVar16;
  local_f8[0] = (dVar18 - dVar22) - *(double *)&this->Start;
  local_f8[1] = (dVar13 - dVar22) - dVar20;
  if (dVar5 <= dVar14) {
    dVar5 = dVar14;
  }
  dVar18 = dVar19;
  if (dVar15 <= dVar19) {
    dVar18 = dVar15;
  }
  if (dVar17 <= dVar21) {
    dVar17 = dVar21;
  }
  if (dVar19 <= dVar15) {
    dVar19 = dVar15;
  }
  local_188[1] = (dVar5 + dVar22) - dVar20;
  local_f8[2] = (dVar18 - dVar22) - dVar2;
  local_188[0] = (dVar17 + dVar22) - *(double *)&this->Start;
  local_188[2] = (dVar19 + dVar22) - dVar2;
  dVar21 = __real_7fefffffffffffff;
  dVar22 = 0.0;
  do {
    if (this->bParallel[lVar10] == false) {
      dVar14 = *(double *)(this->bParallel + lVar10 * 8 + -0x18) * local_188[lVar10];
      dVar15 = *(double *)(this->bParallel + lVar10 * 8 + -0x18) * local_f8[lVar10];
      dVar18 = dVar14;
      if (dVar14 < dVar15) {
        dVar18 = dVar15;
        dVar15 = dVar14;
      }
    }
    else {
      if ((0.0 < local_f8[lVar10]) || (local_188[lVar10] <= 0.0 && local_188[lVar10] != 0.0))
      goto LAB_143b4fb15;
      dVar18 = __real_7fefffffffffffff;
      dVar15 = 0.0;
    }
    if (dVar15 <= dVar22) {
      dVar15 = dVar22;
    }
    if (dVar21 <= dVar18) {
      dVar18 = dVar21;
    }
    if (dVar18 < dVar15) goto LAB_143b4fb15;
    lVar10 = lVar10 + 1;
    dVar21 = dVar18;
    dVar22 = dVar15;
  } while (lVar10 < 3);
  if ((dVar15 < *param_2 || dVar15 == *param_2) && (0.0 <= dVar18)) {
    local_138 = local_150;
    local_128 = local_158;
    local_110 = local_140;
    local_108 = local_120;
    bVar8 = `Chaos::FHeightfieldRaycastVisitor::VisitSweep'::__l2::<lambda_1>::operator()
                      (&local_170,param_1 * 2,(TVector<double,3> *)&local_158,
                       (TVector<double,3> *)&local_140,(TVector<double,3> *)&local_110);
    bVar6 = `Chaos::FHeightfieldRaycastVisitor::VisitSweep'::__l2::<lambda_1>::operator()
                      (&local_170,param_1 * 2 + 1,(TVector<double,3> *)&local_158,
                       (TVector<double,3> *)&local_110,(TVector<double,3> *)&local_128);
    bVar6 = bVar6 || bVar8;
  }
LAB_143b4fb15:
  return (bool)(bVar6 ^ 1);
}

