// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 12

// operator() @ 14a193090

void __thiscall `FRigVMMathLibrary::ClampSpatially'::__l2::<lambda_3>::operator()(void *this)

{
  float fVar1;
  double dVar2;
  double *pdVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  double dVar12;
  double dVar13;
  
  pdVar3 = *(double **)((longlong)this + 8);
  if (*(int *)((longlong)this + 0x10) == 1) {
    dVar2 = pdVar3[1];
    dVar12 = pdVar3[2];
    if ((__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
       (__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
      auVar5._0_8_ = dVar2 * dVar2;
      auVar5._8_8_ = 0;
      auVar10._0_8_ = dVar12 * dVar12 + auVar5._0_8_;
      auVar10._8_8_ = 0;
      auVar5 = sqrtpd(auVar5,auVar10);
      fVar7 = **(float **)((longlong)this + 0x18);
      fVar11 = (float)auVar5._0_8_;
      fVar1 = *(float *)((longlong)this + 0x14);
      if ((fVar7 <= fVar1) || (fVar7 < __real_322bcc77)) {
        fVar7 = fVar1;
        if (fVar1 <= fVar11) {
          fVar7 = fVar11;
        }
      }
      else {
        if (fVar11 <= fVar7) {
          fVar7 = fVar11;
        }
        if (fVar7 <= fVar1) {
          fVar7 = fVar1;
        }
      }
      dVar13 = __real_3ff0000000000000 / (double)fVar11;
      pdVar3[1] = (double)fVar7 * dVar2 * dVar13;
      *(double *)(*(longlong *)((longlong)this + 8) + 0x10) = (double)fVar7 * dVar12 * dVar13;
    }
  }
  else {
    dVar2 = *pdVar3;
    dVar12 = (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    if (*(int *)((longlong)this + 0x10) == 2) {
      dVar13 = pdVar3[2];
      if ((__real_3f1a36e2e0000000 < dVar12) ||
         (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
        auVar6._0_8_ = dVar2 * dVar2;
        auVar6._8_8_ = 0;
        auVar9._0_8_ = dVar13 * dVar13 + auVar6._0_8_;
        auVar9._8_8_ = 0;
        auVar5 = sqrtpd(auVar6,auVar9);
        fVar7 = **(float **)((longlong)this + 0x18);
        fVar11 = (float)auVar5._0_8_;
        fVar1 = *(float *)((longlong)this + 0x14);
        if ((fVar7 <= fVar1) || (fVar7 < __real_322bcc77)) {
          fVar7 = fVar1;
          if (fVar1 <= fVar11) {
            fVar7 = fVar11;
          }
        }
        else {
          if (fVar11 <= fVar7) {
            fVar7 = fVar11;
          }
          if (fVar7 <= fVar1) {
            fVar7 = fVar1;
          }
        }
        dVar12 = __real_3ff0000000000000 / (double)fVar11;
        *pdVar3 = (double)fVar7 * dVar2 * dVar12;
        *(double *)(*(longlong *)((longlong)this + 8) + 0x10) = (double)fVar7 * dVar13 * dVar12;
        return;
      }
    }
    else {
      dVar13 = pdVar3[1];
      if ((__real_3f1a36e2e0000000 < dVar12) ||
         (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
        auVar4._0_8_ = dVar2 * dVar2;
        auVar4._8_8_ = 0;
        auVar8._0_8_ = dVar13 * dVar13 + auVar4._0_8_;
        auVar8._8_8_ = 0;
        auVar5 = sqrtpd(auVar4,auVar8);
        fVar7 = **(float **)((longlong)this + 0x18);
        fVar11 = (float)auVar5._0_8_;
        fVar1 = *(float *)((longlong)this + 0x14);
        if ((fVar7 <= fVar1) || (fVar7 < __real_322bcc77)) {
          fVar7 = fVar1;
          if (fVar1 <= fVar11) {
            fVar7 = fVar11;
          }
        }
        else {
          if (fVar11 <= fVar7) {
            fVar7 = fVar11;
          }
          if (fVar7 <= fVar1) {
            fVar7 = fVar1;
          }
        }
        dVar12 = __real_3ff0000000000000 / (double)fVar11;
        *pdVar3 = (double)fVar7 * dVar2 * dVar12;
        *(double *)(*(longlong *)((longlong)this + 8) + 8) = (double)fVar7 * dVar13 * dVar12;
        return;
      }
    }
  }
  return;
}

// operator() @ 14a1932a0

void __thiscall `FRigVMMathLibrary::ClampSpatially'::__l2::<lambda_4>::operator()(void *this)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  double dVar10;
  float fVar11;
  
  pdVar5 = *(double **)((longlong)this + 8);
  dVar2 = *pdVar5;
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)pdVar5[1] >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(pdVar5[1],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (__real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)pdVar5[2] >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(pdVar5[2],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    auVar7._0_8_ = dVar2 * dVar2;
    auVar7._8_8_ = 0;
    dVar3 = pdVar5[2];
    dVar4 = pdVar5[1];
    fVar9 = **(float **)((longlong)this + 0x18);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar4 * dVar4 + auVar7._0_8_ + dVar3 * dVar3;
    auVar8 = sqrtpd(auVar7,auVar8);
    fVar11 = (float)auVar8._0_8_;
    fVar1 = *(float *)((longlong)this + 0x10);
    if ((fVar9 <= fVar1) || (fVar9 < __real_322bcc77)) {
      fVar9 = fVar1;
      if (fVar1 <= fVar11) {
        fVar9 = fVar11;
      }
    }
    else {
      if (fVar11 <= fVar9) {
        fVar9 = fVar11;
      }
      if (fVar9 <= fVar1) {
        fVar9 = fVar1;
      }
    }
    dVar10 = (double)fVar9;
    dVar6 = __real_3ff0000000000000 / (double)fVar11;
    *pdVar5 = dVar10 * dVar2 * dVar6;
    pdVar5[1] = dVar10 * dVar4 * dVar6;
    pdVar5[2] = dVar10 * dVar3 * dVar6;
  }
  return;
}

// AngleBetween @ 14a194270

