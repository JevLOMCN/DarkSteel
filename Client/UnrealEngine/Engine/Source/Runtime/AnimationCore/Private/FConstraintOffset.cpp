// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationCore
// Functions: 3

// StaticStruct @ 142379710

UScriptStruct * __cdecl FConstraintOffset::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConstraintOffset.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationCore();
    Z_Registration_Info_UScriptStruct_FConstraintOffset.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConstraintOffset,(UObject *)pUVar1,
                         L"ConstraintOffset");
  }
  return Z_Registration_Info_UScriptStruct_FConstraintOffset.OuterSingleton;
}

// ApplyInverseOffset @ 142380620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FConstraintOffset::ApplyInverseOffset
          (FConstraintOffset *this,TTransform<double> *param_1,TTransform<double> *param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  int iVar21;
  TTransform<double> *pTVar22;
  uint uVar23;
  TTransform<double> *this_00;
  undefined1 auStack_138 [64];
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_138;
  this_00 = &this->Parent;
  pTVar22 = UE::Math::TTransform<double>::GetRelativeTransformReverse(this_00,&local_f8,param_1);
  dVar1 = (pTVar22->Rotation).XY.m128d_f64[1];
  (param_2->Rotation).XY.m128d_f64[0] = (pTVar22->Rotation).XY.m128d_f64[0];
  (param_2->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar22->Rotation).ZW.m128d_f64[1];
  (param_2->Rotation).ZW.m128d_f64[0] = (pTVar22->Rotation).ZW.m128d_f64[0];
  (param_2->Rotation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar22->Translation).XY.m128d_f64[1];
  (param_2->Translation).XY.m128d_f64[0] = (pTVar22->Translation).XY.m128d_f64[0];
  (param_2->Translation).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar22->Translation).ZW.m128d_f64[1];
  (param_2->Translation).ZW.m128d_f64[0] = (pTVar22->Translation).ZW.m128d_f64[0];
  (param_2->Translation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar22->Scale3D).XY.m128d_f64[1];
  (param_2->Scale3D).XY.m128d_f64[0] = (pTVar22->Scale3D).XY.m128d_f64[0];
  (param_2->Scale3D).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar22->Scale3D).ZW.m128d_f64[1];
  (param_2->Scale3D).ZW.m128d_f64[0] = (pTVar22->Scale3D).ZW.m128d_f64[0];
  (param_2->Scale3D).ZW.m128d_f64[1] = dVar1;
  if (((UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X !=
        (this->Translation).field0_0x0._s_0.X) ||
      (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y !=
       (this->Translation).field0_0x0._s_0.Y)) ||
     (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z !=
      (this->Translation).field0_0x0._s_0.Z)) {
    dVar1 = (this->Translation).field0_0x0._s_0.Z;
    dVar5 = (param_2->Translation).ZW.m128d_f64[1] + 0.0;
    dVar8 = (param_2->Translation).XY.m128d_f64[1] + (this->Translation).field0_0x0._s_0.Y;
    auVar6._8_4_ = SUB84(dVar8,0);
    auVar6._0_8_ = (param_2->Translation).XY.m128d_f64[0] + (this->Translation).field0_0x0._s_0.X;
    auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    *(undefined1 (*) [16])(param_2->Translation).XY.m128d_f64 = auVar6;
    auVar3._8_4_ = SUB84(dVar5,0);
    auVar3._0_8_ = dVar1 + (param_2->Translation).ZW.m128d_f64[0];
    auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    *(undefined1 (*) [16])(param_2->Translation).ZW.m128d_f64 = auVar3;
  }
  dVar1 = (this->Rotation).Z;
  dVar5 = (this->Rotation).W;
  dVar8 = (this->Rotation).X;
  dVar16 = (this->Rotation).Y;
  auVar2._8_4_ = (int)-(ulonglong)(dVar5 != UE::Math::TQuat<double>::Identity.W);
  auVar2._0_8_ = -(ulonglong)(dVar1 != UE::Math::TQuat<double>::Identity.Z);
  auVar2._12_4_ = (int)(-(ulonglong)(dVar5 != UE::Math::TQuat<double>::Identity.W) >> 0x20);
  uVar23 = movmskpd((int)this_00,auVar2);
  auVar4._8_4_ = (int)-(ulonglong)(dVar16 != UE::Math::TQuat<double>::Identity.Y);
  auVar4._0_8_ = -(ulonglong)(dVar8 != UE::Math::TQuat<double>::Identity.X);
  auVar4._12_4_ = (int)(-(ulonglong)(dVar16 != UE::Math::TQuat<double>::Identity.Y) >> 0x20);
  iVar21 = movmskpd((int)pTVar22,auVar4);
  if ((uVar23 & 0x3fffffff) != 0 || iVar21 != 0) {
    dVar17 = (param_2->Rotation).XY.m128d_f64[0];
    dVar18 = (param_2->Rotation).XY.m128d_f64[1];
    dVar19 = (param_2->Rotation).ZW.m128d_f64[0];
    dVar20 = (param_2->Rotation).ZW.m128d_f64[1];
    dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
    dVar13 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar12 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
    dVar9 = dVar17 * dVar1 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
            dVar16 * dVar20 +
            dVar5 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
            dVar19 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar15 = dVar17 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             dVar5 * dVar20 +
             dVar16 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             dVar19 * dVar1 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    auVar7._8_4_ = SUB84(dVar9,0);
    auVar7._0_8_ = dVar17 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
                   + dVar8 * dVar20 +
                   dVar1 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
                   + dVar19 * dVar16 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    auVar7._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64 = auVar7;
    auVar14._8_4_ = SUB84(dVar15,0);
    auVar14._0_8_ =
         dVar17 * dVar16 * dVar10 + dVar1 * dVar20 + dVar8 * dVar18 * dVar12 +
         dVar19 * dVar5 * dVar13;
    auVar14._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64 = auVar14;
  }
  dVar1 = (this->Scale).field0_0x0._s_0.X;
  if (((dVar1 != UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X) ||
      (UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y != (this->Scale).field0_0x0._s_0.Y))
     || (UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z != (this->Scale).field0_0x0._s_0.Z))
  {
    dVar5 = (this->Scale).field0_0x0._s_0.Z;
    dVar8 = (param_2->Scale3D).XY.m128d_f64[1] * (this->Scale).field0_0x0._s_0.Y;
    auVar11._8_4_ = SUB84(dVar8,0);
    auVar11._0_8_ = dVar1 * (param_2->Scale3D).XY.m128d_f64[0];
    auVar11._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    *(undefined1 (*) [16])(param_2->Scale3D).XY.m128d_f64 = auVar11;
    (param_2->Scale3D).ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0] * dVar5;
    (param_2->Scale3D).ZW.m128d_f64[1] = 0.0;
  }
  return;
}

