// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationCore
// Functions: 5

// StaticStruct @ 14237a250

UScriptStruct * __cdecl FAimConstraintDescription::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAimConstraintDescription.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationCore();
    Z_Registration_Info_UScriptStruct_FAimConstraintDescription.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAimConstraintDescription,(UObject *)pUVar1,
                         L"AimConstraintDescription");
  }
  return Z_Registration_Info_UScriptStruct_FAimConstraintDescription.OuterSingleton;
}

// AccumulateConstraintTransform @ 14237a290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAimConstraintDescription::AccumulateConstraintTransform
          (FAimConstraintDescription *this,TTransform<double> *param_1,TTransform<double> *param_2,
          TTransform<double> *param_3,float param_4,FMultiTransformBlendHelper *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
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
  undefined1 auVar20 [16];
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar30;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auStackY_238 [32];
  TVector<double>_u_0 local_1f8;
  TVector<double>_u_0 local_1d8;
  double dStack_1c0;
  TQuat<double> local_1b8;
  TQuat<double> local_198;
  TTransform<double> local_178;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_178.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
  local_178.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
  local_178.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
  local_178.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
  local_178.Rotation.XY.m128d_f64 = *&(param_2->Rotation).XY.m128d_f64;
  dVar4 = local_178.Rotation.XY.m128d_f64[0];
  dVar5 = local_178.Rotation.XY.m128d_f64[1];
  local_178.Rotation.ZW.m128d_f64 = *&(param_2->Rotation).ZW.m128d_f64;
  dVar7 = local_178.Rotation.ZW.m128d_f64[0];
  dVar8 = local_178.Rotation.ZW.m128d_f64[1];
  local_178.Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
  local_178.Scale3D.XY.m128d_f64[1] = (param_2->Scale3D).XY.m128d_f64[1];
  local_178.Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
  local_178.Scale3D.ZW.m128d_f64[1] = (param_2->Scale3D).ZW.m128d_f64[1];
  if (this->bUseLookUp != false) {
    if ((this->LookUp_Axis).bInLocalSpace == false) {
      local_1f8._0_16_ = *(undefined1 (*) [16])&(this->LookUp_Axis).Axis.field0_0x0;
      local_1f8._s_0.Z = (this->LookUp_Axis).Axis.field0_0x0._s_0.Z;
    }
    else {
      auVar12 = *(undefined1 (*) [16])&(this->LookUp_Axis).Axis.field0_0x0;
      dVar1 = (this->LookUp_Axis).Axis.field0_0x0._s_0.Z;
      dVar30 = auVar12._8_8_;
      auVar26._0_8_ = dVar30 * dVar4 - auVar12._0_8_ * dVar5;
      auVar26._8_8_ = dVar1 * dVar5 - dVar30 * dVar7;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = dVar1;
      auVar9 = blendpd(auVar12,auVar9,2);
      auVar22 = blendpd((undefined1  [16])local_178.Rotation.XY.m128d_f64,
                        (undefined1  [16])local_178.Rotation.ZW.m128d_f64,2);
      auVar24._0_8_ = auVar9._0_8_ * dVar7 - dVar1 * auVar22._0_8_;
      auVar24._8_8_ = auVar9._8_8_ * dVar8 - auVar22._8_8_ * 0.0;
      auVar9 = blendpd(auVar26,auVar24,2);
      dVar2 = auVar26._8_8_ + auVar26._8_8_;
      dVar3 = auVar24._0_8_ + auVar24._0_8_;
      uVar21 = (undefined4)((ulonglong)dVar3 >> 0x20);
      auVar27._0_8_ = auVar9._0_8_ + auVar9._0_8_;
      auVar27._8_8_ = auVar9._8_8_ + auVar9._8_8_;
      auVar17._8_4_ = SUB84(dVar3,0);
      auVar17._0_8_ = dVar2;
      auVar17._12_4_ = uVar21;
      auVar10._8_4_ = SUB84(dVar3,0);
      auVar10._0_8_ = dVar2;
      auVar10._12_4_ = uVar21;
      auVar9 = blendpd(auVar10,auVar27,2);
      auVar18._0_8_ = auVar17._8_8_ * dVar4 - dVar2 * dVar5;
      auVar18._8_8_ = auVar27._0_8_ * dVar5 - dVar3 * dVar7;
      auVar11._0_8_ = auVar9._0_8_ * dVar7 - auVar27._0_8_ * auVar22._0_8_;
      auVar11._8_8_ = auVar9._8_8_ * dVar8 - auVar27._8_8_ * auVar22._8_8_;
      auVar9 = blendpd(auVar18,auVar11,2);
      dVar4 = dVar3 * dVar8 + dVar30 + auVar11._0_8_;
      local_1f8._s_0.Z = auVar27._0_8_ * dVar8 + dVar1 + auVar9._0_8_;
      local_1f8._8_4_ = SUB84(dVar4,0);
      local_1f8._0_8_ = dVar2 * dVar8 + auVar12._0_8_ + auVar18._8_8_;
      local_1f8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    }
    AnimationCore::SolveAim
              ((TQuat<double> *)&local_1d8._s_0,&local_178,&this->LookUpTarget,
               (TVector<double> *)&local_1f8._s_0,false,&UE::Math::TVector<double>::ZeroVector,0.0);
    auVar12._8_4_ = SUB84(local_1d8._s_0.Y,0);
    auVar12._0_8_ = local_1d8._s_0.Y;
    auVar12._12_4_ = (int)((ulonglong)local_1d8._8_8_ >> 0x20);
    dVar4 = local_178.Rotation.ZW.m128d_f64[1] * local_1d8._s_0.X *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
            local_178.Rotation.XY.m128d_f64[0] * dStack_1c0 +
            local_1d8._s_0.Y * local_178.Rotation.ZW.m128d_f64[0] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
            local_1d8._s_0.Z * local_178.Rotation.XY.m128d_f64[1] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar5 = local_178.Rotation.ZW.m128d_f64[0] * local_1d8._s_0.X *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
            local_178.Rotation.XY.m128d_f64[1] * dStack_1c0 +
            local_1d8._s_0.Y * local_178.Rotation.ZW.m128d_f64[1] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
            local_1d8._s_0.Z * local_178.Rotation.XY.m128d_f64[0] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar7 = local_1d8._s_0.X * local_178.Rotation.XY.m128d_f64[1] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
            local_178.Rotation.ZW.m128d_f64[0] * dStack_1c0 +
            local_1d8._s_0.Y * local_178.Rotation.XY.m128d_f64[0] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
            local_1d8._s_0.Z * local_178.Rotation.ZW.m128d_f64[1] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar8 = local_1d8._s_0.X * local_178.Rotation.XY.m128d_f64[0] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
            local_178.Rotation.ZW.m128d_f64[1] * dStack_1c0 +
            auVar12._8_8_ * local_178.Rotation.XY.m128d_f64[1] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
            local_1d8._s_0.Z * local_178.Rotation.ZW.m128d_f64[0] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    local_178.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar5,0);
    local_178.Rotation.XY.m128d_f64[0] = dVar4;
    local_178.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar5 >> 0x20);
    local_178.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar8,0);
    local_178.Rotation.ZW.m128d_f64[0] = dVar7;
    local_178.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar8 >> 0x20);
  }
  if ((this->LookAt_Axis).bInLocalSpace == false) {
    local_1f8._0_16_ = *(undefined1 (*) [16])&(this->LookAt_Axis).Axis.field0_0x0;
    local_1f8._s_0.Z = (this->LookAt_Axis).Axis.field0_0x0._s_0.Z;
  }
  else {
    auVar12 = *(undefined1 (*) [16])&(this->LookAt_Axis).Axis.field0_0x0;
    dVar1 = (this->LookAt_Axis).Axis.field0_0x0._s_0.Z;
    dVar30 = auVar12._8_8_;
    auVar23._8_4_ = SUB84(dVar5,0);
    auVar23._0_8_ = dVar4;
    auVar23._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    auVar28._0_8_ = dVar30 * dVar4 - dVar5 * auVar12._0_8_;
    auVar28._8_8_ = dVar1 * dVar5 - dVar7 * dVar30;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = dVar1;
    auVar9 = blendpd(auVar12,auVar22,2);
    auVar6._8_4_ = SUB84(dVar8,0);
    auVar6._0_8_ = dVar7;
    auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    auVar24 = blendpd(auVar23,auVar6,2);
    auVar13._0_8_ = auVar9._0_8_ * dVar7 - auVar24._0_8_ * dVar1;
    auVar13._8_8_ = auVar9._8_8_ * dVar8 - auVar24._8_8_ * 0.0;
    auVar9 = blendpd(auVar28,auVar13,2);
    dVar2 = auVar28._8_8_ + auVar28._8_8_;
    dVar3 = auVar13._0_8_ + auVar13._0_8_;
    uVar21 = (undefined4)((ulonglong)dVar3 >> 0x20);
    auVar29._0_8_ = auVar9._0_8_ + auVar9._0_8_;
    auVar29._8_8_ = auVar9._8_8_ + auVar9._8_8_;
    auVar19._8_4_ = SUB84(dVar3,0);
    auVar19._0_8_ = dVar2;
    auVar19._12_4_ = uVar21;
    auVar14._8_4_ = SUB84(dVar3,0);
    auVar14._0_8_ = dVar2;
    auVar14._12_4_ = uVar21;
    auVar9 = blendpd(auVar14,auVar29,2);
    auVar20._0_8_ = auVar19._8_8_ * dVar4 - dVar2 * dVar5;
    auVar20._8_8_ = auVar29._0_8_ * dVar5 - dVar3 * dVar7;
    auVar15._0_8_ = auVar9._0_8_ * dVar7 - auVar29._0_8_ * auVar24._0_8_;
    auVar15._8_8_ = auVar9._8_8_ * dVar8 - auVar29._8_8_ * auVar24._8_8_;
    auVar9 = blendpd(auVar20,auVar15,2);
    dVar4 = dVar3 * dVar8 + dVar30 + auVar15._0_8_;
    local_1f8._s_0.Z = auVar29._0_8_ * dVar8 + dVar1 + auVar9._0_8_;
    local_1f8._8_4_ = SUB84(dVar4,0);
    local_1f8._0_8_ = dVar2 * dVar8 + auVar12._0_8_ + auVar20._8_8_;
    local_1f8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  }
  local_1d8._s_0.X = (param_1->Translation).XY.m128d_f64[0];
  local_1d8._s_0.Y = (param_1->Translation).XY.m128d_f64[1];
  local_1d8._s_0.Z = (param_1->Translation).ZW.m128d_f64[0];
  AnimationCore::SolveAim
            (&local_198,&local_178,(TVector<double> *)&local_1d8._s_0,
             (TVector<double> *)&local_1f8._s_0,false,&UE::Math::TVector<double>::ZeroVector,0.0);
  dVar5 = local_198.X;
  auVar25._8_4_ = local_198.X._0_4_;
  auVar25._0_8_ = dVar5;
  auVar25._12_4_ = local_198.X._4_4_;
  dVar7 = local_198.Y;
  auVar16._8_4_ = local_198.Y._0_4_;
  auVar16._0_8_ = dVar7;
  auVar16._12_4_ = local_198.Y._4_4_;
  dVar1 = dVar5 * local_178.Rotation.ZW.m128d_f64[1];
  dVar8 = dVar7 * local_178.Rotation.ZW.m128d_f64[0];
  dVar4 = local_198.Z * local_178.Rotation.ZW.m128d_f64[1];
  dVar3 = local_198.Z * local_178.Rotation.XY.m128d_f64[1];
  dVar2 = dVar5 * local_178.Rotation.ZW.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          local_198.W * local_178.Rotation.XY.m128d_f64[1] +
          dVar7 * local_178.Rotation.ZW.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          local_198.Z * local_178.Rotation.XY.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  local_178.Rotation.ZW.m128d_f64[1] =
       auVar25._8_8_ * local_178.Rotation.XY.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
       local_198.W * local_178.Rotation.ZW.m128d_f64[1] +
       auVar16._8_8_ * local_178.Rotation.XY.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
       local_198.Z * local_178.Rotation.ZW.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_178.Rotation.ZW.m128d_f64[0] =
       dVar5 * local_178.Rotation.XY.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
       local_198.W * local_178.Rotation.ZW.m128d_f64[0] +
       dVar7 * local_178.Rotation.XY.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_178.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar2,0);
  local_178.Rotation.XY.m128d_f64[0] =
       dVar1 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       local_198.W * local_178.Rotation.XY.m128d_f64[0] +
       dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_178.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar2 >> 0x20);
  UE::Math::TTransform<double>::GetRelativeTransform(&local_178,&local_118,param_3);
  local_1b8.X = local_118.Rotation.XY.m128d_f64[0];
  local_1b8.Y = local_118.Rotation.XY.m128d_f64[1];
  local_1b8.Z = local_118.Rotation.ZW.m128d_f64[0];
  local_1b8.W = local_118.Rotation.ZW.m128d_f64[1];
  FFilterOptionPerAxis::FilterQuat
            ((FFilterOptionPerAxis *)&this->_padding_,&local_1b8,&UE::Math::TQuat<double>::Identity)
  ;
  FMultiTransformBlendHelper::AddRotation(param_5,&local_1b8,param_4);
  return;
}

// DoesAffectRotation @ 14237a7e0

bool __thiscall FAimConstraintDescription::DoesAffectRotation(FAimConstraintDescription *this)

{
  return true;
}

// GetDisplayString @ 14237a830

FString * __thiscall
FAimConstraintDescription::GetDisplayString
          (FAimConstraintDescription *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Aim");
  return __return_storage_ptr__;
}

// Serialize @ 14237a860

void __thiscall
FAimConstraintDescription::Serialize(FAimConstraintDescription *this,FArchive *param_1)

{
  ::operator<<(param_1,(bool *)&this->_padding_);
  ::operator<<(param_1,(bool *)((longlong)&this->_padding_ + 1));
  ::operator<<(param_1,(bool *)((longlong)&this->_padding_ + 2));
  UE::Math::operator<<(param_1,&(this->LookAt_Axis).Axis);
  ::operator<<(param_1,&(this->LookAt_Axis).bInLocalSpace);
  UE::Math::operator<<(param_1,&(this->LookUp_Axis).Axis);
  ::operator<<(param_1,&(this->LookUp_Axis).bInLocalSpace);
  ::operator<<(param_1,&this->bUseLookUp);
  return;
}

