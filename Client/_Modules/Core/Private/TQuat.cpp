// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 160

// TQuat<float> @ 14179cc20

TQuat<float> * __thiscall UE::Math::TQuat<float>::TQuat<float>(TQuat<float> *this,__m128 *param_1)

{
  ulong64 uVar1;
  ulong64 uVar2;
  
  uVar1 = param_1->m128_u64[0];
  uVar2 = param_1->m128_u64[1];
  this->X = (float)(int)uVar1;
  this->Y = (float)(int)(uVar1 >> 0x20);
  this->Z = (float)(int)uVar2;
  this->W = (float)(int)(uVar2 >> 0x20);
  return this;
}

// TQuat<float> @ 14179cc30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TQuat<float> * __thiscall
UE::Math::TQuat<float>::TQuat<float>(TQuat<float> *this,TMatrix<float> *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  code *pcVar9;
  bool bVar10;
  TQuat<float> *pTVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  undefined1 auStackY_b8 [32];
  undefined8 local_88;
  undefined4 uStack_80;
  float fStack_7c;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  fVar16 = param_1->M[0][0];
  fVar15 = param_1->M[0][1];
  fVar2 = param_1->M[0][2];
  if (((__real_38d1b717 < (float)((uint)fVar16 & __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
      (__real_38d1b717 < (float)((uint)fVar15 & __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
     (__real_38d1b717 < (float)((uint)fVar2 & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    fVar3 = param_1->M[1][0];
    fVar4 = param_1->M[1][1];
    fVar5 = param_1->M[1][2];
    if (((__real_38d1b717 < (float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
        (__real_38d1b717 < (float)((uint)fVar4 & __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
       (__real_38d1b717 < (float)((uint)fVar5 & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
      fVar6 = param_1->M[2][0];
      fVar7 = param_1->M[2][1];
      fVar8 = param_1->M[2][2];
      if (((__real_38d1b717 < (float)((uint)fVar6 & __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
          (__real_38d1b717 < (float)((uint)fVar7 & __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
         (__real_38d1b717 < (float)((uint)fVar8 & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
        if ((((float)((uint)(__real_3f800000 - (fVar15 * fVar15 + fVar16 * fVar16 + fVar2 * fVar2))
                     & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717) &&
            ((float)((uint)(__real_3f800000 - (fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5)) &
                    __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) &&
           ((float)((uint)(__real_3f800000 - (fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8)) &
                   __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
          fVar15 = fVar4 + fVar16 + fVar8;
          if (0.0 < fVar15) {
            fVar16 = __real_3f800000 / SQRT(fVar15 + __real_3f800000);
            fVar15 = fVar16 * __real_3f000000;
            this->W = __real_3f000000 / fVar16;
            this->X = (param_1->M[1][2] - param_1->M[2][1]) * fVar15;
            this->Y = (param_1->M[2][0] - param_1->M[0][2]) * fVar15;
            this->Z = (param_1->M[0][1] - param_1->M[1][0]) * fVar15;
            return this;
          }
          uVar12 = (ulonglong)(fVar16 < fVar4);
          pfVar1 = (float *)((longlong)param_1->M + uVar12 * 0x14);
          if (*pfVar1 <= fVar8 && fVar8 != *pfVar1) {
            uVar12 = 2;
          }
          lVar13 = (longlong)
                   *(int *)((longlong)
                            &`public:___cdecl_UE::Math::TQuat<float>::TQuat<float>(UE::Math::TMatrix<float>_const&___ptr64)___ptr64'
                             ::__l13::nxt + uVar12 * 4);
          lVar14 = (longlong)
                   *(int *)((longlong)
                            &`public:___cdecl_UE::Math::TQuat<float>::TQuat<float>(UE::Math::TMatrix<float>_const&___ptr64)___ptr64'
                             ::__l13::nxt + lVar13 * 4);
          fVar16 = __real_3f800000 /
                   SQRT(((*(float *)((longlong)param_1->M + uVar12 * 0x14) -
                         *(float *)((longlong)param_1->M + lVar13 * 0x14)) -
                        *(float *)((longlong)param_1->M + lVar14 * 0x14)) + __real_3f800000);
          fVar15 = fVar16 * __real_3f000000;
          *(float *)((longlong)&local_88 + uVar12 * 4) = __real_3f000000 / fVar16;
          fStack_7c = (param_1->M[lVar13][lVar14] - param_1->M[lVar14][lVar13]) * fVar15;
          *(float *)((longlong)&local_88 + lVar13 * 4) =
               (param_1->M[lVar13][uVar12] + param_1->M[uVar12][lVar13]) * fVar15;
          *(float *)((longlong)&local_88 + lVar14 * 4) =
               (param_1->M[lVar14][uVar12] + param_1->M[uVar12][lVar14]) * fVar15;
          this->X = (float)(undefined4)local_88;
          this->Y = (float)local_88._4_4_;
          this->Z = (float)uStack_80;
          this->W = fStack_7c;
          return this;
        }
        bVar10 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_727370131964951785>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Quat.h"
                            ,0x317,
                            "(FMath::Abs(1.f - M.GetScaledAxis(EAxis::X).SizeSquared()) <= (1.e-4f)) && (FMath::Abs(1.f - M.GetScaledAxis(EAxis::Y).SizeSquared()) <= (1.e-4f)) && (FMath::Abs(1.f - M.GetScaledAxis(EAxis::Z).SizeSquared()) <= (1.e-4f))"
                           );
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          pTVar11 = (TQuat<float> *)(*pcVar9)();
          return pTVar11;
        }
      }
    }
  }
  *this = Identity;
  return this;
}

// TQuat<float> @ 14179cf90

TQuat<float> * __thiscall
UE::Math::TQuat<float>::TQuat<float>(TQuat<float> *this,TRotator<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  TQuat<float> *pTVar4;
  TQuat<float> local_18;
  
  pTVar4 = TRotator<float>::Quaternion(param_1,&local_18);
  fVar1 = pTVar4->Y;
  fVar2 = pTVar4->Z;
  fVar3 = pTVar4->W;
  this->X = pTVar4->X;
  this->Y = fVar1;
  this->Z = fVar2;
  this->W = fVar3;
  return this;
}

// TQuat<float> @ 14179cfc0

TQuat<float> * __thiscall
UE::Math::TQuat<float>::TQuat<float>
          (TQuat<float> *this,float param_1,float param_2,float param_3,float param_4)

{
  this->W = param_4;
  this->X = param_1;
  this->Y = param_2;
  this->Z = param_3;
  return this;
}

// TQuat<float> @ 14179cff0

TQuat<float> * __thiscall
UE::Math::TQuat<float>::TQuat<float>(TQuat<float> *this,TVector<float> *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float local_res8 [2];
  float local_res18 [4];
  
  FMath::SinCos<float>(local_res18,local_res8,param_2 * __real_3f000000);
  fVar1 = (param_1->field0_0x0)._s_0.Y;
  fVar2 = (param_1->field0_0x0)._s_0.Z;
  this->X = local_res18[0] * (param_1->field0_0x0)._s_0.X;
  this->W = local_res8[0];
  this->Y = local_res18[0] * fVar1;
  this->Z = local_res18[0] * fVar2;
  return this;
}

// TQuat<float> @ 14179d060

TQuat<float> * __thiscall
UE::Math::TQuat<float>::TQuat<float>(TQuat<float> *this,EForceInit param_1)

{
  this->X = 0.0;
  this->Y = 0.0;
  this->Z = 0.0;
  if (param_1 == ForceInitToZero) {
    this->W = 0.0;
    return this;
  }
  this->W = __real_3f800000;
  return this;
}

// TQuat<double> @ 14179d090

TQuat<double> * __thiscall
UE::Math::TQuat<double>::TQuat<double>(TQuat<double> *this,VectorRegister4Double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (param_1->XY).m128d_f64[1];
  dVar2 = (param_1->ZW).m128d_f64[0];
  dVar3 = (param_1->ZW).m128d_f64[1];
  this->X = (param_1->XY).m128d_f64[0];
  this->Y = dVar1;
  this->Z = dVar2;
  this->W = dVar3;
  return this;
}

// TQuat<double> @ 14179d0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TQuat<double> * __thiscall
UE::Math::TQuat<double>::TQuat<double>(TQuat<double> *this,TMatrix<double> *param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  code *pcVar9;
  bool bVar10;
  TQuat<double> *pTVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  double dVar17;
  double dVar18;
  undefined1 auStackY_d8 [32];
  double local_98 [4];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  dVar17 = param_1->M[0][0];
  uVar15 = SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar16 = (uint)((ulonglong)dVar17 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar18 = param_1->M[0][1];
  dVar2 = param_1->M[0][2];
  if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar16,uVar15) &&
        (double)CONCAT44(uVar16,uVar15) != __real_3f1a36e2e0000000) ||
      (uVar15 = SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar16 = (uint)((ulonglong)dVar18 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar16,uVar15) &&
      (double)CONCAT44(uVar16,uVar15) != __real_3f1a36e2e0000000)) ||
     (uVar15 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar16 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar16,uVar15) &&
     (double)CONCAT44(uVar16,uVar15) != __real_3f1a36e2e0000000)) {
    dVar3 = param_1->M[1][0];
    dVar4 = param_1->M[1][1];
    dVar5 = param_1->M[1][2];
    uVar15 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar16 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar16,uVar15) &&
          (double)CONCAT44(uVar16,uVar15) != __real_3f1a36e2e0000000) ||
        (uVar15 = SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar16 = (uint)((ulonglong)dVar4 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar16,uVar15) &&
        (double)CONCAT44(uVar16,uVar15) != __real_3f1a36e2e0000000)) ||
       (uVar15 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar16 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar16,uVar15) &&
       (double)CONCAT44(uVar16,uVar15) != __real_3f1a36e2e0000000)) {
      dVar6 = param_1->M[2][0];
      dVar7 = param_1->M[2][1];
      dVar8 = param_1->M[2][2];
      uVar15 = SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar16 = (uint)((ulonglong)dVar6 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar16,uVar15) &&
            (double)CONCAT44(uVar16,uVar15) != __real_3f1a36e2e0000000) ||
          (uVar15 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar16 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar16,uVar15) &&
          (double)CONCAT44(uVar16,uVar15) != __real_3f1a36e2e0000000)) ||
         (uVar15 = SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar16 = (uint)((ulonglong)dVar8 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar16,uVar15) &&
         (double)CONCAT44(uVar16,uVar15) != __real_3f1a36e2e0000000)) {
        dVar18 = __real_3ff0000000000000 - (dVar18 * dVar18 + dVar17 * dVar17 + dVar2 * dVar2);
        uVar15 = SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar16 = (uint)((ulonglong)dVar18 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        if ((((double)CONCAT44(uVar16,uVar15) < __real_3f1a36e2e0000000 ||
              (double)CONCAT44(uVar16,uVar15) == __real_3f1a36e2e0000000) &&
            (dVar18 = __real_3ff0000000000000 - (dVar4 * dVar4 + dVar3 * dVar3 + dVar5 * dVar5),
            uVar15 = SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
            uVar16 = (uint)((ulonglong)dVar18 >> 0x20) &
                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
            (double)CONCAT44(uVar16,uVar15) < __real_3f1a36e2e0000000 ||
            (double)CONCAT44(uVar16,uVar15) == __real_3f1a36e2e0000000)) &&
           (dVar18 = __real_3ff0000000000000 - (dVar7 * dVar7 + dVar6 * dVar6 + dVar8 * dVar8),
           uVar15 = SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
           uVar16 = (uint)((ulonglong)dVar18 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_
           , (double)CONCAT44(uVar16,uVar15) < __real_3f1a36e2e0000000 ||
             (double)CONCAT44(uVar16,uVar15) == __real_3f1a36e2e0000000)) {
          dVar18 = dVar4 + dVar17 + dVar8;
          if (0.0 < dVar18) {
            dVar17 = __real_3ff0000000000000 / SQRT(dVar18 + __real_3ff0000000000000);
            dVar18 = dVar17 * __real_3fe0000000000000;
            this->W = __real_3fe0000000000000 / dVar17;
            this->X = (param_1->M[1][2] - param_1->M[2][1]) * dVar18;
            this->Y = (param_1->M[2][0] - param_1->M[0][2]) * dVar18;
            this->Z = (param_1->M[0][1] - param_1->M[1][0]) * dVar18;
            return this;
          }
          uVar12 = (ulonglong)(dVar17 < dVar4);
          pdVar1 = (double *)((longlong)param_1->M + uVar12 * 0x28);
          if (*pdVar1 <= dVar8 && dVar8 != *pdVar1) {
            uVar12 = 2;
          }
          lVar14 = (longlong)
                   *(int *)((longlong)
                            &`public:___cdecl_UE::Math::TQuat<double>::TQuat<double>(UE::Math::TMatrix<double>_const&___ptr64)___ptr64'
                             ::__l13::nxt + uVar12 * 4);
          lVar13 = (longlong)
                   *(int *)((longlong)
                            &`public:___cdecl_UE::Math::TQuat<double>::TQuat<double>(UE::Math::TMatrix<double>_const&___ptr64)___ptr64'
                             ::__l13::nxt + lVar14 * 4);
          dVar17 = __real_3ff0000000000000 /
                   SQRT(((*(double *)((longlong)param_1->M + uVar12 * 0x28) -
                         *(double *)((longlong)param_1->M + lVar14 * 0x28)) -
                        *(double *)((longlong)param_1->M + lVar13 * 0x28)) + __real_3ff0000000000000
                       );
          dVar18 = dVar17 * __real_3fe0000000000000;
          local_98[uVar12] = __real_3fe0000000000000 / dVar17;
          local_98[3] = (param_1->M[lVar14][lVar13] - param_1->M[lVar13][lVar14]) * dVar18;
          local_98[lVar14] = (param_1->M[lVar14][uVar12] + param_1->M[uVar12][lVar14]) * dVar18;
          local_98[lVar13] = (param_1->M[lVar13][uVar12] + param_1->M[uVar12][lVar13]) * dVar18;
          this->X = local_98[0];
          this->Y = local_98[1];
          this->Z = local_98[2];
          this->W = local_98[3];
          return this;
        }
        bVar10 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_727370131964951785>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Quat.h"
                            ,0x317,
                            "(FMath::Abs(1.f - M.GetScaledAxis(EAxis::X).SizeSquared()) <= (1.e-4f)) && (FMath::Abs(1.f - M.GetScaledAxis(EAxis::Y).SizeSquared()) <= (1.e-4f)) && (FMath::Abs(1.f - M.GetScaledAxis(EAxis::Z).SizeSquared()) <= (1.e-4f))"
                           );
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          pTVar11 = (TQuat<double> *)(*pcVar9)();
          return pTVar11;
        }
      }
    }
  }
  dVar17 = Identity.Y;
  this->X = Identity.X;
  this->Y = dVar17;
  dVar17 = Identity.W;
  this->Z = Identity.Z;
  this->W = dVar17;
  return this;
}

// TQuat<double> @ 14179d430

TQuat<double> * __thiscall
UE::Math::TQuat<double>::TQuat<double>(TQuat<double> *this,TRotator<double> *param_1)

{
  double dVar1;
  TQuat<double> *pTVar2;
  TQuat<double> local_28;
  
  pTVar2 = TRotator<double>::Quaternion(param_1,&local_28);
  dVar1 = pTVar2->Y;
  this->X = pTVar2->X;
  this->Y = dVar1;
  dVar1 = pTVar2->W;
  this->Z = pTVar2->Z;
  this->W = dVar1;
  return this;
}

// TQuat<double> @ 14179d470

TQuat<double> * __thiscall
UE::Math::TQuat<double>::TQuat<double>
          (TQuat<double> *this,double param_1,double param_2,double param_3,double param_4)

{
  this->W = param_4;
  this->X = param_1;
  this->Y = param_2;
  this->Z = param_3;
  return this;
}

// TQuat<double> @ 14179d4a0

TQuat<double> * __thiscall
UE::Math::TQuat<double>::TQuat<double>(TQuat<double> *this,TVector<double> *param_1,double param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qb;
  
  __libm_sse2_sincos_();
  dVar3 = extraout_XMM0_Qa * (param_1->field0_0x0)._s_0.X;
  dVar4 = extraout_XMM0_Qa * (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  auVar2._8_4_ = SUB84(dVar4,0);
  auVar2._0_8_ = dVar3;
  auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  this->X = dVar3;
  this->Y = (double)auVar2._8_8_;
  this->W = extraout_XMM0_Qb;
  this->Z = extraout_XMM0_Qa * dVar1;
  return this;
}

// TQuat<double> @ 14179d500

TQuat<double> * __thiscall
UE::Math::TQuat<double>::TQuat<double>(TQuat<double> *this,EForceInit param_1)

{
  this->X = 0.0;
  this->Y = 0.0;
  this->Z = 0.0;
  if (param_1 == ForceInitToZero) {
    this->W = 0.0;
    return this;
  }
  this->W = __real_3ff0000000000000;
  return this;
}

// operator== @ 1417a9e50

bool __thiscall UE::Math::TQuat<float>::operator==(TQuat<float> *this,TQuat<float> *param_1)

{
  undefined1 auVar1 [16];
  undefined4 in_EAX;
  int iVar2;
  
  auVar1._4_4_ = -(uint)(param_1->Y == this->Y);
  auVar1._0_4_ = -(uint)(param_1->X == this->X);
  auVar1._8_4_ = -(uint)(param_1->Z == this->Z);
  auVar1._12_4_ = -(uint)(param_1->W == this->W);
  iVar2 = movmskps(in_EAX,auVar1);
  return iVar2 == 0xf;
}

// operator== @ 1417a9e70

bool __thiscall UE::Math::TQuat<double>::operator==(TQuat<double> *this,TQuat<double> *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  uint uVar3;
  undefined4 in_R8D;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = -(ulonglong)(param_1->W == this->W);
  lVar6 = -(ulonglong)(param_1->Y == this->Y);
  auVar2._8_4_ = (int)lVar6;
  auVar2._0_8_ = -(ulonglong)(param_1->X == this->X);
  auVar2._12_4_ = (int)((ulonglong)lVar6 >> 0x20);
  uVar3 = movmskpd(in_EAX,auVar2);
  auVar1._8_4_ = (int)lVar5;
  auVar1._0_8_ = -(ulonglong)(param_1->Z == this->Z);
  auVar1._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
  iVar4 = movmskpd(in_R8D,auVar1);
  return (iVar4 << 2 | uVar3) == 0xf;
}

// operator!= @ 1417aa2a0

bool __thiscall UE::Math::TQuat<float>::operator!=(TQuat<float> *this,TQuat<float> *param_1)

{
  undefined1 auVar1 [16];
  undefined4 in_EAX;
  int iVar2;
  
  auVar1._4_4_ = -(uint)(param_1->Y != this->Y);
  auVar1._0_4_ = -(uint)(param_1->X != this->X);
  auVar1._8_4_ = -(uint)(param_1->Z != this->Z);
  auVar1._12_4_ = -(uint)(param_1->W != this->W);
  iVar2 = movmskps(in_EAX,auVar1);
  return iVar2 != 0;
}

// operator!= @ 1417aa2c0

bool __thiscall UE::Math::TQuat<double>::operator!=(TQuat<double> *this,TQuat<double> *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  int iVar3;
  undefined4 in_R8D;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = -(ulonglong)(param_1->W != this->W);
  lVar6 = -(ulonglong)(param_1->Y != this->Y);
  auVar2._8_4_ = (int)lVar6;
  auVar2._0_8_ = -(ulonglong)(param_1->X != this->X);
  auVar2._12_4_ = (int)((ulonglong)lVar6 >> 0x20);
  iVar3 = movmskpd(in_EAX,auVar2);
  auVar1._8_4_ = (int)lVar5;
  auVar1._0_8_ = -(ulonglong)(param_1->Z != this->Z);
  auVar1._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
  uVar4 = movmskpd(in_R8D,auVar1);
  return (uVar4 & 0x3fffffff) != 0 || iVar3 != 0;
}

// operator* @ 1417aacc0

TQuat<float> * __thiscall
UE::Math::TQuat<float>::operator*
          (TQuat<float> *this,TQuat<float> *__return_storage_ptr__,TQuat<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar10 = this->X;
  fVar11 = this->Y;
  fVar12 = this->Z;
  fVar13 = this->W;
  fVar14 = param_1->X;
  fVar15 = param_1->Y;
  fVar16 = param_1->Z;
  fVar17 = param_1->W;
  fVar1 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1];
  fVar4 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2];
  fVar7 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3];
  fVar2 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1];
  fVar5 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2];
  fVar8 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3];
  fVar3 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
  fVar6 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
  fVar9 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
  __return_storage_ptr__->X =
       fVar10 * fVar17 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] + fVar13 * fVar14 +
       fVar11 * fVar16 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
       fVar12 * fVar15 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
  __return_storage_ptr__->Y =
       fVar10 * fVar16 * fVar1 + fVar13 * fVar15 + fVar11 * fVar17 * fVar2 + fVar12 * fVar14 * fVar3
  ;
  __return_storage_ptr__->Z =
       fVar10 * fVar15 * fVar4 + fVar13 * fVar16 + fVar11 * fVar14 * fVar5 + fVar12 * fVar17 * fVar6
  ;
  __return_storage_ptr__->W =
       fVar10 * fVar14 * fVar7 + fVar13 * fVar17 + fVar11 * fVar15 * fVar8 + fVar12 * fVar16 * fVar9
  ;
  return __return_storage_ptr__;
}

// operator* @ 1417aad30

TMatrix<float> * __thiscall
UE::Math::TQuat<float>::operator*
          (TQuat<float> *this,TMatrix<float> *__return_storage_ptr__,TMatrix<float> *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float (*pafVar21) [4];
  longlong lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  fVar14 = this->X;
  fVar15 = this->Y;
  fVar16 = this->Z;
  fVar17 = this->W;
  fVar27 = fVar14 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
  fVar28 = fVar15 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
  fVar29 = fVar16 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
  fVar30 = fVar17 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
  lVar22 = 2;
  fVar2 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0];
  fVar5 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1];
  fVar8 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2];
  fVar11 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3];
  pafVar21 = __return_storage_ptr__->M + 1;
  fVar3 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0];
  fVar6 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1];
  fVar9 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2];
  fVar12 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3];
  fVar4 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
  fVar7 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
  fVar10 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
  fVar13 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
  do {
    pfVar1 = (float *)((longlong)pafVar21 +
                      ((longlong)param_1 - (longlong)__return_storage_ptr__) + -0x10);
    fVar26 = *pfVar1;
    fVar18 = pfVar1[1];
    fVar19 = pfVar1[2];
    fVar20 = pfVar1[3];
    fVar23 = fVar20 * fVar14 * fVar2 + fVar26 * fVar17 + fVar19 * fVar15 * fVar3 +
             fVar18 * fVar16 * fVar4;
    fVar24 = fVar19 * fVar14 * fVar5 + fVar18 * fVar17 + fVar20 * fVar15 * fVar6 +
             fVar26 * fVar16 * fVar7;
    fVar25 = fVar18 * fVar14 * fVar8 + fVar19 * fVar17 + fVar26 * fVar15 * fVar9 +
             fVar20 * fVar16 * fVar10;
    fVar26 = fVar26 * fVar14 * fVar11 + fVar20 * fVar17 + fVar18 * fVar15 * fVar12 +
             fVar19 * fVar16 * fVar13;
    ((TMatrix<float> *)(pafVar21 + -1))->M[0][0] =
         fVar23 * fVar30 * fVar2 + fVar26 * fVar27 + fVar24 * fVar29 * fVar3 +
         fVar25 * fVar28 * fVar4;
    ((TMatrix<float> *)(pafVar21 + -1))->M[0][1] =
         fVar23 * fVar29 * fVar5 + fVar26 * fVar28 + fVar24 * fVar30 * fVar6 +
         fVar25 * fVar27 * fVar7;
    ((TMatrix<float> *)(pafVar21 + -1))->M[0][2] =
         fVar23 * fVar28 * fVar8 + fVar26 * fVar29 + fVar24 * fVar27 * fVar9 +
         fVar25 * fVar30 * fVar10;
    ((TMatrix<float> *)(pafVar21 + -1))->M[0][3] =
         fVar23 * fVar27 * fVar11 + fVar26 * fVar30 + fVar24 * fVar28 * fVar12 +
         fVar25 * fVar29 * fVar13;
    pfVar1 = (float *)((longlong)pafVar21 + ((longlong)param_1 - (longlong)__return_storage_ptr__));
    fVar26 = *pfVar1;
    fVar18 = pfVar1[1];
    fVar19 = pfVar1[2];
    fVar20 = pfVar1[3];
    fVar23 = fVar20 * fVar14 * fVar2 + fVar26 * fVar17 + fVar19 * fVar15 * fVar3 +
             fVar18 * fVar16 * fVar4;
    fVar24 = fVar19 * fVar14 * fVar5 + fVar18 * fVar17 + fVar20 * fVar15 * fVar6 +
             fVar26 * fVar16 * fVar7;
    fVar25 = fVar18 * fVar14 * fVar8 + fVar19 * fVar17 + fVar26 * fVar15 * fVar9 +
             fVar20 * fVar16 * fVar10;
    fVar26 = fVar26 * fVar14 * fVar11 + fVar20 * fVar17 + fVar18 * fVar15 * fVar12 +
             fVar19 * fVar16 * fVar13;
    (*pafVar21)[0] =
         fVar23 * fVar30 * fVar2 + fVar26 * fVar27 + fVar24 * fVar29 * fVar3 +
         fVar25 * fVar28 * fVar4;
    (*pafVar21)[1] =
         fVar23 * fVar29 * fVar5 + fVar26 * fVar28 + fVar24 * fVar30 * fVar6 +
         fVar25 * fVar27 * fVar7;
    (*pafVar21)[2] =
         fVar23 * fVar28 * fVar8 + fVar26 * fVar29 + fVar24 * fVar27 * fVar9 +
         fVar25 * fVar30 * fVar10;
    (*pafVar21)[3] =
         fVar23 * fVar27 * fVar11 + fVar26 * fVar30 + fVar24 * fVar28 * fVar12 +
         fVar25 * fVar29 * fVar13;
    pafVar21 = pafVar21 + 2;
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
  return __return_storage_ptr__;
}

// operator* @ 1417aaf20

TVector<float> * __thiscall
UE::Math::TQuat<float>::operator*
          (TQuat<float> *this,TVector<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  TVector<float>_u_0 local_18;
  
  local_18._0_8_ = *(undefined8 *)&param_1->field0_0x0;
  local_18._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  RotateVector(this,__return_storage_ptr__,(TVector<float> *)&local_18._s_0);
  return __return_storage_ptr__;
}

// operator* @ 1417aaf60

TQuat<double> * __thiscall
UE::Math::TQuat<double>::operator*
          (TQuat<double> *this,TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar3 = param_1->Z;
  dVar7 = param_1->W;
  dVar8 = param_1->X;
  dVar9 = param_1->Y;
  dVar10 = this->X;
  dVar11 = this->Y;
  dVar12 = this->Z;
  dVar13 = this->W;
  dVar5 = dVar10 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          dVar13 * dVar3 +
          dVar11 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          dVar12 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar6 = dVar10 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar13 * dVar7 +
          dVar11 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar12 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar2 = dVar10 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          dVar13 * dVar8 +
          dVar11 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          dVar12 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar3 = dVar10 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar13 * dVar9 +
          dVar11 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar12 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  __return_storage_ptr__->X = dVar2;
  __return_storage_ptr__->Y = (double)auVar1._8_8_;
  auVar4._8_4_ = SUB84(dVar6,0);
  auVar4._0_8_ = dVar5;
  auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  __return_storage_ptr__->Z = dVar5;
  __return_storage_ptr__->W = (double)auVar4._8_8_;
  return __return_storage_ptr__;
}

// operator* @ 1417ab080

TMatrix<double> * __thiscall
UE::Math::TQuat<double>::operator*
          (TQuat<double> *this,TMatrix<double> *__return_storage_ptr__,TMatrix<double> *param_1)

{
  double *pdVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double *pdVar28;
  longlong lVar29;
  double dStack_f0;
  double dStack_e0;
  double dStack_d0;
  
  pdVar28 = __return_storage_ptr__->M[0] + 2;
  uVar2 = this->X;
  uVar4 = this->Y;
  uVar3 = this->Z;
  uVar5 = this->W;
  lVar29 = 4;
  dVar12 = (double)uVar3 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar13 = (double)uVar5 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar24 = (double)uVar2 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar25 = (double)uVar4 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar11._8_4_ = SUB84(dVar13,0);
  auVar11._0_8_ = dVar12;
  auVar11._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  auVar14._8_4_ = SUB84(dVar24,0);
  auVar14._0_8_ = dVar25;
  auVar14._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  auVar15._8_4_ = SUB84(dVar12,0);
  auVar15._0_8_ = dVar13;
  auVar15._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  do {
    pdVar1 = (double *)((longlong)pdVar28 + ((longlong)param_1 - (longlong)__return_storage_ptr__));
    dVar17 = *pdVar1;
    dVar23 = pdVar1[1];
    pdVar1 = (double *)
             ((longlong)pdVar28 + ((longlong)param_1 - (longlong)__return_storage_ptr__) + -0x10);
    dVar26 = *pdVar1;
    dVar27 = pdVar1[1];
    dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
    dVar19 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
    dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
    dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
    dVar20 = dVar23 * (double)uVar2 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             dVar26 * (double)uVar5 +
             dVar17 * (double)uVar4 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar27 * (double)uVar3 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar21 = dVar17 * (double)uVar2 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             dVar27 * (double)uVar5 +
             dVar23 * (double)uVar4 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             dVar26 * (double)uVar3 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar22 = dVar27 * (double)uVar2 * dVar6 + dVar17 * (double)uVar5 +
             dVar26 * (double)uVar4 * dVar8 + dVar23 * (double)uVar3 * dVar7;
    dVar23 = dVar26 * (double)uVar2 * dVar19 + dVar23 * (double)uVar5 +
             dVar27 * (double)uVar4 * dVar10 + dVar17 * (double)uVar3 * dVar9;
    dStack_f0 = auVar15._8_8_;
    dStack_d0 = auVar14._8_8_;
    dStack_e0 = auVar11._8_8_;
    dVar17 = dVar20 * dStack_f0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             dVar23 * dVar25 +
             dVar21 * dStack_e0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             dVar22 * dStack_d0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    auVar16._8_4_ = SUB84(dVar17,0);
    auVar16._0_8_ =
         dVar20 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
         dVar23 * dVar24 +
         dVar21 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         dVar22 * dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    auVar16._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    *(undefined1 (*) [16])*(double (*) [4])(pdVar28 + -2) = auVar16;
    dVar19 = dVar20 * dStack_d0 * dVar19 + dVar23 * dStack_e0 + dVar21 * dVar25 * dVar10 +
             dVar22 * dStack_f0 * dVar9;
    auVar18._8_4_ = SUB84(dVar19,0);
    auVar18._0_8_ =
         dVar20 * dVar25 * dVar6 + dVar23 * dVar12 + dVar21 * dVar24 * dVar8 +
         dVar22 * dVar13 * dVar7;
    auVar18._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
    *(undefined1 (*) [16])pdVar28 = auVar18;
    pdVar28 = pdVar28 + 4;
    lVar29 = lVar29 + -1;
  } while (lVar29 != 0);
  return __return_storage_ptr__;
}