// SaveInverseOffset @ 142385530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FConstraintOffset::SaveInverseOffset
          (FConstraintOffset *this,TTransform<double> *param_1,TTransform<double> *param_2,
          FConstraintDescription *param_3)

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
  undefined8 uVar10;
  TTransform<double> *pTVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auStack_108 [64];
  TTransform<double> local_c8;
  ulonglong local_68;
  
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_68 = __security_cookie.value ^ (ulonglong)auStack_108;
  (this->Translation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Translation).field0_0x0._s_0.Y = (double)uVar10;
  (this->Translation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  (this->Rotation).X = UE::Math::TQuat<double>::Identity.X;
  (this->Rotation).Y = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  (this->Rotation).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->Rotation).W = dVar2;
  uVar10 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->Scale).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->Scale).field0_0x0._s_0.Y = (double)uVar10;
  (this->Scale).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  *&(this->Parent).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Parent).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Parent).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Parent).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Parent).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Parent).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  if (param_3->bParent == false) {
    if (param_3->bTranslation != false) {
      dVar2 = (param_1->Translation).XY.m128d_f64[1];
      dVar14 = (param_2->Translation).XY.m128d_f64[1];
      dVar16 = (param_1->Translation).ZW.m128d_f64[0];
      dVar4 = (param_2->Translation).ZW.m128d_f64[0];
      (this->Translation).field0_0x0._s_0.X =
           (param_1->Translation).XY.m128d_f64[0] - (param_2->Translation).XY.m128d_f64[0];
      (this->Translation).field0_0x0._s_0.Y = dVar2 - dVar14;
      (this->Translation).field0_0x0._s_0.Z = dVar16 - dVar4;
    }
    if (param_3->bRotation != false) {
      dVar15 = (param_2->Rotation).ZW.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar17 = (param_2->Rotation).ZW.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      dVar14 = (param_2->Rotation).XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar16 = (param_2->Rotation).XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      auVar18._8_4_ = SUB84(dVar17,0);
      auVar18._0_8_ = dVar15;
      auVar18._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
      dVar6 = (param_1->Rotation).XY.m128d_f64[0];
      dVar7 = (param_1->Rotation).XY.m128d_f64[1];
      dVar8 = (param_1->Rotation).ZW.m128d_f64[0];
      dVar9 = (param_1->Rotation).ZW.m128d_f64[1];
      dVar4 = dVar6 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
              dVar9 * dVar15 +
              dVar7 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
              dVar8 * auVar18._8_8_ *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar5 = dVar6 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              dVar9 * dVar17 +
              dVar7 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              dVar8 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      dVar2 = dVar6 * auVar18._8_8_ *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar9 * dVar14 +
              dVar7 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
              dVar8 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar14 = dVar6 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               dVar9 * dVar16 +
               dVar7 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               dVar8 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      auVar1._8_4_ = SUB84(dVar14,0);
      auVar1._0_8_ = dVar2;
      auVar1._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
      (this->Rotation).X = dVar2;
      (this->Rotation).Y = (double)auVar1._8_8_;
      auVar3._8_4_ = SUB84(dVar5,0);
      auVar3._0_8_ = dVar4;
      auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      (this->Rotation).Z = dVar4;
      (this->Rotation).W = (double)auVar3._8_8_;
    }
    if (param_3->bScale != false) {
      dVar2 = (param_2->Scale3D).ZW.m128d_f64[0];
      dVar14 = 0.0;
      auVar1 = *(undefined1 (*) [16])(param_2->Scale3D).XY.m128d_f64;
      uVar12 = auVar1._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar13 = auVar1._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if (__real_3e45798ee0000000 <= (double)CONCAT44(uVar13,uVar12) &&
          (double)CONCAT44(uVar13,uVar12) != __real_3e45798ee0000000) {
        dVar16 = __real_3ff0000000000000 / auVar1._0_8_;
      }
      else {
        dVar16 = 0.0;
      }
      uVar12 = auVar1._8_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar13 = auVar1._12_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if (__real_3e45798ee0000000 <= (double)CONCAT44(uVar13,uVar12) &&
          (double)CONCAT44(uVar13,uVar12) != __real_3e45798ee0000000) {
        dVar4 = __real_3ff0000000000000 / auVar1._8_8_;
      }
      else {
        dVar4 = 0.0;
      }
      uVar12 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar13 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if (__real_3e45798ee0000000 <= (double)CONCAT44(uVar13,uVar12) &&
          (double)CONCAT44(uVar13,uVar12) != __real_3e45798ee0000000) {
        dVar14 = __real_3ff0000000000000 / dVar2;
      }
      dVar2 = (param_1->Scale3D).XY.m128d_f64[1];
      dVar5 = (param_1->Scale3D).ZW.m128d_f64[0];
      (this->Scale).field0_0x0._s_0.X = (param_1->Scale3D).XY.m128d_f64[0] * dVar16;
      (this->Scale).field0_0x0._s_0.Y = dVar2 * dVar4;
      (this->Scale).field0_0x0._s_0.Z = dVar5 * dVar14;
    }
  }
  else {
    pTVar11 = UE::Math::TTransform<double>::GetRelativeTransform(param_2,&local_c8,param_1);
    dVar2 = (pTVar11->Rotation).XY.m128d_f64[1];
    (this->Parent).Rotation.XY.m128d_f64[0] = (pTVar11->Rotation).XY.m128d_f64[0];
    (this->Parent).Rotation.XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar11->Rotation).ZW.m128d_f64[1];
    (this->Parent).Rotation.ZW.m128d_f64[0] = (pTVar11->Rotation).ZW.m128d_f64[0];
    (this->Parent).Rotation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (pTVar11->Translation).XY.m128d_f64[1];
    (this->Parent).Translation.XY.m128d_f64[0] = (pTVar11->Translation).XY.m128d_f64[0];
    (this->Parent).Translation.XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar11->Translation).ZW.m128d_f64[1];
    (this->Parent).Translation.ZW.m128d_f64[0] = (pTVar11->Translation).ZW.m128d_f64[0];
    (this->Parent).Translation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (pTVar11->Scale3D).XY.m128d_f64[1];
    (this->Parent).Scale3D.XY.m128d_f64[0] = (pTVar11->Scale3D).XY.m128d_f64[0];
    (this->Parent).Scale3D.XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar11->Scale3D).ZW.m128d_f64[1];
    (this->Parent).Scale3D.ZW.m128d_f64[0] = (pTVar11->Scale3D).ZW.m128d_f64[0];
    (this->Parent).Scale3D.ZW.m128d_f64[1] = dVar2;
  }
  return;
}