float __cdecl FRigVMMathLibrary::AngleBetween(TVector<double> *param_1,TVector<double> *param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar7;
  
  dVar6 = (param_1->field0_0x0)._s_0.X;
  if ((((__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
       (uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8),
       __real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
      (uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10),
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) &&
     (((dVar7 = (param_2->field0_0x0)._s_0.X,
       __real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ||
       (uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8),
       __real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
      (uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10),
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))))) {
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    dVar3 = (param_2->field0_0x0)._s_0.Y;
    dVar4 = (param_2->field0_0x0)._s_0.Z;
    dVar5 = (param_1->field0_0x0)._s_0.Z;
    auVar8._0_8_ = dVar6 * dVar7;
    auVar8._8_8_ = 0;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (dVar2 * dVar2 + dVar6 * dVar6 + dVar5 * dVar5) *
                   (dVar3 * dVar3 + dVar7 * dVar7 + dVar4 * dVar4);
    auVar9 = sqrtpd(auVar8,auVar9);
    dVar6 = (dVar3 * dVar2 + auVar8._0_8_ + dVar4 * dVar5) / auVar9._0_8_;
    dVar7 = __real_bff0000000000000;
    if ((__real_bff0000000000000 <= dVar6) && (dVar7 = dVar6, __real_3ff0000000000000 <= dVar6)) {
      dVar7 = __real_3ff0000000000000;
    }
    dVar6 = acos(dVar7);
    return (float)dVar6;
  }
  return 0.0;
}

// ChooseBetterEulerAngleForAxisFilter @ 14a1949b0

TVector<double> * __cdecl
FRigVMMathLibrary::ChooseBetterEulerAngleForAxisFilter
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar6 = (param_3->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar2 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar4 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  dVar1 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_3->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar5 = (param_3->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  if ((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
      UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y +
      (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
      UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X +
      (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
      UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z <
      (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
      UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y +
      (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
      UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X +
      (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
      UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z) {
    param_3 = param_2;
  }
  return param_3;
}

// ClampSpatially @ 14a194a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __cdecl
FRigVMMathLibrary::ClampSpatially
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,Type param_2,
          Type param_3,float param_4,float param_5,TTransform<double> *param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  uint uVar8;
  uint uVar9;
  TTransform<double> *pTVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  undefined1 auVar34 [16];
  double dVar37;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  uint uVar43;
  double dVar44;
  uint uVar47;
  double dVar48;
  undefined4 uVar49;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined4 uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar56;
  double dVar57;
  undefined1 auVar58 [16];
  double dVar63;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auStack_228 [32];
  undefined1 local_208 [16];
  double local_1f8;
  undefined1 local_1e8 [8];
  undefined1 *local_1e0;
  Type local_1d8;
  float local_1d4;
  float *local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [8];
  undefined1 *local_1b0;
  float local_1a8;
  float *local_1a0;
  double local_188;
  TTransform<double> local_178;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  pTVar10 = param_6;
  uVar9 = _UNK_15061cc8c;
  uVar8 = _UNK_15061cc88;
  uVar47 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar43 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_228;
  dVar14 = (param_1->field0_0x0)._s_0.Z - (param_6->Translation).ZW.m128d_f64[0];
  dVar27 = (param_1->field0_0x0)._s_0.X - (param_6->Translation).XY.m128d_f64[0];
  dVar4 = (param_1->field0_0x0)._s_0.Y - (param_6->Translation).XY.m128d_f64[1];
  uVar50 = (undefined4)((ulonglong)dVar4 >> 0x20);
  dVar44 = (param_6->Rotation).XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar48 = (param_6->Rotation).XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar69._8_4_ = SUB84(dVar4,0);
  auVar69._0_8_ = dVar27;
  auVar69._12_4_ = uVar50;
  dVar26 = (param_6->Rotation).ZW.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar57 = (param_6->Rotation).ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar34._8_4_ = SUB84(dVar48,0);
  auVar34._0_8_ = dVar44;
  uVar49 = (undefined4)((ulonglong)dVar48 >> 0x20);
  auVar34._12_4_ = uVar49;
  auVar38._8_4_ = SUB84(dVar48,0);
  auVar38._0_8_ = dVar44;
  auVar38._12_4_ = uVar49;
  dVar37 = auVar34._8_8_;
  auVar15._8_4_ = SUB84(dVar26,0);
  auVar15._0_8_ = dVar37;
  auVar15._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
  auVar29._8_4_ = SUB84(dVar57,0);
  auVar29._0_8_ = dVar26;
  auVar29._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
  auVar39 = blendpd(auVar38,auVar29,2);
  auVar70._0_8_ = auVar69._8_8_ * dVar44 - dVar37 * dVar27;
  auVar70._8_8_ = dVar14 * dVar48 - auVar15._8_8_ * dVar4;
  auVar28._8_4_ = SUB84(dVar4,0);
  auVar28._0_8_ = dVar27;
  auVar28._12_4_ = uVar50;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = dVar14;
  auVar29 = blendpd(auVar28,auVar36,2);
  auVar58._8_4_ = SUB84(auVar70._8_8_,0);
  auVar58._0_8_ = auVar70._0_8_;
  auVar58._12_4_ = (int)((ulonglong)auVar70._8_8_ >> 0x20);
  auVar30._0_8_ = auVar29._0_8_ * dVar26 - auVar39._0_8_ * dVar14;
  auVar30._8_8_ = auVar29._8_8_ * dVar57 - auVar39._8_8_ * 0.0;
  dVar56 = auVar58._8_8_ + auVar58._8_8_;
  dVar63 = auVar30._0_8_ + auVar30._0_8_;
  auVar29 = blendpd(auVar70,auVar30,2);
  uVar49 = SUB84(dVar63,0);
  auVar64._8_4_ = uVar49;
  auVar64._0_8_ = dVar56;
  uVar50 = (undefined4)((ulonglong)dVar63 >> 0x20);
  auVar64._12_4_ = uVar50;
  auVar16._8_4_ = uVar49;
  auVar16._0_8_ = dVar56;
  auVar16._12_4_ = uVar50;
  auVar51._8_4_ = uVar49;
  auVar51._0_8_ = dVar56;
  auVar51._12_4_ = uVar50;
  auVar71._0_8_ = auVar29._0_8_ + auVar29._0_8_;
  auVar71._8_8_ = auVar29._8_8_ + auVar29._8_8_;
  auVar29 = blendpd(auVar51,auVar71,2);
  auVar65._0_8_ = auVar64._8_8_ * dVar44 - dVar56 * dVar37;
  auVar65._8_8_ = auVar71._0_8_ * dVar48 - auVar16._8_8_ * dVar26;
  auVar17._8_4_ = SUB84(auVar71._8_8_,0);
  auVar17._0_8_ = auVar71._0_8_;
  auVar17._12_4_ = (int)((ulonglong)auVar71._8_8_ >> 0x20);
  auVar52._0_8_ = auVar29._0_8_ * dVar26 - auVar71._0_8_ * auVar39._0_8_;
  auVar52._8_8_ = auVar29._8_8_ * dVar57 - auVar17._8_8_ * auVar39._8_8_;
  auVar29 = *(undefined1 (*) [16])(param_6->Scale3D).ZW.m128d_f64;
  lVar11 = -(ulonglong)
            ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar29._4_4_,
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar29._0_4_) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar39 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                  *(undefined1 (*) [16])(param_6->Scale3D).XY.m128d_f64);
  local_1c8 = 0;
  uStack_1c0 = 0;
  lVar12 = -(ulonglong)
            ((double)CONCAT44(*(uint *)((longlong)(param_6->Scale3D).XY.m128d_f64 + 4) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              *(uint *)(param_6->Scale3D).XY.m128d_f64 &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar13 = -(ulonglong)
            ((double)CONCAT44(*(uint *)((longlong)(param_6->Scale3D).XY.m128d_f64 + 0xc) &
                              _UNK_15061cc8c,
                              *(uint *)((param_6->Scale3D).XY.m128d_f64 + 1) & _UNK_15061cc88) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar18._8_4_ = SUB84(auVar65._8_8_,0);
  auVar18._0_8_ = auVar65._0_8_;
  auVar18._12_4_ = (int)((ulonglong)auVar65._8_8_ >> 0x20);
  local_208._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar12 >> 0x20) & auVar39._4_4_,
                        ~(uint)lVar12 & auVar39._0_4_) * (dVar56 * dVar57 + dVar27 + auVar18._8_8_);
  local_208._8_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar13 >> 0x20) & auVar39._12_4_,
                        ~(uint)lVar13 & auVar39._8_4_) * (dVar63 * dVar57 + dVar4 + auVar52._0_8_);
  auVar39._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar39._0_8_ = auVar29._0_8_;
  auVar39._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar39);
  auVar5._8_4_ = (int)local_208._8_8_;
  auVar5._0_8_ = local_208._0_8_;
  auVar5._12_4_ = (int)((ulonglong)local_208._8_8_ >> 0x20);
  local_1e0 = local_208;
  local_1d0 = &param_5;
  local_1b0 = local_208;
  local_1a0 = &param_5;
  local_1d4 = param_4;
  local_1a8 = param_4;
  auVar39 = blendpd(auVar65,auVar52,2);
  local_1f8 = (double)CONCAT44(~(uint)((ulonglong)lVar11 >> 0x20) & auVar29._4_4_,
                               ~(uint)lVar11 & auVar29._0_4_) *
              (auVar71._0_8_ * dVar57 + dVar14 + auVar39._0_8_);
  if (param_3 == Plane) {
    if (param_2 == X) {
      fVar33 = (float)(double)local_208._0_8_;
      if (((param_4 < param_5) && (__real_322bcc77 <= param_5)) && (param_5 <= fVar33)) {
        fVar33 = param_5;
      }
      local_208._8_8_ = auVar5._8_8_;
      if (fVar33 <= param_4) {
        fVar33 = param_4;
      }
      local_208._0_8_ = (undefined8)fVar33;
    }
    else if (param_2 == Y) {
      fVar33 = (float)(double)local_208._8_8_;
      if (((param_4 < param_5) && (__real_322bcc77 <= param_5)) && (param_5 <= fVar33)) {
        fVar33 = param_5;
      }
      if (fVar33 <= param_4) {
        fVar33 = param_4;
      }
      local_208._8_8_ = (undefined8)fVar33;
    }
    else {
      fVar33 = (float)local_1f8;
      if (((param_4 < param_5) && (__real_322bcc77 <= param_5)) && (param_5 <= fVar33)) {
        fVar33 = param_5;
      }
      if (fVar33 <= param_4) {
        fVar33 = param_4;
      }
      local_1f8 = (double)fVar33;
    }
    goto LAB_14a195107;
  }
  local_208 = auVar5;
  local_1d8 = param_2;
  if (param_3 == Cylinder) {
LAB_14a194dd6:
    `FRigVMMathLibrary::ClampSpatially'::__l2::<lambda_3>::operator()(local_1e8);
  }
  else {
    if ((param_3 != Sphere) && (param_3 == Capsule)) {
      fVar33 = param_4 + param_4;
      if (fVar33 <= param_5) {
        if (fVar33 <= param_5) {
          fVar33 = param_5;
        }
        local_188 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
        auVar29 = UE::Math::TVector<double>::XAxisVector.field0_0x0._0_16_;
        if ((param_2 != X) &&
           (auVar29 = UE::Math::TVector<double>::YAxisVector.field0_0x0._0_16_,
           local_188 = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z, param_2 != Y)) {
          auVar29 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._0_16_;
          local_188 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
        }
        auVar7._4_8_ = auVar52._8_8_;
        auVar7._0_4_ = auVar29._4_4_;
        auVar53._0_8_ = auVar7._0_8_ << 0x20;
        auVar53._8_4_ = auVar29._8_4_;
        auVar53._12_4_ = auVar29._12_4_;
        local_118.Translation.ZW.m128d_f64[0] = (double)(fVar33 * __real_3f000000 - param_4);
        dVar26 = (double)local_208._8_8_ * auVar53._8_8_ + (double)local_208._0_8_ * auVar29._0_8_ +
                 local_1f8 * local_188;
        if (local_118.Translation.ZW.m128d_f64[0] <=
            (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar26,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
          dVar57 = __real_3ff0000000000000;
          if ((dVar26 <= 0.0) && (dVar57 = __real_bff0000000000000, 0.0 <= dVar26)) {
            dVar57 = 0.0;
          }
          uVar49 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          uVar50 = (undefined4)
                   ((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_178.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_178.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_118.Translation.XY.m128d_f64[0] =
               dVar57 * auVar29._0_8_ * local_118.Translation.ZW.m128d_f64[0];
          local_118.Translation.XY.m128d_f64[1] =
               dVar57 * auVar53._8_8_ * local_118.Translation.ZW.m128d_f64[0];
          local_118.Translation.ZW.m128d_f64[0] =
               dVar57 * local_188 * local_118.Translation.ZW.m128d_f64[0];
          local_118.Rotation.XY.m128d_f64[1]._0_4_ = uVar49;
          local_118.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_118.Rotation.XY.m128d_f64[1]._4_4_ = uVar50;
          local_178.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_178.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_178.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_178.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          local_118.Translation.ZW.m128d_f64[1] = 0.0;
          local_178.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_178.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_178.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_178.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_178.Rotation.XY.m128d_f64[1]._0_4_ = uVar49;
          local_178.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_178.Rotation.XY.m128d_f64[1]._4_4_ = uVar50;
          local_118.Rotation.ZW.m128d_f64[0] = local_178.Rotation.ZW.m128d_f64[0];
          local_118.Rotation.ZW.m128d_f64[1] = local_178.Rotation.ZW.m128d_f64[1];
          local_118.Scale3D.XY.m128d_f64[0] = local_178.Scale3D.XY.m128d_f64[0];
          local_118.Scale3D.XY.m128d_f64[1] = local_178.Scale3D.XY.m128d_f64[1];
          local_118.Scale3D.ZW.m128d_f64[0] = local_178.Scale3D.ZW.m128d_f64[0];
          local_118.Scale3D.ZW.m128d_f64[1] = local_178.Scale3D.ZW.m128d_f64[1];
          UE::Math::TTransform<double>::Multiply(&local_178,&local_118,param_6);
          dVar4 = (param_1->field0_0x0)._s_0.X;
          dVar14 = (param_1->field0_0x0)._s_0.Y;
          (pTVar10->Rotation).XY.m128d_f64[0] = local_178.Rotation.XY.m128d_f64[0];
          (pTVar10->Rotation).XY.m128d_f64[1] = local_178.Rotation.XY.m128d_f64[1];
          (pTVar10->Rotation).ZW.m128d_f64[0] = local_178.Rotation.ZW.m128d_f64[0];
          (pTVar10->Rotation).ZW.m128d_f64[1] = local_178.Rotation.ZW.m128d_f64[1];
          (pTVar10->Translation).XY.m128d_f64[0] = local_178.Translation.XY.m128d_f64[0];
          (pTVar10->Translation).XY.m128d_f64[1] = local_178.Translation.XY.m128d_f64[1];
          (pTVar10->Translation).ZW.m128d_f64[0] = local_178.Translation.ZW.m128d_f64[0];
          (pTVar10->Translation).ZW.m128d_f64[1] = local_178.Translation.ZW.m128d_f64[1];
          (pTVar10->Scale3D).XY.m128d_f64[0] = local_178.Scale3D.XY.m128d_f64[0];
          (pTVar10->Scale3D).XY.m128d_f64[1] = local_178.Scale3D.XY.m128d_f64[1];
          dVar26 = (param_1->field0_0x0)._s_0.Z;
          (pTVar10->Scale3D).ZW.m128d_f64[0] = local_178.Scale3D.ZW.m128d_f64[0];
          (pTVar10->Scale3D).ZW.m128d_f64[1] = local_178.Scale3D.ZW.m128d_f64[1];
          dVar26 = dVar26 - (pTVar10->Translation).ZW.m128d_f64[0];
          dVar4 = dVar4 - (pTVar10->Translation).XY.m128d_f64[0];
          dVar14 = dVar14 - (pTVar10->Translation).XY.m128d_f64[1];
          uVar50 = (undefined4)((ulonglong)dVar14 >> 0x20);
          dVar44 = (pTVar10->Rotation).XY.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar48 = (pTVar10->Rotation).XY.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          auVar72._8_4_ = SUB84(dVar14,0);
          auVar72._0_8_ = dVar4;
          auVar72._12_4_ = uVar50;
          dVar57 = (pTVar10->Rotation).ZW.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar27 = (pTVar10->Rotation).ZW.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          auVar35._8_4_ = SUB84(dVar48,0);
          auVar35._0_8_ = dVar44;
          uVar49 = (undefined4)((ulonglong)dVar48 >> 0x20);
          auVar35._12_4_ = uVar49;
          dVar37 = auVar35._8_8_;
          auVar40._8_4_ = SUB84(dVar48,0);
          auVar40._0_8_ = dVar44;
          auVar40._12_4_ = uVar49;
          auVar19._8_4_ = SUB84(dVar57,0);
          auVar19._0_8_ = dVar37;
          auVar19._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
          auVar31._8_4_ = SUB84(dVar14,0);
          auVar31._0_8_ = dVar4;
          auVar31._12_4_ = uVar50;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = dVar26;
          auVar29 = blendpd(auVar31,auVar6,2);
          auVar2._8_4_ = SUB84(dVar27,0);
          auVar2._0_8_ = dVar57;
          auVar2._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
          auVar39 = blendpd(auVar40,auVar2,2);
          auVar73._0_8_ = auVar72._8_8_ * dVar44 - dVar37 * dVar4;
          auVar73._8_8_ = dVar26 * dVar48 - auVar19._8_8_ * dVar14;
          auVar59._8_4_ = SUB84(auVar73._8_8_,0);
          auVar59._0_8_ = auVar73._0_8_;
          auVar59._12_4_ = (int)((ulonglong)auVar73._8_8_ >> 0x20);
          auVar32._0_8_ = auVar29._0_8_ * dVar57 - auVar39._0_8_ * dVar26;
          auVar32._8_8_ = auVar29._8_8_ * dVar27 - auVar39._8_8_ * 0.0;
          auVar29 = blendpd(auVar73,auVar32,2);
          dVar56 = auVar59._8_8_ + auVar59._8_8_;
          dVar63 = auVar32._0_8_ + auVar32._0_8_;
          auVar74._0_8_ = auVar29._0_8_ + auVar29._0_8_;
          auVar74._8_8_ = auVar29._8_8_ + auVar29._8_8_;
          uVar49 = SUB84(dVar63,0);
          auVar66._8_4_ = uVar49;
          auVar66._0_8_ = dVar56;
          uVar50 = (undefined4)((ulonglong)dVar63 >> 0x20);
          auVar66._12_4_ = uVar50;
          auVar20._8_4_ = uVar49;
          auVar20._0_8_ = dVar56;
          auVar20._12_4_ = uVar50;
          auVar54._8_4_ = uVar49;
          auVar54._0_8_ = dVar56;
          auVar54._12_4_ = uVar50;
          auVar29 = blendpd(auVar54,auVar74,2);
          auVar67._0_8_ = auVar66._8_8_ * dVar44 - dVar56 * dVar37;
          auVar67._8_8_ = auVar74._0_8_ * dVar48 - auVar20._8_8_ * dVar57;
          auVar21._8_4_ = SUB84(auVar74._8_8_,0);
          auVar21._0_8_ = auVar74._0_8_;
          auVar21._12_4_ = (int)((ulonglong)auVar74._8_8_ >> 0x20);
          auVar75._0_8_ =
               (double)CONCAT44(uVar47 & *(uint *)((longlong)(pTVar10->Scale3D).XY.m128d_f64 + 4),
                                uVar43 & *(uint *)(pTVar10->Scale3D).XY.m128d_f64);
          auVar75._8_4_ = uVar8 & *(uint *)((pTVar10->Scale3D).XY.m128d_f64 + 1);
          auVar75._12_4_ = uVar9 & *(uint *)((longlong)(pTVar10->Scale3D).XY.m128d_f64 + 0xc);
          auVar55._0_8_ = auVar29._0_8_ * dVar57 - auVar74._0_8_ * auVar39._0_8_;
          auVar55._8_8_ = auVar29._8_8_ * dVar27 - auVar21._8_8_ * auVar39._8_8_;
          auVar29 = *(undefined1 (*) [16])(pTVar10->Scale3D).ZW.m128d_f64;
          lVar11 = -(ulonglong)
                    ((double)CONCAT44(uVar47 & auVar29._4_4_,uVar43 & auVar29._0_4_) <=
                    (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
          auVar39 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                          *(undefined1 (*) [16])(pTVar10->Scale3D).XY.m128d_f64);
          lVar12 = -(ulonglong)
                    (auVar75._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
          lVar13 = -(ulonglong)
                    (auVar75._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
          auVar22._8_4_ = SUB84(auVar67._8_8_,0);
          auVar22._0_8_ = auVar67._0_8_;
          auVar22._12_4_ = (int)((ulonglong)auVar67._8_8_ >> 0x20);
          auVar76._0_8_ =
               (double)CONCAT44(~(uint)((ulonglong)lVar12 >> 0x20) & auVar39._4_4_,
                                ~(uint)lVar12 & auVar39._0_4_);
          auVar76._8_4_ = ~(uint)lVar13 & auVar39._8_4_;
          auVar76._12_4_ = ~(uint)((ulonglong)lVar13 >> 0x20) & auVar39._12_4_;
          uVar43 = (uint)lVar11;
          uVar47 = (uint)((ulonglong)lVar11 >> 0x20);
          auVar3._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
          auVar3._0_8_ = auVar29._0_8_;
          auVar3._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
          auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar3);
          auVar39 = blendpd(auVar67,auVar55,2);
          local_208._0_8_ = auVar76._0_8_ * (dVar56 * dVar27 + dVar4 + auVar22._8_8_);
          local_208._8_8_ = auVar76._8_8_ * (dVar63 * dVar27 + dVar14 + auVar55._0_8_);
          local_1f8 = (double)(CONCAT44(~uVar47 & auVar29._4_4_,~uVar43 & auVar29._0_4_) |
                              CONCAT44(local_1c8._4_4_ & uVar47,(uint)local_1c8 & uVar43)) *
                      (auVar74._0_8_ * dVar27 + dVar26 + auVar39._0_8_);
          `FRigVMMathLibrary::ClampSpatially'::__l2::<lambda_4>::operator()(local_1b8);
          goto LAB_14a195107;
        }
        param_5 = 0.0;
        goto LAB_14a194dd6;
      }
      param_5 = 0.0;
    }
    `FRigVMMathLibrary::ClampSpatially'::__l2::<lambda_4>::operator()(local_1b8);
  }
LAB_14a195107:
  auVar29 = *(undefined1 (*) [16])(pTVar10->Rotation).ZW.m128d_f64;
  dVar27 = auVar29._0_8_;
  local_208._0_8_ = (double)local_208._0_8_ * (pTVar10->Scale3D).XY.m128d_f64[0];
  local_208._8_8_ = (double)local_208._8_8_ * (pTVar10->Scale3D).XY.m128d_f64[1];
  uVar49 = (undefined4)((ulonglong)local_208._8_8_ >> 0x20);
  auVar39 = *(undefined1 (*) [16])(pTVar10->Rotation).XY.m128d_f64;
  auVar68._0_8_ = local_1f8 * (pTVar10->Scale3D).ZW.m128d_f64[0];
  auVar68._8_8_ = (pTVar10->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar4 = (pTVar10->Rotation).ZW.m128d_f64[1];
  auVar60._8_4_ = (int)local_208._8_8_;
  auVar60._0_8_ = local_208._0_8_;
  auVar60._12_4_ = uVar49;
  auVar36 = blendpd(auVar39,auVar29,2);
  auVar61._0_8_ = auVar60._8_8_ * auVar39._0_8_ - auVar39._8_8_ * (double)local_208._0_8_;
  auVar61._8_8_ = auVar68._0_8_ * auVar39._8_8_ - dVar27 * (double)local_208._8_8_;
  auVar23._8_4_ = (int)local_208._8_8_;
  auVar23._0_8_ = local_208._0_8_;
  auVar23._12_4_ = uVar49;
  auVar39 = blendpd(auVar23,auVar68,2);
  auVar24._0_8_ = auVar39._0_8_ * dVar27 - auVar36._0_8_ * auVar68._0_8_;
  auVar24._8_8_ = auVar39._8_8_ * auVar29._8_8_ - auVar36._8_8_ * auVar68._8_8_;
  auVar39 = *(undefined1 (*) [16])(pTVar10->Rotation).XY.m128d_f64;
  auVar36 = blendpd(auVar61,auVar24,2);
  dVar57 = auVar61._8_8_ + auVar61._8_8_;
  dVar26 = auVar24._0_8_ + auVar24._0_8_;
  uVar49 = (undefined4)((ulonglong)dVar26 >> 0x20);
  auVar62._0_8_ = auVar36._0_8_ + auVar36._0_8_;
  auVar62._8_8_ = auVar36._8_8_ + auVar36._8_8_;
  auVar45._8_4_ = SUB84(dVar26,0);
  auVar45._0_8_ = dVar57;
  auVar45._12_4_ = uVar49;
  auVar41._8_4_ = SUB84(dVar26,0);
  auVar41._0_8_ = dVar57;
  auVar41._12_4_ = uVar49;
  auVar36 = blendpd(auVar41,auVar62,2);
  auVar46._0_8_ = auVar45._8_8_ * auVar39._0_8_ - auVar39._8_8_ * dVar57;
  auVar46._8_8_ = auVar62._0_8_ * auVar39._8_8_ - dVar27 * dVar26;
  auVar25._8_4_ = SUB84(auVar46._8_8_,0);
  auVar25._0_8_ = auVar46._0_8_;
  auVar25._12_4_ = (int)((ulonglong)auVar46._8_8_ >> 0x20);
  auVar39 = blendpd(auVar39,auVar29,2);
  auVar42._0_8_ = auVar36._0_8_ * dVar27 - auVar39._0_8_ * auVar62._0_8_;
  auVar42._8_8_ = auVar36._8_8_ * auVar29._8_8_ - auVar39._8_8_ * auVar62._8_8_;
  auVar29 = blendpd(auVar46,auVar42,2);
  dVar27 = dVar26 * dVar4 + (double)local_208._8_8_ + auVar42._0_8_ +
           (pTVar10->Translation).XY.m128d_f64[1];
  dVar26 = (pTVar10->Translation).ZW.m128d_f64[0];
  auVar1._8_4_ = SUB84(dVar27,0);
  auVar1._0_8_ = dVar57 * dVar4 + (double)local_208._0_8_ + auVar25._8_8_ +
                 (pTVar10->Translation).XY.m128d_f64[0];
  auVar1._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       auVar62._0_8_ * dVar4 + auVar68._0_8_ + auVar29._0_8_ + dVar26;
  return __return_storage_ptr__;
}

// EaseFloat @ 14a1963f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl FRigVMMathLibrary::EaseFloat(float param_1,ERigVMAnimEasingType param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = __real_3f000000;
  fVar4 = __real_3f800000;
  fVar2 = param_1;
  switch(param_2) {
  case QuadraticEaseIn:
    param_1 = param_1 * param_1;
    break;
  case QuadraticEaseOut:
    param_1 = param_1 * (__real_40000000 - param_1);
    break;
  case QuadraticEaseInOut:
    if (__real_3f000000 <= param_1) {
      param_1 = (__real_40800000 - (param_1 + param_1)) * param_1 - __real_3f800000;
    }
    else {
      param_1 = (param_1 + param_1) * param_1;
    }
    break;
  case CubicEaseIn:
    param_1 = param_1 * param_1 * param_1;
    break;
  case CubicEaseOut:
    fVar4 = param_1 - __real_3f800000;
    param_1 = fVar4 * fVar4 * fVar4 + __real_3f800000;
    break;
  case CubicEaseInOut:
    if (__real_3f000000 <= param_1) {
      fVar1 = (param_1 + param_1) - __real_40000000;
      fVar2 = fVar1 * param_1;
      fVar4 = fVar2 - (((param_1 - __real_3f800000) + param_1) - __real_3f800000);
      param_1 = (fVar2 * fVar1 - (fVar4 + fVar4)) + __real_3f800000;
    }
    else {
      param_1 = param_1 * param_1 * param_1 * __real_40800000;
    }
    break;
  case QuarticEaseOut:
    fVar4 = param_1 - __real_3f800000;
    param_1 = (__real_3f800000 - param_1) * fVar4 * fVar4 * fVar4 + __real_3f800000;
    break;
  case QuarticEaseInOut:
    if (__real_3f000000 <= param_1) {
      fVar4 = param_1 - __real_3f800000;
      param_1 = __real_3f800000 - fVar4 * fVar4 * fVar4 * fVar4 * __real_41000000;
    }
    else {
      param_1 = param_1 * param_1 * param_1 * param_1 * __real_41000000;
    }
    break;
  case QuinticEaseIn:
    fVar2 = param_1 * param_1;
  case QuarticEaseIn:
    param_1 = fVar2 * param_1 * param_1 * param_1;
    break;
  case QuinticEaseOut:
    fVar4 = param_1 - __real_3f800000;
    param_1 = fVar4 * fVar4 * fVar4 * fVar4 * fVar4 + __real_3f800000;
    break;
  case QuinticEaseInOut:
    if (__real_3f000000 <= param_1) {
      fVar2 = (param_1 + param_1) - __real_40000000;
      fVar1 = fVar2 * param_1 * fVar2;
      fVar4 = fVar2 * param_1 - (((param_1 - __real_3f800000) + param_1) - __real_3f800000);
      fVar3 = fVar1 * fVar2;
      fVar1 = fVar1 - (fVar4 + fVar4);
      fVar4 = fVar3 - (fVar1 + fVar1);
      param_1 = (fVar3 * fVar2 - (fVar4 + fVar4)) + __real_3f800000;
    }
    else {
      param_1 = param_1 * param_1 * param_1 * param_1 * __real_41800000 * param_1;
    }
    break;
  case SineEaseIn:
    fVar4 = sinf((param_1 - __real_3f800000) * __real_3fc90fdb);
    param_1 = fVar4 + __real_3f800000;
    break;
  case SineEaseOut:
    param_1 = sinf(param_1 * __real_3fc90fdb);
    break;
  case SineEaseInOut:
    fVar4 = cosf(param_1 * __real_40490fdb);
    param_1 = (__real_3f800000 - fVar4) * __real_3f000000;
    break;
  case CircularEaseIn:
    param_1 = __real_3f800000 - SQRT(__real_3f800000 - param_1 * param_1);
    break;
  case CircularEaseOut:
    param_1 = SQRT((__real_40000000 - param_1) * param_1);
    break;
  case CircularEaseInOut:
    if (__real_3f000000 <= param_1) {
      param_1 = (SQRT(((param_1 + param_1) - __real_40400000) *
                      (__real_3f800000 - (param_1 + param_1))) + __real_3f800000) * __real_3f000000;
    }
    else {
      param_1 = (__real_3f800000 - SQRT(__real_3f800000 - param_1 * param_1 * __real_40800000)) *
                __real_3f000000;
    }
    break;
  case ExponentialEaseIn:
    if (param_1 != 0.0) {
      param_1 = powf(__real_40000000,(param_1 - __real_3f800000) * __real_41200000);
    }
    break;
  case ExponentialEaseOut:
    if (param_1 != __real_3f800000) {
      fVar1 = powf(__real_40000000,param_1 * __real_c1200000);
      param_1 = fVar4 - fVar1;
    }
    break;
  case ExponentialEaseInOut:
    if ((param_1 != 0.0) && (param_1 != __real_3f800000)) {
      if (__real_3f000000 <= param_1) {
        fVar2 = powf(__real_40000000,__real_41200000 - param_1 * __real_41a00000);
        param_1 = fVar4 - fVar2 * fVar1;
      }
      else {
        fVar4 = powf(__real_40000000,param_1 * __real_41a00000 - __real_41200000);
        param_1 = fVar4 * fVar1;
      }
    }
    break;
  case ElasticEaseIn:
    fVar4 = powf(__real_40000000,(param_1 - __real_3f800000) * __real_41200000);
    fVar1 = sinf(param_1 * ___real_41a35ce2);
    param_1 = fVar4 * fVar1;
    break;
  case ElasticEaseOut:
    fVar4 = sinf(__real_c1a35ce2 - param_1 * ___real_41a35ce2);
    fVar1 = powf(__real_40000000,param_1 * __real_c1200000);
    param_1 = fVar4 * fVar1 + __real_3f800000;
    break;
  case ElasticEaseInOut:
    fVar2 = (param_1 + param_1) - __real_3f800000;
    if (__real_3f000000 <= param_1) {
      fVar3 = sinf(__real_c1a35ce2 - fVar2 * ___real_41a35ce2);
      fVar2 = powf(__real_40000000,fVar2 * __real_c1200000);
      param_1 = fVar3 * fVar2 * fVar1 + fVar4;
    }
    else {
      fVar4 = powf(__real_40000000,fVar2 * __real_41200000);
      fVar2 = sinf((param_1 + param_1) * ___real_41a35ce2);
      param_1 = fVar4 * fVar2 * fVar1;
    }
    break;
  case BackEaseIn:
    fVar4 = sinf(param_1 * __real_40490fdb);
    param_1 = param_1 * param_1 * param_1 - fVar4 * param_1;
    break;
  case BackEaseOut:
    fVar2 = __real_3f800000 - param_1;
    fVar1 = sinf(fVar2 * __real_40490fdb);
    param_1 = fVar4 - (fVar2 * fVar2 * fVar2 - fVar1 * fVar2);
    break;
  case BackEaseInOut:
    fVar2 = param_1 + param_1;
    if (__real_3f000000 <= param_1) {
      fVar3 = __real_3f800000 - (fVar2 - __real_3f800000);
      fVar2 = sinf(fVar3 * __real_40490fdb);
      param_1 = ((fVar4 - (fVar3 * fVar3 * fVar3 - fVar2 * fVar3)) + fVar4) * fVar1;
    }
    else {
      fVar4 = sinf(fVar2 * __real_40490fdb);
      param_1 = (fVar2 * fVar2 * fVar2 - fVar4 * fVar2) * fVar1;
    }
    break;
  case BounceEaseIn:
    fVar1 = BounceEaseOut(__real_3f800000 - param_1);
    param_1 = fVar4 - fVar1;
    break;
  case BounceEaseOut:
    param_1 = BounceEaseOut(param_1);
    break;
  case BounceEaseInOut:
    if (__real_3f000000 <= param_1) {
      fVar4 = BounceEaseOut((param_1 + param_1) - __real_3f800000);
      fVar4 = fVar4 + __real_3f800000;
    }
    else {
      fVar2 = BounceEaseOut(__real_3f800000 - (param_1 + param_1));
      fVar4 = fVar4 - fVar2;
    }
    param_1 = fVar4 * fVar1;
  }
  return param_1;
}

// FindQuatBetweenNormals @ 14a1a9d00

TQuat<double> * __cdecl
FRigVMMathLibrary::FindQuatBetweenNormals
          (TQuat<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 uVar18;
  double dVar19;
  undefined1 auVar20 [16];
  double dVar26;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  
  dVar12 = __real_3e45798ee0000000;
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar19 = (param_1->field0_0x0)._s_0.Z;
  dVar27 = (param_2->field0_0x0)._s_0.Z;
  auVar35._8_8_ = 0.0;
  auVar35._0_8_ = dVar27;
  dVar28 = (param_2->field0_0x0)._s_0.Y;
  dVar26 = (param_1->field0_0x0)._s_0.X;
  dVar33 = (param_1->field0_0x0)._s_0.Y;
  uVar42 = SUB84(__real_3ff0000000000000,0);
  uVar44 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  dVar36 = dVar26 * dVar1 + dVar33 * dVar28 + dVar19 * dVar27 + __real_3ff0000000000000;
  if (__real_3e45798ee0000000 <= dVar36) {
    __return_storage_ptr__->X = dVar33 * dVar27 - dVar28 * dVar19;
    __return_storage_ptr__->Y = dVar1 * dVar19 - dVar26 * dVar27;
    __return_storage_ptr__->Z = dVar28 * dVar26 - dVar33 * dVar1;
    __return_storage_ptr__->W = dVar36;
  }
  else {
    dVar39 = dVar28 * dVar19 - dVar33 * dVar27;
    dVar27 = dVar26 * dVar27 - dVar1 * dVar19;
    dVar36 = __real_4000000000000000 - dVar36;
    dVar28 = dVar33 * dVar1 - dVar28 * dVar26;
    auVar20._8_4_ = SUB84(dVar27,0);
    auVar20._0_8_ = dVar39;
    auVar20._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
    dVar19 = dVar39 * dVar39 + dVar28 * dVar28;
    dVar26 = auVar20._8_8_ * dVar27 + dVar36 * dVar36;
    dVar1 = dVar26 + dVar19;
    dVar19 = dVar19 + dVar26;
    auVar40._8_4_ = SUB84(dVar19,0);
    auVar40._0_8_ = dVar1;
    auVar40._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
    auVar35 = sqrtpd(auVar35,auVar40);
    uVar13 = -(ulonglong)(__real_3e45798ee0000000 <= dVar1);
    uVar14 = -(ulonglong)(__real_3e45798ee0000000 <= dVar19);
    auVar40 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar35);
    uVar15 = (uint)(uVar13 >> 0x20);
    uVar17 = (uint)(uVar14 >> 0x20);
    fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
    auVar41._0_8_ = uVar13 & (ulonglong)(auVar40._0_8_ * dVar39);
    uVar9 = uVar14 & (ulonglong)(auVar40._8_8_ * dVar27);
    auVar41._8_4_ = (undefined4)uVar9;
    auVar41._12_4_ = (undefined4)(uVar9 >> 0x20);
    auVar21._0_4_ = ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar21._4_4_ =
         ~uVar15 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar21._8_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar21._12_4_ =
         ~uVar17 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    auVar35 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar35);
    __return_storage_ptr__->X = (double)SUB168(auVar41 | auVar21,0);
    __return_storage_ptr__->Y = (double)SUB168(auVar41 | auVar21,8);
    auVar30._0_4_ = ~(uint)uVar13 & SUB84((double)fVar4,0);
    auVar30._4_4_ = ~uVar15 & (uint)((ulonglong)(double)fVar4 >> 0x20);
    auVar30._8_4_ = ~(uint)uVar14 & SUB84((double)fVar5,0);
    auVar30._12_4_ = ~uVar17 & (uint)((ulonglong)(double)fVar5 >> 0x20);
    auVar22._0_8_ = (ulonglong)(auVar35._0_8_ * dVar28) & uVar13;
    uVar14 = (ulonglong)(auVar35._8_8_ * dVar36) & uVar14;
    auVar22._8_4_ = (undefined4)uVar14;
    auVar22._12_4_ = (undefined4)(uVar14 >> 0x20);
    __return_storage_ptr__->Z = (double)SUB168(auVar30 | auVar22,0);
    __return_storage_ptr__->W = (double)SUB168(auVar30 | auVar22,8);
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    dVar19 = (param_1->field0_0x0)._s_0.X;
    uVar15 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar17 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    dVar27 = (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    if (dVar27 < (double)CONCAT44(uVar17,uVar15) || dVar27 == (double)CONCAT44(uVar17,uVar15)) {
      uVar43 = 0;
      uVar45 = 0;
      uVar16 = uVar42;
      uVar18 = uVar44;
    }
    else {
      uVar16 = 0;
      uVar18 = 0;
      uVar43 = uVar42;
      uVar45 = uVar44;
    }
    dVar27 = (param_1->field0_0x0)._s_0.Z;
    uVar2 = __return_storage_ptr__->X;
    uVar3 = __return_storage_ptr__->Y;
    dVar33 = (double)CONCAT44(uVar18,uVar16) * dVar27;
    dVar28 = (double)CONCAT44(uVar45,uVar43) * dVar27;
    dVar26 = (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              SUB84(dVar28,0) ^ (uint)__xmm_80000000000000008000000000000000);
    dVar28 = (double)CONCAT44(uVar45,uVar43) * dVar19 - (double)CONCAT44(uVar18,uVar16) * dVar1;
    dVar10 = __return_storage_ptr__->Z;
    dVar11 = __return_storage_ptr__->W;
    dVar29 = (dVar28 * dVar1 - dVar33 * dVar27) * __real_3feffffffffffff7;
    dVar37 = (dVar27 * dVar26 - dVar28 * dVar19) * __real_3feffffffffffff7;
    dVar34 = (dVar33 * dVar19 - dVar26 * dVar1) * __real_3feffffffffffff7;
    auVar31._8_4_ = (int)uVar2;
    auVar31._0_8_ = uVar2;
    auVar31._12_4_ = (int)((ulonglong)uVar2 >> 0x20);
    dVar1 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
    dVar28 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
    auVar23._8_4_ = SUB84(__real_be6777a5cf72cecc,0);
    auVar23._0_8_ = dVar34;
    auVar23._12_4_ = (int)((ulonglong)__real_be6777a5cf72cecc >> 0x20);
    dVar26 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
    dVar33 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
    auVar35._0_8_ = dVar34 * dVar11;
    auVar35._8_8_ = __real_be6777a5cf72cecc * dVar11;
    dVar19 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
    dVar36 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
    dVar8 = dVar10 * __real_be6777a5cf72cecc;
    dVar39 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar27 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    __return_storage_ptr__->X =
         (double)uVar2 * __real_be6777a5cf72cecc *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar29 * dVar11 +
         dVar34 * (double)uVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         dVar10 * dVar37 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    __return_storage_ptr__->Y =
         auVar31._8_8_ * dVar34 * dVar26 + dVar37 * dVar11 + auVar23._8_8_ * (double)uVar3 * dVar33
         + dVar10 * dVar29 * dVar39;
    __return_storage_ptr__->Z =
         (double)uVar2 * dVar37 * dVar1 + auVar35._0_8_ + dVar29 * (double)uVar3 * dVar19 +
         dVar8 * dVar27;
    __return_storage_ptr__->W =
         (double)uVar2 * dVar29 * dVar28 + auVar35._8_8_ + dVar37 * (double)uVar3 * dVar36 +
         dVar10 * dVar34 * dVar6;
  }
  dVar27 = __return_storage_ptr__->X;
  dVar28 = __return_storage_ptr__->Y;
  dVar26 = __return_storage_ptr__->Z;
  dVar33 = __return_storage_ptr__->W;
  dVar19 = dVar26 * dVar26 + dVar27 * dVar27;
  dVar36 = dVar33 * dVar33 + dVar28 * dVar28;
  dVar1 = dVar36 + dVar19;
  dVar19 = dVar19 + dVar36;
  auVar7._8_4_ = SUB84(dVar19,0);
  auVar7._0_8_ = dVar1;
  auVar7._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  auVar35 = sqrtpd(auVar35,auVar7);
  uVar13 = -(ulonglong)(dVar12 <= dVar1);
  uVar14 = -(ulonglong)(dVar12 <= dVar19);
  uVar15 = (uint)(uVar13 >> 0x20);
  uVar17 = (uint)(uVar14 >> 0x20);
  auVar40 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar35);
  auVar38._0_8_ = uVar13 & (ulonglong)(auVar40._0_8_ * dVar27);
  uVar9 = uVar14 & (ulonglong)(auVar40._8_8_ * dVar28);
  auVar38._8_4_ = (undefined4)uVar9;
  auVar38._12_4_ = (undefined4)(uVar9 >> 0x20);
  auVar24._0_4_ = ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar24._4_4_ =
       ~uVar15 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar24._8_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar24._12_4_ =
       ~uVar17 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar35 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar35);
  auVar32._0_4_ = ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar32._4_4_ =
       ~uVar15 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar32._8_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar32._12_4_ =
       ~uVar17 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar25._0_8_ = (ulonglong)(auVar35._0_8_ * dVar26) & uVar13;
  uVar14 = (ulonglong)(auVar35._8_8_ * dVar33) & uVar14;
  auVar25._8_4_ = (undefined4)uVar14;
  auVar25._12_4_ = (undefined4)(uVar14 >> 0x20);
  __return_storage_ptr__->X = (double)SUB168(auVar38 | auVar24,0);
  __return_storage_ptr__->Y = (double)SUB168(auVar38 | auVar24,8);
  __return_storage_ptr__->Z = (double)SUB168(auVar32 | auVar25,0);
  __return_storage_ptr__->W = (double)SUB168(auVar32 | auVar25,8);
  return __return_storage_ptr__;
}

// FindQuatBetweenVectors @ 14a1aa0a0

TQuat<double> * __cdecl
FRigVMMathLibrary::FindQuatBetweenVectors
          (TQuat<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_60 [3];
  
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar3 = (param_2->field0_0x0)._s_0.Z;
  dVar4 = dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
  if (dVar4 == __real_3ff0000000000000) {
    local_78._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_78._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_78._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  }
  else if (__real_3e45798ee0000000 <= dVar4) {
    dVar4 = __real_3ff0000000000000 / SQRT(dVar4);
    local_78._s_0.X = dVar1 * dVar4;
    local_78._s_0.Y = dVar2 * dVar4;
    local_78._s_0.Z = dVar3 * dVar4;
  }
  else {
    local_78._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_78._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_78._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  dVar4 = dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
  if (dVar4 == __real_3ff0000000000000) {
    local_60[0]._0_8_ = (param_1->field0_0x0)._s_0.X;
    local_60[0]._8_8_ = (param_1->field0_0x0)._s_0.Y;
    local_60[0]._16_8_ = (param_1->field0_0x0)._s_0.Z;
  }
  else if (__real_3e45798ee0000000 <= dVar4) {
    dVar4 = __real_3ff0000000000000 / SQRT(dVar4);
    local_60[0]._0_8_ = dVar4 * dVar1;
    local_60[0]._8_8_ = dVar4 * dVar2;
    local_60[0]._16_8_ = dVar4 * dVar3;
  }
  else {
    local_60[0]._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_60[0]._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_60[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  FindQuatBetweenNormals
            (__return_storage_ptr__,(TVector<double> *)&local_60[0]._s_0,
             (TVector<double> *)&local_78._s_0);
  return __return_storage_ptr__;
}

// FourPointBezier @ 14a1aa590

void __cdecl
FRigVMMathLibrary::FourPointBezier
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,float param_5,TVector<double> *param_6,TVector<double> *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar16 = (param_2->field0_0x0)._s_0.Y;
  dVar15 = (param_3->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  dVar10 = (double)param_5;
  dVar8 = (dVar15 - dVar1) * dVar10 + dVar1;
  dVar7 = (dVar1 - (param_1->field0_0x0)._s_0.X) * dVar10 + (param_1->field0_0x0)._s_0.X;
  dVar17 = (dVar16 - (param_1->field0_0x0)._s_0.Y) * dVar10 + (param_1->field0_0x0)._s_0.Y;
  dVar9 = ((param_3->field0_0x0)._s_0.Z - dVar2) * dVar10 + dVar2;
  dVar13 = (dVar2 - (param_1->field0_0x0)._s_0.Z) * dVar10 + (param_1->field0_0x0)._s_0.Z;
  dVar16 = ((param_3->field0_0x0)._s_0.Y - dVar16) * dVar10 + dVar16;
  dVar7 = (dVar8 - dVar7) * dVar10 + dVar7;
  dVar1 = (param_4->field0_0x0)._s_0.Z;
  dVar2 = (param_3->field0_0x0)._s_0.Z;
  dVar3 = (param_4->field0_0x0)._s_0.Y;
  dVar4 = (param_3->field0_0x0)._s_0.Y;
  dVar13 = (dVar9 - dVar13) * dVar10 + dVar13;
  dVar5 = (param_3->field0_0x0)._s_0.Z;
  dVar8 = (((((param_4->field0_0x0)._s_0.X - dVar15) * dVar10 + dVar15) - dVar8) * dVar10 + dVar8) -
          dVar7;
  dVar17 = (dVar16 - dVar17) * dVar10 + dVar17;
  dVar15 = (param_3->field0_0x0)._s_0.Y;
  (param_6->field0_0x0)._s_0.X = dVar8 * dVar10 + dVar7;
  dVar1 = ((((dVar1 - dVar2) * dVar10 + dVar5) - dVar9) * dVar10 + dVar9) - dVar13;
  dVar16 = ((((dVar3 - dVar4) * dVar10 + dVar15) - dVar16) * dVar10 + dVar16) - dVar17;
  (param_6->field0_0x0)._s_0.Y = dVar16 * dVar10 + dVar17;
  (param_6->field0_0x0)._s_0.Z = dVar1 * dVar10 + dVar13;
  dVar15 = dVar16 * dVar16 + dVar8 * dVar8 + dVar1 * dVar1;
  uVar14 = dVar1;
  uVar11 = dVar16;
  uVar12 = dVar8;
  if ((dVar15 != __real_3ff0000000000000) &&
     (uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     __real_3e45798ee0000000 <= dVar15)) {
    dVar15 = __real_3ff0000000000000 / SQRT(dVar15);
    uVar14 = dVar1 * dVar15;
    uVar11 = dVar16 * dVar15;
    uVar12 = dVar8 * dVar15;
  }
  auVar6._8_4_ = (int)uVar11;
  auVar6._0_8_ = uVar12;
  auVar6._12_4_ = (int)((ulonglong)uVar11 >> 0x20);
  *(undefined1 (*) [16])&param_7->field0_0x0 = auVar6;
  (param_7->field0_0x0)._s_0.Z = (double)uVar14;
  return;
}

// FourPointBezier @ 14a1aa7e0

void __cdecl
FRigVMMathLibrary::FourPointBezier
          (FRigVMFourPointBezier *param_1,float param_2,TVector<double> *param_3,
          TVector<double> *param_4)

{
  FourPointBezier(&param_1->A,&param_1->B,&param_1->C,&param_1->D,param_2,param_3,param_4);
  return;
}

// GetEquivalentEulerAngle @ 14a1ab650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __cdecl
FRigVMMathLibrary::GetEquivalentEulerAngle
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,
          EEulerRotationOrder *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = _UNK_1506896b8;
  dVar4 = ___xmm_40668000000000004066800000000000;
  dVar2 = __real_4066800000000000;
  switch(*param_2) {
  case XYZ:
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (param_1->field0_0x0)._s_0.X + __real_4066800000000000;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z + dVar2;
    goto LAB_14a1ab713;
  case XZY:
  case YZX:
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         __real_4066800000000000 - (param_1->field0_0x0)._s_0.Z;
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar4 + (param_1->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5 + dVar1;
    break;
  case YXZ:
    dVar5 = _UNK_1506896b8 + (param_1->field0_0x0)._s_0.Z;
    dVar4 = __real_4066800000000000 - (param_1->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         ___xmm_40668000000000004066800000000000 + (param_1->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar5;
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar4;
    break;
  case ZXY:
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         __real_4066800000000000 - (param_1->field0_0x0)._s_0.X;
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4 + (param_1->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar5 + dVar1;
    break;
  case ZYX:
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         (param_1->field0_0x0)._s_0.Z + __real_4066800000000000;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X + dVar2;
LAB_14a1ab713:
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 - (param_1->field0_0x0)._s_0.Y;
  }
  dVar3 = __real_c076800000000000;
  dVar1 = __real_c066800000000000;
  dVar5 = __real_4076800000000000;
  for (dVar4 = (__return_storage_ptr__->field0_0x0)._s_0.X; dVar2 < dVar4;
      dVar4 = dVar4 + __real_c076800000000000) {
  }
  for (; dVar4 < __real_c066800000000000; dVar4 = dVar4 + __real_4076800000000000) {
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar4;
  for (dVar4 = (__return_storage_ptr__->field0_0x0)._s_0.Y; dVar2 < dVar4; dVar4 = dVar4 + dVar3) {
  }
  for (; dVar4 < dVar1; dVar4 = dVar4 + dVar5) {
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  for (dVar4 = (__return_storage_ptr__->field0_0x0)._s_0.Z; dVar2 < dVar4; dVar4 = dVar4 + dVar3) {
  }
  for (; dVar4 < dVar1; dVar4 = dVar4 + dVar5) {
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar4;
  return __return_storage_ptr__;
}

// LerpTransform @ 14a1b0640

TTransform<double> * __cdecl
FRigVMMathLibrary::LerpTransform
          (TTransform<double> *__return_storage_ptr__,TTransform<double> *param_1,
          TTransform<double> *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  __m128d _Var8;
  __m128d _Var9;
  TQuat<double> *pTVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar17;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint uVar21;
  uint uVar22;
  TQuat<double> local_98;
  TQuat<double> local_78;
  TQuat<double> local_58 [2];
  
  _Var8.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  dVar1 = (param_2->Translation).XY.m128d_f64[0];
  dVar13 = (param_2->Translation).XY.m128d_f64[1];
  dVar4 = (param_2->Translation).ZW.m128d_f64[0];
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  _Var9 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 = _Var8.m128d_f64;
  _Var8 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 = _Var9.m128d_f64;
  dVar5 = (param_1->Translation).XY.m128d_f64[0];
  dVar6 = (param_1->Translation).XY.m128d_f64[1];
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = _Var8.m128d_f64;
  dVar7 = (param_1->Translation).ZW.m128d_f64[0];
  dVar2 = (double)param_3;
  auVar18._0_8_ = (dVar1 - dVar5) * dVar2 + dVar5;
  auVar18._8_8_ = (dVar13 - dVar6) * dVar2 + dVar6;
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar18;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (dVar4 - dVar7) * dVar2 + dVar7;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  local_98.X = (param_2->Rotation).XY.m128d_f64[0];
  local_98.Y = (param_2->Rotation).XY.m128d_f64[1];
  local_98.Z = (param_2->Rotation).ZW.m128d_f64[0];
  local_98.W = (param_2->Rotation).ZW.m128d_f64[1];
  local_78.X = (param_1->Rotation).XY.m128d_f64[0];
  local_78.Y = (param_1->Rotation).XY.m128d_f64[1];
  local_78.Z = (param_1->Rotation).ZW.m128d_f64[0];
  local_78.W = (param_1->Rotation).ZW.m128d_f64[1];
  pTVar10 = UE::Math::TQuat<double>::Slerp_NotNormalized(local_58,&local_78,&local_98,dVar2);
  dVar4 = pTVar10->X;
  dVar5 = pTVar10->Y;
  dVar6 = pTVar10->Z;
  dVar7 = pTVar10->W;
  dVar13 = dVar4 * dVar4 + dVar6 * dVar6;
  dVar17 = dVar5 * dVar5 + dVar7 * dVar7;
  dVar1 = dVar17 + dVar13;
  dVar13 = dVar13 + dVar17;
  auVar14._8_4_ = SUB84(dVar13,0);
  auVar14._0_8_ = dVar1;
  auVar14._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  auVar19 = sqrtpd(auVar18,auVar14);
  uVar11 = -(ulonglong)(__real_3e45798ee0000000 <= dVar1);
  uVar12 = -(ulonglong)(__real_3e45798ee0000000 <= dVar13);
  uVar21 = (uint)(uVar11 >> 0x20);
  uVar22 = (uint)(uVar12 >> 0x20);
  auVar14 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar19);
  auVar15._0_8_ = uVar11 & (ulonglong)(auVar14._0_8_ * dVar6);
  uVar3 = uVar12 & (ulonglong)(auVar14._8_8_ * dVar7);
  auVar15._8_4_ = (undefined4)uVar3;
  auVar15._12_4_ = (undefined4)(uVar3 >> 0x20);
  auVar20._0_4_ = ~(uint)uVar11 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar20._4_4_ =
       ~uVar21 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar20._8_4_ = ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar20._12_4_ =
       ~uVar22 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar14 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar19);
  auVar16._0_8_ = (ulonglong)(auVar14._0_8_ * dVar4) & uVar11;
  uVar3 = (ulonglong)(auVar14._8_8_ * dVar5) & uVar12;
  auVar16._8_4_ = (undefined4)uVar3;
  auVar16._12_4_ = (undefined4)(uVar3 >> 0x20);
  auVar19._4_4_ =
       ~uVar21 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar19._0_4_ = ~(uint)uVar11 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar19._8_4_ = ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar19._12_4_ =
       ~uVar22 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar16 | auVar19;
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar20 | auVar15;
  dVar1 = (param_2->Scale3D).XY.m128d_f64[1];
  dVar13 = (param_1->Scale3D).XY.m128d_f64[0];
  dVar4 = (param_1->Scale3D).XY.m128d_f64[1];
  dVar5 = (param_1->Scale3D).ZW.m128d_f64[0];
  dVar6 = (param_2->Scale3D).ZW.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
       ((param_2->Scale3D).XY.m128d_f64[0] - dVar13) * dVar2 + dVar13;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (dVar1 - dVar4) * dVar2 + dVar4;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (dVar6 - dVar5) * dVar2 + dVar5;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
  return __return_storage_ptr__;
}