// operator* @ 1417ab300

TVector<double> * __thiscall
UE::Math::TQuat<double>::operator*
          (TQuat<double> *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  RotateVector(this,__return_storage_ptr__,(TVector<double> *)&local_28._s_0);
  return __return_storage_ptr__;
}

// operator- @ 1417ab8d0

TQuat<float> * __thiscall
UE::Math::TQuat<float>::operator-
          (TQuat<float> *this,TQuat<float> *__return_storage_ptr__,TQuat<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = this->Y;
  fVar2 = this->Z;
  fVar3 = this->W;
  fVar4 = param_1->Y;
  fVar5 = param_1->Z;
  fVar6 = param_1->W;
  __return_storage_ptr__->X = this->X - param_1->X;
  __return_storage_ptr__->Y = fVar1 - fVar4;
  __return_storage_ptr__->Z = fVar2 - fVar5;
  __return_storage_ptr__->W = fVar3 - fVar6;
  return __return_storage_ptr__;
}

// operator- @ 1417ab8f0

TQuat<float> * __thiscall
UE::Math::TQuat<float>::operator-(TQuat<float> *this,TQuat<float> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = this->Y;
  fVar2 = this->Z;
  fVar3 = this->W;
  __return_storage_ptr__->X = 0.0 - this->X;
  __return_storage_ptr__->Y = 0.0 - fVar1;
  __return_storage_ptr__->Z = 0.0 - fVar2;
  __return_storage_ptr__->W = 0.0 - fVar3;
  return __return_storage_ptr__;
}

// operator- @ 1417ab910

TQuat<double> * __thiscall
UE::Math::TQuat<double>::operator-
          (TQuat<double> *this,TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  
  dVar5 = this->X - param_1->X;
  dVar6 = this->Y - param_1->Y;
  dVar2 = this->Z - param_1->Z;
  dVar3 = this->W - param_1->W;
  auVar4._8_4_ = SUB84(dVar6,0);
  auVar4._0_8_ = dVar5;
  auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  __return_storage_ptr__->X = dVar5;
  __return_storage_ptr__->Y = (double)auVar4._8_8_;
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  __return_storage_ptr__->Z = dVar2;
  __return_storage_ptr__->W = (double)auVar1._8_8_;
  return __return_storage_ptr__;
}

// operator- @ 1417ab940

TQuat<double> * __thiscall
UE::Math::TQuat<double>::operator-(TQuat<double> *this,TQuat<double> *__return_storage_ptr__)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  
  dVar2 = 0.0 - this->X;
  dVar3 = 0.0 - this->Y;
  dVar5 = 0.0 - this->Z;
  dVar6 = 0.0 - this->W;
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  __return_storage_ptr__->X = dVar2;
  __return_storage_ptr__->Y = (double)auVar1._8_8_;
  auVar4._8_4_ = SUB84(dVar6,0);
  auVar4._0_8_ = dVar5;
  auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  __return_storage_ptr__->Z = dVar5;
  __return_storage_ptr__->W = (double)auVar4._8_8_;
  return __return_storage_ptr__;
}

// operator+ @ 1417abd20

TQuat<float> * __thiscall
UE::Math::TQuat<float>::operator+
          (TQuat<float> *this,TQuat<float> *__return_storage_ptr__,TQuat<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1->Y;
  fVar2 = param_1->Z;
  fVar3 = param_1->W;
  fVar4 = this->Y;
  fVar5 = this->Z;
  fVar6 = this->W;
  __return_storage_ptr__->X = param_1->X + this->X;
  __return_storage_ptr__->Y = fVar1 + fVar4;
  __return_storage_ptr__->Z = fVar2 + fVar5;
  __return_storage_ptr__->W = fVar3 + fVar6;
  return __return_storage_ptr__;
}

// operator+ @ 1417abd40

TQuat<double> * __thiscall
UE::Math::TQuat<double>::operator+
          (TQuat<double> *this,TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  
  dVar5 = param_1->X + this->X;
  dVar6 = param_1->Y + this->Y;
  dVar2 = param_1->Z + this->Z;
  dVar3 = param_1->W + this->W;
  auVar4._8_4_ = SUB84(dVar6,0);
  auVar4._0_8_ = dVar5;
  auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  __return_storage_ptr__->X = dVar5;
  __return_storage_ptr__->Y = (double)auVar4._8_8_;
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  __return_storage_ptr__->Z = dVar2;
  __return_storage_ptr__->W = (double)auVar1._8_8_;
  return __return_storage_ptr__;
}

// operator| @ 1417af090

float __thiscall UE::Math::TQuat<float>::operator|(TQuat<float> *this,TQuat<float> *param_1)

{
  return param_1->W * this->W + param_1->Z * this->Z + param_1->Y * this->Y + param_1->X * this->X;
}

// operator| @ 1417af0d0

double __thiscall UE::Math::TQuat<double>::operator|(TQuat<double> *this,TQuat<double> *param_1)

{
  return param_1->W * this->W + param_1->Z * this->Z + param_1->Y * this->Y + param_1->X * this->X;
}

// operator*= @ 1417af330

TQuat<float> * __thiscall
UE::Math::TQuat<float>::operator*=
          (TQuat<float> *this,TQuat<float> *__return_storage_ptr__,TQuat<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar11 = this->X;
  fVar1 = this->Y;
  fVar2 = this->Z;
  fVar3 = this->W;
  fVar4 = param_1->X;
  fVar5 = param_1->Y;
  fVar6 = param_1->Z;
  fVar7 = param_1->W;
  fVar8 = fVar11 * fVar7 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] + fVar3 * fVar4 +
          fVar1 * fVar6 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
          fVar2 * fVar5 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
  fVar9 = fVar11 * fVar6 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1] + fVar3 * fVar5 +
          fVar1 * fVar7 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1] +
          fVar2 * fVar4 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
  fVar10 = fVar11 * fVar5 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2] + fVar3 * fVar6 +
           fVar1 * fVar4 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2] +
           fVar2 * fVar7 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
  fVar11 = fVar11 * fVar4 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3] + fVar3 * fVar7 +
           fVar1 * fVar5 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3] +
           fVar2 * fVar6 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
  this->X = fVar8;
  this->Y = fVar9;
  this->Z = fVar10;
  this->W = fVar11;
  __return_storage_ptr__->X = fVar8;
  __return_storage_ptr__->Y = fVar9;
  __return_storage_ptr__->Z = fVar10;
  __return_storage_ptr__->W = fVar11;
  return __return_storage_ptr__;
}

// operator*= @ 1417af3a0

TQuat<double> * __thiscall
UE::Math::TQuat<double>::operator*=
          (TQuat<double> *this,TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  
  dVar13 = param_1->Z;
  dVar14 = param_1->W;
  dVar15 = param_1->X;
  dVar16 = param_1->Y;
  dVar17 = this->X;
  dVar18 = this->Y;
  dVar19 = this->Z;
  dVar20 = this->W;
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
  dVar2 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
  dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
  dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
  dVar1 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar11 = dVar17 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar20 * dVar13 +
           dVar18 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar19 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar12 = dVar17 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar20 * dVar14 +
           dVar18 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar19 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  uVar23 = SUB84(dVar12,0);
  uVar24 = (undefined4)((ulonglong)dVar12 >> 0x20);
  auVar9._8_4_ = uVar23;
  auVar9._0_8_ = dVar11;
  auVar9._12_4_ = uVar24;
  this->Z = dVar11;
  this->W = (double)auVar9._8_8_;
  dVar7 = dVar17 * dVar14 * dVar7 + dVar20 * dVar15 + dVar18 * dVar13 * dVar8 +
          dVar19 * dVar16 * dVar1;
  dVar8 = dVar17 * dVar13 * dVar2 + dVar20 * dVar16 + dVar18 * dVar14 * dVar3 +
          dVar19 * dVar15 * dVar4;
  uVar21 = SUB84(dVar8,0);
  uVar22 = (undefined4)((ulonglong)dVar8 >> 0x20);
  auVar5._8_4_ = uVar21;
  auVar5._0_8_ = dVar7;
  auVar5._12_4_ = uVar22;
  __return_storage_ptr__->X = dVar7;
  __return_storage_ptr__->Y = (double)auVar5._8_8_;
  auVar10._8_4_ = uVar23;
  auVar10._0_8_ = dVar11;
  auVar10._12_4_ = uVar24;
  __return_storage_ptr__->Z = dVar11;
  __return_storage_ptr__->W = (double)auVar10._8_8_;
  auVar6._8_4_ = uVar21;
  auVar6._0_8_ = dVar7;
  auVar6._12_4_ = uVar22;
  this->X = dVar7;
  this->Y = (double)auVar6._8_8_;
  return __return_storage_ptr__;
}

// operator+= @ 1417afb60

TQuat<float> * __thiscall
UE::Math::TQuat<float>::operator+=
          (TQuat<float> *this,TQuat<float> *__return_storage_ptr__,TQuat<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_1->X + this->X;
  fVar2 = param_1->Y + this->Y;
  fVar3 = param_1->Z + this->Z;
  fVar4 = param_1->W + this->W;
  this->X = fVar1;
  this->Y = fVar2;
  this->Z = fVar3;
  this->W = fVar4;
  __return_storage_ptr__->X = fVar1;
  __return_storage_ptr__->Y = fVar2;
  __return_storage_ptr__->Z = fVar3;
  __return_storage_ptr__->W = fVar4;
  return __return_storage_ptr__;
}

// operator+= @ 1417afb80

TQuat<double> * __thiscall
UE::Math::TQuat<double>::operator+=
          (TQuat<double> *this,TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  dVar6 = param_1->X + this->X;
  dVar7 = param_1->Y + this->Y;
  uVar10 = SUB84(dVar7,0);
  uVar11 = (undefined4)((ulonglong)dVar7 >> 0x20);
  dVar7 = param_1->Z + this->Z;
  dVar3 = param_1->W + this->W;
  uVar8 = SUB84(dVar3,0);
  uVar9 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar4._8_4_ = uVar10;
  auVar4._0_8_ = dVar6;
  auVar4._12_4_ = uVar11;
  __return_storage_ptr__->X = dVar6;
  __return_storage_ptr__->Y = (double)auVar4._8_8_;
  auVar1._8_4_ = uVar8;
  auVar1._0_8_ = dVar7;
  auVar1._12_4_ = uVar9;
  __return_storage_ptr__->Z = dVar7;
  __return_storage_ptr__->W = (double)auVar1._8_8_;
  auVar5._8_4_ = uVar10;
  auVar5._0_8_ = dVar6;
  auVar5._12_4_ = uVar11;
  this->X = dVar6;
  this->Y = (double)auVar5._8_8_;
  auVar2._8_4_ = uVar8;
  auVar2._0_8_ = dVar7;
  auVar2._12_4_ = uVar9;
  this->Z = dVar7;
  this->W = (double)auVar2._8_8_;
  return __return_storage_ptr__;
}

// operator-= @ 1417b0130

TQuat<float> * __thiscall
UE::Math::TQuat<float>::operator-=
          (TQuat<float> *this,TQuat<float> *__return_storage_ptr__,TQuat<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = this->X - param_1->X;
  fVar2 = this->Y - param_1->Y;
  fVar3 = this->Z - param_1->Z;
  fVar4 = this->W - param_1->W;
  this->X = fVar1;
  this->Y = fVar2;
  this->Z = fVar3;
  this->W = fVar4;
  __return_storage_ptr__->X = fVar1;
  __return_storage_ptr__->Y = fVar2;
  __return_storage_ptr__->Z = fVar3;
  __return_storage_ptr__->W = fVar4;
  return __return_storage_ptr__;
}

// operator-= @ 1417b0150

TQuat<double> * __thiscall
UE::Math::TQuat<double>::operator-=
          (TQuat<double> *this,TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  dVar6 = this->X - param_1->X;
  dVar7 = this->Y - param_1->Y;
  uVar10 = SUB84(dVar7,0);
  uVar11 = (undefined4)((ulonglong)dVar7 >> 0x20);
  dVar7 = this->Z - param_1->Z;
  dVar3 = this->W - param_1->W;
  uVar8 = SUB84(dVar3,0);
  uVar9 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar4._8_4_ = uVar10;
  auVar4._0_8_ = dVar6;
  auVar4._12_4_ = uVar11;
  __return_storage_ptr__->X = dVar6;
  __return_storage_ptr__->Y = (double)auVar4._8_8_;
  auVar1._8_4_ = uVar8;
  auVar1._0_8_ = dVar7;
  auVar1._12_4_ = uVar9;
  __return_storage_ptr__->Z = dVar7;
  __return_storage_ptr__->W = (double)auVar1._8_8_;
  auVar5._8_4_ = uVar10;
  auVar5._0_8_ = dVar6;
  auVar5._12_4_ = uVar11;
  this->X = dVar6;
  this->Y = (double)auVar5._8_8_;
  auVar2._8_4_ = uVar8;
  auVar2._0_8_ = dVar7;
  auVar2._12_4_ = uVar9;
  this->Z = dVar7;
  this->W = (double)auVar2._8_8_;
  return __return_storage_ptr__;
}

// AngularDistance @ 1417b46b0

float __thiscall UE::Math::TQuat<float>::AngularDistance(TQuat<float> *this,TQuat<float> *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_1->W * this->W + param_1->Z * this->Z + param_1->Y * this->Y + param_1->X * this->X;
  fVar1 = (fVar2 + fVar2) * fVar2 - __real_3f800000;
  fVar2 = __real_bf800000;
  if ((__real_bf800000 <= fVar1) && (fVar2 = fVar1, __real_3f800000 <= fVar1)) {
    fVar2 = __real_3f800000;
  }
  fVar2 = acosf(fVar2);
  return fVar2;
}

// AngularDistance @ 1417b4720

double __thiscall
UE::Math::TQuat<double>::AngularDistance(TQuat<double> *this,TQuat<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = param_1->W * this->W + param_1->Z * this->Z + param_1->Y * this->Y + param_1->X * this->X;
  dVar1 = (dVar2 + dVar2) * dVar2 - __real_3ff0000000000000;
  dVar2 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar1) && (dVar2 = dVar1, __real_3ff0000000000000 <= dVar1)) {
    dVar2 = __real_3ff0000000000000;
  }
  dVar2 = acos(dVar2);
  return dVar2;
}

// CalcTangents @ 1417b6cf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Math::TQuat<float>::CalcTangents
          (TQuat<float> *param_1,TQuat<float> *param_2,TQuat<float> *param_3,float param_4,
          TQuat<float> *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float extraout_XMM0_Da;
  float fVar9;
  float extraout_XMM0_Db;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  TQuat<float> local_88;
  TQuat<float> local_78;
  TQuat<float> local_68 [6];
  
  fVar15 = param_1->X;
  fVar11 = param_1->Y;
  fVar13 = param_1->Z;
  fVar9 = param_1->W;
  fVar5 = param_2->X;
  fVar6 = param_2->Y;
  fVar7 = param_2->Z;
  fVar8 = param_2->W;
  fVar10 = fVar5 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
  fVar12 = fVar6 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
  fVar14 = fVar7 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
  fVar16 = fVar8 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
  local_88.X = fVar9 * fVar10 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] +
               fVar15 * fVar16 +
               fVar13 * fVar12 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
               fVar11 * fVar14 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
  local_88.Y = fVar13 * fVar10 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1] +
               fVar11 * fVar16 +
               fVar9 * fVar12 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1] +
               fVar15 * fVar14 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
  local_88.Z = fVar11 * fVar10 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2] +
               fVar13 * fVar16 +
               fVar15 * fVar12 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2] +
               fVar9 * fVar14 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
  local_88.W = fVar15 * fVar10 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3] +
               fVar9 * fVar16 +
               fVar11 * fVar12 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3] +
               fVar13 * fVar14 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
  Log(&local_88,local_68);
  fVar15 = param_3->X;
  fVar11 = param_3->Y;
  fVar13 = param_3->Z;
  fVar9 = param_3->W;
  local_88.X = fVar9 * fVar10 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] +
               fVar15 * fVar16 +
               fVar13 * fVar12 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
               fVar11 * fVar14 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
  local_88.Y = fVar13 * fVar10 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1] +
               fVar11 * fVar16 +
               fVar9 * fVar12 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1] +
               fVar15 * fVar14 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
  local_88.Z = fVar11 * fVar10 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2] +
               fVar13 * fVar16 +
               fVar15 * fVar12 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2] +
               fVar9 * fVar14 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
  local_88.W = fVar15 * fVar10 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3] +
               fVar9 * fVar16 +
               fVar11 * fVar12 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3] +
               fVar13 * fVar14 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
  Log(&local_88,&local_78);
  fVar11 = (local_78.X + local_68[0].X) * ___xmm_bf000000bf000000bf000000bf000000;
  fVar13 = (local_78.Y + local_68[0].Y) * _UNK_150689724;
  fVar15 = (local_78.Z + local_68[0].Z) * _UNK_150689728;
  __libm_sse2_sincosf_();
  if (__real_322bcc77 <= (float)((uint)extraout_XMM0_Da & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar9 = extraout_XMM0_Da / SQRT(fVar11 * fVar11 + fVar13 * fVar13 + fVar15 * fVar15);
    fVar13 = fVar13 * fVar9;
    fVar11 = fVar9 * fVar11;
    fVar15 = fVar9 * fVar15;
  }
  fVar9 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1];
  fVar14 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2];
  fVar2 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3];
  fVar10 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1];
  fVar16 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2];
  fVar3 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3];
  fVar12 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
  fVar1 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
  fVar4 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
  param_5->X = fVar5 * extraout_XMM0_Db * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] +
               fVar8 * fVar11 +
               fVar6 * fVar15 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
               fVar7 * fVar13 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
  param_5->Y = fVar5 * fVar15 * fVar9 + fVar8 * fVar13 + fVar6 * extraout_XMM0_Db * fVar10 +
               fVar7 * fVar11 * fVar12;
  param_5->Z = fVar5 * fVar13 * fVar14 + fVar8 * fVar15 + fVar6 * fVar11 * fVar16 +
               fVar7 * extraout_XMM0_Db * fVar1;
  param_5->W = fVar5 * fVar11 * fVar2 + fVar8 * extraout_XMM0_Db + fVar6 * fVar13 * fVar3 +
               fVar7 * fVar15 * fVar4;
  return;
}

// CalcTangents @ 1417b6f30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Math::TQuat<double>::CalcTangents
          (TQuat<double> *param_1,TQuat<double> *param_2,TQuat<double> *param_3,double param_4,
          TQuat<double> *param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double extraout_XMM0_Qa;
  double dVar13;
  double dVar14;
  double extraout_XMM0_Qb;
  double dVar15;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  TQuat<double> local_c8;
  TQuat<double> local_a8 [5];
  
  dVar4 = param_1->Z;
  dVar6 = param_1->W;
  dVar7 = param_1->X;
  dVar8 = param_1->Y;
  dVar9 = param_2->X;
  dVar10 = param_2->Y;
  dVar13 = dVar9 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar5 = dVar10 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar11 = param_2->Z;
  dVar12 = param_2->W;
  dVar15 = dVar11 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar14 = dVar12 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar2 = dVar13 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar14 * dVar8 +
          dVar5 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar15 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  local_e8._8_4_ = SUB84(dVar2,0);
  local_e8._0_8_ =
       dVar13 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar14 * dVar7 +
       dVar5 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar15 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_e8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  dVar2 = dVar13 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar14 * dVar6 +
          dVar5 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar15 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_d8._8_4_ = SUB84(dVar2,0);
  local_d8._0_8_ =
       dVar13 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
       dVar14 * dVar4 +
       dVar5 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       dVar15 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_d8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  Log((TQuat<double> *)local_e8,local_a8);
  dVar4 = param_3->Z;
  dVar6 = param_3->W;
  dVar7 = param_3->X;
  dVar8 = param_3->Y;
  dVar2 = dVar4 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar14 * dVar8 +
          dVar5 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar7 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  local_e8._8_4_ = SUB84(dVar2,0);
  local_e8._0_8_ =
       dVar6 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar14 * dVar7 +
       dVar5 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar8 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_e8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  dVar2 = dVar7 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar14 * dVar6 +
          dVar5 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar4 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_d8._8_4_ = SUB84(dVar2,0);
  local_d8._0_8_ =
       dVar8 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
       dVar14 * dVar4 +
       dVar5 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       dVar6 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_d8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  Log((TQuat<double> *)local_e8,&local_c8);
  dVar15 = (local_c8.X + local_a8[0].X) * ___xmm_bfe0000000000000bfe0000000000000;
  dVar2 = (local_c8.Y + local_a8[0].Y) * _UNK_150689738;
  dVar14 = (local_c8.Z + local_a8[0].Z) * ___xmm_bfe0000000000000bfe0000000000000;
  __libm_sse2_sincos_();
  if (__real_3e45798ee0000000 <=
      (double)CONCAT44((uint)((ulonglong)extraout_XMM0_Qa >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(extraout_XMM0_Qa,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar13 = extraout_XMM0_Qa / SQRT(dVar15 * dVar15 + dVar2 * dVar2 + dVar14 * dVar14);
    dVar15 = dVar13 * dVar15;
    dVar2 = dVar13 * dVar2;
    dVar14 = dVar13 * dVar14;
  }
  dVar5 = dVar2 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          dVar12 * dVar14 +
          dVar15 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          extraout_XMM0_Qb * dVar11 *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar4 = dVar15 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar12 * extraout_XMM0_Qb +
          dVar2 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar14 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar13 = extraout_XMM0_Qb * dVar9 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar15 * dVar12 +
           dVar10 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar2 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar2 = dVar14 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar2 * dVar12 +
          dVar10 * extraout_XMM0_Qb *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar15 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = dVar13;
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  param_5->X = dVar13;
  param_5->Y = (double)auVar1._8_8_;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = dVar5;
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  param_5->Z = dVar5;
  param_5->W = (double)auVar3._8_8_;
  return;
}

// ContainsNaN @ 1417bcbe0

bool __thiscall UE::Math::TQuat<float>::ContainsNaN(TQuat<float> *this)

{
  int iVar1;
  
  iVar1 = _finite((double)this->X);
  if (iVar1 != 0) {
    iVar1 = _finite((double)this->Y);
    if (iVar1 != 0) {
      iVar1 = _finite((double)this->Z);
      if (iVar1 != 0) {
        iVar1 = _finite((double)this->W);
        if (iVar1 != 0) {
          return false;
        }
      }
    }
  }
  return true;
}

// ContainsNaN @ 1417bcc50

bool __thiscall UE::Math::TQuat<double>::ContainsNaN(TQuat<double> *this)

{
  int iVar1;
  
  iVar1 = _finite(this->X);
  if (iVar1 != 0) {
    iVar1 = _finite(this->Y);
    if (iVar1 != 0) {
      iVar1 = _finite(this->Z);
      if (iVar1 != 0) {
        iVar1 = _finite(this->W);
        if (iVar1 != 0) {
          return false;
        }
      }
    }
  }
  return true;
}

// DiagnosticCheckNaN @ 1417c4390

void __thiscall UE::Math::TQuat<float>::DiagnosticCheckNaN(TQuat<float> *this,wchar_t *param_1)

{
  return;
}

// DiagnosticCheckNaN @ 1417c43a0

void __thiscall UE::Math::TQuat<float>::DiagnosticCheckNaN(TQuat<float> *this)

{
  return;
}

// DiagnosticCheckNaN @ 1417c43b0

void __thiscall UE::Math::TQuat<double>::DiagnosticCheckNaN(TQuat<double> *this,wchar_t *param_1)

{
  return;
}

// DiagnosticCheckNaN @ 1417c43c0

void __thiscall UE::Math::TQuat<double>::DiagnosticCheckNaN(TQuat<double> *this)

{
  return;
}

// EnforceShortestArcWith @ 1417c4fa0

void __thiscall
UE::Math::TQuat<float>::EnforceShortestArcWith(TQuat<float> *this,TQuat<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (0.0 <= param_1->W * this->W + param_1->Z * this->Z +
             param_1->Y * this->Y + param_1->X * this->X) {
    fVar1 = __real_3f800000 * this->Y;
    fVar2 = __real_3f800000 * this->Z;
    fVar3 = __real_3f800000 * this->W;
    this->X = __real_3f800000 * this->X;
    this->Y = fVar1;
    this->Z = fVar2;
    this->W = fVar3;
    return;
  }
  fVar1 = __real_bf800000 * this->Y;
  fVar2 = __real_bf800000 * this->Z;
  fVar3 = __real_bf800000 * this->W;
  this->X = __real_bf800000 * this->X;
  this->Y = fVar1;
  this->Z = fVar2;
  this->W = fVar3;
  return;
}

// EnforceShortestArcWith @ 1417c5020

void __thiscall
UE::Math::TQuat<double>::EnforceShortestArcWith(TQuat<double> *this,TQuat<double> *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_1->W * this->W + param_1->Z * this->Z + param_1->Y * this->Y + param_1->X * this->X <
      0.0) {
    uVar5 = (undefined4)__real_bff0000000000000;
    uVar6 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  }
  else {
    uVar5 = (undefined4)__real_3ff0000000000000;
    uVar6 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  }
  dVar3 = (double)CONCAT44(uVar6,uVar5) * this->X;
  dVar4 = (double)CONCAT44(uVar6,uVar5) * this->Y;
  auVar2._8_4_ = SUB84(dVar4,0);
  auVar2._0_8_ = dVar3;
  auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  this->X = dVar3;
  this->Y = (double)auVar2._8_8_;
  dVar3 = this->Z * (double)CONCAT44(uVar6,uVar5);
  dVar4 = this->W * (double)CONCAT44(uVar6,uVar5);
  auVar1._8_4_ = SUB84(dVar4,0);
  auVar1._0_8_ = dVar3;
  auVar1._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  this->Z = dVar3;
  this->W = (double)auVar1._8_8_;
  return;
}

// Equals @ 1417c58b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Math::TQuat<float>::Equals(TQuat<float> *this,TQuat<float> *param_1,float param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  int iVar3;
  
  auVar1._4_4_ = -(uint)(param_2 < (float)((uint)(this->Y - param_1->Y) & _UNK_15061cc74));
  auVar1._0_4_ = -(uint)(param_2 <
                        (float)((uint)(this->X - param_1->X) &
                               __xmm_7fffffff7fffffff7fffffff7fffffff));
  auVar1._8_4_ = -(uint)(param_2 < (float)((uint)(this->Z - param_1->Z) & _UNK_15061cc78));
  auVar1._12_4_ = -(uint)(param_2 < (float)((uint)(this->W - param_1->W) & _UNK_15061cc7c));
  iVar3 = movmskps(in_EAX,auVar1);
  if ((iVar3 != 0) &&
     (auVar2._4_4_ = -(uint)(param_2 < (float)((uint)(param_1->Y + this->Y) & _UNK_15061cc74)),
     auVar2._0_4_ = -(uint)(param_2 <
                           (float)((uint)(param_1->X + this->X) &
                                  __xmm_7fffffff7fffffff7fffffff7fffffff)),
     auVar2._8_4_ = -(uint)(param_2 < (float)((uint)(param_1->Z + this->Z) & _UNK_15061cc78)),
     auVar2._12_4_ = -(uint)(param_2 < (float)((uint)(param_1->W + this->W) & _UNK_15061cc7c)),
     iVar3 = movmskps(iVar3,auVar2), iVar3 != 0)) {
    return false;
  }
  return true;
}

// Equals @ 1417c5900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Math::TQuat<double>::Equals(TQuat<double> *this,TQuat<double> *param_1,double param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined4 in_EAX;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  dVar5 = param_1->Z + this->Z;
  dVar6 = param_1->W + this->W;
  dVar11 = this->Z - param_1->Z;
  dVar12 = this->W - param_1->W;
  dVar13 = param_1->X + this->X;
  dVar14 = param_1->Y + this->Y;
  dVar15 = this->X - param_1->X;
  dVar16 = this->Y - param_1->Y;
  lVar10 = -(ulonglong)
            (param_2 <
            (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar12,0) & _UNK_15061cc88));
  auVar1._8_4_ = (int)lVar10;
  auVar1._0_8_ = -(ulonglong)
                  (param_2 <
                  (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar1._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
  iVar8 = movmskpd((int)this,auVar1);
  lVar10 = -(ulonglong)
            (param_2 <
            (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar16,0) & _UNK_15061cc88));
  auVar2._8_4_ = (int)lVar10;
  auVar2._0_8_ = -(ulonglong)
                  (param_2 <
                  (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar2._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
  uVar7 = movmskpd(in_EAX,auVar2);
  uVar9 = iVar8 << 2 | uVar7;
  if (uVar9 != 0) {
    lVar10 = -(ulonglong)
              (param_2 <
              (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar6,0) & _UNK_15061cc88));
    auVar3._8_4_ = (int)lVar10;
    auVar3._0_8_ = -(ulonglong)
                    (param_2 <
                    (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
    ;
    auVar3._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
    uVar9 = movmskpd(uVar9,auVar3);
    lVar10 = -(ulonglong)
              (param_2 <
              (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar14,0) & _UNK_15061cc88));
    auVar4._8_4_ = (int)lVar10;
    auVar4._0_8_ = -(ulonglong)
                    (param_2 <
                    (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar4._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
    iVar8 = movmskpd(uVar7,auVar4);
    if ((uVar9 & 0x3fffffff) != 0 || iVar8 != 0) {
      return false;
    }
  }
  return true;
}

// Error @ 1417c6180

float __cdecl UE::Math::TQuat<float>::Error(TQuat<float> *param_1,TQuat<float> *param_2)

{
  float _X;
  float fVar1;
  
  fVar1 = (float)((uint)(param_1->W * param_2->W + param_1->Z * param_2->Z +
                        param_1->Y * param_2->Y + param_1->X * param_2->X) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (__real_3f7ffffe <= fVar1) {
    return 0.0;
  }
  _X = __real_bf800000;
  if ((__real_bf800000 <= fVar1) && (_X = fVar1, __real_3f800000 <= fVar1)) {
    _X = __real_3f800000;
  }
  fVar1 = acosf(_X);
  return fVar1 * __real_3ea2f983;
}

// Error @ 1417c6200

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl UE::Math::TQuat<double>::Error(TQuat<double> *param_1,TQuat<double> *param_2)

{
  double _X;
  double dVar1;
  
  dVar1 = param_1->W * param_2->W + param_1->Z * param_2->Z +
          param_1->Y * param_2->Y + param_1->X * param_2->X;
  dVar1 = (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (__real_3fefffffc0000000 <= dVar1) {
    return 0.0;
  }
  _X = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar1) && (_X = dVar1, __real_3ff0000000000000 <= dVar1)) {
    _X = __real_3ff0000000000000;
  }
  dVar1 = acos(_X);
  return dVar1 * ___real_3fd45f306446f9b4;
}

// ErrorAutoNormalize @ 1417c63b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl
UE::Math::TQuat<float>::ErrorAutoNormalize(TQuat<float> *param_1,TQuat<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  
  fVar15 = param_1->X;
  fVar3 = param_1->Y;
  fVar1 = param_1->Z;
  fVar2 = param_1->W;
  fVar7 = fVar3 * fVar3 + fVar15 * fVar15;
  fVar9 = fVar15 * fVar15 + fVar3 * fVar3;
  fVar11 = fVar2 * fVar2 + fVar1 * fVar1;
  fVar13 = fVar1 * fVar1 + fVar2 * fVar2;
  auVar4._0_4_ = fVar11 + fVar7;
  auVar4._4_4_ = fVar13 + fVar9;
  auVar4._8_4_ = fVar7 + fVar11;
  auVar4._12_4_ = fVar9 + fVar13;
  auVar5 = sqrtps(auVar4,auVar4);
  auVar16 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar5);
  fVar7 = param_2->X;
  fVar9 = param_2->Y;
  fVar11 = param_2->Z;
  fVar13 = param_2->W;
  fVar8 = fVar9 * fVar9 + fVar7 * fVar7;
  fVar10 = fVar7 * fVar7 + fVar9 * fVar9;
  fVar12 = fVar13 * fVar13 + fVar11 * fVar11;
  fVar14 = fVar11 * fVar11 + fVar13 * fVar13;
  auVar5._0_4_ = fVar12 + fVar8;
  auVar5._4_4_ = fVar14 + fVar10;
  auVar5._8_4_ = fVar8 + fVar12;
  auVar5._12_4_ = fVar10 + fVar14;
  auVar6 = sqrtps(auVar5,auVar5);
  auVar6 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar6);
  fVar15 = (float)((uint)((float)((uint)(auVar16._0_4_ * fVar15) &
                                  -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar4._0_4_) |
                                 ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar4._0_4_) &
                                 GlobalVectorConstants::Float0001.m128_u32[0]) *
                          (float)((uint)(auVar6._0_4_ * fVar7) &
                                  -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar5._0_4_) |
                                 ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar5._0_4_) &
                                 GlobalVectorConstants::Float0001.m128_u32[0]) +
                          (float)((uint)(auVar16._4_4_ * fVar3) &
                                  -(uint)(_UNK_1506895d4 <= auVar4._4_4_) |
                                 ~-(uint)(_UNK_1506895d4 <= auVar4._4_4_) &
                                 GlobalVectorConstants::Float0001.m128_u32[1]) *
                          (float)((uint)(auVar6._4_4_ * fVar9) &
                                  -(uint)(_UNK_1506895d4 <= auVar5._4_4_) |
                                 ~-(uint)(_UNK_1506895d4 <= auVar5._4_4_) &
                                 GlobalVectorConstants::Float0001.m128_u32[1]) +
                         (float)((uint)(auVar16._8_4_ * fVar1) &
                                 -(uint)(_UNK_1506895d8 <= auVar4._8_4_) |
                                ~-(uint)(_UNK_1506895d8 <= auVar4._8_4_) &
                                GlobalVectorConstants::Float0001.m128_u32[2]) *
                         (float)((uint)(auVar6._8_4_ * fVar11) &
                                 -(uint)(_UNK_1506895d8 <= auVar5._8_4_) |
                                ~-(uint)(_UNK_1506895d8 <= auVar5._8_4_) &
                                GlobalVectorConstants::Float0001.m128_u32[2]) +
                         (float)((uint)(auVar16._12_4_ * fVar2) &
                                 -(uint)(_UNK_1506895dc <= auVar4._12_4_) |
                                ~-(uint)(_UNK_1506895dc <= auVar4._12_4_) &
                                GlobalVectorConstants::Float0001.m128_u32[3]) *
                         (float)((uint)(auVar6._12_4_ * fVar13) &
                                 -(uint)(_UNK_1506895dc <= auVar5._12_4_) |
                                ~-(uint)(_UNK_1506895dc <= auVar5._12_4_) &
                                GlobalVectorConstants::Float0001.m128_u32[3])) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (__real_3f7ffffe <= fVar15) {
    return 0.0;
  }
  fVar3 = __real_bf800000;
  if ((__real_bf800000 <= fVar15) && (fVar3 = fVar15, __real_3f800000 <= fVar15)) {
    fVar3 = __real_3f800000;
  }
  fVar15 = acosf(fVar3);
  return fVar15 * __real_3ea2f983;
}

