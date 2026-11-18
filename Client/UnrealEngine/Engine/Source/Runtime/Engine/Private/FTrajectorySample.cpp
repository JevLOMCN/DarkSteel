// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticStruct @ 14758ad30

UScriptStruct * __cdecl FTrajectorySample::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTrajectorySample.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FTrajectorySample.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTrajectorySample,(UObject *)pUVar1,
                         L"TrajectorySample");
  }
  return Z_Registration_Info_UScriptStruct_FTrajectorySample.OuterSingleton;
}

// IsZeroSample @ 1475e2e20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FTrajectorySample::IsZeroSample(FTrajectorySample *this)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 in_EAX;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  uVar1 = *(undefined8 *)&(this->LinearVelocity).field0_0x0;
  uVar12 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar13 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((((double)CONCAT44(uVar13,uVar12) < __real_3f1a36e2e0000000 ||
        (double)CONCAT44(uVar13,uVar12) == __real_3f1a36e2e0000000) &&
      (uVar1 = *(undefined8 *)((longlong)&(this->LinearVelocity).field0_0x0 + 8),
      uVar12 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar13 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      (double)CONCAT44(uVar13,uVar12) < __real_3f1a36e2e0000000 ||
      (double)CONCAT44(uVar13,uVar12) == __real_3f1a36e2e0000000)) &&
     (uVar1 = *(undefined8 *)((longlong)&(this->LinearVelocity).field0_0x0 + 0x10),
     uVar12 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar13 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     (double)CONCAT44(uVar13,uVar12) < __real_3f1a36e2e0000000 ||
     (double)CONCAT44(uVar13,uVar12) == __real_3f1a36e2e0000000)) {
    dVar6 = (this->Transform).Translation.ZW.m128d_f64[0];
    uVar12 = *(uint *)(this->Transform).Translation.XY.m128d_f64 &
             (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar13 = *(uint *)((longlong)(this->Transform).Translation.XY.m128d_f64 + 4) &
             __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((((double)CONCAT44(uVar13,uVar12) < __real_3f1a36e2e0000000 ||
          (double)CONCAT44(uVar13,uVar12) == __real_3f1a36e2e0000000) &&
        ((double)CONCAT44(*(uint *)((longlong)(this->Transform).Translation.XY.m128d_f64 + 0xc) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          *(uint *)((this->Transform).Translation.XY.m128d_f64 + 1) &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3f1a36e2e0000000))
       && (uVar12 = SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar13 = (uint)((ulonglong)dVar6 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          (double)CONCAT44(uVar13,uVar12) < __real_3f1a36e2e0000000 ||
          (double)CONCAT44(uVar13,uVar12) == __real_3f1a36e2e0000000)) {
      dVar14 = (this->Transform).Rotation.ZW.m128d_f64[0];
      dVar15 = (this->Transform).Rotation.ZW.m128d_f64[1];
      dVar6 = (this->Transform).Rotation.XY.m128d_f64[0];
      dVar7 = (this->Transform).Rotation.XY.m128d_f64[1];
      dVar16 = dVar6 - UE::Math::TQuat<double>::Identity.X;
      dVar17 = dVar7 - UE::Math::TQuat<double>::Identity.Y;
      dVar6 = dVar6 + UE::Math::TQuat<double>::Identity.X;
      dVar7 = dVar7 + UE::Math::TQuat<double>::Identity.Y;
      dVar8 = UE::Math::TQuat<double>::Identity.Z + dVar14;
      dVar9 = UE::Math::TQuat<double>::Identity.W + dVar15;
      dVar14 = dVar14 - UE::Math::TQuat<double>::Identity.Z;
      dVar15 = dVar15 - UE::Math::TQuat<double>::Identity.W;
      lVar11 = -(ulonglong)
                (__real_3e45798ee0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar15,0) & _UNK_15061cc88));
      auVar2._8_4_ = (int)lVar11;
      auVar2._0_8_ = -(ulonglong)
                      (__real_3e45798ee0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar14,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar2._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
      iVar10 = movmskpd((int)this,auVar2);
      lVar11 = -(ulonglong)
                (__real_3e45798ee0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar17,0) & _UNK_15061cc88));
      auVar3._8_4_ = (int)lVar11;
      auVar3._0_8_ = -(ulonglong)
                      (__real_3e45798ee0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar16,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar3._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
      uVar12 = movmskpd(in_EAX,auVar3);
      uVar13 = iVar10 << 2 | uVar12;
      if (uVar13 != 0) {
        lVar11 = -(ulonglong)
                  (__real_3e45798ee0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar9,0) & _UNK_15061cc88));
        auVar4._8_4_ = (int)lVar11;
        auVar4._0_8_ = -(ulonglong)
                        (__real_3e45798ee0000000 <
                        (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(dVar8,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar4._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
        uVar13 = movmskpd(uVar13,auVar4);
        lVar11 = -(ulonglong)
                  (__real_3e45798ee0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar7,0) & _UNK_15061cc88));
        auVar5._8_4_ = (int)lVar11;
        auVar5._0_8_ = -(ulonglong)
                        (__real_3e45798ee0000000 <
                        (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(dVar6,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar5._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
        iVar10 = movmskpd(uVar12,auVar5);
        if ((uVar13 & 0x3fffffff) != 0 || iVar10 != 0) {
          return false;
        }
      }
      return true;
    }
  }
  return false;
}

// Lerp @ 1475e3030

FTrajectorySample * __thiscall
FTrajectorySample::Lerp
          (FTrajectorySample *this,FTrajectorySample *__return_storage_ptr__,
          FTrajectorySample *param_1,float param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  
  __return_storage_ptr__->AccumulatedSeconds = 0.0;
  *&(__return_storage_ptr__->Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(__return_storage_ptr__->Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.Y = (double)uVar7;
  (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar1 = (double)param_2;
  __return_storage_ptr__->AccumulatedSeconds =
       (param_1->AccumulatedSeconds - this->AccumulatedSeconds) * param_2 + this->AccumulatedSeconds
  ;
  dVar4 = (this->LinearVelocity).field0_0x0._s_0.Y;
  dVar3 = (this->LinearVelocity).field0_0x0._s_0.Z;
  dVar5 = (param_1->LinearVelocity).field0_0x0._s_0.Y;
  dVar6 = (param_1->LinearVelocity).field0_0x0._s_0.Z;
  (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.X =
       ((param_1->LinearVelocity).field0_0x0._s_0.X - (this->LinearVelocity).field0_0x0._s_0.X) *
       dVar1 + (this->LinearVelocity).field0_0x0._s_0.X;
  dVar3 = (dVar6 - dVar3) * dVar1 + dVar3;
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = (dVar5 - dVar4) * dVar1 + dVar4;
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->LinearVelocity).field0_0x0 + 8) =
       auVar2;
  UE::Math::TTransform<double>::Blend
            (&__return_storage_ptr__->Transform,&this->Transform,&param_1->Transform,param_2);
  return __return_storage_ptr__;
}

// PrependOffset @ 1475eade0

void __thiscall
FTrajectorySample::PrependOffset(FTrajectorySample *this,TTransform<double> *param_1,float param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uVar15;
  double dVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  this->AccumulatedSeconds = param_2 + this->AccumulatedSeconds;
  UE::Math::TTransform<double>::Multiply(&this->Transform,&this->Transform,param_1);
  auVar2 = *(undefined1 (*) [16])&(this->LinearVelocity).field0_0x0;
  dVar1 = (this->LinearVelocity).field0_0x0._s_0.Z;
  auVar3 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
  auVar8 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  dVar7 = (param_1->Rotation).ZW.m128d_f64[1];
  dVar18 = auVar2._8_8_;
  dVar6 = auVar3._0_8_;
  auVar9 = blendpd(auVar8,auVar3,2);
  auVar16._0_8_ = dVar18 * auVar8._0_8_ - auVar8._8_8_ * auVar2._0_8_;
  auVar16._8_8_ = dVar1 * auVar8._8_8_ - dVar6 * dVar18;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar1;
  auVar8 = blendpd(auVar2,auVar8,2);
  auVar11._0_8_ = auVar8._0_8_ * dVar6 - auVar9._0_8_ * dVar1;
  auVar11._8_8_ = auVar8._8_8_ * auVar3._8_8_ - auVar9._8_8_ * 0.0;
  auVar8 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar9 = blendpd(auVar16,auVar11,2);
  auVar17._0_8_ = auVar9._0_8_ + auVar9._0_8_;
  auVar17._8_8_ = auVar9._8_8_ + auVar9._8_8_;
  dVar4 = auVar16._8_8_ + auVar16._8_8_;
  dVar5 = auVar11._0_8_ + auVar11._0_8_;
  uVar15 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar13._8_4_ = SUB84(dVar5,0);
  auVar13._0_8_ = dVar4;
  auVar13._12_4_ = uVar15;
  auVar10._8_4_ = SUB84(dVar5,0);
  auVar10._0_8_ = dVar4;
  auVar10._12_4_ = uVar15;
  auVar11 = blendpd(auVar10,auVar17,2);
  auVar14._0_8_ = auVar13._8_8_ * auVar8._0_8_ - auVar8._8_8_ * dVar4;
  auVar14._8_8_ = auVar17._0_8_ * auVar8._8_8_ - dVar6 * dVar5;
  auVar9._8_4_ = SUB84(auVar14._8_8_,0);
  auVar9._0_8_ = auVar14._0_8_;
  auVar9._12_4_ = (int)((ulonglong)auVar14._8_8_ >> 0x20);
  auVar8 = blendpd(auVar8,auVar3,2);
  auVar12._0_8_ = auVar11._0_8_ * dVar6 - auVar8._0_8_ * auVar17._0_8_;
  auVar12._8_8_ = auVar11._8_8_ * auVar3._8_8_ - auVar8._8_8_ * auVar17._8_8_;
  auVar8 = blendpd(auVar14,auVar12,2);
  dVar6 = dVar5 * dVar7 + dVar18 + auVar12._0_8_;
  auVar3._8_4_ = SUB84(dVar6,0);
  auVar3._0_8_ = dVar4 * dVar7 + auVar2._0_8_ + auVar9._8_8_;
  auVar3._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])&(this->LinearVelocity).field0_0x0 = auVar3;
  (this->LinearVelocity).field0_0x0._s_0.Z = auVar17._0_8_ * dVar7 + dVar1 + auVar8._0_8_;
  return;
}

// SmoothInterp @ 1475fe480

FTrajectorySample * __thiscall
FTrajectorySample::SmoothInterp
          (FTrajectorySample *this,FTrajectorySample *__return_storage_ptr__,
          FTrajectorySample *param_1,FTrajectorySample *param_2,FTrajectorySample *param_3,
          float param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  float fVar6;
  undefined8 uVar7;
  __m128d _Var8;
  __m128d _Var9;
  TVector<double> *pTVar10;
  TQuat<double> *pTVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  TVector<double>_u_0 local_208;
  TVector<double>_u_0 local_1e8;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_170;
  TVector<double>_u_0 local_158;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  TQuat<double> local_f8;
  TQuat<double> local_d8 [6];
  
  _Var8.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  *&(__return_storage_ptr__->Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  _Var9 = UE::Math::TTransform<double>::Identity.Translation.XY;
  *&(__return_storage_ptr__->Transform).Rotation.ZW.m128d_f64 = _Var8.m128d_f64;
  _Var8 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  *&(__return_storage_ptr__->Transform).Translation.XY.m128d_f64 = _Var9.m128d_f64;
  _Var9 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  *&(__return_storage_ptr__->Transform).Translation.ZW.m128d_f64 = _Var8.m128d_f64;
  _Var8 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  *&(__return_storage_ptr__->Transform).Scale3D.XY.m128d_f64 = _Var9.m128d_f64;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.Y = (double)uVar7;
  (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  fVar19 = this->AccumulatedSeconds;
  fVar12 = param_1->AccumulatedSeconds;
  *&(__return_storage_ptr__->Transform).Scale3D.ZW.m128d_f64 = _Var8.m128d_f64;
  fVar6 = __real_3f000000;
  fVar15 = SQRT((float)((uint)(fVar19 - fVar12) & uVar5));
  fVar12 = SQRT((float)((uint)(param_2->AccumulatedSeconds - fVar19) & uVar5));
  fVar20 = fVar12 + fVar15;
  fVar14 = SQRT((float)((uint)(param_3->AccumulatedSeconds - param_2->AccumulatedSeconds) & uVar5));
  fVar22 = fVar12 * param_4 + fVar15;
  fVar18 = (fVar14 + fVar20) - fVar15;
  if ((((__real_322bcc77 < fVar15) && (__real_322bcc77 < fVar12)) && (__real_322bcc77 < fVar14)) &&
     ((__real_322bcc77 < fVar20 && (__real_322bcc77 < (float)((uint)fVar18 & uVar5))))) {
    fVar21 = (fVar14 + fVar20) - fVar22;
    fVar17 = (fVar20 - fVar22) * (__real_3f800000 / fVar12);
    fVar18 = __real_3f800000 / fVar18;
    fVar13 = (fVar22 - fVar15) * (__real_3f800000 / fVar12);
    fVar16 = param_2->AccumulatedSeconds * fVar13 + fVar19 * fVar17;
    fVar19 = (((fVar22 - fVar20) * (__real_3f800000 / fVar14) * param_3->AccumulatedSeconds +
              fVar21 * (__real_3f800000 / fVar14) * param_2->AccumulatedSeconds) *
              (fVar22 - fVar15) * fVar18 + fVar21 * fVar18 * fVar16) * fVar13 +
             (((__real_3f800000 / fVar15) * fVar22 * fVar19 -
              fVar12 * param_4 * (__real_3f800000 / fVar15) * param_1->AccumulatedSeconds) *
              (fVar20 - fVar22) * (__real_3f800000 / fVar20) +
             (__real_3f800000 / fVar20) * fVar22 * fVar16) * fVar17;
  }
  __return_storage_ptr__->AccumulatedSeconds = fVar19;
  pTVar10 = ::`anonymous_namespace'::CubicCRSplineInterpSafe<UE::Math::TVector<double>_>
                      ((TVector<double> *)&local_1e8._s_0,&param_1->LinearVelocity,
                       &this->LinearVelocity,&param_2->LinearVelocity,&param_3->LinearVelocity,
                       param_4,fVar6);
  dVar2 = (pTVar10->field0_0x0)._s_0.Y;
  dVar1 = (pTVar10->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.X = (pTVar10->field0_0x0)._s_0.X;
  (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.Y = dVar2;
  local_188._s_0.X = (param_3->Transform).Translation.XY.m128d_f64[0];
  local_188._s_0.Y = (param_3->Transform).Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.Z = dVar1;
  local_188._s_0.Z = (param_3->Transform).Translation.ZW.m128d_f64[0];
  local_170._s_0.Z = (param_2->Transform).Translation.ZW.m128d_f64[0];
  local_170._s_0.X = (param_2->Transform).Translation.XY.m128d_f64[0];
  local_170._s_0.Y = (param_2->Transform).Translation.XY.m128d_f64[1];
  local_158._s_0.Z = (this->Transform).Translation.ZW.m128d_f64[0];
  local_158._s_0.X = (this->Transform).Translation.XY.m128d_f64[0];
  local_158._s_0.Y = (this->Transform).Translation.XY.m128d_f64[1];
  local_1e8._s_0.Z = (param_1->Transform).Translation.ZW.m128d_f64[0];
  local_1e8._s_0.X = (param_1->Transform).Translation.XY.m128d_f64[0];
  local_1e8._s_0.Y = (param_1->Transform).Translation.XY.m128d_f64[1];
  pTVar10 = ::`anonymous_namespace'::CubicCRSplineInterpSafe<UE::Math::TVector<double>_>
                      ((TVector<double> *)&local_208._s_0,(TVector<double> *)&local_1e8._s_0,
                       (TVector<double> *)&local_158._s_0,(TVector<double> *)&local_170._s_0,
                       (TVector<double> *)&local_188._s_0,param_4,fVar6);
  dVar2 = (pTVar10->field0_0x0)._s_0.Y;
  dVar1 = (pTVar10->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->Transform).Translation.XY.m128d_f64[0] = (pTVar10->field0_0x0)._s_0.X;
  (__return_storage_ptr__->Transform).Translation.XY.m128d_f64[1] = dVar2;
  (__return_storage_ptr__->Transform).Translation.ZW.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Transform).Translation.ZW.m128d_f64[1] = 0.0;
  dVar1 = (param_1->Transform).Rotation.XY.m128d_f64[0];
  dVar2 = (param_1->Transform).Rotation.XY.m128d_f64[1];
  if ((param_1->Transform).Rotation.ZW.m128d_f64[1] < 0.0) {
    dVar1 = 0.0 - (param_1->Transform).Rotation.XY.m128d_f64[0];
    dVar2 = 0.0 - (param_1->Transform).Rotation.XY.m128d_f64[1];
    dVar3 = 0.0 - (param_1->Transform).Rotation.ZW.m128d_f64[0];
    dVar4 = 0.0 - (param_1->Transform).Rotation.ZW.m128d_f64[1];
  }
  else {
    dVar3 = (param_1->Transform).Rotation.ZW.m128d_f64[0];
    dVar4 = (param_1->Transform).Rotation.ZW.m128d_f64[1];
  }
  local_138._8_4_ = SUB84(dVar2,0);
  local_138._0_8_ = dVar1;
  local_138._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_128._8_4_ = SUB84(dVar4,0);
  local_128._0_8_ = dVar3;
  local_128._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  dVar1 = (this->Transform).Rotation.XY.m128d_f64[0];
  dVar2 = (this->Transform).Rotation.XY.m128d_f64[1];
  if ((this->Transform).Rotation.ZW.m128d_f64[1] < 0.0) {
    dVar1 = 0.0 - (this->Transform).Rotation.XY.m128d_f64[0];
    dVar2 = 0.0 - (this->Transform).Rotation.XY.m128d_f64[1];
    dVar3 = 0.0 - (this->Transform).Rotation.ZW.m128d_f64[0];
    dVar4 = 0.0 - (this->Transform).Rotation.ZW.m128d_f64[1];
  }
  else {
    dVar3 = (this->Transform).Rotation.ZW.m128d_f64[0];
    dVar4 = (this->Transform).Rotation.ZW.m128d_f64[1];
  }
  local_1a8._8_4_ = SUB84(dVar2,0);
  local_1a8._0_8_ = dVar1;
  local_1a8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_198._8_4_ = SUB84(dVar4,0);
  local_198._0_8_ = dVar3;
  local_198._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  dVar1 = (param_2->Transform).Rotation.XY.m128d_f64[0];
  dVar2 = (param_2->Transform).Rotation.XY.m128d_f64[1];
  if ((param_2->Transform).Rotation.ZW.m128d_f64[1] < 0.0) {
    dVar1 = 0.0 - (param_2->Transform).Rotation.XY.m128d_f64[0];
    dVar2 = 0.0 - (param_2->Transform).Rotation.XY.m128d_f64[1];
    dVar3 = 0.0 - (param_2->Transform).Rotation.ZW.m128d_f64[0];
    dVar4 = 0.0 - (param_2->Transform).Rotation.ZW.m128d_f64[1];
  }
  else {
    dVar3 = (param_2->Transform).Rotation.ZW.m128d_f64[0];
    dVar4 = (param_2->Transform).Rotation.ZW.m128d_f64[1];
  }
  local_1c8._8_4_ = SUB84(dVar2,0);
  local_1c8._0_8_ = dVar1;
  local_1c8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_1b8._8_4_ = SUB84(dVar4,0);
  local_1b8._0_8_ = dVar3;
  local_1b8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  local_208._s_0.X = (param_3->Transform).Rotation.XY.m128d_f64[0];
  local_208._s_0.Y = (param_3->Transform).Rotation.XY.m128d_f64[1];
  if ((param_3->Transform).Rotation.ZW.m128d_f64[1] < 0.0) {
    dVar3 = 0.0 - (param_3->Transform).Rotation.XY.m128d_f64[0];
    dVar4 = 0.0 - (param_3->Transform).Rotation.XY.m128d_f64[1];
    dVar1 = 0.0 - (param_3->Transform).Rotation.ZW.m128d_f64[0];
    dVar2 = 0.0 - (param_3->Transform).Rotation.ZW.m128d_f64[1];
  }
  else {
    dVar1 = (param_3->Transform).Rotation.ZW.m128d_f64[0];
    dVar2 = (param_3->Transform).Rotation.ZW.m128d_f64[1];
    dVar3 = local_208._s_0.X;
    dVar4 = local_208._s_0.Y;
  }
  local_118._8_4_ = SUB84(dVar4,0);
  local_118._0_8_ = dVar3;
  local_118._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  local_108._8_4_ = SUB84(dVar2,0);
  local_108._0_8_ = dVar1;
  local_108._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  UE::Math::TQuat<double>::CalcTangents
            ((TQuat<double> *)local_138,(TQuat<double> *)local_1a8,(TQuat<double> *)local_1c8,0.0,
             local_d8);
  UE::Math::TQuat<double>::CalcTangents
            ((TQuat<double> *)local_1a8,(TQuat<double> *)local_1c8,(TQuat<double> *)local_118,0.0,
             &local_f8);
  pTVar11 = UE::Math::TQuat<double>::Squad
                      ((TQuat<double> *)&local_208._s_0,(TQuat<double> *)local_1a8,local_d8,
                       (TQuat<double> *)local_1c8,&local_f8,(double)param_4);
  dVar1 = pTVar11->Y;
  dVar2 = pTVar11->Z;
  dVar3 = pTVar11->W;
  (__return_storage_ptr__->Transform).Rotation.XY.m128d_f64[0] = pTVar11->X;
  (__return_storage_ptr__->Transform).Rotation.XY.m128d_f64[1] = dVar1;
  (__return_storage_ptr__->Transform).Rotation.ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Transform).Rotation.ZW.m128d_f64[1] = dVar3;
  return __return_storage_ptr__;
}

// TransformReferenceFrame @ 1475ff600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FTrajectorySample::TransformReferenceFrame(FTrajectorySample *this,TTransform<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar20;
  double dVar23;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_1c8 [64];
  TTransform<double> local_188;
  TTransform<double> local_128;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  auVar15._0_8_ =
       (double)CONCAT44(*(uint *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 4) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        *(uint *)(param_1->Scale3D).ZW.m128d_f64 &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar15._8_4_ = *(uint *)((param_1->Scale3D).ZW.m128d_f64 + 1) & _UNK_15061cc88;
  auVar15._12_4_ = *(uint *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 0xc) & _UNK_15061cc8c;
  lVar9 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar15._8_8_);
  auVar11._8_4_ = (int)lVar9;
  auVar11._0_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar15._0_8_);
  auVar11._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
  uVar8 = movmskpd((int)this,auVar11);
  auVar10._8_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
        (double)CONCAT44(*(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 0xc) & _UNK_15061cc8c
                         ,*(uint *)((param_1->Scale3D).XY.m128d_f64 + 1) & _UNK_15061cc88));
  auVar10._0_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
        (double)CONCAT44(*(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 4) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         *(uint *)(param_1->Scale3D).XY.m128d_f64 &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  iVar7 = movmskpd((int)local_68,auVar10);
  if ((uVar8 & 0x3fffffff) == 0 && iVar7 == 0) {
    local_128.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_128.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_128.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_128.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_128.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_128.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    UE::Math::TTransform<double>::InverseFast(param_1,&local_128);
  }
  local_c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_c8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_c8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_c8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_c8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_c8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_c8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_c8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_c8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_c8,&local_128,&this->Transform);
  local_188.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_188.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_188.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_188.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_188.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_188.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_188.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_188.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_188.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_188.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_188.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_188.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_188.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_188.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_188,&local_c8,param_1);
  dVar6 = (param_1->Rotation).ZW.m128d_f64[1];
  (this->Transform).Rotation.XY.m128d_f64[0] = local_188.Rotation.XY.m128d_f64[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = local_188.Rotation.XY.m128d_f64[1];
  (this->Transform).Rotation.ZW.m128d_f64[0] = local_188.Rotation.ZW.m128d_f64[0];
  (this->Transform).Rotation.ZW.m128d_f64[1] = local_188.Rotation.ZW.m128d_f64[1];
  (this->Transform).Translation.XY.m128d_f64[0] = local_188.Translation.XY.m128d_f64[0];
  (this->Transform).Translation.XY.m128d_f64[1] = local_188.Translation.XY.m128d_f64[1];
  (this->Transform).Translation.ZW.m128d_f64[0] = local_188.Translation.ZW.m128d_f64[0];
  (this->Transform).Translation.ZW.m128d_f64[1] = local_188.Translation.ZW.m128d_f64[1];
  (this->Transform).Scale3D.XY.m128d_f64[0] = local_188.Scale3D.XY.m128d_f64[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = local_188.Scale3D.XY.m128d_f64[1];
  auVar11 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = local_188.Scale3D.ZW.m128d_f64[0];
  (this->Transform).Scale3D.ZW.m128d_f64[1] = local_188.Scale3D.ZW.m128d_f64[1];
  auVar10 = *(undefined1 (*) [16])&(this->LinearVelocity).field0_0x0;
  dVar1 = (this->LinearVelocity).field0_0x0._s_0.Z;
  auVar15 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
  dVar23 = auVar10._8_8_;
  dVar4 = auVar15._0_8_;
  auVar14 = blendpd(auVar11,auVar15,2);
  auVar21._0_8_ = dVar23 * auVar11._0_8_ - auVar11._8_8_ * auVar10._0_8_;
  auVar21._8_8_ = dVar1 * auVar11._8_8_ - dVar4 * dVar23;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar1;
  auVar11 = blendpd(auVar10,auVar5,2);
  auVar12._0_8_ = auVar11._0_8_ * dVar4 - auVar14._0_8_ * dVar1;
  auVar12._8_8_ = auVar11._8_8_ * auVar15._8_8_ - auVar14._8_8_ * 0.0;
  auVar11 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar14 = blendpd(auVar21,auVar12,2);
  dVar2 = auVar21._8_8_ + auVar21._8_8_;
  dVar3 = auVar12._0_8_ + auVar12._0_8_;
  uVar20 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar22._0_8_ = auVar14._0_8_ + auVar14._0_8_;
  auVar22._8_8_ = auVar14._8_8_ + auVar14._8_8_;
  auVar18._8_4_ = SUB84(dVar3,0);
  auVar18._0_8_ = dVar2;
  auVar18._12_4_ = uVar20;
  auVar16._8_4_ = SUB84(dVar3,0);
  auVar16._0_8_ = dVar2;
  auVar16._12_4_ = uVar20;
  auVar14 = blendpd(auVar16,auVar22,2);
  auVar19._0_8_ = auVar18._8_8_ * auVar11._0_8_ - auVar11._8_8_ * dVar2;
  auVar19._8_8_ = auVar22._0_8_ * auVar11._8_8_ - dVar4 * dVar3;
  auVar11 = blendpd(auVar11,auVar15,2);
  auVar13._8_4_ = SUB84(auVar19._8_8_,0);
  auVar13._0_8_ = auVar19._0_8_;
  auVar13._12_4_ = (int)((ulonglong)auVar19._8_8_ >> 0x20);
  auVar17._0_8_ = auVar14._0_8_ * dVar4 - auVar11._0_8_ * auVar22._0_8_;
  auVar17._8_8_ = auVar14._8_8_ * auVar15._8_8_ - auVar11._8_8_ * auVar22._8_8_;
  auVar11 = blendpd(auVar19,auVar17,2);
  dVar4 = dVar3 * dVar6 + dVar23 + auVar17._0_8_;
  auVar14._8_4_ = SUB84(dVar4,0);
  auVar14._0_8_ = dVar2 * dVar6 + auVar10._0_8_ + auVar13._8_8_;
  auVar14._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&(this->LinearVelocity).field0_0x0 = auVar14;
  (this->LinearVelocity).field0_0x0._s_0.Z = auVar22._0_8_ * dVar6 + dVar1 + auVar11._0_8_;
  return;
}