// ErrorAutoNormalize @ 1417c6550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl
UE::Math::TQuat<double>::ErrorAutoNormalize(TQuat<double> *param_1,TQuat<double> *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  
  dVar5 = param_1->X;
  dVar6 = param_1->Y;
  dVar7 = param_1->Z;
  dVar8 = param_1->W;
  auVar16._0_8_ = dVar5 * dVar5 + dVar7 * dVar7;
  auVar16._8_8_ = dVar6 * dVar6 + dVar8 * dVar8;
  dVar15 = auVar16._0_8_ + auVar16._8_8_;
  auVar17._8_4_ = SUB84(dVar15,0);
  auVar17._0_8_ = auVar16._8_8_ + auVar16._0_8_;
  auVar17._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  auVar17 = sqrtpd(auVar16,auVar17);
  auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar17);
  auVar17 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar17);
  dVar9 = param_2->X;
  dVar10 = param_2->Y;
  uVar11 = -(ulonglong)(__real_3e45798ee0000000 <= auVar16._8_8_ + auVar16._0_8_);
  uVar12 = -(ulonglong)(__real_3e45798ee0000000 <= dVar15);
  uVar19 = (uint)(uVar11 >> 0x20);
  uVar20 = (uint)(uVar12 >> 0x20);
  auVar34._0_8_ = uVar11 & (ulonglong)(auVar33._0_8_ * dVar5);
  uVar4 = uVar12 & (ulonglong)(auVar33._8_8_ * dVar6);
  auVar34._8_4_ = (undefined4)uVar4;
  auVar34._12_4_ = (undefined4)(uVar4 >> 0x20);
  auVar30._0_8_ = (ulonglong)(auVar17._0_8_ * dVar7) & uVar11;
  uVar4 = (ulonglong)(auVar17._8_8_ * dVar8) & uVar12;
  auVar30._8_4_ = (undefined4)uVar4;
  auVar30._12_4_ = (undefined4)(uVar4 >> 0x20);
  uVar25 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  uVar26 = (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  uVar27 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  uVar28 = (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  uVar21 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  uVar22 = (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  uVar23 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar24 = (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar33._4_4_ = ~uVar19 & uVar22;
  auVar33._0_4_ = ~(uint)uVar11 & uVar21;
  auVar33._8_4_ = ~(uint)uVar12 & uVar23;
  auVar33._12_4_ = ~uVar20 & uVar24;
  auVar2._4_4_ = ~uVar19 & uVar26;
  auVar2._0_4_ = ~(uint)uVar11 & uVar25;
  auVar2._8_4_ = ~(uint)uVar12 & uVar27;
  auVar2._12_4_ = ~uVar20 & uVar28;
  dVar5 = param_2->Z;
  dVar6 = param_2->W;
  auVar18._0_8_ = dVar9 * dVar9 + dVar5 * dVar5;
  auVar18._8_8_ = dVar10 * dVar10 + dVar6 * dVar6;
  dVar15 = auVar18._0_8_ + auVar18._8_8_;
  auVar31._8_4_ = SUB84(dVar15,0);
  auVar31._0_8_ = auVar18._8_8_ + auVar18._0_8_;
  auVar31._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  auVar17 = sqrtpd(auVar18,auVar31);
  uVar11 = -(ulonglong)(__real_3e45798ee0000000 <= auVar18._8_8_ + auVar18._0_8_);
  uVar12 = -(ulonglong)(__real_3e45798ee0000000 <= dVar15);
  uVar19 = (uint)(uVar11 >> 0x20);
  uVar20 = (uint)(uVar12 >> 0x20);
  auVar31 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar17);
  auVar17 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar17);
  auVar32._0_8_ = uVar11 & (ulonglong)(auVar31._0_8_ * dVar9);
  uVar4 = uVar12 & (ulonglong)(auVar31._8_8_ * dVar10);
  auVar32._8_4_ = (undefined4)uVar4;
  auVar32._12_4_ = (undefined4)(uVar4 >> 0x20);
  auVar1._4_4_ = ~uVar19 & uVar22;
  auVar1._0_4_ = ~(uint)uVar11 & uVar21;
  auVar1._8_4_ = ~(uint)uVar12 & uVar23;
  auVar1._12_4_ = ~uVar20 & uVar24;
  auVar29._0_8_ = (ulonglong)(auVar17._0_8_ * dVar5) & uVar11;
  uVar4 = (ulonglong)(auVar17._8_8_ * dVar6) & uVar12;
  auVar29._8_4_ = (undefined4)uVar4;
  auVar29._12_4_ = (undefined4)(uVar4 >> 0x20);
  auVar3._4_4_ = ~uVar19 & uVar26;
  auVar3._0_4_ = ~(uint)uVar11 & uVar25;
  auVar3._8_4_ = ~(uint)uVar12 & uVar27;
  auVar3._12_4_ = ~uVar20 & uVar28;
  dVar15 = SUB168(auVar34 | auVar33,0) * SUB168(auVar32 | auVar1,0) +
           SUB168(auVar34 | auVar33,8) * SUB168(auVar32 | auVar1,8) +
           SUB168(auVar30 | auVar2,0) * SUB168(auVar29 | auVar3,0) +
           SUB168(auVar30 | auVar2,8) * SUB168(auVar29 | auVar3,8);
  dVar15 = (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (__real_3fefffffc0000000 <= dVar15) {
    dVar15 = 0.0;
  }
  else {
    uVar13 = SUB84(__real_bff0000000000000,0);
    uVar14 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    if (__real_bff0000000000000 <= dVar15) {
      if (__real_3ff0000000000000 <= dVar15) {
        dVar15 = __real_3ff0000000000000;
      }
      uVar13 = SUB84(dVar15,0);
      uVar14 = (undefined4)((ulonglong)dVar15 >> 0x20);
    }
    dVar15 = acos((double)CONCAT44(uVar14,uVar13));
    dVar15 = dVar15 * ___real_3fd45f306446f9b4;
  }
  return dVar15;
}

// Euler @ 1417c67c0

TVector<float> * __thiscall
UE::Math::TQuat<float>::Euler(TQuat<float> *this,TVector<float> *__return_storage_ptr__)

{
  float fVar1;
  TRotator<float> *pTVar2;
  TRotator<float> local_18;
  
  pTVar2 = Rotator(this,&local_18);
  (__return_storage_ptr__->field0_0x0)._s_0.X = pTVar2->Roll;
  fVar1 = pTVar2->Pitch;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = pTVar2->Yaw;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar1;
  return __return_storage_ptr__;
}

// Euler @ 1417c6800

TVector<double> * __thiscall
UE::Math::TQuat<double>::Euler(TQuat<double> *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  TRotator<double> *pTVar2;
  TRotator<double> local_28;
  
  pTVar2 = Rotator(this,&local_28);
  (__return_storage_ptr__->field0_0x0)._s_0.X = pTVar2->Roll;
  dVar1 = pTVar2->Pitch;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = pTVar2->Yaw;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// Exp @ 1417cbeb0

TQuat<float> * __thiscall
UE::Math::TQuat<float>::Exp(TQuat<float> *this,TQuat<float> *__return_storage_ptr__)

{
  float extraout_XMM0_Da;
  float fVar1;
  float fVar2;
  float extraout_XMM0_Db;
  float fVar3;
  float fVar4;
  
  fVar3 = this->Z;
  fVar2 = this->X;
  fVar4 = this->Y;
  __libm_sse2_sincosf_();
  __return_storage_ptr__->W = extraout_XMM0_Db;
  if (__real_322bcc77 <= (float)((uint)extraout_XMM0_Da & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar1 = extraout_XMM0_Da / SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3);
    fVar3 = fVar1 * fVar3;
    fVar4 = fVar1 * fVar4;
    fVar2 = fVar1 * fVar2;
  }
  __return_storage_ptr__->X = fVar2;
  __return_storage_ptr__->Y = fVar4;
  __return_storage_ptr__->Z = fVar3;
  return __return_storage_ptr__;
}

// Exp @ 1417cbf90

TQuat<double> * __thiscall
UE::Math::TQuat<double>::Exp(TQuat<double> *this,TQuat<double> *__return_storage_ptr__)

{
  double dVar1;
  double extraout_XMM0_Qa;
  double dVar2;
  double dVar3;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar4;
  undefined1 unaff_XMM9 [16];
  undefined1 auVar5 [16];
  
  dVar4 = this->Z;
  dVar3 = this->X;
  dVar1 = this->Y;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar1 * dVar1 + dVar3 * dVar3 + dVar4 * dVar4;
  auVar5 = sqrtpd(unaff_XMM9,auVar5);
  __libm_sse2_sincos_();
  __return_storage_ptr__->W = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
  if (__real_3e45798ee0000000 <=
      (double)CONCAT44((uint)((ulonglong)extraout_XMM0_Qa >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(extraout_XMM0_Qa,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar2 = extraout_XMM0_Qa / auVar5._0_8_;
    dVar4 = dVar2 * dVar4;
    dVar1 = dVar2 * dVar1;
    dVar3 = dVar2 * dVar3;
  }
  __return_storage_ptr__->X = dVar3;
  __return_storage_ptr__->Y = dVar1;
  __return_storage_ptr__->Z = dVar4;
  return __return_storage_ptr__;
}

// FastBilerp @ 1417cc340

TQuat<float> * __cdecl
UE::Math::TQuat<float>::FastBilerp
          (TQuat<float> *__return_storage_ptr__,TQuat<float> *param_1,TQuat<float> *param_2,
          TQuat<float> *param_3,TQuat<float> *param_4,float param_5,float param_6)

{
  float fVar1;
  float fVar2;
  TQuat<float> local_28;
  TQuat<float> local_18;
  
  fVar1 = __real_bf800000;
  if (0.0 <= param_3->W * param_4->W + param_3->Z * param_4->Z +
             param_3->Y * param_4->Y + param_3->X * param_4->X) {
    fVar1 = __real_3f800000;
  }
  fVar2 = __real_3f800000 - param_5;
  fVar1 = fVar2 * fVar1;
  local_28.X = fVar1 * param_3->X + param_5 * param_4->X;
  local_28.Y = fVar1 * param_3->Y + param_5 * param_4->Y;
  local_28.Z = fVar1 * param_3->Z + param_5 * param_4->Z;
  local_28.W = fVar1 * param_3->W + param_5 * param_4->W;
  if (param_1->W * param_2->W + param_1->Z * param_2->Z +
      param_1->Y * param_2->Y + param_1->X * param_2->X < 0.0) {
    fVar2 = (float)((uint)fVar2 ^ __xmm_80000000800000008000000080000000);
  }
  local_18.X = fVar2 * param_1->X + param_5 * param_2->X;
  local_18.Y = fVar2 * param_1->Y + param_5 * param_2->Y;
  local_18.Z = fVar2 * param_1->Z + param_5 * param_2->Z;
  local_18.W = fVar2 * param_1->W + param_5 * param_2->W;
  FastLerp(__return_storage_ptr__,&local_18,&local_28,param_6);
  return __return_storage_ptr__;
}

// FastBilerp @ 1417cc450

TQuat<double> * __cdecl
UE::Math::TQuat<double>::FastBilerp
          (TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1,TQuat<double> *param_2,
          TQuat<double> *param_3,TQuat<double> *param_4,double param_5,double param_6)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar9 = __real_bff0000000000000;
  if (0.0 <= param_3->Y * param_4->Y + param_3->X * param_4->X +
             param_3->W * param_4->W + param_4->Z * param_3->Z) {
    dVar9 = __real_3ff0000000000000;
  }
  dVar11 = __real_3ff0000000000000 - param_5;
  dVar9 = dVar11 * dVar9;
  dVar7 = param_5 * param_4->Z + dVar9 * param_3->Z;
  dVar8 = param_5 * param_4->W + dVar9 * param_3->W;
  dVar6 = dVar9 * param_3->X + param_5 * param_4->X;
  dVar9 = dVar9 * param_3->Y + param_5 * param_4->Y;
  if (param_1->W * param_2->W + param_2->Z * param_1->Z +
      param_1->Y * param_2->Y + param_1->X * param_2->X < 0.0) {
    dVar11 = (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              SUB84(dVar11,0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  dVar2 = param_5 * param_2->Z + dVar11 * param_1->Z;
  dVar3 = param_5 * param_2->W + dVar11 * param_1->W;
  dVar5 = dVar11 * param_1->X + param_5 * param_2->X;
  dVar11 = dVar11 * param_1->Y + param_5 * param_2->Y;
  dVar10 = param_6;
  dVar12 = __real_3ff0000000000000;
  if (dVar9 * dVar11 + dVar6 * dVar5 + dVar7 * dVar2 + dVar8 * dVar3 < 0.0) {
    dVar10 = (double)CONCAT44((uint)((ulonglong)param_6 >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              SUB84(param_6,0) ^ (uint)__xmm_80000000000000008000000000000000);
    dVar12 = __real_bff0000000000000;
  }
  dVar12 = dVar12 - dVar10;
  dVar5 = dVar5 * dVar12 + dVar6 * param_6;
  dVar11 = dVar11 * dVar12 + dVar9 * param_6;
  dVar9 = dVar2 * dVar12 + dVar7 * param_6;
  dVar6 = dVar3 * dVar12 + dVar8 * param_6;
  auVar4._8_4_ = SUB84(dVar11,0);
  auVar4._0_8_ = dVar5;
  auVar4._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  __return_storage_ptr__->X = dVar5;
  __return_storage_ptr__->Y = (double)auVar4._8_8_;
  auVar1._8_4_ = SUB84(dVar6,0);
  auVar1._0_8_ = dVar9;
  auVar1._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  __return_storage_ptr__->Z = dVar9;
  __return_storage_ptr__->W = (double)auVar1._8_8_;
  return __return_storage_ptr__;
}

// FastLerp @ 1417cc640

TQuat<float> * __cdecl
UE::Math::TQuat<float>::FastLerp
          (TQuat<float> *__return_storage_ptr__,TQuat<float> *param_1,TQuat<float> *param_2,
          float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = param_3;
  fVar7 = __real_3f800000;
  if (param_1->W * param_2->W + param_1->Z * param_2->Z +
      param_1->Y * param_2->Y + param_1->X * param_2->X < 0.0) {
    fVar6 = (float)((uint)param_3 ^ __xmm_80000000800000008000000080000000);
    fVar7 = __real_bf800000;
  }
  fVar7 = fVar7 - fVar6;
  fVar6 = param_2->Y;
  fVar1 = param_2->Z;
  fVar2 = param_2->W;
  fVar3 = param_1->Y;
  fVar4 = param_1->Z;
  fVar5 = param_1->W;
  __return_storage_ptr__->X = fVar7 * param_1->X + param_3 * param_2->X;
  __return_storage_ptr__->Y = fVar7 * fVar3 + param_3 * fVar6;
  __return_storage_ptr__->Z = fVar7 * fVar4 + param_3 * fVar1;
  __return_storage_ptr__->W = fVar7 * fVar5 + param_3 * fVar2;
  return __return_storage_ptr__;
}

// FastLerp @ 1417cc6c0

TQuat<double> * __cdecl
UE::Math::TQuat<double>::FastLerp
          (TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1,TQuat<double> *param_2,
          double param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (param_1->Y * param_2->Y + param_1->X * param_2->X +
      param_1->W * param_2->W + param_2->Z * param_1->Z < 0.0) {
    uVar7 = (undefined4)__real_bff0000000000000;
    uVar8 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    dVar6 = (double)CONCAT44((uint)((ulonglong)param_3 >> 0x20) ^
                             __xmm_80000000000000008000000000000000._4_4_,
                             SUB84(param_3,0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  else {
    uVar7 = (undefined4)__real_3ff0000000000000;
    uVar8 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    dVar6 = param_3;
  }
  dVar6 = (double)CONCAT44(uVar8,uVar7) - dVar6;
  dVar2 = param_3 * param_2->X + dVar6 * param_1->X;
  dVar3 = param_3 * param_2->Y + dVar6 * param_1->Y;
  dVar5 = param_3 * param_2->Z + dVar6 * param_1->Z;
  dVar6 = param_3 * param_2->W + dVar6 * param_1->W;
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  __return_storage_ptr__->X = dVar2;
  __return_storage_ptr__->Y = (double)auVar1._8_8_;
  auVar4._8_4_ = SUB84(dVar6,0);
  auVar4._0_8_ = dVar5;
  auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  __return_storage_ptr__->Z = dVar5;
  __return_storage_ptr__->W = (double)auVar4._8_8_;
  return __return_storage_ptr__;
}

// FindBetween @ 1417cdc70

TQuat<float> * __cdecl
UE::Math::TQuat<float>::FindBetween
          (TQuat<float> *__return_storage_ptr__,TVector<float> *param_1,TVector<float> *param_2)

{
  FindBetweenVectors(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// FindBetween @ 1417cdc90

TQuat<double> * __cdecl
UE::Math::TQuat<double>::FindBetween
          (TQuat<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2)

{
  FindBetweenVectors(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// FindBetweenNormals @ 1417cdcb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TQuat<float> * __cdecl
UE::Math::TQuat<float>::FindBetweenNormals
          (TQuat<float> *__return_storage_ptr__,TVector<float> *param_1,TVector<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  fVar1 = (param_1->field0_0x0)._s_0.X;
  fVar2 = (param_1->field0_0x0)._s_0.Y;
  uVar12 = (param_2->field0_0x0)._s_0.X;
  uVar18 = (param_2->field0_0x0)._s_0.Y;
  uVar19 = (param_2->field0_0x0)._s_0.Z;
  fVar3 = (param_1->field0_0x0)._s_0.Z;
  fVar17 = fVar2 * (float)uVar18 + fVar1 * (float)uVar12 + fVar3 * (float)uVar19 + __real_3f800000;
  if (fVar17 < __real_358637bd) {
    if (((float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
         (float)((uint)fVar2 & __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
       (uVar18 = TVector<float>::YAxisVector.field0_0x0._s_0.Y,
       uVar19 = TVector<float>::YAxisVector.field0_0x0._s_0.Z,
       uVar12 = TVector<float>::YAxisVector.field0_0x0._s_0.X,
       (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
       (float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
      uVar18 = (uint)TVector<float>::XAxisVector.field0_0x0._s_0.Y ^
               __xmm_80000000800000008000000080000000;
      uVar19 = (uint)TVector<float>::XAxisVector.field0_0x0._s_0.Z ^
               __xmm_80000000800000008000000080000000;
      uVar12 = (uint)TVector<float>::XAxisVector.field0_0x0._s_0.X ^
               __xmm_80000000800000008000000080000000;
    }
    fVar17 = 0.0;
    fVar16 = fVar2 * (float)uVar19 - fVar3 * (float)uVar18;
  }
  else {
    fVar16 = fVar2 * (float)uVar19 - (float)uVar18 * fVar3;
  }
  __return_storage_ptr__->X = fVar16;
  __return_storage_ptr__->Y = (float)uVar12 * fVar3 - fVar1 * (float)uVar19;
  __return_storage_ptr__->Z = (float)uVar18 * fVar1 - fVar2 * (float)uVar12;
  __return_storage_ptr__->W = fVar17;
  fVar1 = __return_storage_ptr__->X;
  fVar2 = __return_storage_ptr__->Y;
  fVar3 = __return_storage_ptr__->Z;
  fVar17 = __return_storage_ptr__->W;
  fVar16 = fVar2 * fVar2 + fVar1 * fVar1;
  fVar13 = fVar1 * fVar1 + fVar2 * fVar2;
  fVar14 = fVar17 * fVar17 + fVar3 * fVar3;
  fVar15 = fVar3 * fVar3 + fVar17 * fVar17;
  auVar10._0_4_ = fVar14 + fVar16;
  auVar10._4_4_ = fVar15 + fVar13;
  auVar10._8_4_ = fVar16 + fVar14;
  auVar10._12_4_ = fVar13 + fVar15;
  bVar7 = _UNK_1506895d4 <= auVar10._4_4_;
  bVar8 = _UNK_1506895d8 <= auVar10._8_4_;
  bVar9 = _UNK_1506895dc <= auVar10._12_4_;
  auVar11 = sqrtps(auVar10,auVar10);
  auVar11 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar11);
  uVar4 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar5 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar6 = GlobalVectorConstants::Float0001.m128_u32[3];
  __return_storage_ptr__->X =
       (float)((uint)(auVar11._0_4_ * fVar1) &
               -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar10._0_4_) |
              ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar10._0_4_) &
              GlobalVectorConstants::Float0001.m128_u32[0]);
  __return_storage_ptr__->Y =
       (float)((uint)(auVar11._4_4_ * fVar2) & -(uint)bVar7 | ~-(uint)bVar7 & uVar4);
  __return_storage_ptr__->Z =
       (float)((uint)(auVar11._8_4_ * fVar3) & -(uint)bVar8 | ~-(uint)bVar8 & uVar5);
  __return_storage_ptr__->W =
       (float)((uint)(auVar11._12_4_ * fVar17) & -(uint)bVar9 | ~-(uint)bVar9 & uVar6);
  return __return_storage_ptr__;
}

// FindBetweenNormals @ 1417cde80

TQuat<double> * __cdecl
UE::Math::TQuat<double>::FindBetweenNormals
          (TQuat<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar11 = (param_1->field0_0x0)._s_0.Y;
  dVar10 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  dVar4 = (param_2->field0_0x0)._s_0.Z;
  auVar16._0_8_ = dVar11 * dVar3 + dVar1 * dVar10 + dVar2 * dVar4 + __real_3ff0000000000000;
  auVar16._8_8_ = 0;
  if (auVar16._0_8_ < __real_3eb0c6f7a0000000) {
    dVar10 = (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    uVar8 = SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar9 = (uint)((ulonglong)dVar11 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((dVar10 < (double)CONCAT44(uVar9,uVar8) || dVar10 == (double)CONCAT44(uVar9,uVar8)) ||
       (uVar8 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar9 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       dVar10 < (double)CONCAT44(uVar9,uVar8) || dVar10 == (double)CONCAT44(uVar9,uVar8))) {
      uVar8 = (uint)__xmm_80000000000000008000000000000000;
      uVar9 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      uVar19 = SUB84(TVector<double>::XAxisVector.field0_0x0._s_0.X,0) ^ uVar8;
      uVar20 = (uint)((ulonglong)TVector<double>::XAxisVector.field0_0x0._0_8_ >> 0x20) ^ uVar9;
      uVar21 = SUB84(TVector<double>::XAxisVector.field0_0x0._s_0.Y,0) ^ uVar8;
      uVar22 = (uint)((ulonglong)TVector<double>::XAxisVector.field0_0x0._8_8_ >> 0x20) ^ uVar9;
      uVar8 = SUB84(TVector<double>::XAxisVector.field0_0x0._s_0.Z,0) ^ uVar8;
      uVar9 = (uint)((ulonglong)TVector<double>::XAxisVector.field0_0x0._16_8_ >> 0x20) ^ uVar9;
    }
    else {
      uVar19 = SUB84(TVector<double>::YAxisVector.field0_0x0._s_0.X,0);
      uVar20 = (uint)((ulonglong)TVector<double>::YAxisVector.field0_0x0._0_8_ >> 0x20);
      uVar21 = SUB84(TVector<double>::YAxisVector.field0_0x0._s_0.Y,0);
      uVar22 = (uint)((ulonglong)TVector<double>::YAxisVector.field0_0x0._8_8_ >> 0x20);
      uVar8 = SUB84(TVector<double>::YAxisVector.field0_0x0._s_0.Z,0);
      uVar9 = (uint)((ulonglong)TVector<double>::YAxisVector.field0_0x0._16_8_ >> 0x20);
    }
    auVar16 = ZEXT816(0);
    dVar4 = (double)CONCAT44(uVar9,uVar8);
    dVar14 = dVar11 * (double)CONCAT44(uVar9,uVar8) - dVar2 * (double)CONCAT44(uVar22,uVar21);
    dVar3 = (double)CONCAT44(uVar22,uVar21);
    dVar10 = (double)CONCAT44(uVar20,uVar19);
  }
  else {
    dVar14 = dVar11 * dVar4 - dVar3 * dVar2;
  }
  __return_storage_ptr__->X = dVar14;
  __return_storage_ptr__->Y = dVar10 * dVar2 - dVar1 * dVar4;
  __return_storage_ptr__->Z = dVar3 * dVar1 - dVar11 * dVar10;
  __return_storage_ptr__->W = auVar16._0_8_;
  dVar10 = __return_storage_ptr__->Z;
  dVar2 = __return_storage_ptr__->W;
  dVar3 = __return_storage_ptr__->X;
  dVar4 = __return_storage_ptr__->Y;
  dVar11 = dVar10 * dVar10 + dVar3 * dVar3;
  dVar14 = dVar2 * dVar2 + dVar4 * dVar4;
  dVar1 = dVar14 + dVar11;
  dVar11 = dVar11 + dVar14;
  auVar17._8_4_ = SUB84(dVar11,0);
  auVar17._0_8_ = dVar1;
  auVar17._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar16 = sqrtpd(auVar16,auVar17);
  uVar6 = -(ulonglong)(__real_3e45798ee0000000 <= dVar1);
  uVar7 = -(ulonglong)(__real_3e45798ee0000000 <= dVar11);
  uVar8 = (uint)(uVar6 >> 0x20);
  uVar9 = (uint)(uVar7 >> 0x20);
  auVar17 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar16);
  auVar18._0_8_ = uVar6 & (ulonglong)(auVar17._0_8_ * dVar3);
  uVar5 = uVar7 & (ulonglong)(auVar17._8_8_ * dVar4);
  auVar18._8_4_ = (undefined4)uVar5;
  auVar18._12_4_ = (undefined4)(uVar5 >> 0x20);
  auVar12._0_4_ = ~(uint)uVar6 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar12._4_4_ =
       ~uVar8 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar12._8_4_ = ~(uint)uVar7 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar12._12_4_ =
       ~uVar9 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar16 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar16);
  auVar15._0_4_ = ~(uint)uVar6 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar15._4_4_ =
       ~uVar8 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar15._8_4_ = ~(uint)uVar7 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar15._12_4_ =
       ~uVar9 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar13._0_8_ = (ulonglong)(auVar16._0_8_ * dVar10) & uVar6;
  uVar7 = (ulonglong)(auVar16._8_8_ * dVar2) & uVar7;
  auVar13._8_4_ = (undefined4)uVar7;
  auVar13._12_4_ = (undefined4)(uVar7 >> 0x20);
  __return_storage_ptr__->X = (double)SUB168(auVar18 | auVar12,0);
  __return_storage_ptr__->Y = (double)SUB168(auVar18 | auVar12,8);
  __return_storage_ptr__->Z = (double)SUB168(auVar15 | auVar13,0);
  __return_storage_ptr__->W = (double)SUB168(auVar15 | auVar13,8);
  return __return_storage_ptr__;
}

// FindBetweenVectors @ 1417ce090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TQuat<float> * __cdecl
UE::Math::TQuat<float>::FindBetweenVectors
          (TQuat<float> *__return_storage_ptr__,TVector<float> *param_1,TVector<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  
  fVar1 = (param_1->field0_0x0)._s_0.Y;
  fVar2 = (param_1->field0_0x0)._s_0.Z;
  fVar3 = (param_1->field0_0x0)._s_0.X;
  uVar18 = (param_2->field0_0x0)._s_0.Z;
  uVar12 = (param_2->field0_0x0)._s_0.X;
  uVar16 = (param_2->field0_0x0)._s_0.Y;
  fVar17 = SQRT(((float)uVar16 * (float)uVar16 + (float)uVar12 * (float)uVar12 +
                (float)uVar18 * (float)uVar18) * (fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2));
  fVar19 = (float)uVar16 * fVar1 + (float)uVar12 * fVar3 + (float)uVar18 * fVar2 + fVar17;
  if (fVar19 < fVar17 * __real_358637bd) {
    if (((float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
         (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
       (uVar18 = TVector<float>::YAxisVector.field0_0x0._s_0.Z,
       uVar16 = TVector<float>::YAxisVector.field0_0x0._s_0.Y,
       uVar12 = TVector<float>::YAxisVector.field0_0x0._s_0.X,
       (float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
       (float)((uint)fVar2 & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
      uVar18 = (uint)TVector<float>::XAxisVector.field0_0x0._s_0.Z ^
               __xmm_80000000800000008000000080000000;
      uVar16 = (uint)TVector<float>::XAxisVector.field0_0x0._s_0.Y ^
               __xmm_80000000800000008000000080000000;
      uVar12 = (uint)TVector<float>::XAxisVector.field0_0x0._s_0.X ^
               __xmm_80000000800000008000000080000000;
    }
    fVar19 = 0.0;
    fVar17 = fVar3 * (float)uVar16 - fVar1 * (float)uVar12;
  }
  else {
    fVar17 = fVar3 * (float)uVar16 - fVar1 * (float)uVar12;
  }
  __return_storage_ptr__->X = fVar1 * (float)uVar18 - fVar2 * (float)uVar16;
  __return_storage_ptr__->Y = fVar2 * (float)uVar12 - fVar3 * (float)uVar18;
  __return_storage_ptr__->Z = fVar17;
  __return_storage_ptr__->W = fVar19;
  fVar1 = __return_storage_ptr__->X;
  fVar2 = __return_storage_ptr__->Y;
  fVar3 = __return_storage_ptr__->Z;
  fVar17 = __return_storage_ptr__->W;
  fVar19 = fVar2 * fVar2 + fVar1 * fVar1;
  fVar13 = fVar1 * fVar1 + fVar2 * fVar2;
  fVar14 = fVar17 * fVar17 + fVar3 * fVar3;
  fVar15 = fVar3 * fVar3 + fVar17 * fVar17;
  auVar10._0_4_ = fVar14 + fVar19;
  auVar10._4_4_ = fVar15 + fVar13;
  auVar10._8_4_ = fVar19 + fVar14;
  auVar10._12_4_ = fVar13 + fVar15;
  bVar7 = _UNK_1506895d4 <= auVar10._4_4_;
  bVar8 = _UNK_1506895d8 <= auVar10._8_4_;
  bVar9 = _UNK_1506895dc <= auVar10._12_4_;
  auVar11 = sqrtps(auVar10,auVar10);
  auVar11 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar11);
  uVar4 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar5 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar6 = GlobalVectorConstants::Float0001.m128_u32[3];
  __return_storage_ptr__->X =
       (float)((uint)(auVar11._0_4_ * fVar1) &
               -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar10._0_4_) |
              ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar10._0_4_) &
              GlobalVectorConstants::Float0001.m128_u32[0]);
  __return_storage_ptr__->Y =
       (float)((uint)(auVar11._4_4_ * fVar2) & -(uint)bVar7 | ~-(uint)bVar7 & uVar4);
  __return_storage_ptr__->Z =
       (float)((uint)(auVar11._8_4_ * fVar3) & -(uint)bVar8 | ~-(uint)bVar8 & uVar5);
  __return_storage_ptr__->W =
       (float)((uint)(auVar11._12_4_ * fVar17) & -(uint)bVar9 | ~-(uint)bVar9 & uVar6);
  return __return_storage_ptr__;
}

// FindBetweenVectors @ 1417ce2c0

TQuat<double> * __cdecl
UE::Math::TQuat<double>::FindBetweenVectors
          (TQuat<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  double dVar13;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar14;
  undefined1 auVar16 [16];
  undefined8 uVar15;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint uVar21;
  uint uVar22;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar10 = (param_1->field0_0x0)._s_0.Z;
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar14 = (param_2->field0_0x0)._s_0.Z;
  uVar15 = (param_2->field0_0x0)._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  auVar16._0_8_ =
       (dVar3 * dVar3 + (double)uVar15 * (double)uVar15 + dVar14 * dVar14) *
       (dVar1 * dVar1 + dVar2 * dVar2 + dVar10 * dVar10);
  auVar16._8_8_ = 0;
  auVar16 = sqrtpd(auVar16,auVar16);
  dVar4 = dVar3 * dVar1 + (double)uVar15 * dVar2 + dVar14 * dVar10 + auVar16._0_8_;
  if (dVar4 < auVar16._0_8_ * __real_3eb0c6f7a0000000) {
    dVar14 = (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    uVar8 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar9 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((dVar14 < (double)CONCAT44(uVar9,uVar8) || dVar14 == (double)CONCAT44(uVar9,uVar8)) ||
       (uVar8 = SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar9 = (uint)((ulonglong)dVar10 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       dVar14 < (double)CONCAT44(uVar9,uVar8) || dVar14 == (double)CONCAT44(uVar9,uVar8))) {
      uVar8 = (uint)__xmm_80000000000000008000000000000000;
      uVar9 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      uVar15 = CONCAT44((uint)((ulonglong)TVector<double>::XAxisVector.field0_0x0._0_8_ >> 0x20) ^
                        uVar9,SUB84(TVector<double>::XAxisVector.field0_0x0._s_0.X,0) ^ uVar8);
      uVar21 = SUB84(TVector<double>::XAxisVector.field0_0x0._s_0.Y,0) ^ uVar8;
      uVar22 = (uint)((ulonglong)TVector<double>::XAxisVector.field0_0x0._8_8_ >> 0x20) ^ uVar9;
      uVar8 = SUB84(TVector<double>::XAxisVector.field0_0x0._s_0.Z,0) ^ uVar8;
      uVar9 = (uint)((ulonglong)TVector<double>::XAxisVector.field0_0x0._16_8_ >> 0x20) ^ uVar9;
    }
    else {
      uVar21 = SUB84(TVector<double>::YAxisVector.field0_0x0._s_0.Y,0);
      uVar22 = (uint)((ulonglong)TVector<double>::YAxisVector.field0_0x0._8_8_ >> 0x20);
      uVar8 = SUB84(TVector<double>::YAxisVector.field0_0x0._s_0.Z,0);
      uVar9 = (uint)((ulonglong)TVector<double>::YAxisVector.field0_0x0._16_8_ >> 0x20);
      uVar15 = TVector<double>::YAxisVector.field0_0x0._s_0.X;
    }
    dVar3 = (double)CONCAT44(uVar22,uVar21);
    dVar4 = 0.0;
    dVar14 = (double)CONCAT44(uVar9,uVar8);
  }
  auVar18._0_8_ = dVar1 * dVar14 - dVar10 * dVar3;
  auVar18._8_8_ = 0;
  __return_storage_ptr__->X = auVar18._0_8_;
  __return_storage_ptr__->Y = dVar10 * (double)uVar15 - dVar2 * dVar14;
  __return_storage_ptr__->Z = dVar2 * dVar3 - dVar1 * (double)uVar15;
  __return_storage_ptr__->W = dVar4;
  dVar2 = __return_storage_ptr__->Z;
  dVar14 = __return_storage_ptr__->W;
  dVar3 = __return_storage_ptr__->X;
  dVar4 = __return_storage_ptr__->Y;
  dVar10 = dVar2 * dVar2 + dVar3 * dVar3;
  dVar13 = dVar14 * dVar14 + dVar4 * dVar4;
  dVar1 = dVar13 + dVar10;
  dVar10 = dVar10 + dVar13;
  auVar19._8_4_ = SUB84(dVar10,0);
  auVar19._0_8_ = dVar1;
  auVar19._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  auVar16 = sqrtpd(auVar18,auVar19);
  uVar6 = -(ulonglong)(__real_3e45798ee0000000 <= dVar1);
  uVar7 = -(ulonglong)(__real_3e45798ee0000000 <= dVar10);
  uVar8 = (uint)(uVar6 >> 0x20);
  uVar9 = (uint)(uVar7 >> 0x20);
  auVar19 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar16);
  auVar20._0_8_ = uVar6 & (ulonglong)(auVar19._0_8_ * dVar3);
  uVar5 = uVar7 & (ulonglong)(auVar19._8_8_ * dVar4);
  auVar20._8_4_ = (undefined4)uVar5;
  auVar20._12_4_ = (undefined4)(uVar5 >> 0x20);
  auVar11._0_4_ = ~(uint)uVar6 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar11._4_4_ =
       ~uVar8 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar11._8_4_ = ~(uint)uVar7 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar11._12_4_ =
       ~uVar9 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar16 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar16);
  auVar17._0_4_ = ~(uint)uVar6 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar17._4_4_ =
       ~uVar8 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar17._8_4_ = ~(uint)uVar7 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar17._12_4_ =
       ~uVar9 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar12._0_8_ = (ulonglong)(auVar16._0_8_ * dVar2) & uVar6;
  uVar7 = (ulonglong)(auVar16._8_8_ * dVar14) & uVar7;
  auVar12._8_4_ = (undefined4)uVar7;
  auVar12._12_4_ = (undefined4)(uVar7 >> 0x20);
  __return_storage_ptr__->X = (double)SUB168(auVar20 | auVar11,0);
  __return_storage_ptr__->Y = (double)SUB168(auVar20 | auVar11,8);
  __return_storage_ptr__->Z = (double)SUB168(auVar17 | auVar12,0);
  __return_storage_ptr__->W = (double)SUB168(auVar17 | auVar12,8);
  return __return_storage_ptr__;
}

// GetAngle @ 1417d14f0

float __thiscall UE::Math::TQuat<float>::GetAngle(TQuat<float> *this)

{
  float fVar1;
  float _X;
  
  fVar1 = this->W;
  _X = __real_bf800000;
  if ((__real_bf800000 <= fVar1) && (_X = fVar1, __real_3f800000 <= fVar1)) {
    _X = __real_3f800000;
  }
  fVar1 = acosf(_X);
  return fVar1 + fVar1;
}

// GetAngle @ 1417d1530

double __thiscall UE::Math::TQuat<double>::GetAngle(TQuat<double> *this)

{
  double dVar1;
  double _X;
  
  dVar1 = this->W;
  _X = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar1) && (_X = dVar1, __real_3ff0000000000000 <= dVar1)) {
    _X = __real_3ff0000000000000;
  }
  dVar1 = acos(_X);
  return dVar1 + dVar1;
}

// GetAxisX @ 1417d1570

TVector<float> * __thiscall
UE::Math::TQuat<float>::GetAxisX(TQuat<float> *this,TVector<float> *__return_storage_ptr__)

{
  TVector<float>_u_0 local_18;
  
  local_18._0_8_ = 0x3f800000;
  local_18._s_0.Z = 0.0;
  RotateVector(this,__return_storage_ptr__,(TVector<float> *)&local_18._s_0);
  return __return_storage_ptr__;
}

// GetAxisX @ 1417d15b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
UE::Math::TQuat<double>::GetAxisX(TQuat<double> *this,TVector<double> *__return_storage_ptr__)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_28._s_0.Y = _UNK_150689518;
  local_28._s_0.Z = 0.0;
  RotateVector(this,__return_storage_ptr__,(TVector<double> *)&local_28._s_0);
  return __return_storage_ptr__;
}

// GetAxisY @ 1417d15f0

TVector<float> * __thiscall
UE::Math::TQuat<float>::GetAxisY(TQuat<float> *this,TVector<float> *__return_storage_ptr__)

{
  TVector<float>_u_0 local_18;
  
  local_18._s_0.X = 0.0;
  local_18._4_8_ = 0x3f800000;
  RotateVector(this,__return_storage_ptr__,(TVector<float> *)&local_18._s_0);
  return __return_storage_ptr__;
}

// GetAxisY @ 1417d1630

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
UE::Math::TQuat<double>::GetAxisY(TQuat<double> *this,TVector<double> *__return_storage_ptr__)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_28._s_0.Y = _UNK_15061cbc8;
  local_28._s_0.Z = 0.0;
  RotateVector(this,__return_storage_ptr__,(TVector<double> *)&local_28._s_0);
  return __return_storage_ptr__;
}

// GetAxisZ @ 1417d1670

TVector<float> * __thiscall
UE::Math::TQuat<float>::GetAxisZ(TQuat<float> *this,TVector<float> *__return_storage_ptr__)

{
  TVector<float>_u_0 local_18;
  
  local_18._0_8_ = 0;
  local_18._s_0.Z = 1.0;
  RotateVector(this,__return_storage_ptr__,(TVector<float> *)&local_18._s_0);
  return __return_storage_ptr__;
}

// GetAxisZ @ 1417d16b0

TVector<double> * __thiscall
UE::Math::TQuat<double>::GetAxisZ(TQuat<double> *this,TVector<double> *__return_storage_ptr__)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.Z = __real_3ff0000000000000;
  local_28._s_0.X = 0.0;
  local_28._s_0.Y = 0.0;
  RotateVector(this,__return_storage_ptr__,(TVector<double> *)&local_28._s_0);
  return __return_storage_ptr__;
}

// GetForwardVector @ 1417d3c20

TVector<float> * __thiscall
UE::Math::TQuat<float>::GetForwardVector(TQuat<float> *this,TVector<float> *__return_storage_ptr__)

{
  TVector<float>_u_0 local_18;
  
  local_18._0_8_ = 0x3f800000;
  local_18._s_0.Z = 0.0;
  RotateVector(this,__return_storage_ptr__,(TVector<float> *)&local_18._s_0);
  return __return_storage_ptr__;
}

// GetForwardVector @ 1417d3c60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
UE::Math::TQuat<double>::GetForwardVector
          (TQuat<double> *this,TVector<double> *__return_storage_ptr__)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_28._s_0.Y = _UNK_150689518;
  local_28._s_0.Z = 0.0;
  RotateVector(this,__return_storage_ptr__,(TVector<double> *)&local_28._s_0);
  return __return_storage_ptr__;
}

// GetNormalized @ 1417d4a70

TQuat<float> * __thiscall
UE::Math::TQuat<float>::GetNormalized
          (TQuat<float> *this,TQuat<float> *__return_storage_ptr__,float param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar4 = this->X;
  fVar5 = this->Y;
  fVar6 = this->Z;
  fVar7 = this->W;
  fVar10 = fVar5 * fVar5 + fVar4 * fVar4;
  fVar11 = fVar4 * fVar4 + fVar5 * fVar5;
  fVar12 = fVar7 * fVar7 + fVar6 * fVar6;
  fVar13 = fVar6 * fVar6 + fVar7 * fVar7;
  auVar8._0_4_ = fVar12 + fVar10;
  auVar8._4_4_ = fVar13 + fVar11;
  auVar8._8_4_ = fVar10 + fVar12;
  auVar8._12_4_ = fVar11 + fVar13;
  auVar9 = sqrtps(auVar8,auVar8);
  auVar9 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar9);
  uVar1 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar2 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar3 = GlobalVectorConstants::Float0001.m128_u32[3];
  __return_storage_ptr__->X =
       (float)((uint)(auVar9._0_4_ * fVar4) & -(uint)(param_1 <= auVar8._0_4_) |
              ~-(uint)(param_1 <= auVar8._0_4_) & GlobalVectorConstants::Float0001.m128_u32[0]);
  __return_storage_ptr__->Y =
       (float)((uint)(auVar9._4_4_ * fVar5) & -(uint)(param_1 <= auVar8._4_4_) |
              ~-(uint)(param_1 <= auVar8._4_4_) & uVar1);
  __return_storage_ptr__->Z =
       (float)((uint)(auVar9._8_4_ * fVar6) & -(uint)(param_1 <= auVar8._8_4_) |
              ~-(uint)(param_1 <= auVar8._8_4_) & uVar2);
  __return_storage_ptr__->W =
       (float)((uint)(auVar9._12_4_ * fVar7) & -(uint)(param_1 <= auVar8._12_4_) |
              ~-(uint)(param_1 <= auVar8._12_4_) & uVar3);
  return __return_storage_ptr__;
}

// GetNormalized @ 1417d4ac0

TQuat<double> * __thiscall
UE::Math::TQuat<double>::GetNormalized
          (TQuat<double> *this,TQuat<double> *__return_storage_ptr__,double param_1)

{
  double dVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar11;
  undefined1 auVar10 [16];
  undefined1 auVar12 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  uint uVar16;
  uint uVar17;
  
  dVar1 = this->Y;
  __return_storage_ptr__->X = this->X;
  __return_storage_ptr__->Y = dVar1;
  dVar3 = this->Z;
  dVar4 = this->W;
  __return_storage_ptr__->Z = dVar3;
  __return_storage_ptr__->W = dVar4;
  dVar5 = __return_storage_ptr__->X;
  dVar6 = __return_storage_ptr__->Y;
  dVar9 = dVar3 * dVar3 + dVar5 * dVar5;
  dVar11 = dVar4 * dVar4 + dVar6 * dVar6;
  dVar1 = dVar11 + dVar9;
  dVar9 = dVar9 + dVar11;
  auVar13._8_4_ = SUB84(dVar9,0);
  auVar13._0_8_ = dVar1;
  auVar13._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  auVar13 = sqrtpd(in_XMM4,auVar13);
  uVar7 = -(ulonglong)(param_1 <= dVar1);
  uVar8 = -(ulonglong)(param_1 <= dVar9);
  uVar16 = (uint)(uVar7 >> 0x20);
  uVar17 = (uint)(uVar8 >> 0x20);
  auVar14 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar13);
  auVar10._0_4_ = ~(uint)uVar7 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar10._4_4_ =
       ~uVar16 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar10._8_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar10._12_4_ =
       ~uVar17 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar15._0_8_ = uVar7 & (ulonglong)(auVar14._0_8_ * dVar5);
  uVar2 = uVar8 & (ulonglong)(auVar14._8_8_ * dVar6);
  auVar15._8_4_ = (undefined4)uVar2;
  auVar15._12_4_ = (undefined4)(uVar2 >> 0x20);
  auVar13 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar13);
  auVar12._0_4_ = ~(uint)uVar7 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar12._4_4_ =
       ~uVar16 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar12._8_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar12._12_4_ =
       ~uVar17 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar14._0_8_ = (ulonglong)(auVar13._0_8_ * dVar3) & uVar7;
  uVar8 = (ulonglong)(auVar13._8_8_ * dVar4) & uVar8;
  auVar14._8_4_ = (undefined4)uVar8;
  auVar14._12_4_ = (undefined4)(uVar8 >> 0x20);
  __return_storage_ptr__->X = (double)SUB168(auVar15 | auVar10,0);
  __return_storage_ptr__->Y = (double)SUB168(auVar15 | auVar10,8);
  __return_storage_ptr__->Z = (double)SUB168(auVar12 | auVar14,0);
  __return_storage_ptr__->W = (double)SUB168(auVar12 | auVar14,8);
  return __return_storage_ptr__;
}

// GetRightVector @ 1417d6840

TVector<float> * __thiscall
UE::Math::TQuat<float>::GetRightVector(TQuat<float> *this,TVector<float> *__return_storage_ptr__)

{
  TVector<float>_u_0 local_18;
  
  local_18._s_0.X = 0.0;
  local_18._4_8_ = 0x3f800000;
  RotateVector(this,__return_storage_ptr__,(TVector<float> *)&local_18._s_0);
  return __return_storage_ptr__;
}

// GetRightVector @ 1417d6880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
UE::Math::TQuat<double>::GetRightVector(TQuat<double> *this,TVector<double> *__return_storage_ptr__)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_28._s_0.Y = _UNK_15061cbc8;
  local_28._s_0.Z = 0.0;
  RotateVector(this,__return_storage_ptr__,(TVector<double> *)&local_28._s_0);
  return __return_storage_ptr__;
}

// GetRotationAxis @ 1417d69e0

TVector<float> * __thiscall
UE::Math::TQuat<float>::GetRotationAxis(TQuat<float> *this,TVector<float> *__return_storage_ptr__)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar12;
  float fVar13;
  undefined1 auVar11 [16];
  
  auVar11 = insertps((undefined1  [16])*this,(undefined1  [16])*this,8);
  fVar10 = auVar11._0_4_;
  fVar12 = auVar11._4_4_;
  fVar13 = auVar11._8_4_;
  fVar6 = auVar11._12_4_ * auVar11._12_4_;
  fVar7 = fVar12 * fVar12 + fVar10 * fVar10;
  fVar8 = fVar10 * fVar10 + fVar12 * fVar12;
  fVar9 = fVar6 + fVar13 * fVar13;
  fVar6 = fVar13 * fVar13 + fVar6;
  auVar11._0_4_ = fVar9 + fVar7;
  auVar11._4_4_ = fVar6 + fVar8;
  auVar11._8_4_ = fVar7 + fVar9;
  auVar11._12_4_ = fVar8 + fVar6;
  uVar3 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar11._0_4_);
  uVar4 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar11._4_4_);
  uVar5 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar11._8_4_);
  auVar11 = sqrtps(auVar11,auVar11);
  auVar11 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar11);
  uVar1 = GlobalVectorConstants::Float1000.m128_u32[1];
  uVar2 = GlobalVectorConstants::Float1000.m128_u32[2];
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (float)((uint)(auVar11._0_4_ * fVar10) & uVar3 |
              ~uVar3 & GlobalVectorConstants::Float1000.m128_u32[0]);
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (float)((uint)(auVar11._4_4_ * fVar12) & uVar4 | ~uVar4 & uVar1);
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (float)((uint)(auVar11._8_4_ * fVar13) & uVar5 | ~uVar5 & uVar2);
  return __return_storage_ptr__;
}

// GetRotationAxis @ 1417d6a40

TVector<double> * __thiscall
UE::Math::TQuat<double>::GetRotationAxis
          (TQuat<double> *this,TVector<double> *__return_storage_ptr__)

{
  float fVar1;
  double dVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar13;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar14 [16];
  
  dVar4 = this->Z;
  fVar1 = GlobalVectorConstants::Float1000.m128_f32[2];
  dVar5 = this->X;
  dVar6 = this->Y;
  dVar10 = dVar4 * dVar4 + dVar5 * dVar5;
  dVar13 = dVar6 * dVar6 + 0.0;
  dVar2 = dVar13 + dVar10;
  dVar10 = dVar10 + dVar13;
  auVar11._8_4_ = SUB84(dVar10,0);
  auVar11._0_8_ = dVar2;
  auVar11._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  auVar14 = sqrtpd(in_XMM3,auVar11);
  uVar7 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= dVar2);
  uVar9 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= dVar10);
  auVar11 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar14);
  uVar8 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= dVar2);
  auVar14 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar14);
  auVar12._0_8_ = uVar7 & (ulonglong)(auVar14._0_8_ * dVar5);
  uVar3 = uVar9 & (ulonglong)(auVar14._8_8_ * dVar6);
  auVar12._8_4_ = (undefined4)uVar3;
  auVar12._12_4_ = (undefined4)(uVar3 >> 0x20);
  auVar14._4_4_ =
       ~(uint)(uVar7 >> 0x20) &
       (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[0] >> 0x20);
  auVar14._0_4_ = ~(uint)uVar7 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[0],0);
  auVar14._8_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[1],0);
  auVar14._12_4_ =
       ~(uint)(uVar9 >> 0x20) &
       (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar12 | auVar14;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (double)(CONCAT44(~(uint)(uVar8 >> 0x20) & (uint)((ulonglong)(double)fVar1 >> 0x20),
                         ~(uint)uVar8 & SUB84((double)fVar1,0)) |
               uVar8 & (ulonglong)(auVar11._0_8_ * dVar4));
  return __return_storage_ptr__;
}

// GetShortestArcWith @ 1417d7a20

TQuat<float> * __thiscall
UE::Math::TQuat<float>::GetShortestArcWith
          (TQuat<float> *this,TQuat<float> *__return_storage_ptr__,TQuat<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = this->X;
  fVar2 = this->Y;
  fVar3 = this->Z;
  fVar4 = this->W;
  __return_storage_ptr__->X = fVar1;
  __return_storage_ptr__->Y = fVar2;
  __return_storage_ptr__->Z = fVar3;
  __return_storage_ptr__->W = fVar4;
  fVar5 = __real_bf800000;
  if (0.0 <= fVar4 * param_1->W + fVar3 * param_1->Z + fVar2 * param_1->Y + fVar1 * param_1->X) {
    fVar5 = __real_3f800000;
  }
  __return_storage_ptr__->X = fVar5 * __return_storage_ptr__->X;
  __return_storage_ptr__->Y = fVar5 * __return_storage_ptr__->Y;
  __return_storage_ptr__->Z = fVar5 * __return_storage_ptr__->Z;
  __return_storage_ptr__->W = fVar5 * __return_storage_ptr__->W;
  return __return_storage_ptr__;
}

// GetShortestArcWith @ 1417d7aa0

TQuat<double> * __thiscall
UE::Math::TQuat<double>::GetShortestArcWith
          (TQuat<double> *this,TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  dVar3 = this->Z;
  dVar5 = this->W;
  dVar1 = this->Y;
  __return_storage_ptr__->X = this->X;
  __return_storage_ptr__->Y = dVar1;
  dVar1 = param_1->Z;
  __return_storage_ptr__->Z = dVar3;
  __return_storage_ptr__->W = dVar5;
  if (dVar5 * param_1->W + dVar1 * dVar3 +
      __return_storage_ptr__->Y * param_1->Y + __return_storage_ptr__->X * param_1->X < 0.0) {
    uVar6 = (undefined4)__real_bff0000000000000;
    uVar7 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  }
  else {
    uVar6 = (undefined4)__real_3ff0000000000000;
    uVar7 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  }
  dVar1 = __return_storage_ptr__->X * (double)CONCAT44(uVar7,uVar6);
  dVar3 = __return_storage_ptr__->Y * (double)CONCAT44(uVar7,uVar6);
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = dVar1;
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  __return_storage_ptr__->X = dVar1;
  __return_storage_ptr__->Y = (double)auVar2._8_8_;
  dVar1 = (double)CONCAT44(uVar7,uVar6) * __return_storage_ptr__->Z;
  dVar3 = (double)CONCAT44(uVar7,uVar6) * __return_storage_ptr__->W;
  auVar4._8_4_ = SUB84(dVar3,0);
  auVar4._0_8_ = dVar1;
  auVar4._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  __return_storage_ptr__->Z = dVar1;
  __return_storage_ptr__->W = (double)auVar4._8_8_;
  return __return_storage_ptr__;
}

// GetTwistAngle @ 1417d85e0

float __thiscall UE::Math::TQuat<float>::GetTwistAngle(TQuat<float> *this,TVector<float> *param_1)

{
  float fVar1;
  
  fVar1 = FGenericPlatformMath::Atan2
                    ((param_1->field0_0x0)._s_0.Y * this->Y + (param_1->field0_0x0)._s_0.X * this->X
                     + (param_1->field0_0x0)._s_0.Z * this->Z,this->W);
  for (fVar1 = fVar1 + fVar1; __real_40490fdb < fVar1; fVar1 = fVar1 + __real_c0c90fdb) {
  }
  for (; fVar1 < __real_c0490fdb; fVar1 = fVar1 + __real_40c90fdb) {
  }
  return fVar1;
}

// GetTwistAngle @ 1417d8670

double __thiscall
UE::Math::TQuat<double>::GetTwistAngle(TQuat<double> *this,TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = FGenericPlatformMath::Atan2
                    ((param_1->field0_0x0)._s_0.Y * this->Y + (param_1->field0_0x0)._s_0.X * this->X
                     + (param_1->field0_0x0)._s_0.Z * this->Z,this->W);
  for (dVar1 = dVar1 + dVar1; __real_400921fb60000000 < dVar1;
      dVar1 = dVar1 + __real_c01921fb60000000) {
  }
  for (; dVar1 < __real_c00921fb60000000; dVar1 = dVar1 + __real_401921fb60000000) {
  }
  return dVar1;
}

// GetUpVector @ 1417d9150

TVector<float> * __thiscall
UE::Math::TQuat<float>::GetUpVector(TQuat<float> *this,TVector<float> *__return_storage_ptr__)

{
  TVector<float>_u_0 local_18;
  
  local_18._0_8_ = 0;
  local_18._s_0.Z = 1.0;
  RotateVector(this,__return_storage_ptr__,(TVector<float> *)&local_18._s_0);
  return __return_storage_ptr__;
}

// GetUpVector @ 1417d9190

TVector<double> * __thiscall
UE::Math::TQuat<double>::GetUpVector(TQuat<double> *this,TVector<double> *__return_storage_ptr__)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.Z = __real_3ff0000000000000;
  local_28._s_0.X = 0.0;
  local_28._s_0.Y = 0.0;
  RotateVector(this,__return_storage_ptr__,(TVector<double> *)&local_28._s_0);
  return __return_storage_ptr__;
}

// Identical @ 1417d9c30

bool __thiscall
UE::Math::TQuat<float>::Identical(TQuat<float> *this,TQuat<float> *param_1,uint param_2)

{
  if ((((param_1->X == this->X) && (param_1->Y == this->Y)) && (param_1->Z == this->Z)) &&
     (param_1->W == this->W)) {
    return true;
  }
  return false;
}

// Identical @ 1417d9c70

bool __thiscall
UE::Math::TQuat<double>::Identical(TQuat<double> *this,TQuat<double> *param_1,uint param_2)

{
  if ((((param_1->X == this->X) && (param_1->Y == this->Y)) && (param_1->Z == this->Z)) &&
     (param_1->W == this->W)) {
    return true;
  }
  return false;
}

// InitFromString @ 1417da260

bool __thiscall UE::Math::TQuat<float>::InitFromString(TQuat<float> *this,FString *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  this->W = 1.0;
  this->Y = 0.0;
  this->Z = 0.0;
  this->X = 0.0;
  pwVar3 = L"";
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar1 = FParse::Value(pwVar2,L"X=",&this->X);
  if (bVar1) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar1 = FParse::Value(pwVar2,L"Y=",&this->Y);
    if (bVar1) {
      if ((param_1->Data).ArrayNum == 0) {
        pwVar2 = L"";
      }
      else {
        pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      bVar1 = FParse::Value(pwVar2,L"Z=",&this->Z);
      if (bVar1) {
        if ((param_1->Data).ArrayNum != 0) {
          pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        }
        bVar1 = FParse::Value(pwVar3,L"W=",&this->W);
        if (bVar1) {
          return true;
        }
      }
    }
  }
  return false;
}

// InitFromString @ 1417da350

bool __thiscall UE::Math::TQuat<double>::InitFromString(TQuat<double> *this,FString *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  this->Z = 0.0;
  this->Y = 0.0;
  this->X = 0.0;
  pwVar3 = L"";
  this->W = 1.0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar1 = FParse::Value(pwVar2,L"X=",&this->X);
  if (bVar1) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar1 = FParse::Value(pwVar2,L"Y=",&this->Y);
    if (bVar1) {
      if ((param_1->Data).ArrayNum == 0) {
        pwVar2 = L"";
      }
      else {
        pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      bVar1 = FParse::Value(pwVar2,L"Z=",&this->Z);
      if (bVar1) {
        if ((param_1->Data).ArrayNum != 0) {
          pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        }
        bVar1 = FParse::Value(pwVar3,L"W=",&this->W);
        if (bVar1) {
          return true;
        }
      }
    }
  }
  return false;
}

// Inverse @ 1417dc970

TQuat<float> * __thiscall
UE::Math::TQuat<float>::Inverse(TQuat<float> *this,TQuat<float> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = this->Y;
  fVar5 = this->Z;
  fVar6 = this->W;
  fVar1 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
  fVar2 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
  fVar3 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
  __return_storage_ptr__->X = this->X * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
  __return_storage_ptr__->Y = fVar4 * fVar1;
  __return_storage_ptr__->Z = fVar5 * fVar2;
  __return_storage_ptr__->W = fVar6 * fVar3;
  return __return_storage_ptr__;
}

// Inverse @ 1417dc990

TQuat<double> * __thiscall
UE::Math::TQuat<double>::Inverse(TQuat<double> *this,TQuat<double> *__return_storage_ptr__)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  
  dVar5 = this->X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar6 = this->Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar2 = this->Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar3 = this->W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar4._8_4_ = SUB84(dVar6,0);
  auVar4._0_8_ = dVar5;
  auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  __return_storage_ptr__->X = dVar5;
  __return_storage_ptr__->Y = (double)auVar4._8_8_;
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  __return_storage_ptr__->Z = dVar2;
  __return_storage_ptr__->W = (double)auVar1._8_8_;
  return __return_storage_ptr__;
}

// IsIdentity @ 1417dded0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall UE::Math::TQuat<float>::IsIdentity(TQuat<float> *this,float param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  int iVar3;
  
  auVar1._4_4_ = -(uint)(param_1 < (float)((uint)(this->Y - Identity.Y) & _UNK_15061cc74));
  auVar1._0_4_ = -(uint)(param_1 <
                        (float)((uint)(this->X - Identity.X) &
                               __xmm_7fffffff7fffffff7fffffff7fffffff));
  auVar1._8_4_ = -(uint)(param_1 < (float)((uint)(this->Z - Identity.Z) & _UNK_15061cc78));
  auVar1._12_4_ = -(uint)(param_1 < (float)((uint)(this->W - Identity.W) & _UNK_15061cc7c));
  iVar3 = movmskps(in_EAX,auVar1);
  if ((iVar3 != 0) &&
     (auVar2._4_4_ = -(uint)(param_1 < (float)((uint)(Identity.Y + this->Y) & _UNK_15061cc74)),
     auVar2._0_4_ = -(uint)(param_1 <
                           (float)((uint)(Identity.X + this->X) &
                                  __xmm_7fffffff7fffffff7fffffff7fffffff)),
     auVar2._8_4_ = -(uint)(param_1 < (float)((uint)(Identity.Z + this->Z) & _UNK_15061cc78)),
     auVar2._12_4_ = -(uint)(param_1 < (float)((uint)(Identity.W + this->W) & _UNK_15061cc7c)),
     iVar3 = movmskps(iVar3,auVar2), iVar3 != 0)) {
    return false;
  }
  return true;
}

// IsIdentity @ 1417ddf20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall UE::Math::TQuat<double>::IsIdentity(TQuat<double> *this,double param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 in_EAX;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  dVar15 = this->X - Identity.X;
  dVar16 = this->Y - Identity.Y;
  dVar5 = this->X + Identity.X;
  dVar6 = this->Y + Identity.Y;
  dVar13 = this->Z - Identity.Z;
  dVar14 = this->W - Identity.W;
  dVar7 = this->Z + Identity.Z;
  dVar8 = this->W + Identity.W;
  lVar12 = -(ulonglong)
            (param_1 <
            (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar14,0) & _UNK_15061cc88));
  auVar1._8_4_ = (int)lVar12;
  auVar1._0_8_ = -(ulonglong)
                  (param_1 <
                  (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar1._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
  iVar10 = movmskpd((int)this,auVar1);
  lVar12 = -(ulonglong)
            (param_1 <
            (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar16,0) & _UNK_15061cc88));
  auVar2._8_4_ = (int)lVar12;
  auVar2._0_8_ = -(ulonglong)
                  (param_1 <
                  (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar2._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
  uVar9 = movmskpd(in_EAX,auVar2);
  uVar11 = iVar10 << 2 | uVar9;
  if (uVar11 != 0) {
    lVar12 = -(ulonglong)
              (param_1 <
              (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar8,0) & _UNK_15061cc88));
    auVar3._8_4_ = (int)lVar12;
    auVar3._0_8_ = -(ulonglong)
                    (param_1 <
                    (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
    ;
    auVar3._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
    uVar11 = movmskpd(uVar11,auVar3);
    lVar12 = -(ulonglong)
              (param_1 <
              (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar6,0) & _UNK_15061cc88));
    auVar4._8_4_ = (int)lVar12;
    auVar4._0_8_ = -(ulonglong)
                    (param_1 <
                    (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
    ;
    auVar4._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
    iVar10 = movmskpd(uVar9,auVar4);
    if ((uVar11 & 0x3fffffff) != 0 || iVar10 != 0) {
      return false;
    }
  }
  return true;
}

// IsNormalized @ 1417de3b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall UE::Math::TQuat<float>::IsNormalized(TQuat<float> *this)

{
  undefined1 auVar1 [16];
  undefined4 in_EAX;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar3 = this->X * this->X;
  fVar4 = this->Y * this->Y;
  fVar5 = this->Z * this->Z;
  fVar6 = this->W * this->W;
  fVar7 = fVar4 + fVar3;
  fVar3 = fVar3 + fVar4;
  fVar4 = fVar6 + fVar5;
  fVar5 = fVar5 + fVar6;
  auVar1._4_4_ = -(uint)(GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] <
                        (float)((uint)(GlobalVectorConstants::FloatOne.m128_f32[1] - (fVar5 + fVar3)
                                      ) & _UNK_15061cc74));
  auVar1._0_4_ = -(uint)(GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] <
                        (float)((uint)(GlobalVectorConstants::FloatOne.m128_f32[0] - (fVar4 + fVar7)
                                      ) & __xmm_7fffffff7fffffff7fffffff7fffffff));
  auVar1._8_4_ = -(uint)(GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] <
                        (float)((uint)(GlobalVectorConstants::FloatOne.m128_f32[2] - (fVar7 + fVar4)
                                      ) & _UNK_15061cc78));
  auVar1._12_4_ =
       -(uint)(GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] <
              (float)((uint)(GlobalVectorConstants::FloatOne.m128_f32[3] - (fVar3 + fVar5)) &
                     _UNK_15061cc7c));
  iVar2 = movmskps(in_EAX,auVar1);
  return iVar2 == 0;
}

// IsNormalized @ 1417de400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall UE::Math::TQuat<double>::IsNormalized(TQuat<double> *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar10 = this->Z * this->Z + this->X * this->X;
  dVar7 = this->W * this->W + this->Y * this->Y;
  dVar8 = dVar7 + dVar10;
  dVar10 = dVar10 + dVar7;
  dVar7 = (double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar8;
  dVar9 = (double)GlobalVectorConstants::FloatOne.m128_f32[3] - dVar10;
  lVar5 = -(ulonglong)
           ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] <
           (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & _UNK_15061cc8c,
                            SUB84(dVar9,0) & _UNK_15061cc88));
  dVar8 = (double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar8;
  dVar10 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - dVar10;
  lVar6 = -(ulonglong)
           ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] <
           (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & _UNK_15061cc8c,
                            SUB84(dVar10,0) & _UNK_15061cc88));
  auVar1._8_4_ = (int)lVar6;
  auVar1._0_8_ = -(ulonglong)
                  ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] <
                  (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar1._12_4_ = (int)((ulonglong)lVar6 >> 0x20);
  iVar3 = movmskpd(in_EAX,auVar1);
  auVar2._8_4_ = (int)lVar5;
  auVar2._0_8_ = -(ulonglong)
                  ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] <
                  (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar2._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
  uVar4 = movmskpd((int)this,auVar2);
  return (uVar4 & 0x3fffffff) == 0 && iVar3 == 0;
}

// Log @ 1417e0400

TQuat<float> * __thiscall
UE::Math::TQuat<float>::Log(TQuat<float> *this,TQuat<float> *__return_storage_ptr__)

{
  bool bVar1;
  float fVar2;
  float fVar4;
  float fVar3;
  
  fVar4 = __real_3f800000;
  fVar2 = this->W;
  bVar1 = (float)((uint)fVar2 & __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_3f800000;
  __return_storage_ptr__->W = 0.0;
  if (bVar1) {
    fVar3 = __real_bf800000;
    if ((__real_bf800000 <= fVar2) && (fVar3 = fVar2, fVar4 <= fVar2)) {
      fVar3 = fVar4;
    }
    fVar2 = acosf(fVar3);
    fVar4 = sinf(fVar2);
    if (__real_322bcc77 <= (float)((uint)fVar4 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar2 = fVar2 / fVar4;
      fVar4 = this->Y;
      fVar3 = this->Z;
      __return_storage_ptr__->X = fVar2 * this->X;
      __return_storage_ptr__->Y = fVar2 * fVar4;
      __return_storage_ptr__->Z = fVar2 * fVar3;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->X = this->X;
  __return_storage_ptr__->Y = this->Y;
  __return_storage_ptr__->Z = this->Z;
  return __return_storage_ptr__;
}

// Log @ 1417e04d0

TQuat<double> * __thiscall
UE::Math::TQuat<double>::Log(TQuat<double> *this,TQuat<double> *__return_storage_ptr__)

{
  bool bVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  
  dVar5 = __real_3ff0000000000000;
  dVar4 = this->W;
  uVar6 = SUB84(dVar4,0);
  uVar7 = (uint)((ulonglong)dVar4 >> 0x20);
  bVar1 = (double)CONCAT44(uVar7 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           uVar6 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
          __real_3ff0000000000000;
  __return_storage_ptr__->W = 0.0;
  if (bVar1) {
    dVar3 = __real_bff0000000000000;
    if (__real_bff0000000000000 <= dVar4) {
      if (dVar5 <= dVar4) {
        uVar6 = SUB84(dVar5,0);
        uVar7 = (uint)((ulonglong)dVar5 >> 0x20);
      }
      dVar3 = (double)CONCAT44(uVar7,uVar6);
    }
    dVar4 = acos(dVar3);
    dVar5 = sin(dVar4);
    if (__real_3e45798ee0000000 <=
        (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      dVar4 = dVar4 / dVar5;
      dVar5 = dVar4 * this->X;
      dVar3 = dVar4 * this->Y;
      __return_storage_ptr__->Z = dVar4 * this->Z;
      auVar2._8_4_ = SUB84(dVar3,0);
      auVar2._0_8_ = dVar5;
      auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      __return_storage_ptr__->X = dVar5;
      __return_storage_ptr__->Y = (double)auVar2._8_8_;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->X = this->X;
  __return_storage_ptr__->Y = this->Y;
  __return_storage_ptr__->Z = this->Z;
  return __return_storage_ptr__;
}

// MakeFromEuler @ 1417e1970

TQuat<float> * __cdecl
UE::Math::TQuat<float>::MakeFromEuler(TQuat<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  TQuat<float> *pTVar4;
  TRotator<float> local_28;
  TQuat<float> local_18;
  
  local_28.Pitch = (param_1->field0_0x0)._s_0.Y;
  local_28.Yaw = (param_1->field0_0x0)._s_0.Z;
  local_28.Roll = (param_1->field0_0x0)._s_0.X;
  pTVar4 = TRotator<float>::Quaternion(&local_28,&local_18);
  fVar1 = pTVar4->Y;
  fVar2 = pTVar4->Z;
  fVar3 = pTVar4->W;
  __return_storage_ptr__->X = pTVar4->X;
  __return_storage_ptr__->Y = fVar1;
  __return_storage_ptr__->Z = fVar2;
  __return_storage_ptr__->W = fVar3;
  return __return_storage_ptr__;
}

// MakeFromEuler @ 1417e19c0

TQuat<double> * __cdecl
UE::Math::TQuat<double>::MakeFromEuler
          (TQuat<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TQuat<double> *pTVar4;
  TRotator<double> local_48;
  TQuat<double> local_28;
  
  local_48.Pitch = (param_1->field0_0x0)._s_0.Y;
  local_48.Yaw = (param_1->field0_0x0)._s_0.Z;
  local_48.Roll = (param_1->field0_0x0)._s_0.X;
  pTVar4 = TRotator<double>::Quaternion(&local_48,&local_28);
  dVar1 = pTVar4->Y;
  dVar2 = pTVar4->Z;
  dVar3 = pTVar4->W;
  __return_storage_ptr__->X = pTVar4->X;
  __return_storage_ptr__->Y = dVar1;
  __return_storage_ptr__->Z = dVar2;
  __return_storage_ptr__->W = dVar3;
  return __return_storage_ptr__;
}

// MakeFromLUFEuler @ 1417e1ad0

TQuat<float> * __cdecl
UE::Math::TQuat<float>::MakeFromLUFEuler
          (TQuat<float> *__return_storage_ptr__,TTuple<float,float,float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  float local_d8;
  float local_d4 [49];
  
  uVar18 = TVector<float>::LeftVector.field0_0x0._s_0.Z;
  uVar17 = TVector<float>::LeftVector.field0_0x0._s_0.Y;
  uVar16 = TVector<float>::LeftVector.field0_0x0._s_0.X;
  fVar1 = __real_bf000000;
  FMath::SinCos<float>(&local_d8,local_d4,*(float *)param_1 * __real_bf000000);
  uVar12 = TVector<float>::UpVector.field0_0x0._s_0.Z;
  uVar11 = TVector<float>::UpVector.field0_0x0._s_0.Y;
  uVar10 = TVector<float>::UpVector.field0_0x0._s_0.X;
  FMath::SinCos<float>(local_res8,local_res10,*(float *)&param_1->field_0x4 * fVar1);
  uVar15 = TVector<float>::ForwardVector.field0_0x0._s_0.Z;
  uVar14 = TVector<float>::ForwardVector.field0_0x0._s_0.Y;
  uVar13 = TVector<float>::ForwardVector.field0_0x0._s_0.X;
  FMath::SinCos<float>(local_res18,local_res20,*(float *)&param_1->field_0x8 * fVar1);
  fVar25 = (float)uVar10 * local_res8[0];
  fVar22 = (float)uVar11 * local_res8[0];
  local_res8[0] = (float)uVar12 * local_res8[0];
  fVar24 = (float)uVar13 * local_res18[0];
  fVar23 = (float)uVar14 * local_res18[0];
  local_res18[0] = (float)uVar15 * local_res18[0];
  fVar1 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1];
  fVar4 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2];
  fVar7 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3];
  fVar2 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1];
  fVar5 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2];
  fVar8 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3];
  fVar3 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
  fVar6 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
  fVar9 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
  fVar19 = local_res10[0] * fVar24 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] +
           local_res20[0] * fVar25 +
           local_res8[0] * fVar23 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
           fVar22 * local_res18[0] * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
  fVar20 = local_res8[0] * fVar24 * fVar1 + local_res20[0] * fVar22 +
           local_res10[0] * fVar23 * fVar2 + fVar25 * local_res18[0] * fVar3;
  fVar21 = fVar22 * fVar24 * fVar4 + local_res20[0] * local_res8[0] + fVar25 * fVar23 * fVar5 +
           local_res10[0] * local_res18[0] * fVar6;
  fVar22 = fVar25 * fVar24 * fVar7 + local_res20[0] * local_res10[0] + fVar22 * fVar23 * fVar8 +
           local_res8[0] * local_res18[0] * fVar9;
  fVar24 = (float)uVar16 * local_d8;
  fVar23 = (float)uVar17 * local_d8;
  local_d8 = (float)uVar18 * local_d8;
  __return_storage_ptr__->X =
       fVar19 * local_d4[0] * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] + fVar22 * fVar24
       + fVar20 * local_d8 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
       fVar21 * fVar23 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
  __return_storage_ptr__->Y =
       fVar19 * local_d8 * fVar1 + fVar22 * fVar23 + fVar20 * local_d4[0] * fVar2 +
       fVar21 * fVar24 * fVar3;
  __return_storage_ptr__->Z =
       fVar19 * fVar23 * fVar4 + fVar22 * local_d8 + fVar20 * fVar24 * fVar5 +
       fVar21 * local_d4[0] * fVar6;
  __return_storage_ptr__->W =
       fVar19 * fVar24 * fVar7 + fVar22 * local_d4[0] + fVar20 * fVar23 * fVar8 +
       fVar21 * local_d8 * fVar9;
  return __return_storage_ptr__;
}

// MakeFromLUFEuler @ 1417e1da0

TQuat<double> * __cdecl
UE::Math::TQuat<double>::MakeFromLUFEuler
          (TQuat<double> *__return_storage_ptr__,TTuple<double,double,double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined8 local_98;
  undefined8 uStack_90;
  double dStack_70;
  
  __libm_sse2_sincos_();
  dVar1 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) *
          TVector<double>::LeftVector.field0_0x0._s_0.X;
  dVar2 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) *
          TVector<double>::LeftVector.field0_0x0._s_0.Y;
  dVar3 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) *
          TVector<double>::LeftVector.field0_0x0._s_0.Z;
  __libm_sse2_sincos_();
  dVar16 = (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) *
           TVector<double>::UpVector.field0_0x0._s_0.X;
  dVar14 = (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) *
           TVector<double>::UpVector.field0_0x0._s_0.Y;
  dVar11 = (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) *
           TVector<double>::UpVector.field0_0x0._s_0.Z;
  dVar13 = (double)CONCAT44(extraout_XMM0_Dd_00,extraout_XMM0_Dc_00);
  __libm_sse2_sincos_();
  dVar9 = (double)CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01) *
          TVector<double>::ForwardVector.field0_0x0._s_0.X;
  dVar5 = (double)CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01) *
          TVector<double>::ForwardVector.field0_0x0._s_0.Y;
  dVar17 = (double)CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01) *
           TVector<double>::ForwardVector.field0_0x0._s_0.Z;
  dVar10 = (double)CONCAT44(extraout_XMM0_Dd_01,extraout_XMM0_Dc_01);
  dVar6 = dVar9 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          dVar10 * dVar16 +
          dVar5 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          dVar17 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar7 = dVar9 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar10 * dVar14 +
          dVar5 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar17 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar4._8_4_ = SUB84(dVar7,0);
  auVar4._0_8_ = dVar6;
  auVar4._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  dVar18 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
  dVar15 = dVar9 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar10 * dVar11 +
           dVar5 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar17 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar9 = dVar9 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar10 * dVar13 +
          dVar5 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar17 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dStack_70 = auVar4._8_8_;
  local_98._0_4_ = SUB84(dVar15,0);
  local_98._4_4_ = (undefined4)((ulonglong)dVar15 >> 0x20);
  uStack_90._4_4_ = local_98._4_4_;
  uStack_90._0_4_ = (undefined4)local_98;
  local_98 = dVar15;
  dVar5 = dVar6 * dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          dVar9 * dVar3 +
          dStack_70 * dVar1 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          dVar15 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar7 = dVar6 * dVar1 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar9 * dVar18 +
          dStack_70 * dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          uStack_90 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar10 = dVar6 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar9 * dVar1 +
           dStack_70 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar15 * dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar1 = dVar6 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar9 * dVar2 +
          dStack_70 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          uStack_90 * dVar1 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar8._8_4_ = SUB84(dVar1,0);
  auVar8._0_8_ = dVar10;
  auVar8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  __return_storage_ptr__->X = dVar10;
  __return_storage_ptr__->Y = (double)auVar8._8_8_;
  auVar12._8_4_ = SUB84(dVar7,0);
  auVar12._0_8_ = dVar5;
  auVar12._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  __return_storage_ptr__->Z = dVar5;
  __return_storage_ptr__->W = (double)auVar12._8_8_;
  return __return_storage_ptr__;
}

// MakeFromRotationVector @ 1417e2350

TQuat<float> * __cdecl
UE::Math::TQuat<float>::MakeFromRotationVector
          (TQuat<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  TQuat<float> local_18;
  
  local_18.X = (param_1->field0_0x0)._s_0.X * __real_3f000000;
  local_18.W = 0.0;
  local_18.Z = (param_1->field0_0x0)._s_0.Z * __real_3f000000;
  local_18.Y = (param_1->field0_0x0)._s_0.Y * __real_3f000000;
  Exp(&local_18,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// MakeFromRotationVector @ 1417e23c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TQuat<double> * __cdecl
UE::Math::TQuat<double>::MakeFromRotationVector
          (TQuat<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  TQuat<double> local_28;
  
  local_28.X = ___xmm_3fe00000000000003fe0000000000000 * (param_1->field0_0x0)._s_0.X;
  local_28.Y = _UNK_150689678 * (param_1->field0_0x0)._s_0.Y;
  local_28.Z = (param_1->field0_0x0)._s_0.Z * __real_3fe0000000000000;
  local_28.W = 0.0;
  Exp(&local_28,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// MakeFromRotator @ 1417e2420

TQuat<float> * __cdecl
UE::Math::TQuat<float>::MakeFromRotator
          (TQuat<float> *__return_storage_ptr__,TRotator<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  TQuat<float> *pTVar4;
  TQuat<float> local_18;
  
  pTVar4 = TRotator<float>::Quaternion(param_1,&local_18);
  fVar1 = pTVar4->Y;
  fVar2 = pTVar4->Z;
  fVar3 = pTVar4->W;
  __return_storage_ptr__->X = pTVar4->X;
  __return_storage_ptr__->Y = fVar1;
  __return_storage_ptr__->Z = fVar2;
  __return_storage_ptr__->W = fVar3;
  return __return_storage_ptr__;
}

// MakeFromRotator @ 1417e2450

TQuat<double> * __cdecl
UE::Math::TQuat<double>::MakeFromRotator
          (TQuat<double> *__return_storage_ptr__,TRotator<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TQuat<double> *pTVar4;
  TQuat<double> local_28;
  
  pTVar4 = TRotator<double>::Quaternion(param_1,&local_28);
  dVar1 = pTVar4->Y;
  dVar2 = pTVar4->Z;
  dVar3 = pTVar4->W;
  __return_storage_ptr__->X = pTVar4->X;
  __return_storage_ptr__->Y = dVar1;
  __return_storage_ptr__->Z = dVar2;
  __return_storage_ptr__->W = dVar3;
  return __return_storage_ptr__;
}

// MakeFromVectorRegister @ 1417e2490

TQuat<float> * __cdecl
UE::Math::TQuat<float>::MakeFromVectorRegister(TQuat<float> *__return_storage_ptr__,__m128 *param_1)

{
  ulong64 uVar1;
  ulong64 uVar2;
  
  uVar1 = param_1->m128_u64[0];
  uVar2 = param_1->m128_u64[1];
  __return_storage_ptr__->X = (float)(int)uVar1;
  __return_storage_ptr__->Y = (float)(int)(uVar1 >> 0x20);
  __return_storage_ptr__->Z = (float)(int)uVar2;
  __return_storage_ptr__->W = (float)(int)(uVar2 >> 0x20);
  return __return_storage_ptr__;
}

// MakeFromVectorRegister @ 1417e24a0

TQuat<double> * __cdecl
UE::Math::TQuat<double>::MakeFromVectorRegister
          (TQuat<double> *__return_storage_ptr__,VectorRegister4Double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (param_1->XY).m128d_f64[1];
  dVar2 = (param_1->ZW).m128d_f64[0];
  dVar3 = (param_1->ZW).m128d_f64[1];
  __return_storage_ptr__->X = (param_1->XY).m128d_f64[0];
  __return_storage_ptr__->Y = dVar1;
  __return_storage_ptr__->Z = dVar2;
  __return_storage_ptr__->W = dVar3;
  return __return_storage_ptr__;
}

// NetSerialize @ 1417e5c80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Math::TQuat<float>::NetSerialize
          (TQuat<float> *this,FArchive *param_1,UPackageMap *param_2,bool *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 auVar3 [12];
  TQuat<float> TVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_res10 [4];
  float local_res20 [2];
  float local_78 [4];
  TQuat<float> local_68;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  uVar7 = (**(code **)(*(longlong *)param_1 + 0x230))(param_1);
  if ((param_1->field_0x28 & 4) != 0) {
    fVar10 = this->X;
    fVar19 = this->Y;
    fVar16 = this->Z;
    fVar18 = this->W;
    local_68 = *this;
    if (__real_322bcc77 < fVar19 * fVar19 + fVar10 * fVar10 + fVar16 * fVar16 + fVar18 * fVar18) {
      fVar13 = fVar19 * fVar19 + fVar10 * fVar10;
      fVar14 = fVar10 * fVar10 + fVar19 * fVar19;
      fVar15 = fVar18 * fVar18 + fVar16 * fVar16;
      fVar17 = fVar16 * fVar16 + fVar18 * fVar18;
      auVar12._4_4_ =
           -(uint)(GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] <
                  (float)((uint)(GlobalVectorConstants::FloatOne.m128_f32[1] - (fVar17 + fVar14)) &
                         _UNK_15061cc74));
      auVar12._0_4_ =
           -(uint)(GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] <
                  (float)((uint)(GlobalVectorConstants::FloatOne.m128_f32[0] - (fVar15 + fVar13)) &
                         __xmm_7fffffff7fffffff7fffffff7fffffff));
      auVar12._8_4_ =
           -(uint)(GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] <
                  (float)((uint)(GlobalVectorConstants::FloatOne.m128_f32[2] - (fVar13 + fVar15)) &
                         _UNK_15061cc78));
      auVar12._12_4_ =
           -(uint)(GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] <
                  (float)((uint)(GlobalVectorConstants::FloatOne.m128_f32[3] - (fVar14 + fVar17)) &
                         _UNK_15061cc7c));
      iVar9 = movmskps(uVar7,auVar12);
      local_58 = fVar10;
      fStack_54 = fVar19;
      fStack_50 = fVar16;
      fStack_4c = fVar18;
      if (iVar9 != 0) {
        bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2863756258781955386>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Math\\UnrealMath.cpp"
                           ,0x53a,"Q.IsNormalized()");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
        local_58 = local_68.X;
        fStack_54 = local_68.Y;
        fStack_50 = local_68.Z;
        fStack_4c = local_68.W;
        fVar10 = local_68.Y * local_68.Y + local_68.X * local_68.X;
        fVar19 = local_68.X * local_68.X + local_68.Y * local_68.Y;
        fVar16 = local_68.W * local_68.W + local_68.Z * local_68.Z;
        fVar18 = local_68.Z * local_68.Z + local_68.W * local_68.W;
        auVar11._0_4_ = fVar16 + fVar10;
        auVar11._4_4_ = fVar18 + fVar19;
        auVar11._8_4_ = fVar10 + fVar16;
        auVar11._12_4_ = fVar19 + fVar18;
        auVar12 = sqrtps(auVar11,auVar11);
        auVar12 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar12);
        fVar10 = (float)((uint)(auVar12._0_4_ * local_68.X) &
                         -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar11._0_4_) |
                        ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar11._0_4_) &
                        GlobalVectorConstants::Float0001.m128_u32[0]);
        fVar19 = (float)((uint)(auVar12._4_4_ * local_68.Y) &
                         -(uint)(_UNK_1506895d4 <= auVar11._4_4_) |
                        ~-(uint)(_UNK_1506895d4 <= auVar11._4_4_) &
                        GlobalVectorConstants::Float0001.m128_u32[1]);
        fVar16 = (float)((uint)(auVar12._8_4_ * local_68.Z) &
                         -(uint)(_UNK_1506895d8 <= auVar11._8_4_) |
                        ~-(uint)(_UNK_1506895d8 <= auVar11._8_4_) &
                        GlobalVectorConstants::Float0001.m128_u32[2]);
        fVar18 = (float)((uint)(auVar12._12_4_ * local_68.W) &
                         -(uint)(_UNK_1506895dc <= auVar11._12_4_) |
                        ~-(uint)(_UNK_1506895dc <= auVar11._12_4_) &
                        GlobalVectorConstants::Float0001.m128_u32[3]);
        local_68.Y = fVar19;
        local_68.X = fVar10;
        local_68.Z = fVar16;
        local_68.W = fVar18;
      }
      if (fVar18 < 0.0) {
        local_68.Y = fVar19 * __real_bf800000;
        local_68.X = fVar10 * __real_bf800000;
        local_68.Z = fVar16 * __real_bf800000;
        local_68.W = fVar18 * __real_bf800000;
      }
    }
    else {
      local_68 = Identity;
    }
  }
  uVar8 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1);
  if ((uVar8 < 0x16) || (iVar9 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1), iVar9 == 0x1a)
     ) {
    if (((param_1->field_0x28 & 1) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ar.IsLoading()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Math\\UnrealMath.cpp"
                           ,0x54f,L"float -> double conversion applied outside of load!"), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res10);
      }
    }
    else {
      local_res10[0] = *(float *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res20);
      }
    }
    else {
      local_res20[0] = *(float *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_78,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_78);
      }
    }
    else {
      local_78[0] = *(float *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    local_68.Y = local_res20[0];
    local_68.X = local_res10[0];
    local_68.Z = local_78[0];
  }
  else {
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_68,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_68);
      }
    }
    else {
      local_68.X = *(float *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_68.Y,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_68.Y);
      }
    }
    else {
      local_68.Y = *(float *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    TVar4 = local_68;
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_68.Z,4);
        auVar3 = (undefined1  [12])local_68._0_12_;
        local_78[0] = local_68.Z;
        local_res20[0] = local_68.Y;
        local_res10[0] = local_68.X;
        local_68._0_12_ = auVar3;
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_68.Z);
        auVar3 = (undefined1  [12])local_68._0_12_;
        local_78[0] = local_68.Z;
        local_res20[0] = local_68.Y;
        local_res10[0] = local_68.X;
        local_68._0_12_ = auVar3;
      }
    }
    else {
      local_78[0] = *(float *)*plVar1;
      local_68.Z = local_78[0];
      auVar3 = (undefined1  [12])local_68._0_12_;
      *plVar1 = *plVar1 + 4;
      local_68.Y = TVar4.Y;
      local_68.X = TVar4.X;
      local_res20[0] = local_68.Y;
      local_res10[0] = local_68.X;
      local_68._0_12_ = auVar3;
    }
  }
  if ((param_1->field_0x28 & 1) != 0) {
    fVar19 = local_res20[0] * local_res20[0] + local_res10[0] * local_res10[0] +
             local_78[0] * local_78[0];
    fVar10 = __real_3f800000 - fVar19;
    if (fVar10 < 0.0) {
      fVar10 = __real_3f800000 / SQRT(fVar19);
      local_68.Y = local_res20[0] * fVar10;
      local_68.X = local_res10[0] * fVar10;
      local_68.Z = local_78[0] * fVar10;
      local_68.W = 0.0;
    }
    else {
      local_68.W = SQRT(fVar10);
    }
    this->X = local_68.X;
    this->Y = local_68.Y;
    this->Z = local_68.Z;
    this->W = local_68.W;
  }
  *param_3 = true;
  return true;
}

// NetSerialize @ 1417e6150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Math::TQuat<double>::NetSerialize
          (TQuat<double> *this,FArchive *param_1,UPackageMap *param_2,bool *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong uVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  FArchive *pFVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar19;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar25;
  double dVar23;
  undefined4 uVar26;
  undefined1 auVar24 [16];
  undefined4 uVar27;
  __m128 _Var28;
  undefined4 uVar29;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined4 uVar34;
  double dVar35;
  undefined1 auVar36 [16];
  uint uVar37;
  float local_res10 [4];
  float local_res20 [2];
  float local_d8 [2];
  double local_d0;
  undefined1 local_b8 [8];
  double dStack_b0;
  undefined1 local_a8 [12];
  undefined4 uStack_9c;
  
  pFVar12 = param_1;
  uVar9 = (**(code **)(*(longlong *)param_1 + 0x230))();
  dVar23 = __real_3e45798ee0000000;
  dVar35 = 0.0;
  if ((param_1->field_0x28 & 4) != 0) {
    local_b8 = (undefined1  [8])this->X;
    dStack_b0 = this->Y;
    uVar29 = SUB84(local_b8,0);
    uVar32 = (undefined4)((ulonglong)local_b8 >> 0x20);
    uVar33 = SUB84(dStack_b0,0);
    uVar34 = (undefined4)((ulonglong)dStack_b0 >> 0x20);
    local_a8._0_8_ = this->Z;
    unique0x0000d608 = this->W;
    uVar22 = (undefined4)local_a8._0_8_;
    uVar25 = (undefined4)((ulonglong)local_a8._0_8_ >> 0x20);
    uVar26 = SUB84(unique0x0000d608,0);
    uVar27 = (undefined4)((ulonglong)unique0x0000d608 >> 0x20);
    if (__real_3e45798ee0000000 <
        dStack_b0 * dStack_b0 + (double)local_b8 * (double)local_b8 +
        (double)local_a8._0_8_ * (double)local_a8._0_8_ + unique0x0000d608 * unique0x0000d608) {
      dVar16 = (double)local_b8 * (double)local_b8 + (double)local_a8._0_8_ * (double)local_a8._0_8_
      ;
      dVar19 = dStack_b0 * dStack_b0 + unique0x0000d608 * unique0x0000d608;
      dVar20 = dVar19 + dVar16;
      dVar16 = dVar16 + dVar19;
      dVar19 = (double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar20;
      dVar21 = (double)GlobalVectorConstants::FloatOne.m128_f32[3] - dVar16;
      auVar30._8_8_ =
           -(ulonglong)
            ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] <
            (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar21,0) & _UNK_15061cc88));
      auVar30._0_8_ =
           -(ulonglong)
            ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] <
            (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      dVar20 = (double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar20;
      dVar16 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - dVar16;
      uVar10 = movmskpd((int)pFVar12,auVar30);
      lVar14 = -(ulonglong)
                ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] <
                (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar16,0) & _UNK_15061cc88));
      auVar36._8_4_ = (int)lVar14;
      auVar36._0_8_ =
           -(ulonglong)
            ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] <
            (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar36._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
      iVar11 = movmskpd(uVar9,auVar36);
      if ((uVar10 & 0x3fffffff) != 0 || iVar11 != 0) {
        _Var28 = GlobalVectorConstants::FloatOne;
        bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2863756258781955386>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Math\\UnrealMath.cpp"
                           ,0x53a,"Q.IsNormalized()");
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          uVar8 = (*pcVar2)();
          return (bool)uVar8;
        }
        local_d0 = dVar23;
        dVar16 = (double)local_b8 * (double)local_b8 +
                 (double)local_a8._0_8_ * (double)local_a8._0_8_;
        dVar19 = dStack_b0 * dStack_b0 + stack0xffffffffffffff60 * stack0xffffffffffffff60;
        dVar20 = dVar19 + dVar16;
        dVar16 = dVar16 + dVar19;
        auVar4._8_4_ = SUB84(dVar16,0);
        auVar4._0_8_ = dVar20;
        auVar4._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
        auVar36 = sqrtpd((undefined1  [16])_Var28,auVar4);
        uVar13 = -(ulonglong)(dVar23 <= dVar20);
        uVar15 = -(ulonglong)(dVar23 <= dVar16);
        uVar10 = (uint)(uVar13 >> 0x20);
        uVar37 = (uint)(uVar15 >> 0x20);
        auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar36);
        auVar31._0_8_ = uVar13 & (ulonglong)(auVar30._0_8_ * (double)local_b8);
        uVar6 = uVar15 & (ulonglong)(auVar30._8_8_ * dStack_b0);
        auVar31._8_4_ = (undefined4)uVar6;
        auVar31._12_4_ = (undefined4)(uVar6 >> 0x20);
        auVar17._0_4_ =
             ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
        auVar17._4_4_ =
             ~uVar10 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                             0x20);
        auVar17._8_4_ =
             ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        auVar17._12_4_ =
             ~uVar37 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                             0x20);
        _local_b8 = auVar31 | auVar17;
        auVar36 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar36);
        auVar24._0_4_ =
             ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
        auVar24._4_4_ =
             ~uVar10 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                             0x20);
        auVar24._8_4_ =
             ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        auVar24._12_4_ =
             ~uVar37 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                             0x20);
        auVar18._0_8_ = (ulonglong)(auVar36._0_8_ * (double)local_a8._0_8_) & uVar13;
        uVar15 = (ulonglong)(auVar36._8_8_ * stack0xffffffffffffff60) & uVar15;
        auVar18._8_4_ = (undefined4)uVar15;
        auVar18._12_4_ = (undefined4)(uVar15 >> 0x20);
        uVar33 = local_b8._8_4_;
        uVar34 = local_b8._12_4_;
        _local_a8 = auVar24 | auVar18;
        uVar26 = local_a8._8_4_;
        uVar27 = local_a8._12_4_;
        uVar22 = local_a8._0_4_;
        uVar25 = local_a8._4_4_;
        uVar29 = local_b8._0_4_;
        uVar32 = local_b8._4_4_;
      }
      if ((double)CONCAT44(uVar27,uVar26) < 0.0) {
        dStack_b0 = (double)CONCAT44(uVar34,uVar33) * __real_bff0000000000000;
        local_b8 = (undefined1  [8])((double)CONCAT44(uVar32,uVar29) * __real_bff0000000000000);
        stack0xffffffffffffff60 = (double)CONCAT44(uVar27,uVar26) * __real_bff0000000000000;
        local_a8._0_8_ = (double)CONCAT44(uVar25,uVar22) * __real_bff0000000000000;
      }
    }
    else {
      dStack_b0 = Identity.Y;
      local_b8 = (undefined1  [8])Identity.X;
      local_a8._4_4_ = Identity.Z._4_4_;
      local_a8._0_4_ = Identity.Z._0_4_;
      local_a8._8_4_ = Identity.W._0_4_;
      uStack_9c = Identity.W._4_4_;
    }
  }
  uVar10 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1);
  if ((uVar10 < 0x16) ||
     (iVar11 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1), iVar11 == 0x1a)) {
    if (((param_1->field_0x28 & 1) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ar.IsLoading()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Math\\UnrealMath.cpp"
                           ,0x54f,L"float -> double conversion applied outside of load!"), bVar7)) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res10);
      }
    }
    else {
      local_res10[0] = *(float *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res20);
      }
    }
    else {
      local_res20[0] = *(float *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_d8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_d8);
      }
    }
    else {
      local_d8[0] = *(float *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    local_b8 = (undefined1  [8])(double)local_res10[0];
    dStack_b0 = (double)local_res20[0];
    local_a8._0_8_ = (undefined8)local_d8[0];
  }
  else {
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((undefined8 *)plVar1[1] < (undefined8 *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_b8,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)local_b8);
      }
    }
    else {
      local_b8 = (undefined1  [8])*(undefined8 *)*plVar1;
      *plVar1 = *plVar1 + 8;
    }
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((undefined8 *)plVar1[1] < (undefined8 *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_b8 + 8,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)(local_b8 + 8));
      }
    }
    else {
      dStack_b0 = (double)*(undefined8 *)*plVar1;
      *plVar1 = *plVar1 + 8;
    }
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((double *)plVar1[1] < (double *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_a8,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)local_a8);
      }
    }
    else {
      local_a8._0_8_ = *(double *)*plVar1;
      *plVar1 = *plVar1 + 8;
    }
  }
  if ((param_1->field_0x28 & 1) != 0) {
    dVar20 = dStack_b0 * dStack_b0 + (double)local_b8 * (double)local_b8 +
             (double)local_a8._0_8_ * (double)local_a8._0_8_;
    dVar23 = __real_3ff0000000000000 - dVar20;
    if (dVar23 < 0.0) {
      dVar23 = __real_3ff0000000000000 / SQRT(dVar20);
      local_b8 = (undefined1  [8])((double)local_b8 * dVar23);
      dStack_b0 = dStack_b0 * dVar23;
      local_a8._0_8_ = (double)local_a8._0_8_ * dVar23;
    }
    else {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = dVar23;
      auVar36 = sqrtpd(ZEXT816(0),auVar3);
      dVar35 = auVar36._0_8_;
    }
    auVar5._8_4_ = SUB84(dStack_b0,0);
    auVar5._0_8_ = local_b8;
    auVar5._12_4_ = (int)((ulonglong)dStack_b0 >> 0x20);
    this->X = (double)local_b8;
    this->Y = (double)auVar5._8_8_;
    this->Z = (double)local_a8._0_8_;
    this->W = dVar35;
  }
  *param_3 = true;
  return true;
}

// Normalize @ 1417e7310

void __thiscall UE::Math::TQuat<float>::Normalize(TQuat<float> *this,float param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar4 = this->X;
  fVar5 = this->Y;
  fVar6 = this->Z;
  fVar7 = this->W;
  fVar10 = fVar5 * fVar5 + fVar4 * fVar4;
  fVar11 = fVar4 * fVar4 + fVar5 * fVar5;
  fVar12 = fVar7 * fVar7 + fVar6 * fVar6;
  fVar13 = fVar6 * fVar6 + fVar7 * fVar7;
  auVar8._0_4_ = fVar12 + fVar10;
  auVar8._4_4_ = fVar13 + fVar11;
  auVar8._8_4_ = fVar10 + fVar12;
  auVar8._12_4_ = fVar11 + fVar13;
  auVar9 = sqrtps(auVar8,auVar8);
  auVar9 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar9);
  uVar1 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar2 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar3 = GlobalVectorConstants::Float0001.m128_u32[3];
  this->X = (float)((uint)(auVar9._0_4_ * fVar4) & -(uint)(param_1 <= auVar8._0_4_) |
                   ~-(uint)(param_1 <= auVar8._0_4_) & GlobalVectorConstants::Float0001.m128_u32[0])
  ;
  this->Y = (float)((uint)(auVar9._4_4_ * fVar5) & -(uint)(param_1 <= auVar8._4_4_) |
                   ~-(uint)(param_1 <= auVar8._4_4_) & uVar1);
  this->Z = (float)((uint)(auVar9._8_4_ * fVar6) & -(uint)(param_1 <= auVar8._8_4_) |
                   ~-(uint)(param_1 <= auVar8._8_4_) & uVar2);
  this->W = (float)((uint)(auVar9._12_4_ * fVar7) & -(uint)(param_1 <= auVar8._12_4_) |
                   ~-(uint)(param_1 <= auVar8._12_4_) & uVar3);
  return;
}

// Normalize @ 1417e7360

void __thiscall UE::Math::TQuat<double>::Normalize(TQuat<double> *this,double param_1)

{
  double dVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  uint uVar16;
  uint uVar17;
  
  dVar3 = this->X;
  dVar4 = this->Y;
  dVar5 = this->Z;
  dVar6 = this->W;
  dVar10 = dVar5 * dVar5 + dVar3 * dVar3;
  dVar11 = dVar6 * dVar6 + dVar4 * dVar4;
  dVar1 = dVar11 + dVar10;
  dVar10 = dVar10 + dVar11;
  auVar13._8_4_ = SUB84(dVar10,0);
  auVar13._0_8_ = dVar1;
  auVar13._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  auVar13 = sqrtpd(in_XMM4,auVar13);
  uVar7 = -(ulonglong)(param_1 <= dVar1);
  uVar8 = -(ulonglong)(param_1 <= dVar10);
  uVar16 = (uint)(uVar7 >> 0x20);
  uVar17 = (uint)(uVar8 >> 0x20);
  auVar14 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar13);
  auVar9._0_4_ = ~(uint)uVar7 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar9._4_4_ = ~uVar16 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                                 0x20);
  auVar9._8_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar9._12_4_ =
       ~uVar17 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar15._0_8_ = uVar7 & (ulonglong)(auVar14._0_8_ * dVar3);
  uVar2 = uVar8 & (ulonglong)(auVar14._8_8_ * dVar4);
  auVar15._8_4_ = (undefined4)uVar2;
  auVar15._12_4_ = (undefined4)(uVar2 >> 0x20);
  auVar13 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar13);
  auVar12._0_4_ = ~(uint)uVar7 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar12._4_4_ =
       ~uVar16 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar12._8_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar12._12_4_ =
       ~uVar17 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar14._0_8_ = (ulonglong)(auVar13._0_8_ * dVar5) & uVar7;
  uVar8 = (ulonglong)(auVar13._8_8_ * dVar6) & uVar8;
  auVar14._8_4_ = (undefined4)uVar8;
  auVar14._12_4_ = (undefined4)(uVar8 >> 0x20);
  this->X = (double)SUB168(auVar15 | auVar9,0);
  this->Y = (double)SUB168(auVar15 | auVar9,8);
  this->Z = (double)SUB168(auVar12 | auVar14,0);
  this->W = (double)SUB168(auVar12 | auVar14,8);
  return;
}

// RotateVector @ 1417f6da0

TVector<float> * __thiscall
UE::Math::TQuat<float>::RotateVector
          (TQuat<float> *this,TVector<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = this->Z;
  fVar2 = (param_1->field0_0x0)._s_0.X;
  fVar3 = this->W;
  fVar4 = this->X;
  fVar5 = this->Y;
  fVar9 = (param_1->field0_0x0)._s_0.Z * fVar5 - (param_1->field0_0x0)._s_0.Y * fVar1;
  fVar8 = fVar2 * fVar1 - (param_1->field0_0x0)._s_0.Z * fVar4;
  fVar9 = fVar9 + fVar9;
  fVar7 = (param_1->field0_0x0)._s_0.Y * fVar4 - fVar2 * fVar5;
  fVar8 = fVar8 + fVar8;
  fVar7 = fVar7 + fVar7;
  fVar6 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (fVar7 * fVar5 - fVar8 * fVar1) + fVar9 * fVar3 + fVar2;
  fVar2 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (fVar8 * fVar4 - fVar9 * fVar5) + fVar7 * fVar3 + fVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (fVar9 * fVar1 - fVar7 * fVar4) + fVar8 * fVar3 + fVar2;
  return __return_storage_ptr__;
}

// RotateVector @ 1417f6ee0

TVector<double> * __thiscall
UE::Math::TQuat<double>::RotateVector
          (TQuat<double> *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar1 = this->Z;
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = this->W;
  dVar4 = this->X;
  dVar5 = this->Y;
  dVar9 = (param_1->field0_0x0)._s_0.Z * dVar5 - (param_1->field0_0x0)._s_0.Y * dVar1;
  dVar9 = dVar9 + dVar9;
  dVar8 = dVar2 * dVar1 - (param_1->field0_0x0)._s_0.Z * dVar4;
  dVar8 = dVar8 + dVar8;
  dVar7 = (param_1->field0_0x0)._s_0.Y * dVar4 - dVar2 * dVar5;
  dVar7 = dVar7 + dVar7;
  dVar6 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (dVar7 * dVar5 - dVar8 * dVar1) + dVar9 * dVar3 + dVar2;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (dVar8 * dVar4 - dVar9 * dVar5) + dVar7 * dVar3 + dVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (dVar9 * dVar1 - dVar7 * dVar4) + dVar8 * dVar3 + dVar2;
  return __return_storage_ptr__;
}

// Rotator @ 1417f7640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TRotator<float> * __thiscall
UE::Math::TQuat<float>::Rotator(TQuat<float> *this,TRotator<float> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar8 = __real_c2b40000;
  fVar7 = __real_42b40000;
  fVar4 = __real_42652ee0;
  fVar3 = __real_3f800000;
  fVar5 = this->Z;
  fVar1 = this->Y;
  fVar6 = this->W;
  fVar2 = this->X;
  fVar9 = fVar5 * fVar2 - fVar6 * fVar1;
  if (___real_beffffef <= fVar9) {
    if (fVar9 <= ___real_3effffef) {
      fVar8 = (float)((uint)(fVar9 + fVar9) & __xmm_7fffffff7fffffff7fffffff7fffffff);
      fVar7 = __real_3f800000 - fVar8;
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      fVar7 = SQRT(fVar7) *
              (((((((__real_3bda90c5 - fVar8 * ___real_3aa57a2c) * fVar8 - ___real_3c8bfc66) * fVar8
                  + ___real_3cfd10f8) * fVar8 - ___real_3d4d8392) * fVar8 + ___real_3db63a9e) *
                fVar8 - ___real_3e5bbfca) * fVar8 + __real_3fc90fda);
      if (fVar9 + fVar9 < 0.0) {
        fVar7 = fVar7 - __real_3fc90fda;
      }
      else {
        fVar7 = __real_3fc90fda - fVar7;
      }
      fVar7 = fVar7 * __real_42652ee0;
      fVar6 = FGenericPlatformMath::Atan2
                        ((fVar6 + fVar6) * fVar5 + (fVar1 + fVar1) * fVar2,
                         __real_3f800000 - ((fVar5 + fVar5) * fVar5 + (fVar1 + fVar1) * fVar1));
      fVar5 = this->Y;
      fVar1 = this->X;
      fVar6 = fVar6 * fVar4;
      fVar5 = FGenericPlatformMath::Atan2
                        (fVar5 * this->Z * __real_c0000000 - (fVar1 + fVar1) * this->W,
                         fVar3 - ((fVar5 + fVar5) * fVar5 + (fVar1 + fVar1) * fVar1));
      fVar5 = fVar5 * fVar4;
      goto LAB_1417f7878;
    }
    fVar5 = FGenericPlatformMath::Atan2(fVar2,fVar6);
    fVar5 = fVar5 * ___real_42e52ee0;
  }
  else {
    fVar5 = FGenericPlatformMath::Atan2(fVar2,fVar6);
    fVar5 = fVar5 * ___real_c2e52ee0;
    fVar7 = fVar8;
  }
  fVar1 = __real_43b40000;
  fVar6 = FGenericPlatformMath::Fmod(fVar5,__real_43b40000);
  fVar5 = 0.0;
  if (fVar6 < 0.0) {
    fVar6 = fVar6 + fVar1;
  }
  if (__real_43340000 < fVar6) {
    fVar6 = fVar6 - fVar1;
  }
LAB_1417f7878:
  __return_storage_ptr__->Pitch = fVar7;
  __return_storage_ptr__->Yaw = fVar6;
  __return_storage_ptr__->Roll = fVar5;
  return __return_storage_ptr__;
}

// Rotator @ 1417f78c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TRotator<double> * __thiscall
UE::Math::TQuat<double>::Rotator(TQuat<double> *this,TRotator<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  dVar3 = __real_3ff0000000000000;
  dVar4 = this->Z;
  dVar1 = this->Y;
  dVar5 = this->W;
  dVar2 = this->X;
  dVar7 = dVar4 * dVar2 - dVar5 * dVar1;
  if (___real_bfdffffde7210be9 <= dVar7) {
    if (dVar7 <= ___real_3fdffffde7210be9) {
      dVar7 = dVar7 + dVar7;
      dVar6 = __real_bff0000000000000;
      if ((__real_bff0000000000000 <= dVar7) && (dVar6 = dVar7, __real_3ff0000000000000 <= dVar7)) {
        dVar6 = __real_3ff0000000000000;
      }
      dVar7 = asin(dVar6);
      dVar6 = __real_404ca5dc1a63c1f8;
      dVar7 = dVar7 * __real_404ca5dc1a63c1f8;
      dVar5 = FGenericPlatformMath::Atan2
                        ((dVar5 + dVar5) * dVar4 + (dVar1 + dVar1) * dVar2,
                         dVar3 - ((dVar4 + dVar4) * dVar4 + (dVar1 + dVar1) * dVar1));
      dVar4 = this->Y;
      dVar1 = this->X;
      dVar5 = dVar5 * dVar6;
      dVar4 = FGenericPlatformMath::Atan2
                        (dVar4 * this->Z * __real_c000000000000000 - (dVar1 + dVar1) * this->W,
                         dVar3 - ((dVar4 + dVar4) * dVar4 + (dVar1 + dVar1) * dVar1));
      dVar4 = dVar4 * dVar6;
      goto LAB_1417f7a7e;
    }
    uVar8 = (undefined4)__real_4056800000000000;
    uVar9 = (undefined4)((ulonglong)__real_4056800000000000 >> 0x20);
    dVar4 = FGenericPlatformMath::Atan2(dVar2,dVar5);
    dVar4 = dVar4 * __real_405ca5dc1a63c1f8;
  }
  else {
    uVar8 = (undefined4)__real_c056800000000000;
    uVar9 = (undefined4)((ulonglong)__real_c056800000000000 >> 0x20);
    dVar4 = FGenericPlatformMath::Atan2(dVar2,dVar5);
    dVar4 = dVar4 * ___real_c05ca5dc1a63c1f8;
  }
  dVar1 = __real_4076800000000000;
  dVar5 = FGenericPlatformMath::Fmod(dVar4,__real_4076800000000000);
  dVar4 = 0.0;
  if (dVar5 < 0.0) {
    dVar5 = dVar5 + dVar1;
  }
  dVar7 = (double)CONCAT44(uVar9,uVar8);
  if (__real_4066800000000000 < dVar5) {
    dVar5 = dVar5 - dVar1;
    dVar7 = (double)CONCAT44(uVar9,uVar8);
  }
LAB_1417f7a7e:
  __return_storage_ptr__->Pitch = dVar7;
  __return_storage_ptr__->Yaw = dVar5;
  __return_storage_ptr__->Roll = dVar4;
  return __return_storage_ptr__;
}

// Serialize @ 1417f8d40

bool __thiscall UE::Math::TQuat<float>::Serialize(TQuat<float> *this,FArchive *param_1)

{
  Math::operator<<(param_1,this);
  return true;
}

// Serialize @ 1417f8d60

bool __thiscall UE::Math::TQuat<double>::Serialize(TQuat<double> *this,FArchive *param_1)

{
  Math::operator<<(param_1,this);
  return true;
}

// SerializeFromMismatchedTag @ 1417fa540

bool __thiscall
UE::Math::TQuat<float>::SerializeFromMismatchedTag
          (TQuat<float> *this,FName param_1,FArchive *param_2)

{
  uint uVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  FNameEntryId FVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  uint local_res10 [2];
  FNameEntryId local_28;
  uint uStack_24;
  double local_20;
  double local_18;
  double local_10;
  
  FVar5 = FNameEntryId::FromValidEName((EName)local_res10);
  uStack_24 = 0;
  local_28.Value = *(uint *)CONCAT44(extraout_var,FVar5.Value);
  FVar5 = FNameEntryId::FromValidEName((EName)local_res10);
  uVar1 = *(uint *)CONCAT44(extraout_var_00,FVar5.Value);
  FVar5 = FNameEntryId::FromValidEName((EName)local_res10);
  local_res10[0] = *(uint *)CONCAT44(extraout_var_01,FVar5.Value);
  local_res10[1] = 0;
  FVar3.Number = 0;
  FVar3.ComparisonIndex.Value = uVar1;
  if ((param_1 != FVar3) &&
     ((FVar2.Number = 0, FVar2.ComparisonIndex.Value = local_res10[0], param_1 != FVar2 ||
      (0x3eb < (int)((ulonglong)*(undefined8 *)&param_2->field_0x40 >> 0x20))))) {
    FVar4.Number = uStack_24;
    FVar4.ComparisonIndex.Value = local_28.Value;
    if ((param_1 != FVar4) && (param_1 != FVar2)) {
      return false;
    }
    Math::operator<<(param_2,(TQuat<double> *)&local_28);
    this->X = (float)(double)CONCAT44(uStack_24,local_28.Value);
    this->Y = (float)local_20;
    this->Z = (float)local_18;
    this->W = (float)local_10;
    return true;
  }
  Math::operator<<(param_2,this);
  return true;
}

// SerializeFromMismatchedTag @ 1417fa680

bool __thiscall
UE::Math::TQuat<double>::SerializeFromMismatchedTag
          (TQuat<double> *this,FName param_1,FArchive *param_2)

{
  uint uVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  FNameEntryId FVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  uint local_res10 [2];
  TQuat<float> local_18;
  
  FVar5 = FNameEntryId::FromValidEName((EName)local_res10);
  local_18.Y = 0.0;
  local_18.X = *(float *)CONCAT44(extraout_var,FVar5.Value);
  FVar5 = FNameEntryId::FromValidEName((EName)local_res10);
  uVar1 = *(uint *)CONCAT44(extraout_var_00,FVar5.Value);
  FVar5 = FNameEntryId::FromValidEName((EName)local_res10);
  local_res10[0] = *(uint *)CONCAT44(extraout_var_01,FVar5.Value);
  local_res10[1] = 0;
  FVar3.Number = 0;
  FVar3.ComparisonIndex.Value = uVar1;
  if ((param_1 != FVar3) &&
     (FVar2.Number = 0, FVar2.ComparisonIndex.Value = local_res10[0], param_1 != FVar2)) {
    FVar4.Number = (uint)local_18.Y;
    FVar4.ComparisonIndex.Value = (uint)local_18.X;
    if (param_1 != FVar4) {
      return false;
    }
    Math::operator<<(param_2,&local_18);
    this->X = (double)local_18.X;
    this->Y = (double)local_18.Y;
    this->Z = (double)local_18.Z;
    this->W = (double)local_18.W;
    return true;
  }
  Math::operator<<(param_2,this);
  return true;
}

// Size @ 1417feaf0

float __thiscall UE::Math::TQuat<float>::Size(TQuat<float> *this)

{
  return SQRT(this->Y * this->Y + this->X * this->X + this->Z * this->Z + this->W * this->W);
}

// Size @ 1417feb30

double __thiscall UE::Math::TQuat<double>::Size(TQuat<double> *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1._0_8_ = this->X * this->X;
  auVar1._8_8_ = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = this->Y * this->Y + auVar1._0_8_ + this->Z * this->Z + this->W * this->W;
  auVar2 = sqrtpd(auVar1,auVar2);
  return auVar2._0_8_;
}

// SizeSquared @ 1417fed40

float __thiscall UE::Math::TQuat<float>::SizeSquared(TQuat<float> *this)

{
  return this->Y * this->Y + this->X * this->X + this->Z * this->Z + this->W * this->W;
}

// SizeSquared @ 1417fed80

double __thiscall UE::Math::TQuat<double>::SizeSquared(TQuat<double> *this)

{
  return this->Y * this->Y + this->X * this->X + this->Z * this->Z + this->W * this->W;
}

// Slerp @ 1417feee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TQuat<float> * __cdecl
UE::Math::TQuat<float>::Slerp
          (TQuat<float> *__return_storage_ptr__,TQuat<float> *param_1,TQuat<float> *param_2,
          float param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  TQuat<float> *pTVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  TQuat<float> local_18;
  
  pTVar11 = Slerp_NotNormalized(&local_18,param_1,param_2,param_3);
  fVar7 = pTVar11->X;
  fVar8 = pTVar11->Y;
  fVar9 = pTVar11->Z;
  fVar10 = pTVar11->W;
  fVar14 = fVar8 * fVar8 + fVar7 * fVar7;
  fVar15 = fVar7 * fVar7 + fVar8 * fVar8;
  fVar16 = fVar10 * fVar10 + fVar9 * fVar9;
  fVar17 = fVar9 * fVar9 + fVar10 * fVar10;
  auVar12._0_4_ = fVar16 + fVar14;
  auVar12._4_4_ = fVar17 + fVar15;
  auVar12._8_4_ = fVar14 + fVar16;
  auVar12._12_4_ = fVar15 + fVar17;
  bVar4 = _UNK_1506895d4 <= auVar12._4_4_;
  bVar5 = _UNK_1506895d8 <= auVar12._8_4_;
  bVar6 = _UNK_1506895dc <= auVar12._12_4_;
  auVar13 = sqrtps(auVar12,auVar12);
  auVar13 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar13);
  uVar1 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar2 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar3 = GlobalVectorConstants::Float0001.m128_u32[3];
  __return_storage_ptr__->X =
       (float)((uint)(auVar13._0_4_ * fVar7) &
               -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar12._0_4_) |
              ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar12._0_4_) &
              GlobalVectorConstants::Float0001.m128_u32[0]);
  __return_storage_ptr__->Y =
       (float)((uint)(auVar13._4_4_ * fVar8) & -(uint)bVar4 | ~-(uint)bVar4 & uVar1);
  __return_storage_ptr__->Z =
       (float)((uint)(auVar13._8_4_ * fVar9) & -(uint)bVar5 | ~-(uint)bVar5 & uVar2);
  __return_storage_ptr__->W =
       (float)((uint)(auVar13._12_4_ * fVar10) & -(uint)bVar6 | ~-(uint)bVar6 & uVar3);
  return __return_storage_ptr__;
}

// Slerp @ 1417fef50

TQuat<double> * __cdecl
UE::Math::TQuat<double>::Slerp
          (TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1,TQuat<double> *param_2,
          double param_3)

{
  double dVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  TQuat<double> *pTVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar13;
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint uVar18;
  uint uVar19;
  TQuat<double> local_48 [2];
  
  pTVar8 = Slerp_NotNormalized(local_48,param_1,param_2,param_3);
  dVar7 = __real_3e45798ee0000000;
  dVar1 = pTVar8->Y;
  __return_storage_ptr__->X = pTVar8->X;
  __return_storage_ptr__->Y = dVar1;
  dVar3 = pTVar8->Z;
  dVar4 = pTVar8->W;
  __return_storage_ptr__->Z = dVar3;
  __return_storage_ptr__->W = dVar4;
  dVar5 = __return_storage_ptr__->X;
  dVar6 = __return_storage_ptr__->Y;
  dVar11 = dVar3 * dVar3 + dVar5 * dVar5;
  dVar13 = dVar4 * dVar4 + dVar6 * dVar6;
  dVar1 = dVar13 + dVar11;
  dVar11 = dVar11 + dVar13;
  auVar15._8_4_ = SUB84(dVar11,0);
  auVar15._0_8_ = dVar1;
  auVar15._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar15 = sqrtpd(in_XMM4,auVar15);
  uVar9 = -(ulonglong)(dVar7 <= dVar1);
  uVar10 = -(ulonglong)(dVar7 <= dVar11);
  uVar18 = (uint)(uVar9 >> 0x20);
  uVar19 = (uint)(uVar10 >> 0x20);
  auVar16 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar15);
  auVar17._0_8_ = uVar9 & (ulonglong)(auVar16._0_8_ * dVar5);
  uVar2 = uVar10 & (ulonglong)(auVar16._8_8_ * dVar6);
  auVar17._8_4_ = (undefined4)uVar2;
  auVar17._12_4_ = (undefined4)(uVar2 >> 0x20);
  auVar16._0_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar16._4_4_ =
       ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar16._8_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar16._12_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar15 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar15);
  auVar14._0_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar14._4_4_ =
       ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar14._8_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar14._12_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar12._0_8_ = (ulonglong)(auVar15._0_8_ * dVar3) & uVar9;
  uVar10 = (ulonglong)(auVar15._8_8_ * dVar4) & uVar10;
  auVar12._8_4_ = (undefined4)uVar10;
  auVar12._12_4_ = (undefined4)(uVar10 >> 0x20);
  __return_storage_ptr__->X = (double)SUB168(auVar17 | auVar16,0);
  __return_storage_ptr__->Y = (double)SUB168(auVar17 | auVar16,8);
  __return_storage_ptr__->Z = (double)SUB168(auVar14 | auVar12,0);
  __return_storage_ptr__->W = (double)SUB168(auVar14 | auVar12,8);
  return __return_storage_ptr__;
}

// SlerpFullPath @ 1417ff020

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TQuat<float> * __cdecl
UE::Math::TQuat<float>::SlerpFullPath
          (TQuat<float> *__return_storage_ptr__,TQuat<float> *param_1,TQuat<float> *param_2,
          float param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  TQuat<float> *pTVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  TQuat<float> local_18;
  
  pTVar11 = SlerpFullPath_NotNormalized(&local_18,param_1,param_2,param_3);
  fVar7 = pTVar11->X;
  fVar8 = pTVar11->Y;
  fVar9 = pTVar11->Z;
  fVar10 = pTVar11->W;
  fVar14 = fVar8 * fVar8 + fVar7 * fVar7;
  fVar15 = fVar7 * fVar7 + fVar8 * fVar8;
  fVar16 = fVar10 * fVar10 + fVar9 * fVar9;
  fVar17 = fVar9 * fVar9 + fVar10 * fVar10;
  auVar12._0_4_ = fVar16 + fVar14;
  auVar12._4_4_ = fVar17 + fVar15;
  auVar12._8_4_ = fVar14 + fVar16;
  auVar12._12_4_ = fVar15 + fVar17;
  bVar4 = _UNK_1506895d4 <= auVar12._4_4_;
  bVar5 = _UNK_1506895d8 <= auVar12._8_4_;
  bVar6 = _UNK_1506895dc <= auVar12._12_4_;
  auVar13 = sqrtps(auVar12,auVar12);
  auVar13 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar13);
  uVar1 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar2 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar3 = GlobalVectorConstants::Float0001.m128_u32[3];
  __return_storage_ptr__->X =
       (float)((uint)(auVar13._0_4_ * fVar7) &
               -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar12._0_4_) |
              ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar12._0_4_) &
              GlobalVectorConstants::Float0001.m128_u32[0]);
  __return_storage_ptr__->Y =
       (float)((uint)(auVar13._4_4_ * fVar8) & -(uint)bVar4 | ~-(uint)bVar4 & uVar1);
  __return_storage_ptr__->Z =
       (float)((uint)(auVar13._8_4_ * fVar9) & -(uint)bVar5 | ~-(uint)bVar5 & uVar2);
  __return_storage_ptr__->W =
       (float)((uint)(auVar13._12_4_ * fVar10) & -(uint)bVar6 | ~-(uint)bVar6 & uVar3);
  return __return_storage_ptr__;
}

// SlerpFullPath @ 1417ff090

TQuat<double> * __cdecl
UE::Math::TQuat<double>::SlerpFullPath
          (TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1,TQuat<double> *param_2,
          double param_3)

{
  double dVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  TQuat<double> *pTVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar13;
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint uVar18;
  uint uVar19;
  TQuat<double> local_48 [2];
  
  pTVar8 = SlerpFullPath_NotNormalized(local_48,param_1,param_2,param_3);
  dVar7 = __real_3e45798ee0000000;
  dVar1 = pTVar8->Y;
  __return_storage_ptr__->X = pTVar8->X;
  __return_storage_ptr__->Y = dVar1;
  dVar3 = pTVar8->Z;
  dVar4 = pTVar8->W;
  __return_storage_ptr__->Z = dVar3;
  __return_storage_ptr__->W = dVar4;
  dVar5 = __return_storage_ptr__->X;
  dVar6 = __return_storage_ptr__->Y;
  dVar11 = dVar3 * dVar3 + dVar5 * dVar5;
  dVar13 = dVar4 * dVar4 + dVar6 * dVar6;
  dVar1 = dVar13 + dVar11;
  dVar11 = dVar11 + dVar13;
  auVar15._8_4_ = SUB84(dVar11,0);
  auVar15._0_8_ = dVar1;
  auVar15._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar15 = sqrtpd(in_XMM4,auVar15);
  uVar9 = -(ulonglong)(dVar7 <= dVar1);
  uVar10 = -(ulonglong)(dVar7 <= dVar11);
  uVar18 = (uint)(uVar9 >> 0x20);
  uVar19 = (uint)(uVar10 >> 0x20);
  auVar16 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar15);
  auVar17._0_8_ = uVar9 & (ulonglong)(auVar16._0_8_ * dVar5);
  uVar2 = uVar10 & (ulonglong)(auVar16._8_8_ * dVar6);
  auVar17._8_4_ = (undefined4)uVar2;
  auVar17._12_4_ = (undefined4)(uVar2 >> 0x20);
  auVar16._0_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar16._4_4_ =
       ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar16._8_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar16._12_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar15 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar15);
  auVar14._0_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar14._4_4_ =
       ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar14._8_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar14._12_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar12._0_8_ = (ulonglong)(auVar15._0_8_ * dVar3) & uVar9;
  uVar10 = (ulonglong)(auVar15._8_8_ * dVar4) & uVar10;
  auVar12._8_4_ = (undefined4)uVar10;
  auVar12._12_4_ = (undefined4)(uVar10 >> 0x20);
  __return_storage_ptr__->X = (double)SUB168(auVar17 | auVar16,0);
  __return_storage_ptr__->Y = (double)SUB168(auVar17 | auVar16,8);
  __return_storage_ptr__->Z = (double)SUB168(auVar14 | auVar12,0);
  __return_storage_ptr__->W = (double)SUB168(auVar14 | auVar12,8);
  return __return_storage_ptr__;
}

// SlerpFullPath_NotNormalized @ 1417ff160

TQuat<float> * __cdecl
UE::Math::TQuat<float>::SlerpFullPath_NotNormalized
          (TQuat<float> *__return_storage_ptr__,TQuat<float> *param_1,TQuat<float> *param_2,
          float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = __real_3f800000;
  fVar9 = param_1->W * param_2->W + param_1->Z * param_2->Z +
          param_1->Y * param_2->Y + param_1->X * param_2->X;
  if (__real_3f800000 <= fVar9) {
    fVar9 = __real_3f800000;
  }
  if (fVar9 <= __real_bf800000) {
    fVar9 = __real_bf800000;
  }
  fVar5 = __real_bf800000;
  if ((__real_bf800000 <= fVar9) && (fVar5 = fVar9, __real_3f800000 <= fVar9)) {
    fVar5 = __real_3f800000;
  }
  fVar9 = acosf(fVar5);
  if (__real_38d1b717 <= (float)((uint)fVar9 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar6 = sinf(fVar9);
    fVar6 = fVar1 / fVar6;
    fVar7 = sinf((fVar1 - param_3) * fVar9);
    fVar7 = fVar7 * fVar6;
    fVar1 = param_1->X;
    fVar5 = param_1->Y;
    fVar2 = param_1->Z;
    fVar3 = param_1->W;
    fVar8 = sinf(fVar9 * param_3);
    fVar8 = fVar8 * fVar6;
    fVar9 = param_2->Y;
    fVar6 = param_2->Z;
    fVar4 = param_2->W;
    __return_storage_ptr__->X = fVar7 * fVar1 + fVar8 * param_2->X;
    __return_storage_ptr__->Y = fVar7 * fVar5 + fVar8 * fVar9;
    __return_storage_ptr__->Z = fVar7 * fVar2 + fVar8 * fVar6;
    __return_storage_ptr__->W = fVar7 * fVar3 + fVar8 * fVar4;
  }
  else {
    fVar1 = param_1->Y;
    fVar9 = param_1->Z;
    fVar5 = param_1->W;
    __return_storage_ptr__->X = param_1->X;
    __return_storage_ptr__->Y = fVar1;
    __return_storage_ptr__->Z = fVar9;
    __return_storage_ptr__->W = fVar5;
  }
  return __return_storage_ptr__;
}

// SlerpFullPath_NotNormalized @ 1417ff290

TQuat<double> * __cdecl
UE::Math::TQuat<double>::SlerpFullPath_NotNormalized
          (TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1,TQuat<double> *param_2,
          double param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  
  dVar2 = __real_3ff0000000000000;
  dVar6 = param_1->Y * param_2->Y + param_1->X * param_2->X +
          param_1->W * param_2->W + param_2->Z * param_1->Z;
  if (__real_3ff0000000000000 <= dVar6) {
    dVar6 = __real_3ff0000000000000;
  }
  if (dVar6 <= __real_bff0000000000000) {
    dVar6 = __real_bff0000000000000;
  }
  dVar1 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar6) && (dVar1 = dVar6, __real_3ff0000000000000 <= dVar6)) {
    dVar1 = __real_3ff0000000000000;
  }
  dVar6 = acos(dVar1);
  if (__real_3f1a36e2e0000000 <=
      (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar1 = sin(dVar6);
    dVar1 = dVar2 / dVar1;
    dVar2 = sin((dVar2 - param_3) * dVar6);
    dVar2 = dVar2 * dVar1;
    dVar6 = sin(dVar6 * param_3);
    dVar6 = dVar6 * dVar1;
    dVar1 = dVar6 * param_2->X + dVar2 * param_1->X;
    dVar4 = dVar6 * param_2->Y + dVar2 * param_1->Y;
    dVar7 = dVar6 * param_2->Z + dVar2 * param_1->Z;
    dVar6 = dVar6 * param_2->W + dVar2 * param_1->W;
    auVar3._8_4_ = SUB84(dVar4,0);
    auVar3._0_8_ = dVar1;
    auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    __return_storage_ptr__->X = dVar1;
    __return_storage_ptr__->Y = (double)auVar3._8_8_;
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = dVar7;
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    __return_storage_ptr__->Z = dVar7;
    __return_storage_ptr__->W = (double)auVar5._8_8_;
  }
  else {
    dVar6 = param_1->Y;
    dVar2 = param_1->Z;
    dVar1 = param_1->W;
    __return_storage_ptr__->X = param_1->X;
    __return_storage_ptr__->Y = dVar6;
    __return_storage_ptr__->Z = dVar2;
    __return_storage_ptr__->W = dVar1;
  }
  return __return_storage_ptr__;
}

// Slerp_NotNormalized @ 1417ffa10

TQuat<float> * __cdecl
UE::Math::TQuat<float>::Slerp_NotNormalized
          (TQuat<float> *__return_storage_ptr__,TQuat<float> *param_1,TQuat<float> *param_2,
          float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = __real_3f800000;
  fVar6 = param_1->W * param_2->W + param_1->Z * param_2->Z +
          param_1->Y * param_2->Y + param_1->X * param_2->X;
  fVar7 = param_3;
  if (fVar6 < 0.0) {
    fVar6 = (float)((uint)fVar6 ^ __xmm_80000000800000008000000080000000);
    fVar7 = (float)((uint)param_3 ^ __xmm_80000000800000008000000080000000);
  }
  fVar8 = __real_3f800000 - param_3;
  if (fVar6 < __real_3f7ff972) {
    fVar5 = __real_bf800000;
    if ((__real_bf800000 <= fVar6) && (fVar5 = fVar6, __real_3f800000 <= fVar6)) {
      fVar5 = __real_3f800000;
    }
    fVar6 = acosf(fVar5);
    fVar5 = sinf(fVar6);
    fVar8 = sinf(fVar6 * fVar8);
    fVar8 = fVar8 * (fVar1 / fVar5);
    fVar7 = sinf(fVar6 * fVar7);
    fVar7 = fVar7 * (fVar1 / fVar5);
  }
  fVar1 = param_2->Y;
  fVar6 = param_2->Z;
  fVar5 = param_2->W;
  fVar2 = param_1->Y;
  fVar3 = param_1->Z;
  fVar4 = param_1->W;
  __return_storage_ptr__->X = fVar8 * param_1->X + fVar7 * param_2->X;
  __return_storage_ptr__->Y = fVar8 * fVar2 + fVar7 * fVar1;
  __return_storage_ptr__->Z = fVar8 * fVar3 + fVar7 * fVar6;
  __return_storage_ptr__->W = fVar8 * fVar4 + fVar7 * fVar5;
  return __return_storage_ptr__;
}

// Slerp_NotNormalized @ 1417ffb50

TQuat<double> * __cdecl
UE::Math::TQuat<double>::Slerp_NotNormalized
          (TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1,TQuat<double> *param_2,
          double param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar2 = __real_3ff0000000000000;
  dVar8 = param_1->Y * param_2->Y + param_1->X * param_2->X +
          param_1->W * param_2->W + param_2->Z * param_1->Z;
  dVar7 = param_3;
  if (dVar8 < 0.0) {
    dVar8 = (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) ^
                             __xmm_80000000000000008000000000000000._4_4_,
                             SUB84(dVar8,0) ^ (uint)__xmm_80000000000000008000000000000000);
    dVar7 = (double)CONCAT44((uint)((ulonglong)param_3 >> 0x20) ^
                             __xmm_80000000000000008000000000000000._4_4_,
                             SUB84(param_3,0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  dVar6 = __real_3ff0000000000000 - param_3;
  if (dVar8 < __real_3fefff2e48e8a71e) {
    dVar5 = __real_bff0000000000000;
    if ((__real_bff0000000000000 <= dVar8) && (dVar5 = dVar8, __real_3ff0000000000000 <= dVar8)) {
      dVar5 = __real_3ff0000000000000;
    }
    dVar8 = acos(dVar5);
    dVar5 = sin(dVar8);
    dVar6 = sin(dVar8 * dVar6);
    dVar6 = dVar6 * (dVar2 / dVar5);
    dVar7 = sin(dVar8 * dVar7);
    dVar7 = dVar7 * (dVar2 / dVar5);
  }
  dVar2 = dVar7 * param_2->X + param_1->X * dVar6;
  dVar8 = dVar7 * param_2->Y + param_1->Y * dVar6;
  dVar5 = param_2->Z;
  dVar4 = param_2->W;
  auVar1._8_4_ = SUB84(dVar8,0);
  auVar1._0_8_ = dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  __return_storage_ptr__->X = dVar2;
  __return_storage_ptr__->Y = (double)auVar1._8_8_;
  dVar2 = dVar7 * dVar5 + param_1->Z * dVar6;
  dVar7 = dVar7 * dVar4 + param_1->W * dVar6;
  auVar3._8_4_ = SUB84(dVar7,0);
  auVar3._0_8_ = dVar2;
  auVar3._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  __return_storage_ptr__->Z = dVar2;
  __return_storage_ptr__->W = (double)auVar3._8_8_;
  return __return_storage_ptr__;
}

// Squad @ 141800700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TQuat<float> * __cdecl
UE::Math::TQuat<float>::Squad
          (TQuat<float> *__return_storage_ptr__,TQuat<float> *param_1,TQuat<float> *param_2,
          TQuat<float> *param_3,TQuat<float> *param_4,float param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  TQuat<float> local_98;
  TQuat<float> local_88 [8];
  
  Slerp_NotNormalized(&local_98,param_1,param_3,param_5);
  SlerpFullPath_NotNormalized(local_88,param_2,param_4,param_5);
  fVar15 = local_98.W;
  fVar14 = local_98.Z;
  fVar13 = local_98.Y;
  fVar7 = local_98.X;
  fVar10 = __real_3f800000;
  fVar16 = (param_5 + param_5) * (__real_3f800000 - param_5);
  fVar12 = local_88[0].W * local_98.W + local_98.Z * local_88[0].Z +
           local_88[0].Y * local_98.Y + local_88[0].X * local_98.X;
  if (__real_3f800000 <= fVar12) {
    fVar12 = __real_3f800000;
  }
  if (fVar12 <= __real_bf800000) {
    fVar12 = __real_bf800000;
  }
  fVar11 = __real_bf800000;
  if ((__real_bf800000 <= fVar12) && (fVar11 = fVar12, __real_3f800000 <= fVar12)) {
    fVar11 = __real_3f800000;
  }
  fVar12 = acosf(fVar11);
  if (__real_38d1b717 <= (float)((uint)fVar12 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar7 = sinf(fVar12);
    fVar7 = fVar10 / fVar7;
    fVar10 = sinf((fVar10 - fVar16) * fVar12);
    fVar10 = fVar10 * fVar7;
    fVar12 = sinf(fVar12 * fVar16);
    fVar12 = fVar12 * fVar7;
    fVar7 = fVar10 * local_98.X + fVar12 * local_88[0].X;
    fVar13 = fVar10 * local_98.Y + fVar12 * local_88[0].Y;
    fVar14 = fVar10 * local_98.Z + fVar12 * local_88[0].Z;
    fVar15 = fVar10 * local_98.W + fVar12 * local_88[0].W;
  }
  fVar12 = fVar13 * fVar13 + fVar7 * fVar7;
  fVar10 = fVar7 * fVar7 + fVar13 * fVar13;
  fVar16 = fVar15 * fVar15 + fVar14 * fVar14;
  fVar11 = fVar14 * fVar14 + fVar15 * fVar15;
  auVar8._0_4_ = fVar16 + fVar12;
  auVar8._4_4_ = fVar11 + fVar10;
  auVar8._8_4_ = fVar12 + fVar16;
  auVar8._12_4_ = fVar10 + fVar11;
  bVar4 = _UNK_1506895d4 <= auVar8._4_4_;
  bVar5 = _UNK_1506895d8 <= auVar8._8_4_;
  bVar6 = _UNK_1506895dc <= auVar8._12_4_;
  auVar9 = sqrtps(auVar8,auVar8);
  auVar9 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar9);
  uVar1 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar2 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar3 = GlobalVectorConstants::Float0001.m128_u32[3];
  __return_storage_ptr__->X =
       (float)((uint)(auVar9._0_4_ * fVar7) &
               -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar8._0_4_) |
              ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar8._0_4_) &
              GlobalVectorConstants::Float0001.m128_u32[0]);
  __return_storage_ptr__->Y =
       (float)((uint)(auVar9._4_4_ * fVar13) & -(uint)bVar4 | ~-(uint)bVar4 & uVar1);
  __return_storage_ptr__->Z =
       (float)((uint)(auVar9._8_4_ * fVar14) & -(uint)bVar5 | ~-(uint)bVar5 & uVar2);
  __return_storage_ptr__->W =
       (float)((uint)(auVar9._12_4_ * fVar15) & -(uint)bVar6 | ~-(uint)bVar6 & uVar3);
  return __return_storage_ptr__;
}

// Squad @ 141800910

TQuat<double> * __cdecl
UE::Math::TQuat<double>::Squad
          (TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1,TQuat<double> *param_2,
          TQuat<double> *param_3,TQuat<double> *param_4,double param_5)

{
  double dVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  TQuat<double> *pTVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar13;
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint uVar18;
  uint uVar19;
  TQuat<double> local_88;
  TQuat<double> local_68;
  TQuat<double> local_48 [2];
  
  Slerp_NotNormalized(&local_68,param_1,param_3,param_5);
  SlerpFullPath_NotNormalized(&local_88,param_2,param_4,param_5);
  pTVar8 = SlerpFullPath_NotNormalized
                     (local_48,&local_68,&local_88,
                      (param_5 + param_5) * (__real_3ff0000000000000 - param_5));
  dVar7 = __real_3e45798ee0000000;
  dVar1 = pTVar8->Y;
  __return_storage_ptr__->X = pTVar8->X;
  __return_storage_ptr__->Y = dVar1;
  dVar3 = pTVar8->Z;
  dVar4 = pTVar8->W;
  __return_storage_ptr__->Z = dVar3;
  __return_storage_ptr__->W = dVar4;
  dVar5 = __return_storage_ptr__->X;
  dVar6 = __return_storage_ptr__->Y;
  dVar11 = dVar3 * dVar3 + dVar5 * dVar5;
  dVar13 = dVar4 * dVar4 + dVar6 * dVar6;
  dVar1 = dVar13 + dVar11;
  dVar11 = dVar11 + dVar13;
  auVar15._8_4_ = SUB84(dVar11,0);
  auVar15._0_8_ = dVar1;
  auVar15._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar15 = sqrtpd(in_XMM4,auVar15);
  uVar9 = -(ulonglong)(dVar7 <= dVar1);
  uVar10 = -(ulonglong)(dVar7 <= dVar11);
  uVar18 = (uint)(uVar9 >> 0x20);
  uVar19 = (uint)(uVar10 >> 0x20);
  auVar16 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar15);
  auVar17._0_8_ = uVar9 & (ulonglong)(auVar16._0_8_ * dVar5);
  uVar2 = uVar10 & (ulonglong)(auVar16._8_8_ * dVar6);
  auVar17._8_4_ = (undefined4)uVar2;
  auVar17._12_4_ = (undefined4)(uVar2 >> 0x20);
  auVar16._0_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar16._4_4_ =
       ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar16._8_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar16._12_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar15 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar15);
  auVar14._0_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar14._4_4_ =
       ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar14._8_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar14._12_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar12._0_8_ = (ulonglong)(auVar15._0_8_ * dVar3) & uVar9;
  uVar10 = (ulonglong)(auVar15._8_8_ * dVar4) & uVar10;
  auVar12._8_4_ = (undefined4)uVar10;
  auVar12._12_4_ = (undefined4)(uVar10 >> 0x20);
  __return_storage_ptr__->X = (double)SUB168(auVar17 | auVar16,0);
  __return_storage_ptr__->Y = (double)SUB168(auVar17 | auVar16,8);
  __return_storage_ptr__->Z = (double)SUB168(auVar14 | auVar12,0);
  __return_storage_ptr__->W = (double)SUB168(auVar14 | auVar12,8);
  return __return_storage_ptr__;
}

// SquadFullPath @ 141800a40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TQuat<float> * __cdecl
UE::Math::TQuat<float>::SquadFullPath
          (TQuat<float> *__return_storage_ptr__,TQuat<float> *param_1,TQuat<float> *param_2,
          TQuat<float> *param_3,TQuat<float> *param_4,float param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  TQuat<float> local_98;
  TQuat<float> local_88 [8];
  
  SlerpFullPath_NotNormalized(&local_98,param_1,param_3,param_5);
  SlerpFullPath_NotNormalized(local_88,param_2,param_4,param_5);
  fVar15 = local_98.W;
  fVar14 = local_98.Z;
  fVar13 = local_98.Y;
  fVar7 = local_98.X;
  fVar10 = __real_3f800000;
  fVar16 = (param_5 + param_5) * (__real_3f800000 - param_5);
  fVar12 = local_88[0].W * local_98.W + local_98.Z * local_88[0].Z +
           local_88[0].Y * local_98.Y + local_88[0].X * local_98.X;
  if (__real_3f800000 <= fVar12) {
    fVar12 = __real_3f800000;
  }
  if (fVar12 <= __real_bf800000) {
    fVar12 = __real_bf800000;
  }
  fVar11 = __real_bf800000;
  if ((__real_bf800000 <= fVar12) && (fVar11 = fVar12, __real_3f800000 <= fVar12)) {
    fVar11 = __real_3f800000;
  }
  fVar12 = acosf(fVar11);
  if (__real_38d1b717 <= (float)((uint)fVar12 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar7 = sinf(fVar12);
    fVar7 = fVar10 / fVar7;
    fVar10 = sinf((fVar10 - fVar16) * fVar12);
    fVar10 = fVar10 * fVar7;
    fVar12 = sinf(fVar12 * fVar16);
    fVar12 = fVar12 * fVar7;
    fVar7 = fVar10 * local_98.X + fVar12 * local_88[0].X;
    fVar13 = fVar10 * local_98.Y + fVar12 * local_88[0].Y;
    fVar14 = fVar10 * local_98.Z + fVar12 * local_88[0].Z;
    fVar15 = fVar10 * local_98.W + fVar12 * local_88[0].W;
  }
  fVar12 = fVar13 * fVar13 + fVar7 * fVar7;
  fVar10 = fVar7 * fVar7 + fVar13 * fVar13;
  fVar16 = fVar15 * fVar15 + fVar14 * fVar14;
  fVar11 = fVar14 * fVar14 + fVar15 * fVar15;
  auVar8._0_4_ = fVar16 + fVar12;
  auVar8._4_4_ = fVar11 + fVar10;
  auVar8._8_4_ = fVar12 + fVar16;
  auVar8._12_4_ = fVar10 + fVar11;
  bVar4 = _UNK_1506895d4 <= auVar8._4_4_;
  bVar5 = _UNK_1506895d8 <= auVar8._8_4_;
  bVar6 = _UNK_1506895dc <= auVar8._12_4_;
  auVar9 = sqrtps(auVar8,auVar8);
  auVar9 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar9);
  uVar1 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar2 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar3 = GlobalVectorConstants::Float0001.m128_u32[3];
  __return_storage_ptr__->X =
       (float)((uint)(auVar9._0_4_ * fVar7) &
               -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar8._0_4_) |
              ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar8._0_4_) &
              GlobalVectorConstants::Float0001.m128_u32[0]);
  __return_storage_ptr__->Y =
       (float)((uint)(auVar9._4_4_ * fVar13) & -(uint)bVar4 | ~-(uint)bVar4 & uVar1);
  __return_storage_ptr__->Z =
       (float)((uint)(auVar9._8_4_ * fVar14) & -(uint)bVar5 | ~-(uint)bVar5 & uVar2);
  __return_storage_ptr__->W =
       (float)((uint)(auVar9._12_4_ * fVar15) & -(uint)bVar6 | ~-(uint)bVar6 & uVar3);
  return __return_storage_ptr__;
}

// SquadFullPath @ 141800c50

TQuat<double> * __cdecl
UE::Math::TQuat<double>::SquadFullPath
          (TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1,TQuat<double> *param_2,
          TQuat<double> *param_3,TQuat<double> *param_4,double param_5)

{
  double dVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  TQuat<double> *pTVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar13;
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint uVar18;
  uint uVar19;
  TQuat<double> local_88;
  TQuat<double> local_68;
  TQuat<double> local_48 [2];
  
  SlerpFullPath_NotNormalized(&local_68,param_1,param_3,param_5);
  SlerpFullPath_NotNormalized(&local_88,param_2,param_4,param_5);
  pTVar8 = SlerpFullPath_NotNormalized
                     (local_48,&local_68,&local_88,
                      (param_5 + param_5) * (__real_3ff0000000000000 - param_5));
  dVar7 = __real_3e45798ee0000000;
  dVar1 = pTVar8->Y;
  __return_storage_ptr__->X = pTVar8->X;
  __return_storage_ptr__->Y = dVar1;
  dVar3 = pTVar8->Z;
  dVar4 = pTVar8->W;
  __return_storage_ptr__->Z = dVar3;
  __return_storage_ptr__->W = dVar4;
  dVar5 = __return_storage_ptr__->X;
  dVar6 = __return_storage_ptr__->Y;
  dVar11 = dVar3 * dVar3 + dVar5 * dVar5;
  dVar13 = dVar4 * dVar4 + dVar6 * dVar6;
  dVar1 = dVar13 + dVar11;
  dVar11 = dVar11 + dVar13;
  auVar15._8_4_ = SUB84(dVar11,0);
  auVar15._0_8_ = dVar1;
  auVar15._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar15 = sqrtpd(in_XMM4,auVar15);
  uVar9 = -(ulonglong)(dVar7 <= dVar1);
  uVar10 = -(ulonglong)(dVar7 <= dVar11);
  uVar18 = (uint)(uVar9 >> 0x20);
  uVar19 = (uint)(uVar10 >> 0x20);
  auVar16 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar15);
  auVar17._0_8_ = uVar9 & (ulonglong)(auVar16._0_8_ * dVar5);
  uVar2 = uVar10 & (ulonglong)(auVar16._8_8_ * dVar6);
  auVar17._8_4_ = (undefined4)uVar2;
  auVar17._12_4_ = (undefined4)(uVar2 >> 0x20);
  auVar16._0_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar16._4_4_ =
       ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar16._8_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar16._12_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar15 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar15);
  auVar14._0_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar14._4_4_ =
       ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar14._8_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar14._12_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar12._0_8_ = (ulonglong)(auVar15._0_8_ * dVar3) & uVar9;
  uVar10 = (ulonglong)(auVar15._8_8_ * dVar4) & uVar10;
  auVar12._8_4_ = (undefined4)uVar10;
  auVar12._12_4_ = (undefined4)(uVar10 >> 0x20);
  __return_storage_ptr__->X = (double)SUB168(auVar17 | auVar16,0);
  __return_storage_ptr__->Y = (double)SUB168(auVar17 | auVar16,8);
  __return_storage_ptr__->Z = (double)SUB168(auVar14 | auVar12,0);
  __return_storage_ptr__->W = (double)SUB168(auVar14 | auVar12,8);
  return __return_storage_ptr__;
}

// ToAxisAndAngle @ 141802220

void __thiscall
UE::Math::TQuat<float>::ToAxisAndAngle(TQuat<float> *this,TVector<float> *param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  undefined1 auVar10 [16];
  
  fVar5 = this->W;
  fVar6 = __real_bf800000;
  if ((__real_bf800000 <= fVar5) && (fVar6 = fVar5, __real_3f800000 <= fVar5)) {
    fVar6 = __real_3f800000;
  }
  fVar5 = acosf(fVar6);
  *param_2 = fVar5 + fVar5;
  auVar10 = insertps((undefined1  [16])*this,(undefined1  [16])*this,8);
  fVar9 = auVar10._0_4_;
  fVar11 = auVar10._4_4_;
  fVar12 = auVar10._8_4_;
  fVar5 = auVar10._12_4_ * auVar10._12_4_;
  fVar6 = fVar11 * fVar11 + fVar9 * fVar9;
  fVar7 = fVar9 * fVar9 + fVar11 * fVar11;
  fVar8 = fVar5 + fVar12 * fVar12;
  fVar5 = fVar12 * fVar12 + fVar5;
  auVar10._0_4_ = fVar8 + fVar6;
  auVar10._4_4_ = fVar5 + fVar7;
  auVar10._8_4_ = fVar6 + fVar8;
  auVar10._12_4_ = fVar7 + fVar5;
  uVar2 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar10._0_4_);
  uVar3 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar10._4_4_);
  uVar4 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar10._8_4_);
  auVar10 = sqrtps(auVar10,auVar10);
  auVar10 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar10);
  uVar1 = GlobalVectorConstants::Float1000.m128_u32[2];
  *(ulonglong *)&param_1->field0_0x0 =
       CONCAT44((uint)(auVar10._4_4_ * fVar11) & uVar3 |
                ~uVar3 & GlobalVectorConstants::Float1000.m128_u32[1],
                (uint)(auVar10._0_4_ * fVar9) & uVar2 |
                ~uVar2 & GlobalVectorConstants::Float1000.m128_u32[0]);
  (param_1->field0_0x0)._s_0.Z = (float)((uint)(auVar10._8_4_ * fVar12) & uVar4 | ~uVar4 & uVar1);
  return;
}

// ToAxisAndAngle @ 1418022e0

void __thiscall
UE::Math::TQuat<float>::ToAxisAndAngle(TQuat<float> *this,TVector<float> *param_1,double *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  undefined1 auVar10 [16];
  
  fVar5 = this->W;
  fVar6 = __real_bf800000;
  if ((__real_bf800000 <= fVar5) && (fVar6 = fVar5, __real_3f800000 <= fVar5)) {
    fVar6 = __real_3f800000;
  }
  fVar5 = acosf(fVar6);
  *param_2 = (double)(fVar5 + fVar5);
  auVar10 = insertps((undefined1  [16])*this,(undefined1  [16])*this,8);
  fVar9 = auVar10._0_4_;
  fVar11 = auVar10._4_4_;
  fVar12 = auVar10._8_4_;
  fVar5 = auVar10._12_4_ * auVar10._12_4_;
  fVar6 = fVar11 * fVar11 + fVar9 * fVar9;
  fVar7 = fVar9 * fVar9 + fVar11 * fVar11;
  fVar8 = fVar5 + fVar12 * fVar12;
  fVar5 = fVar12 * fVar12 + fVar5;
  auVar10._0_4_ = fVar8 + fVar6;
  auVar10._4_4_ = fVar5 + fVar7;
  auVar10._8_4_ = fVar6 + fVar8;
  auVar10._12_4_ = fVar7 + fVar5;
  uVar2 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar10._0_4_);
  uVar3 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar10._4_4_);
  uVar4 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar10._8_4_);
  auVar10 = sqrtps(auVar10,auVar10);
  auVar10 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar10);
  uVar1 = GlobalVectorConstants::Float1000.m128_u32[2];
  *(ulonglong *)&param_1->field0_0x0 =
       CONCAT44((uint)(auVar10._4_4_ * fVar11) & uVar3 |
                ~uVar3 & GlobalVectorConstants::Float1000.m128_u32[1],
                (uint)(auVar10._0_4_ * fVar9) & uVar2 |
                ~uVar2 & GlobalVectorConstants::Float1000.m128_u32[0]);
  (param_1->field0_0x0)._s_0.Z = (float)((uint)(auVar10._8_4_ * fVar12) & uVar4 | ~uVar4 & uVar1);
  return;
}

// ToAxisAndAngle @ 1418023b0

void __thiscall
UE::Math::TQuat<double>::ToAxisAndAngle(TQuat<double> *this,TVector<double> *param_1,float *param_2)

{
  double dVar1;
  float fVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  double dVar13;
  undefined1 in_XMM3 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  dVar1 = this->W;
  uVar10 = SUB84(dVar1,0);
  uVar11 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar12 = __real_bff0000000000000;
  if (__real_bff0000000000000 <= dVar1) {
    if (__real_3ff0000000000000 <= dVar1) {
      uVar10 = SUB84(__real_3ff0000000000000,0);
      uVar11 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    }
    dVar12 = (double)CONCAT44(uVar11,uVar10);
  }
  dVar1 = acos(dVar12);
  *param_2 = (float)(dVar1 + dVar1);
  dVar4 = this->X;
  dVar5 = this->Y;
  dVar6 = this->Z;
  dVar12 = dVar6 * dVar6 + dVar4 * dVar4;
  dVar13 = dVar5 * dVar5 + 0.0;
  dVar1 = dVar13 + dVar12;
  dVar12 = dVar12 + dVar13;
  auVar14._8_4_ = SUB84(dVar12,0);
  auVar14._0_8_ = dVar1;
  auVar14._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  auVar14 = sqrtpd(in_XMM3,auVar14);
  uVar7 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= dVar1);
  uVar9 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= dVar12);
  auVar15 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar14);
  uVar8 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= dVar1);
  auVar16._0_8_ = uVar7 & (ulonglong)(auVar15._0_8_ * dVar4);
  uVar3 = uVar9 & (ulonglong)(auVar15._8_8_ * dVar5);
  auVar16._8_4_ = (undefined4)uVar3;
  auVar16._12_4_ = (undefined4)(uVar3 >> 0x20);
  auVar15._0_4_ = ~(uint)uVar7 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[0],0);
  auVar15._4_4_ =
       ~(uint)(uVar7 >> 0x20) &
       (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[0] >> 0x20);
  auVar15._8_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[1],0);
  auVar15._12_4_ =
       ~(uint)(uVar9 >> 0x20) &
       (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[1] >> 0x20);
  fVar2 = GlobalVectorConstants::Float1000.m128_f32[2];
  auVar14 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar14);
  *(undefined1 (*) [16])&param_1->field0_0x0 = auVar16 | auVar15;
  (param_1->field0_0x0)._s_0.Z =
       (double)(CONCAT44(~(uint)(uVar8 >> 0x20) & (uint)((ulonglong)(double)fVar2 >> 0x20),
                         ~(uint)uVar8 & SUB84((double)fVar2,0)) |
               uVar8 & (ulonglong)(auVar14._0_8_ * dVar6));
  return;
}

// ToAxisAndAngle @ 1418024c0

void __thiscall
UE::Math::TQuat<double>::ToAxisAndAngle
          (TQuat<double> *this,TVector<double> *param_1,double *param_2)

{
  double dVar1;
  float fVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  double dVar13;
  undefined1 in_XMM3 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  dVar1 = this->W;
  uVar10 = SUB84(dVar1,0);
  uVar11 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar12 = __real_bff0000000000000;
  if (__real_bff0000000000000 <= dVar1) {
    if (__real_3ff0000000000000 <= dVar1) {
      uVar10 = SUB84(__real_3ff0000000000000,0);
      uVar11 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    }
    dVar12 = (double)CONCAT44(uVar11,uVar10);
  }
  dVar1 = acos(dVar12);
  *param_2 = dVar1 + dVar1;
  dVar4 = this->X;
  dVar5 = this->Y;
  dVar6 = this->Z;
  dVar12 = dVar6 * dVar6 + dVar4 * dVar4;
  dVar13 = dVar5 * dVar5 + 0.0;
  dVar1 = dVar13 + dVar12;
  dVar12 = dVar12 + dVar13;
  auVar14._8_4_ = SUB84(dVar12,0);
  auVar14._0_8_ = dVar1;
  auVar14._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  auVar14 = sqrtpd(in_XMM3,auVar14);
  uVar7 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= dVar1);
  uVar9 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= dVar12);
  auVar15 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar14);
  uVar8 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= dVar1);
  auVar16._0_8_ = uVar7 & (ulonglong)(auVar15._0_8_ * dVar4);
  uVar3 = uVar9 & (ulonglong)(auVar15._8_8_ * dVar5);
  auVar16._8_4_ = (undefined4)uVar3;
  auVar16._12_4_ = (undefined4)(uVar3 >> 0x20);
  auVar15._0_4_ = ~(uint)uVar7 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[0],0);
  auVar15._4_4_ =
       ~(uint)(uVar7 >> 0x20) &
       (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[0] >> 0x20);
  auVar15._8_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[1],0);
  auVar15._12_4_ =
       ~(uint)(uVar9 >> 0x20) &
       (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[1] >> 0x20);
  fVar2 = GlobalVectorConstants::Float1000.m128_f32[2];
  auVar14 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar14);
  *(undefined1 (*) [16])&param_1->field0_0x0 = auVar16 | auVar15;
  (param_1->field0_0x0)._s_0.Z =
       (double)(CONCAT44(~(uint)(uVar8 >> 0x20) & (uint)((ulonglong)(double)fVar2 >> 0x20),
                         ~(uint)uVar8 & SUB84((double)fVar2,0)) |
               uVar8 & (ulonglong)(auVar14._0_8_ * dVar6));
  return;
}

// ToLUFEuler @ 141804930

TTuple<float,float,float> * __thiscall
UE::Math::TQuat<float>::ToLUFEuler
          (TQuat<float> *this,TTuple<float,float,float> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  float _X;
  
  fVar4 = this->X;
  fVar5 = this->Y;
  fVar1 = this->Z;
  fVar2 = this->W;
  fVar7 = (fVar4 * fVar5 - fVar2 * fVar1) * __real_c0000000;
  fVar3 = FGenericPlatformMath::Atan2
                    ((fVar5 + fVar5) * fVar2 + (fVar1 + fVar1) * fVar4,
                     ((fVar2 * fVar2 + fVar4 * fVar4) - fVar5 * fVar5) - fVar1 * fVar1);
  _X = __real_bf800000;
  if ((__real_bf800000 <= fVar7) && (_X = fVar7, __real_3f800000 <= fVar7)) {
    _X = __real_3f800000;
  }
  fVar4 = FGenericPlatformMath::Atan2
                    ((fVar1 + fVar1) * fVar5 + (fVar4 + fVar4) * fVar2,
                     ((fVar2 * fVar2 - fVar4 * fVar4) + fVar5 * fVar5) - fVar1 * fVar1);
  *(float *)__return_storage_ptr__ = fVar3;
  fVar5 = asinf(_X);
  uVar6 = (uint)fVar5 ^ __xmm_80000000800000008000000080000000;
  *(uint *)&__return_storage_ptr__->field_0x8 = (uint)fVar4 ^ __xmm_80000000800000008000000080000000
  ;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar6;
  return __return_storage_ptr__;
}

// ToLUFEuler @ 141804ab0

TTuple<double,double,double> * __thiscall
UE::Math::TQuat<double>::ToLUFEuler
          (TQuat<double> *this,TTuple<double,double,double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double _X;
  uint uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  
  dVar6 = this->X;
  dVar7 = this->Y;
  dVar1 = this->Z;
  dVar2 = this->W;
  dVar3 = (dVar6 * dVar7 - dVar2 * dVar1) * __real_c000000000000000;
  dVar5 = FGenericPlatformMath::Atan2
                    ((dVar7 + dVar7) * dVar2 + (dVar1 + dVar1) * dVar6,
                     ((dVar2 * dVar2 + dVar6 * dVar6) - dVar7 * dVar7) - dVar1 * dVar1);
  _X = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar3) && (_X = dVar3, __real_3ff0000000000000 <= dVar3)) {
    _X = __real_3ff0000000000000;
  }
  dVar6 = FGenericPlatformMath::Atan2
                    ((dVar1 + dVar1) * dVar7 + (dVar6 + dVar6) * dVar2,
                     ((dVar2 * dVar2 - dVar6 * dVar6) + dVar7 * dVar7) - dVar1 * dVar1);
  *(double *)__return_storage_ptr__ = dVar5;
  dVar7 = asin(_X);
  uVar4 = SUB84(dVar7,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar8 = (uint)((ulonglong)dVar7 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  *(ulonglong *)&__return_storage_ptr__->field_0x10 =
       CONCAT44((uint)((ulonglong)dVar6 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_,
                SUB84(dVar6,0) ^ (uint)__xmm_80000000000000008000000000000000);
  *(ulonglong *)&__return_storage_ptr__->field_0x8 = CONCAT44(uVar8,uVar4);
  return __return_storage_ptr__;
}

// ToMatrix @ 141804e50

TMatrix<float> * __thiscall
UE::Math::TQuat<float>::ToMatrix(TQuat<float> *this,TMatrix<float> *__return_storage_ptr__)

{
  ToMatrix(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ToMatrix @ 141804e70

void __thiscall UE::Math::TQuat<float>::ToMatrix(TQuat<float> *this,TMatrix<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = this->X;
  fVar2 = this->Y;
  fVar3 = this->Z;
  fVar6 = fVar3 + fVar3;
  fVar8 = fVar2 + fVar2;
  fVar7 = (fVar1 + fVar1) * fVar1;
  fVar4 = this->W;
  fVar9 = (fVar1 + fVar1) * fVar4;
  *(float *)((longlong)(param_1->M + 3) + 0) = 0.0;
  *(float *)((longlong)(param_1->M + 3) + 4) = 0.0;
  param_1->M[3][2] = 0.0;
  param_1->M[0][3] = 0.0;
  param_1->M[1][3] = 0.0;
  fVar5 = __real_3f800000;
  param_1->M[2][3] = 0.0;
  param_1->M[3][3] = 1.0;
  param_1->M[0][0] = fVar5 - (fVar6 * fVar3 + fVar8 * fVar2);
  param_1->M[1][0] = fVar8 * fVar1 - fVar6 * fVar4;
  param_1->M[0][1] = fVar6 * fVar4 + fVar8 * fVar1;
  param_1->M[2][0] = fVar8 * fVar4 + fVar6 * fVar1;
  param_1->M[0][2] = fVar6 * fVar1 - fVar8 * fVar4;
  param_1->M[1][2] = fVar9 + fVar6 * fVar2;
  param_1->M[2][1] = fVar6 * fVar2 - fVar9;
  param_1->M[1][1] = fVar5 - (fVar6 * fVar3 + fVar7);
  param_1->M[2][2] = fVar5 - (fVar8 * fVar2 + fVar7);
  return;
}

// ToMatrix @ 141804fd0

TMatrix<double> * __thiscall
UE::Math::TQuat<double>::ToMatrix(TQuat<double> *this,TMatrix<double> *__return_storage_ptr__)

{
  ToMatrix(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ToMatrix @ 141804ff0

void __thiscall UE::Math::TQuat<double>::ToMatrix(TQuat<double> *this,TMatrix<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar1 = this->X;
  dVar2 = this->Y;
  dVar3 = this->Z;
  dVar5 = dVar3 + dVar3;
  dVar7 = dVar2 + dVar2;
  dVar6 = (dVar1 + dVar1) * dVar1;
  dVar4 = this->W;
  dVar8 = (dVar1 + dVar1) * dVar4;
  param_1->M[3][0] = 0.0;
  param_1->M[3][1] = 0.0;
  param_1->M[3][2] = 0.0;
  param_1->M[0][3] = 0.0;
  dVar9 = __real_3ff0000000000000;
  param_1->M[1][3] = 0.0;
  param_1->M[2][3] = 0.0;
  param_1->M[3][3] = 1.0;
  param_1->M[0][0] = dVar9 - (dVar5 * dVar3 + dVar7 * dVar2);
  param_1->M[1][0] = dVar7 * dVar1 - dVar5 * dVar4;
  param_1->M[0][1] = dVar5 * dVar4 + dVar7 * dVar1;
  param_1->M[2][0] = dVar7 * dVar4 + dVar5 * dVar1;
  param_1->M[0][2] = dVar5 * dVar1 - dVar7 * dVar4;
  param_1->M[1][2] = dVar8 + dVar5 * dVar2;
  param_1->M[2][1] = dVar5 * dVar2 - dVar8;
  param_1->M[1][1] = dVar9 - (dVar5 * dVar3 + dVar6);
  param_1->M[2][2] = dVar9 - (dVar7 * dVar2 + dVar6);
  return;
}

// ToRotationVector @ 1418066d0

TVector<float> * __thiscall
UE::Math::TQuat<float>::ToRotationVector(TQuat<float> *this,TVector<float> *__return_storage_ptr__)

{
  float fVar1;
  TQuat<float> local_18;
  
  Log(this,&local_18);
  fVar1 = __real_40000000;
  local_18.Z = local_18.Z * __real_40000000;
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_18.X * __real_40000000;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_18.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = local_18.Y * fVar1;
  return __return_storage_ptr__;
}

// ToRotationVector @ 141806730

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
UE::Math::TQuat<double>::ToRotationVector
          (TQuat<double> *this,TVector<double> *__return_storage_ptr__)

{
  undefined1 auVar1 [16];
  TQuat<double> local_28;
  
  Log(this,&local_28);
  local_28.Z = local_28.Z * ___xmm_40000000000000004000000000000000;
  auVar1._8_4_ = SUB84(local_28.Y * _UNK_150689698,0);
  auVar1._0_8_ = local_28.X * ___xmm_40000000000000004000000000000000;
  auVar1._12_4_ = (int)((ulonglong)(local_28.Y * _UNK_150689698) >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_28.Z;
  return __return_storage_ptr__;
}

// ToString @ 141806b20

FString * __thiscall
UE::Math::TQuat<float>::ToString(TQuat<float> *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
  return __return_storage_ptr__;
}

// ToString @ 141806b80

FString * __thiscall
UE::Math::TQuat<double>::ToString(TQuat<double> *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
  return __return_storage_ptr__;
}

// ToSwingTwist @ 1418074c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Math::TQuat<float>::ToSwingTwist
          (TQuat<float> *this,TVector<float> *param_1,TQuat<float> *param_2,TQuat<float> *param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  fVar25 = (param_1->field0_0x0)._s_0.X;
  fVar14 = (param_1->field0_0x0)._s_0.Y;
  fVar1 = (param_1->field0_0x0)._s_0.Z;
  fVar24 = fVar14 * this->Y + fVar25 * this->X + fVar1 * this->Z;
  fVar2 = this->W;
  fVar25 = fVar24 * fVar25;
  fVar14 = fVar24 * fVar14;
  fVar24 = fVar24 * fVar1;
  param_3->X = fVar25;
  param_3->Y = fVar14;
  param_3->Z = fVar24;
  param_3->W = fVar2;
  if (fVar14 * fVar14 + fVar25 * fVar25 + fVar24 * fVar24 + fVar2 * fVar2 == 0.0) {
    *param_3 = Identity;
  }
  else {
    fVar25 = param_3->X;
    fVar14 = param_3->Y;
    fVar1 = param_3->Z;
    fVar2 = param_3->W;
    fVar24 = fVar14 * fVar14 + fVar25 * fVar25;
    fVar17 = fVar25 * fVar25 + fVar14 * fVar14;
    fVar18 = fVar2 * fVar2 + fVar1 * fVar1;
    fVar19 = fVar1 * fVar1 + fVar2 * fVar2;
    auVar15._0_4_ = fVar18 + fVar24;
    auVar15._4_4_ = fVar19 + fVar17;
    auVar15._8_4_ = fVar24 + fVar18;
    auVar15._12_4_ = fVar17 + fVar19;
    bVar6 = _UNK_1506895d4 <= auVar15._4_4_;
    bVar7 = _UNK_1506895d8 <= auVar15._8_4_;
    bVar8 = _UNK_1506895dc <= auVar15._12_4_;
    auVar16 = sqrtps(auVar15,auVar15);
    auVar16 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar16);
    uVar3 = GlobalVectorConstants::Float0001.m128_u32[1];
    uVar4 = GlobalVectorConstants::Float0001.m128_u32[2];
    uVar5 = GlobalVectorConstants::Float0001.m128_u32[3];
    param_3->X = (float)((uint)(auVar16._0_4_ * fVar25) &
                         -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar15._0_4_) |
                        ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar15._0_4_) &
                        GlobalVectorConstants::Float0001.m128_u32[0]);
    param_3->Y = (float)((uint)(auVar16._4_4_ * fVar14) & -(uint)bVar6 | ~-(uint)bVar6 & uVar3);
    param_3->Z = (float)((uint)(auVar16._8_4_ * fVar1) & -(uint)bVar7 | ~-(uint)bVar7 & uVar4);
    param_3->W = (float)((uint)(auVar16._12_4_ * fVar2) & -(uint)bVar8 | ~-(uint)bVar8 & uVar5);
  }
  fVar10 = this->X;
  fVar11 = this->Y;
  fVar12 = this->Z;
  fVar13 = this->W;
  fVar20 = param_3->X * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
  fVar21 = param_3->Y * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
  fVar22 = param_3->Z * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
  fVar23 = param_3->W * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
  fVar25 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1];
  fVar2 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2];
  fVar18 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3];
  fVar14 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1];
  fVar24 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2];
  fVar19 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3];
  fVar1 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
  fVar17 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
  fVar9 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
  param_2->X = fVar10 * fVar23 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] +
               fVar13 * fVar20 +
               fVar11 * fVar22 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
               fVar12 * fVar21 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
  param_2->Y = fVar10 * fVar22 * fVar25 + fVar13 * fVar21 + fVar11 * fVar23 * fVar14 +
               fVar12 * fVar20 * fVar1;
  param_2->Z = fVar10 * fVar21 * fVar2 + fVar13 * fVar22 + fVar11 * fVar20 * fVar24 +
               fVar12 * fVar23 * fVar17;
  param_2->W = fVar10 * fVar20 * fVar18 + fVar13 * fVar23 + fVar11 * fVar21 * fVar19 +
               fVar12 * fVar22 * fVar9;
  return;
}

// ToSwingTwist @ 141807640

void __thiscall
UE::Math::TQuat<double>::ToSwingTwist
          (TQuat<double> *this,TVector<double> *param_1,TQuat<double> *param_2,
          TQuat<double> *param_3)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar16;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  uint uVar26;
  uint uVar27;
  
  dVar21 = (param_1->field0_0x0)._s_0.Y * this->Y + (param_1->field0_0x0)._s_0.X * this->X +
           (param_1->field0_0x0)._s_0.Z * this->Z;
  dVar1 = this->W;
  dVar12 = dVar21 * (param_1->field0_0x0)._s_0.X;
  dVar17 = dVar21 * (param_1->field0_0x0)._s_0.Y;
  dVar21 = dVar21 * (param_1->field0_0x0)._s_0.Z;
  auVar19._8_4_ = SUB84(dVar17,0);
  auVar19._0_8_ = dVar12;
  auVar19._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  param_3->X = dVar12;
  param_3->Y = (double)auVar19._8_8_;
  param_3->Z = dVar21;
  param_3->W = dVar1;
  dVar12 = Identity.Y;
  if (param_3->Y * param_3->Y + param_3->X * param_3->X + dVar21 * dVar21 + dVar1 * dVar1 == 0.0) {
    param_3->X = Identity.X;
    param_3->Y = dVar12;
    dVar1 = Identity.W;
    param_3->Z = Identity.Z;
    param_3->W = dVar1;
  }
  else {
    dVar17 = param_3->X;
    dVar21 = param_3->Y;
    dVar4 = param_3->Z;
    dVar6 = param_3->W;
    dVar12 = dVar4 * dVar4 + dVar17 * dVar17;
    dVar16 = dVar6 * dVar6 + dVar21 * dVar21;
    dVar1 = dVar16 + dVar12;
    dVar12 = dVar12 + dVar16;
    auVar23._8_4_ = SUB84(dVar12,0);
    auVar23._0_8_ = dVar1;
    auVar23._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    auVar19 = sqrtpd(in_XMM4,auVar23);
    uVar10 = -(ulonglong)(__real_3e45798ee0000000 <= dVar1);
    uVar11 = -(ulonglong)(__real_3e45798ee0000000 <= dVar12);
    uVar26 = (uint)(uVar10 >> 0x20);
    uVar27 = (uint)(uVar11 >> 0x20);
    auVar23 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar19);
    auVar24._0_8_ = uVar10 & (ulonglong)(auVar23._0_8_ * dVar17);
    uVar7 = uVar11 & (ulonglong)(auVar23._8_8_ * dVar21);
    auVar24._8_4_ = (undefined4)uVar7;
    auVar24._12_4_ = (undefined4)(uVar7 >> 0x20);
    auVar13._0_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar13._4_4_ =
         ~uVar26 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar13._8_4_ = ~(uint)uVar11 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar13._12_4_ =
         ~uVar27 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    auVar19 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar19);
    auVar18._0_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar18._4_4_ =
         ~uVar26 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar18._8_4_ = ~(uint)uVar11 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    auVar18._12_4_ =
         ~uVar27 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    param_3->X = (double)SUB168(auVar24 | auVar13,0);
    param_3->Y = (double)SUB168(auVar24 | auVar13,8);
    auVar14._0_8_ = (ulonglong)(auVar19._0_8_ * dVar4) & uVar10;
    uVar11 = (ulonglong)(auVar19._8_8_ * dVar6) & uVar11;
    auVar14._8_4_ = (undefined4)uVar11;
    auVar14._12_4_ = (undefined4)(uVar11 >> 0x20);
    param_3->Z = (double)SUB168(auVar18 | auVar14,0);
    param_3->W = (double)SUB168(auVar18 | auVar14,8);
  }
  uVar2 = this->X;
  uVar3 = this->Y;
  dVar8 = this->Z;
  dVar9 = this->W;
  dVar22 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0] * param_3->Z;
  dVar25 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1] * param_3->W;
  dVar21 = param_3->X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar4 = param_3->Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar20._8_4_ = (int)uVar2;
  auVar20._0_8_ = uVar2;
  auVar20._12_4_ = (int)((ulonglong)uVar2 >> 0x20);
  auVar15._8_4_ = (int)uVar3;
  auVar15._0_8_ = uVar3;
  auVar15._12_4_ = (int)((ulonglong)uVar3 >> 0x20);
  dVar1 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
  dVar12 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
  dVar17 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar6 = (double)uVar2 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          dVar9 * dVar22 +
          (double)uVar3 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          dVar8 * dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar16 = (double)uVar2 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
           + dVar9 * dVar25 +
           (double)uVar3 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar8 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  param_2->X = (double)uVar2 * dVar25 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar9 * dVar21 +
               (double)uVar3 * dVar22 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar8 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  param_2->Y = auVar20._8_8_ * dVar22 * dVar1 + dVar9 * dVar4 + auVar15._8_8_ * dVar25 * dVar12 +
               dVar8 * dVar21 * dVar17;
  auVar5._8_4_ = SUB84(dVar16,0);
  auVar5._0_8_ = dVar6;
  auVar5._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
  param_2->Z = dVar6;
  param_2->W = (double)auVar5._8_8_;
  return;
}

// UnrotateVector @ 14180b560

TVector<float> * __thiscall
UE::Math::TQuat<float>::UnrotateVector
          (TQuat<float> *this,TVector<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = (param_1->field0_0x0)._s_0.X;
  fVar2 = this->W;
  fVar4 = (float)((uint)this->Z ^ __xmm_80000000800000008000000080000000);
  fVar8 = (float)((uint)this->Y ^ __xmm_80000000800000008000000080000000);
  fVar9 = (float)((uint)this->X ^ __xmm_80000000800000008000000080000000);
  fVar7 = (param_1->field0_0x0)._s_0.Z * fVar8 - (param_1->field0_0x0)._s_0.Y * fVar4;
  fVar6 = fVar1 * fVar4 - (param_1->field0_0x0)._s_0.Z * fVar9;
  fVar7 = fVar7 + fVar7;
  fVar5 = (param_1->field0_0x0)._s_0.Y * fVar9 - fVar1 * fVar8;
  fVar6 = fVar6 + fVar6;
  fVar5 = fVar5 + fVar5;
  fVar3 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (fVar5 * fVar8 - fVar6 * fVar4) + fVar7 * fVar2 + fVar1;
  fVar1 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (fVar6 * fVar9 - fVar7 * fVar8) + fVar5 * fVar2 + fVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (fVar7 * fVar4 - fVar5 * fVar9) + fVar6 * fVar2 + fVar1;
  return __return_storage_ptr__;
}

// UnrotateVector @ 14180b6b0

TVector<double> * __thiscall
UE::Math::TQuat<double>::UnrotateVector
          (TQuat<double> *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = this->W;
  uVar10 = (uint)__xmm_80000000000000008000000000000000;
  uVar11 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar7 = (double)CONCAT44((uint)((ulonglong)this->Z >> 0x20) ^ uVar11,SUB84(this->Z,0) ^ uVar10);
  uVar8 = SUB84(this->Y,0) ^ uVar10;
  uVar9 = (uint)((ulonglong)this->Y >> 0x20) ^ uVar11;
  uVar10 = SUB84(this->X,0) ^ uVar10;
  uVar11 = (uint)((ulonglong)this->X >> 0x20) ^ uVar11;
  dVar6 = (param_1->field0_0x0)._s_0.Z * (double)CONCAT44(uVar9,uVar8) -
          (param_1->field0_0x0)._s_0.Y * dVar7;
  dVar6 = dVar6 + dVar6;
  dVar5 = dVar1 * dVar7 - (param_1->field0_0x0)._s_0.Z * (double)CONCAT44(uVar11,uVar10);
  dVar5 = dVar5 + dVar5;
  dVar4 = (param_1->field0_0x0)._s_0.Y * (double)CONCAT44(uVar11,uVar10) -
          dVar1 * (double)CONCAT44(uVar9,uVar8);
  dVar4 = dVar4 + dVar4;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (dVar4 * (double)CONCAT44(uVar9,uVar8) - dVar5 * dVar7) + dVar6 * dVar2 + dVar1;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (dVar5 * (double)CONCAT44(uVar11,uVar10) - dVar6 * (double)CONCAT44(uVar9,uVar8)) +
       dVar4 * dVar2 + dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (dVar6 * dVar7 - dVar4 * (double)CONCAT44(uVar11,uVar10)) + dVar5 * dVar2 + dVar1;
  return __return_storage_ptr__;
}

// Vector @ 14180c930

TVector<float> * __thiscall
UE::Math::TQuat<float>::Vector(TQuat<float> *this,TVector<float> *__return_storage_ptr__)

{
  TVector<float>_u_0 local_18;
  
  local_18._0_8_ = 0x3f800000;
  local_18._s_0.Z = 0.0;
  RotateVector(this,__return_storage_ptr__,(TVector<float> *)&local_18._s_0);
  return __return_storage_ptr__;
}

// Vector @ 14180c970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
UE::Math::TQuat<double>::Vector(TQuat<double> *this,TVector<double> *__return_storage_ptr__)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_28._s_0.Y = _UNK_150689518;
  local_28._s_0.Z = 0.0;
  RotateVector(this,__return_storage_ptr__,(TVector<double> *)&local_28._s_0);
  return __return_storage_ptr__;
}

