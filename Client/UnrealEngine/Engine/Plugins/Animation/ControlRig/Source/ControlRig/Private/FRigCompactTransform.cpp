// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 4

// FRigCompactTransform @ 14a2d9320

FRigCompactTransform * __thiscall
FRigCompactTransform::FRigCompactTransform(FRigCompactTransform *this,TTransform<double> *param_1)

{
  this->Transform = param_1;
  return this;
}

// Load @ 14a32a4d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERepresentation": Some values do not have unique names */

void __thiscall
FRigCompactTransform::Load
          (FRigCompactTransform *this,FArchive *param_1,FRigHierarchySerializationSettings *param_2,
          ERepresentation *param_3)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
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
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  TTransform<double> *pTVar23;
  ERepresentation local_res18 [8];
  float local_68 [2];
  TVector<float>_u_0 local_60;
  TVector<float>_u_0 local_50 [2];
  TQuat<float> local_38 [3];
  
  if ((int)param_2->ControlRigVersion < 0x23) {
    pTVar23 = this->Transform;
LAB_14a32aa3e:
    UE::Math::operator<<(param_1,pTVar23);
    return;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res18[0] = Float_Zero_Identity_One;
  if ((ERepresentation *)plVar1[1] < (ERepresentation *)*plVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,1);
  }
  else {
    local_res18[0] = *(ERepresentation *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  if (param_3 != (ERepresentation *)0x0) {
    *param_3 = local_res18[0];
  }
  pTVar23 = this->Transform;
  if (local_res18[0] == Double_Complete) goto LAB_14a32aa3e;
  *&(pTVar23->Rotation).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(pTVar23->Rotation).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(pTVar23->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(pTVar23->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(pTVar23->Scale3D).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(pTVar23->Scale3D).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_60._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_60._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_50[0]._s_0.Z = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  local_38[0] = UE::Math::TQuat<float>::Identity;
  local_50[0]._0_8_ = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  local_68[0] = 1.0;
  switch(local_res18[0]) {
  case Float_Zero_Identity_One:
    goto switchD_14a32a5ef_caseD_0;
  case Float_Zero_Identity_Uniform:
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_68,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_68);
      }
    }
    else {
      local_68[0] = *(float *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    break;
  case Float_Zero_Identity_NonUniform:
    UE::Math::operator<<(param_1,(TVector<float> *)&local_50[0]._s_0);
    goto LAB_14a32a65b;
  case Float_Zero_Quat_One:
    UE::Math::operator<<(param_1,local_38);
    pTVar23 = this->Transform;
    auVar5._8_4_ = SUB84((double)local_38[0].Y,0);
    auVar5._0_8_ = (double)local_38[0].X;
    auVar5._12_4_ = (int)((ulonglong)(double)local_38[0].Y >> 0x20);
    *(undefined1 (*) [16])(pTVar23->Rotation).XY.m128d_f64 = auVar5;
    auVar18._8_4_ = SUB84((double)local_38[0].W,0);
    auVar18._0_8_ = (double)local_38[0].Z;
    auVar18._12_4_ = (int)((ulonglong)(double)local_38[0].W >> 0x20);
    *(undefined1 (*) [16])(pTVar23->Rotation).ZW.m128d_f64 = auVar18;
    return;
  case Float_Zero_Quat_Uniform:
    UE::Math::operator<<(param_1,local_38);
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_68,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_68);
      }
    }
    else {
      local_68[0] = *(float *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    pTVar23 = this->Transform;
    auVar4._8_4_ = SUB84((double)local_38[0].Y,0);
    auVar4._0_8_ = (double)local_38[0].X;
    auVar4._12_4_ = (int)((ulonglong)(double)local_38[0].Y >> 0x20);
    *(undefined1 (*) [16])(pTVar23->Rotation).XY.m128d_f64 = auVar4;
    auVar17._8_4_ = SUB84((double)local_38[0].W,0);
    auVar17._0_8_ = (double)local_38[0].Z;
    auVar17._12_4_ = (int)((ulonglong)(double)local_38[0].W >> 0x20);
    *(undefined1 (*) [16])(pTVar23->Rotation).ZW.m128d_f64 = auVar17;
    break;
  case Float_Zero_Quat_NonUniform:
    UE::Math::operator<<(param_1,local_38);
    UE::Math::operator<<(param_1,(TVector<float> *)&local_50[0]._s_0);
    pTVar23 = this->Transform;
    auVar3._8_4_ = SUB84((double)local_38[0].Y,0);
    auVar3._0_8_ = (double)local_38[0].X;
    auVar3._12_4_ = (int)((ulonglong)(double)local_38[0].Y >> 0x20);
    *(undefined1 (*) [16])(pTVar23->Rotation).XY.m128d_f64 = auVar3;
    auVar16._8_4_ = SUB84((double)local_38[0].W,0);
    auVar16._0_8_ = (double)local_38[0].Z;
    auVar16._12_4_ = (int)((ulonglong)(double)local_38[0].W >> 0x20);
    *(undefined1 (*) [16])(pTVar23->Rotation).ZW.m128d_f64 = auVar16;
    goto LAB_14a32a65b;
  case Float_Position_Identity_One:
    UE::Math::operator<<(param_1,(TVector<float> *)&local_60._s_0);
    pTVar23 = this->Transform;
    auVar15._8_4_ = SUB84((double)local_60._s_0.Y,0);
    auVar15._0_8_ = (double)local_60._s_0.X;
    auVar15._12_4_ = (int)((ulonglong)(double)local_60._s_0.Y >> 0x20);
    *(undefined1 (*) [16])(pTVar23->Translation).XY.m128d_f64 = auVar15;
    (pTVar23->Translation).ZW.m128d_f64[0] = (double)local_60._s_0.Z;
    (pTVar23->Translation).ZW.m128d_f64[1] = 0.0;
    return;
  case Float_Position_Identity_Uniform:
    UE::Math::operator<<(param_1,(TVector<float> *)&local_60._s_0);
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_68,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_68);
      }
    }
    else {
      local_68[0] = *(float *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    pTVar23 = this->Transform;
    auVar14._8_4_ = SUB84((double)local_60._s_0.Y,0);
    auVar14._0_8_ = (double)local_60._s_0.X;
    auVar14._12_4_ = (int)((ulonglong)(double)local_60._s_0.Y >> 0x20);
    *(undefined1 (*) [16])(pTVar23->Translation).XY.m128d_f64 = auVar14;
    (pTVar23->Translation).ZW.m128d_f64[0] = (double)local_60._s_0.Z;
    (pTVar23->Translation).ZW.m128d_f64[1] = 0.0;
    break;
  case Float_Position_Identity_NonUniform:
    UE::Math::operator<<(param_1,(TVector<float> *)&local_60._s_0);
    UE::Math::operator<<(param_1,(TVector<float> *)&local_50[0]._s_0);
    pTVar23 = this->Transform;
    auVar13._8_4_ = SUB84((double)local_60._s_0.Y,0);
    auVar13._0_8_ = (double)local_60._s_0.X;
    auVar13._12_4_ = (int)((ulonglong)(double)local_60._s_0.Y >> 0x20);
    *(undefined1 (*) [16])(pTVar23->Translation).XY.m128d_f64 = auVar13;
    (pTVar23->Translation).ZW.m128d_f64[0] = (double)local_60._s_0.Z;
    (pTVar23->Translation).ZW.m128d_f64[1] = 0.0;
    goto LAB_14a32a65b;
  case Float_Position_Quat_One:
    UE::Math::operator<<(param_1,(TVector<float> *)&local_60._s_0);
    UE::Math::operator<<(param_1,local_38);
    pTVar23 = this->Transform;
    auVar12._8_4_ = SUB84((double)local_60._s_0.Y,0);
    auVar12._0_8_ = (double)local_60._s_0.X;
    auVar12._12_4_ = (int)((ulonglong)(double)local_60._s_0.Y >> 0x20);
    *(undefined1 (*) [16])(pTVar23->Translation).XY.m128d_f64 = auVar12;
    (pTVar23->Translation).ZW.m128d_f64[0] = (double)local_60._s_0.Z;
    (pTVar23->Translation).ZW.m128d_f64[1] = 0.0;
    pTVar23 = this->Transform;
    auVar8._8_4_ = SUB84((double)local_38[0].Y,0);
    auVar8._0_8_ = (double)local_38[0].X;
    auVar8._12_4_ = (int)((ulonglong)(double)local_38[0].Y >> 0x20);
    *(undefined1 (*) [16])(pTVar23->Rotation).XY.m128d_f64 = auVar8;
    auVar22._8_4_ = SUB84((double)local_38[0].W,0);
    auVar22._0_8_ = (double)local_38[0].Z;
    auVar22._12_4_ = (int)((ulonglong)(double)local_38[0].W >> 0x20);
    *(undefined1 (*) [16])(pTVar23->Rotation).ZW.m128d_f64 = auVar22;
    return;
  case Float_Position_Quat_Uniform:
    UE::Math::operator<<(param_1,(TVector<float> *)&local_60._s_0);
    UE::Math::operator<<(param_1,local_38);
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_68,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_68);
      }
    }
    else {
      local_68[0] = *(float *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    pTVar23 = this->Transform;
    auVar11._8_4_ = SUB84((double)local_60._s_0.Y,0);
    auVar11._0_8_ = (double)local_60._s_0.X;
    auVar11._12_4_ = (int)((ulonglong)(double)local_60._s_0.Y >> 0x20);
    *(undefined1 (*) [16])(pTVar23->Translation).XY.m128d_f64 = auVar11;
    (pTVar23->Translation).ZW.m128d_f64[0] = (double)local_60._s_0.Z;
    (pTVar23->Translation).ZW.m128d_f64[1] = 0.0;
    pTVar23 = this->Transform;
    auVar7._8_4_ = SUB84((double)local_38[0].Y,0);
    auVar7._0_8_ = (double)local_38[0].X;
    auVar7._12_4_ = (int)((ulonglong)(double)local_38[0].Y >> 0x20);
    *(undefined1 (*) [16])(pTVar23->Rotation).XY.m128d_f64 = auVar7;
    auVar21._8_4_ = SUB84((double)local_38[0].W,0);
    auVar21._0_8_ = (double)local_38[0].Z;
    auVar21._12_4_ = (int)((ulonglong)(double)local_38[0].W >> 0x20);
    *(undefined1 (*) [16])(pTVar23->Rotation).ZW.m128d_f64 = auVar21;
    break;
  case Float_Position_Quat_NonUniform:
    UE::Math::operator<<(param_1,(TVector<float> *)&local_60._s_0);
    UE::Math::operator<<(param_1,local_38);
    UE::Math::operator<<(param_1,(TVector<float> *)&local_50[0]._s_0);
    pTVar23 = this->Transform;
    auVar9._8_4_ = SUB84((double)local_60._s_0.Y,0);
    auVar9._0_8_ = (double)local_60._s_0.X;
    auVar9._12_4_ = (int)((ulonglong)(double)local_60._s_0.Y >> 0x20);
    *(undefined1 (*) [16])(pTVar23->Translation).XY.m128d_f64 = auVar9;
    (pTVar23->Translation).ZW.m128d_f64[0] = (double)local_60._s_0.Z;
    (pTVar23->Translation).ZW.m128d_f64[1] = 0.0;
    pTVar23 = this->Transform;
    auVar6._8_4_ = SUB84((double)local_38[0].Y,0);
    auVar6._0_8_ = (double)local_38[0].X;
    auVar6._12_4_ = (int)((ulonglong)(double)local_38[0].Y >> 0x20);
    *(undefined1 (*) [16])(pTVar23->Rotation).XY.m128d_f64 = auVar6;
    auVar20._8_4_ = SUB84((double)local_38[0].W,0);
    auVar20._0_8_ = (double)local_38[0].Z;
    auVar20._12_4_ = (int)((ulonglong)(double)local_38[0].W >> 0x20);
    *(undefined1 (*) [16])(pTVar23->Rotation).ZW.m128d_f64 = auVar20;
LAB_14a32a65b:
    pTVar23 = this->Transform;
    auVar10._8_4_ = SUB84((double)(float)local_50[0]._4_4_,0);
    auVar10._0_8_ = (double)(float)local_50[0]._0_4_;
    auVar10._12_4_ = (int)((ulonglong)(double)(float)local_50[0]._4_4_ >> 0x20);
    *(undefined1 (*) [16])(pTVar23->Scale3D).XY.m128d_f64 = auVar10;
    (pTVar23->Scale3D).ZW.m128d_f64[0] = (double)(float)local_50[0]._8_4_;
    (pTVar23->Scale3D).ZW.m128d_f64[1] = 0.0;
    return;
  default:
    pTVar23 = this->Transform;
    goto LAB_14a32aa3e;
  }
  pTVar23 = this->Transform;
  dVar19 = (double)local_68[0];
  auVar2._8_4_ = SUB84(dVar19,0);
  auVar2._0_8_ = dVar19;
  auVar2._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  *(undefined1 (*) [16])(pTVar23->Scale3D).XY.m128d_f64 = auVar2;
  (pTVar23->Scale3D).ZW.m128d_f64[0] = dVar19;
  (pTVar23->Scale3D).ZW.m128d_f64[1] = 0.0;
switchD_14a32a5ef_caseD_0:
  return;
}

// Save @ 14a344520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERepresentation": Some values do not have unique names */

void __thiscall
FRigCompactTransform::Save
          (FRigCompactTransform *this,FArchive *param_1,FRigHierarchySerializationSettings *param_2,
          ERepresentation *param_3)

{
  longlong *plVar1;
  TTransform<double> *pTVar2;
  undefined1 auVar3 [16];
  undefined4 in_EAX;
  int iVar4;
  ERepresentation EVar5;
  undefined1 auVar6 [16];
  ERepresentation local_res18 [16];
  float local_a8 [2];
  TVector<float>_u_0 local_a0 [2];
  TVector<float>_u_0 local_88;
  float fStack_7c;
  TQuat<float> local_78;
  double local_68;
  
  EVar5 = Float_Zero_Identity_One;
  local_res18[0] = Float_Zero_Identity_One;
  if (param_2->bStoreCompactTransforms == false) {
    local_res18[0] = Double_Complete;
    if (param_3 != (ERepresentation *)0x0) {
      *param_3 = Double_Complete;
    }
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((ERepresentation *)plVar1[1] < (ERepresentation *)*plVar1 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,1);
    }
    else {
      local_res18[0] = *(ERepresentation *)*plVar1;
      *plVar1 = *plVar1 + 1;
    }
switchD_14a3447ac_caseD_c:
    UE::Math::operator<<(param_1,this->Transform);
    return;
  }
  pTVar2 = this->Transform;
  local_68 = (pTVar2->Translation).ZW.m128d_f64[0];
  local_a0[0]._0_4_ = (undefined4)(pTVar2->Translation).XY.m128d_f64[0];
  local_a0[0]._4_4_ = (undefined4)(pTVar2->Translation).XY.m128d_f64[1];
  local_a0[0]._8_4_ = (undefined4)local_68;
  if (((__real_322bcc77 < (float)(local_a0[0]._0_4_ & __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
      (__real_322bcc77 < (float)(local_a0[0]._4_4_ & __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
     (__real_322bcc77 < (float)(local_a0[0]._8_4_ & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    EVar5 = Float_Position_Identity_One;
    local_res18[0] = Float_Position_Identity_One;
  }
  local_78.X = (float)(pTVar2->Rotation).XY.m128d_f64[0];
  local_78.Z = (float)(pTVar2->Rotation).ZW.m128d_f64[0];
  local_78.Y = (float)(pTVar2->Rotation).XY.m128d_f64[1];
  fStack_7c = (float)(pTVar2->Rotation).ZW.m128d_f64[1];
  auVar3._4_4_ = -(uint)(_UNK_1506895d4 <
                        (float)((uint)(local_78.Y - UE::Math::TQuat<float>::Identity.Y) &
                               _UNK_15061cc74));
  auVar3._0_4_ = -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <
                        (float)((uint)(local_78.X - UE::Math::TQuat<float>::Identity.X) &
                               __xmm_7fffffff7fffffff7fffffff7fffffff));
  auVar3._8_4_ = -(uint)(_UNK_1506895d8 <
                        (float)((uint)(local_78.Z - UE::Math::TQuat<float>::Identity.Z) &
                               _UNK_15061cc78));
  auVar3._12_4_ =
       -(uint)(_UNK_1506895dc <
              (float)((uint)(fStack_7c - UE::Math::TQuat<float>::Identity.W) & _UNK_15061cc7c));
  iVar4 = movmskps(in_EAX,auVar3);
  if ((iVar4 != 0) &&
     (auVar6._4_4_ = -(uint)(_UNK_1506895d4 <
                            (float)((uint)(UE::Math::TQuat<float>::Identity.Y + local_78.Y) &
                                   _UNK_15061cc74)),
     auVar6._0_4_ = -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <
                           (float)((uint)(UE::Math::TQuat<float>::Identity.X + local_78.X) &
                                  __xmm_7fffffff7fffffff7fffffff7fffffff)),
     auVar6._8_4_ = -(uint)(_UNK_1506895d8 <
                           (float)((uint)(UE::Math::TQuat<float>::Identity.Z + local_78.Z) &
                                  _UNK_15061cc78)),
     auVar6._12_4_ =
          -(uint)(_UNK_1506895dc <
                 (float)((uint)(UE::Math::TQuat<float>::Identity.W + fStack_7c) & _UNK_15061cc7c)),
     iVar4 = movmskps(iVar4,auVar6), iVar4 != 0)) {
    EVar5 = EVar5 + Float_Zero_Quat_One;
    local_res18[0] = EVar5;
  }
  local_a8[0] = (float)(pTVar2->Scale3D).XY.m128d_f64[0];
  local_88._s_0.Y = (float)(pTVar2->Scale3D).XY.m128d_f64[1];
  local_88._s_0.Z = (float)SUB168(*(undefined1 (*) [16])(pTVar2->Scale3D).ZW.m128d_f64,0);
  if (((__real_322bcc77 <
        (float)((uint)(local_a8[0] - local_88._s_0.Y) & __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
      (__real_322bcc77 <
       (float)((uint)(local_a8[0] - local_88._s_0.Z) & __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
     (__real_322bcc77 <
      (float)((uint)(local_88._s_0.Y - local_88._s_0.Z) & __xmm_7fffffff7fffffff7fffffff7fffffff)))
  {
    EVar5 = EVar5 + Float_Zero_Identity_NonUniform;
    local_res18[0] = EVar5;
  }
  else if (__real_322bcc77 <
           (float)((uint)(local_a8[0] - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff))
  {
    EVar5 = EVar5 + Float_Zero_Identity_Uniform;
    local_res18[0] = EVar5;
  }
  if (param_3 != (ERepresentation *)0x0) {
    *param_3 = EVar5;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_88._s_0.X = local_a8[0];
  local_78.W = fStack_7c;
  if ((ERepresentation *)plVar1[1] < (ERepresentation *)*plVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,1);
  }
  else {
    local_res18[0] = *(ERepresentation *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  switch(local_res18[0]) {
  case Float_Zero_Identity_One:
    break;
  case Float_Zero_Identity_Uniform:
    goto switchD_14a3447ac_caseD_1;
  case Float_Zero_Identity_NonUniform:
    goto switchD_14a3447ac_caseD_2;
  case Float_Zero_Quat_One:
    goto switchD_14a3447ac_caseD_3;
  case Float_Zero_Quat_Uniform:
    goto switchD_14a3447ac_caseD_4;
  case Float_Zero_Quat_NonUniform:
    goto switchD_14a3447ac_caseD_5;
  case Float_Position_Identity_One:
    UE::Math::operator<<(param_1,(TVector<float> *)&local_a0[0]._s_0);
    break;
  case Float_Position_Identity_Uniform:
    UE::Math::operator<<(param_1,(TVector<float> *)&local_a0[0]._s_0);
    goto switchD_14a3447ac_caseD_1;
  case Float_Position_Identity_NonUniform:
    UE::Math::operator<<(param_1,(TVector<float> *)&local_a0[0]._s_0);
    UE::Math::operator<<(param_1,(TVector<float> *)&local_88._s_0);
    break;
  case Float_Position_Quat_One:
    UE::Math::operator<<(param_1,(TVector<float> *)&local_a0[0]._s_0);
switchD_14a3447ac_caseD_3:
    UE::Math::operator<<(param_1,&local_78);
    break;
  case Float_Position_Quat_Uniform:
    UE::Math::operator<<(param_1,(TVector<float> *)&local_a0[0]._s_0);
switchD_14a3447ac_caseD_4:
    UE::Math::operator<<(param_1,&local_78);
switchD_14a3447ac_caseD_1:
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((ulonglong)plVar1[1] < *plVar1 + 4U) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_a8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_a8);
      }
    }
    else {
      *plVar1 = *plVar1 + 4;
    }
    break;
  case Float_Position_Quat_NonUniform:
    UE::Math::operator<<(param_1,(TVector<float> *)&local_a0[0]._s_0);
switchD_14a3447ac_caseD_5:
    UE::Math::operator<<(param_1,&local_78);
switchD_14a3447ac_caseD_2:
    UE::Math::operator<<(param_1,(TVector<float> *)&local_88._s_0);
    break;
  default:
    goto switchD_14a3447ac_caseD_c;
  }
  return;
}

// Serialize @ 14a3491d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERepresentation": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigCompactTransform::Serialize
          (FRigCompactTransform *this,FArchive *param_1,FRigHierarchySerializationSettings *param_2,
          ERepresentation *param_3)

{
  byte bVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
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
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  int iVar25;
  ERepresentation EVar26;
  TTransform<double> *pTVar27;
  undefined1 auVar28 [16];
  ERepresentation aEStackX_18 [8];
  float afStack_a8 [2];
  TVector<float>_u_0 TStack_a0;
  undefined8 uStack_90;
  TVector<float>_u_0 TStack_88;
  float fStack_7c;
  TQuat<float> TStack_78;
  double dStack_68;
  TVector<float>_u_0 TStack_60;
  TVector<float>_u_0 aTStack_50 [2];
  TQuat<float> aTStack_38 [3];
  
  bVar1 = param_1->field_0x28;
  if ((bVar1 & 1) == 0) {
    if ((bVar1 & 4) == 0) {
      return;
    }
    EVar26 = Float_Zero_Identity_One;
    aEStackX_18[0] = Float_Zero_Identity_One;
    if (param_2->bStoreCompactTransforms == false) {
      aEStackX_18[0] = Double_Complete;
      if (param_3 != (ERepresentation *)0x0) {
        *param_3 = Double_Complete;
      }
      plVar2 = *(longlong **)&param_1->field_0x8;
      if ((ERepresentation *)plVar2[1] < (ERepresentation *)*plVar2 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,aEStackX_18,1);
      }
      else {
        aEStackX_18[0] = *(ERepresentation *)*plVar2;
        *plVar2 = *plVar2 + 1;
      }
switchD_14a3447ac_caseD_c:
      UE::Math::operator<<(param_1,this->Transform);
      return;
    }
    pTVar27 = this->Transform;
    dStack_68 = (pTVar27->Translation).ZW.m128d_f64[0];
    TStack_a0._s_0.X = (float)(pTVar27->Translation).XY.m128d_f64[0];
    TStack_a0._s_0.Y = (float)(pTVar27->Translation).XY.m128d_f64[1];
    TStack_a0._s_0.Z = (float)dStack_68;
    if (((__real_322bcc77 < (float)((uint)TStack_a0._s_0.X & __xmm_7fffffff7fffffff7fffffff7fffffff)
         ) || (__real_322bcc77 <
               (float)((uint)TStack_a0._s_0.Y & __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
       (__real_322bcc77 < (float)((uint)TStack_a0._s_0.Z & __xmm_7fffffff7fffffff7fffffff7fffffff)))
    {
      EVar26 = Float_Position_Identity_One;
      aEStackX_18[0] = Float_Position_Identity_One;
    }
    TStack_78.X = (float)(pTVar27->Rotation).XY.m128d_f64[0];
    TStack_78.Z = (float)(pTVar27->Rotation).ZW.m128d_f64[0];
    TStack_78.Y = (float)(pTVar27->Rotation).XY.m128d_f64[1];
    fStack_7c = (float)(pTVar27->Rotation).ZW.m128d_f64[1];
    auVar3._4_4_ = -(uint)(_UNK_1506895d4 <
                          (float)((uint)(TStack_78.Y - UE::Math::TQuat<float>::Identity.Y) &
                                 _UNK_15061cc74));
    auVar3._0_4_ = -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <
                          (float)((uint)(TStack_78.X - UE::Math::TQuat<float>::Identity.X) &
                                 __xmm_7fffffff7fffffff7fffffff7fffffff));
    auVar3._8_4_ = -(uint)(_UNK_1506895d8 <
                          (float)((uint)(TStack_78.Z - UE::Math::TQuat<float>::Identity.Z) &
                                 _UNK_15061cc78));
    auVar3._12_4_ =
         -(uint)(_UNK_1506895dc <
                (float)((uint)(fStack_7c - UE::Math::TQuat<float>::Identity.W) & _UNK_15061cc7c));
    iVar25 = movmskps((uint)bVar1,auVar3);
    if ((iVar25 != 0) &&
       (auVar28._4_4_ =
             -(uint)(_UNK_1506895d4 <
                    (float)((uint)(UE::Math::TQuat<float>::Identity.Y + TStack_78.Y) &
                           _UNK_15061cc74)),
       auVar28._0_4_ =
            -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <
                   (float)((uint)(UE::Math::TQuat<float>::Identity.X + TStack_78.X) &
                          __xmm_7fffffff7fffffff7fffffff7fffffff)),
       auVar28._8_4_ =
            -(uint)(_UNK_1506895d8 <
                   (float)((uint)(UE::Math::TQuat<float>::Identity.Z + TStack_78.Z) & _UNK_15061cc78
                          )),
       auVar28._12_4_ =
            -(uint)(_UNK_1506895dc <
                   (float)((uint)(UE::Math::TQuat<float>::Identity.W + fStack_7c) & _UNK_15061cc7c))
       , iVar25 = movmskps(iVar25,auVar28), iVar25 != 0)) {
      EVar26 = EVar26 + Float_Zero_Quat_One;
      aEStackX_18[0] = EVar26;
    }
    afStack_a8[0] = (float)(pTVar27->Scale3D).XY.m128d_f64[0];
    TStack_88._s_0.Y = (float)(pTVar27->Scale3D).XY.m128d_f64[1];
    TStack_88._s_0.Z = (float)(pTVar27->Scale3D).ZW.m128d_f64[0];
    if (((__real_322bcc77 <
          (float)((uint)(afStack_a8[0] - TStack_88._s_0.Y) & __xmm_7fffffff7fffffff7fffffff7fffffff)
         ) || (__real_322bcc77 <
               (float)((uint)(afStack_a8[0] - TStack_88._s_0.Z) &
                      __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
       (__real_322bcc77 <
        (float)((uint)(TStack_88._s_0.Y - TStack_88._s_0.Z) & __xmm_7fffffff7fffffff7fffffff7fffffff
               ))) {
      EVar26 = EVar26 + Float_Zero_Identity_NonUniform;
      aEStackX_18[0] = EVar26;
    }
    else if (__real_322bcc77 <
             (float)((uint)(afStack_a8[0] - __real_3f800000) &
                    __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      EVar26 = EVar26 + Float_Zero_Identity_Uniform;
      aEStackX_18[0] = EVar26;
    }
    if (param_3 != (ERepresentation *)0x0) {
      *param_3 = EVar26;
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    TStack_88._s_0.X = afStack_a8[0];
    TStack_78.W = fStack_7c;
    if ((ERepresentation *)plVar2[1] < (ERepresentation *)*plVar2 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,aEStackX_18,1);
    }
    else {
      aEStackX_18[0] = *(ERepresentation *)*plVar2;
      *plVar2 = *plVar2 + 1;
    }
    switch(aEStackX_18[0]) {
    case Float_Zero_Identity_One:
      break;
    case Float_Zero_Identity_Uniform:
      goto switchD_14a3447ac_caseD_1;
    case Float_Zero_Identity_NonUniform:
      goto switchD_14a3447ac_caseD_2;
    case Float_Zero_Quat_One:
      goto switchD_14a3447ac_caseD_3;
    case Float_Zero_Quat_Uniform:
      goto switchD_14a3447ac_caseD_4;
    case Float_Zero_Quat_NonUniform:
      goto switchD_14a3447ac_caseD_5;
    case Float_Position_Identity_One:
      UE::Math::operator<<(param_1,(TVector<float> *)&TStack_a0._s_0);
      break;
    case Float_Position_Identity_Uniform:
      UE::Math::operator<<(param_1,(TVector<float> *)&TStack_a0._s_0);
      goto switchD_14a3447ac_caseD_1;
    case Float_Position_Identity_NonUniform:
      UE::Math::operator<<(param_1,(TVector<float> *)&TStack_a0._s_0);
      UE::Math::operator<<(param_1,(TVector<float> *)&TStack_88._s_0);
      break;
    case Float_Position_Quat_One:
      UE::Math::operator<<(param_1,(TVector<float> *)&TStack_a0._s_0);
switchD_14a3447ac_caseD_3:
      UE::Math::operator<<(param_1,&TStack_78);
      break;
    case Float_Position_Quat_Uniform:
      UE::Math::operator<<(param_1,(TVector<float> *)&TStack_a0._s_0);
switchD_14a3447ac_caseD_4:
      UE::Math::operator<<(param_1,&TStack_78);
switchD_14a3447ac_caseD_1:
      plVar2 = *(longlong **)&param_1->field_0x8;
      if ((ulonglong)plVar2[1] < *plVar2 + 4U) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,afStack_a8,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)afStack_a8);
        }
      }
      else {
        *plVar2 = *plVar2 + 4;
      }
      break;
    case Float_Position_Quat_NonUniform:
      UE::Math::operator<<(param_1,(TVector<float> *)&TStack_a0._s_0);
switchD_14a3447ac_caseD_5:
      UE::Math::operator<<(param_1,&TStack_78);
switchD_14a3447ac_caseD_2:
      UE::Math::operator<<(param_1,(TVector<float> *)&TStack_88._s_0);
      break;
    default:
      goto switchD_14a3447ac_caseD_c;
    }
    return;
  }
  if ((int)param_2->ControlRigVersion < 0x23) {
    pTVar27 = this->Transform;
LAB_14a32aa3e:
    uStack_90 = 0x14a32aa46;
    UE::Math::operator<<(param_1,pTVar27);
    return;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  aEStackX_18[0] = Float_Zero_Identity_One;
  if ((ERepresentation *)plVar2[1] < (ERepresentation *)*plVar2 + 1) {
    uStack_90 = 0x14a32a537;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,aEStackX_18,1);
  }
  else {
    aEStackX_18[0] = *(ERepresentation *)*plVar2;
    *plVar2 = *plVar2 + 1;
  }
  if (param_3 != (ERepresentation *)0x0) {
    *param_3 = aEStackX_18[0];
  }
  pTVar27 = this->Transform;
  if (aEStackX_18[0] == Double_Complete) goto LAB_14a32aa3e;
  *&(pTVar27->Rotation).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(pTVar27->Rotation).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(pTVar27->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(pTVar27->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(pTVar27->Scale3D).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(pTVar27->Scale3D).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  TStack_60._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  TStack_60._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  aTStack_50[0]._s_0.Z = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  aTStack_38[0] = UE::Math::TQuat<float>::Identity;
  aTStack_50[0]._0_8_ = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  dStack_68 = (double)CONCAT44(dStack_68._4_4_,0x3f800000);
  switch(aEStackX_18[0]) {
  case Float_Zero_Identity_One:
    goto switchD_14a32a5ef_caseD_0;
  case Float_Zero_Identity_Uniform:
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        uStack_90 = 0x14a32a629;
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&dStack_68,4);
      }
      else {
        uStack_90 = 0x14a32a630;
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)&dStack_68);
      }
    }
    else {
      dStack_68 = (double)(ulonglong)*(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    break;
  case Float_Zero_Identity_NonUniform:
    uStack_90 = 0x14a32a65b;
    UE::Math::operator<<(param_1,(TVector<float> *)&aTStack_50[0]._s_0);
    goto LAB_14a32a65b;
  case Float_Zero_Quat_One:
    uStack_90 = 0x14a32a693;
    UE::Math::operator<<(param_1,aTStack_38);
    pTVar27 = this->Transform;
    auVar7._8_4_ = SUB84((double)aTStack_38[0].Y,0);
    auVar7._0_8_ = (double)aTStack_38[0].X;
    auVar7._12_4_ = (int)((ulonglong)(double)aTStack_38[0].Y >> 0x20);
    *(undefined1 (*) [16])(pTVar27->Rotation).XY.m128d_f64 = auVar7;
    auVar20._8_4_ = SUB84((double)aTStack_38[0].W,0);
    auVar20._0_8_ = (double)aTStack_38[0].Z;
    auVar20._12_4_ = (int)((ulonglong)(double)aTStack_38[0].W >> 0x20);
    *(undefined1 (*) [16])(pTVar27->Rotation).ZW.m128d_f64 = auVar20;
    return;
  case Float_Zero_Quat_Uniform:
    uStack_90 = 0x14a32a6d6;
    UE::Math::operator<<(param_1,aTStack_38);
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        uStack_90 = 0x14a32a70e;
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&dStack_68,4);
      }
      else {
        uStack_90 = 0x14a32a715;
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)&dStack_68);
      }
    }
    else {
      dStack_68 = (double)(ulonglong)*(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    pTVar27 = this->Transform;
    auVar6._8_4_ = SUB84((double)aTStack_38[0].Y,0);
    auVar6._0_8_ = (double)aTStack_38[0].X;
    auVar6._12_4_ = (int)((ulonglong)(double)aTStack_38[0].Y >> 0x20);
    *(undefined1 (*) [16])(pTVar27->Rotation).XY.m128d_f64 = auVar6;
    auVar19._8_4_ = SUB84((double)aTStack_38[0].W,0);
    auVar19._0_8_ = (double)aTStack_38[0].Z;
    auVar19._12_4_ = (int)((ulonglong)(double)aTStack_38[0].W >> 0x20);
    *(undefined1 (*) [16])(pTVar27->Rotation).ZW.m128d_f64 = auVar19;
    break;
  case Float_Zero_Quat_NonUniform:
    uStack_90 = 0x14a32a758;
    UE::Math::operator<<(param_1,aTStack_38);
    uStack_90 = 0x14a32a764;
    UE::Math::operator<<(param_1,(TVector<float> *)&aTStack_50[0]._s_0);
    pTVar27 = this->Transform;
    auVar5._8_4_ = SUB84((double)aTStack_38[0].Y,0);
    auVar5._0_8_ = (double)aTStack_38[0].X;
    auVar5._12_4_ = (int)((ulonglong)(double)aTStack_38[0].Y >> 0x20);
    *(undefined1 (*) [16])(pTVar27->Rotation).XY.m128d_f64 = auVar5;
    auVar18._8_4_ = SUB84((double)aTStack_38[0].W,0);
    auVar18._0_8_ = (double)aTStack_38[0].Z;
    auVar18._12_4_ = (int)((ulonglong)(double)aTStack_38[0].W >> 0x20);
    *(undefined1 (*) [16])(pTVar27->Rotation).ZW.m128d_f64 = auVar18;
    goto LAB_14a32a65b;
  case Float_Position_Identity_One:
    uStack_90 = 0x14a32a7a7;
    UE::Math::operator<<(param_1,(TVector<float> *)&TStack_60._s_0);
    pTVar27 = this->Transform;
    auVar17._8_4_ = SUB84((double)TStack_60._s_0.Y,0);
    auVar17._0_8_ = (double)TStack_60._s_0.X;
    auVar17._12_4_ = (int)((ulonglong)(double)TStack_60._s_0.Y >> 0x20);
    *(undefined1 (*) [16])(pTVar27->Translation).XY.m128d_f64 = auVar17;
    (pTVar27->Translation).ZW.m128d_f64[0] = (double)TStack_60._s_0.Z;
    (pTVar27->Translation).ZW.m128d_f64[1] = 0.0;
    return;
  case Float_Position_Identity_Uniform:
    uStack_90 = 0x14a32a7df;
    UE::Math::operator<<(param_1,(TVector<float> *)&TStack_60._s_0);
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        uStack_90 = 0x14a32a817;
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&dStack_68,4);
      }
      else {
        uStack_90 = 0x14a32a81e;
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)&dStack_68);
      }
    }
    else {
      dStack_68 = (double)(ulonglong)*(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    pTVar27 = this->Transform;
    auVar16._8_4_ = SUB84((double)TStack_60._s_0.Y,0);
    auVar16._0_8_ = (double)TStack_60._s_0.X;
    auVar16._12_4_ = (int)((ulonglong)(double)TStack_60._s_0.Y >> 0x20);
    *(undefined1 (*) [16])(pTVar27->Translation).XY.m128d_f64 = auVar16;
    (pTVar27->Translation).ZW.m128d_f64[0] = (double)TStack_60._s_0.Z;
    (pTVar27->Translation).ZW.m128d_f64[1] = 0.0;
    break;
  case Float_Position_Identity_NonUniform:
    uStack_90 = 0x14a32a856;
    UE::Math::operator<<(param_1,(TVector<float> *)&TStack_60._s_0);
    uStack_90 = 0x14a32a862;
    UE::Math::operator<<(param_1,(TVector<float> *)&aTStack_50[0]._s_0);
    pTVar27 = this->Transform;
    auVar15._8_4_ = SUB84((double)TStack_60._s_0.Y,0);
    auVar15._0_8_ = (double)TStack_60._s_0.X;
    auVar15._12_4_ = (int)((ulonglong)(double)TStack_60._s_0.Y >> 0x20);
    *(undefined1 (*) [16])(pTVar27->Translation).XY.m128d_f64 = auVar15;
    (pTVar27->Translation).ZW.m128d_f64[0] = (double)TStack_60._s_0.Z;
    (pTVar27->Translation).ZW.m128d_f64[1] = 0.0;
    goto LAB_14a32a65b;
  case Float_Position_Quat_One:
    uStack_90 = 0x14a32a89a;
    UE::Math::operator<<(param_1,(TVector<float> *)&TStack_60._s_0);
    uStack_90 = 0x14a32a8a6;
    UE::Math::operator<<(param_1,aTStack_38);
    pTVar27 = this->Transform;
    auVar14._8_4_ = SUB84((double)TStack_60._s_0.Y,0);
    auVar14._0_8_ = (double)TStack_60._s_0.X;
    auVar14._12_4_ = (int)((ulonglong)(double)TStack_60._s_0.Y >> 0x20);
    *(undefined1 (*) [16])(pTVar27->Translation).XY.m128d_f64 = auVar14;
    (pTVar27->Translation).ZW.m128d_f64[0] = (double)TStack_60._s_0.Z;
    (pTVar27->Translation).ZW.m128d_f64[1] = 0.0;
    pTVar27 = this->Transform;
    auVar10._8_4_ = SUB84((double)aTStack_38[0].Y,0);
    auVar10._0_8_ = (double)aTStack_38[0].X;
    auVar10._12_4_ = (int)((ulonglong)(double)aTStack_38[0].Y >> 0x20);
    *(undefined1 (*) [16])(pTVar27->Rotation).XY.m128d_f64 = auVar10;
    auVar24._8_4_ = SUB84((double)aTStack_38[0].W,0);
    auVar24._0_8_ = (double)aTStack_38[0].Z;
    auVar24._12_4_ = (int)((ulonglong)(double)aTStack_38[0].W >> 0x20);
    *(undefined1 (*) [16])(pTVar27->Rotation).ZW.m128d_f64 = auVar24;
    return;
  case Float_Position_Quat_Uniform:
    uStack_90 = 0x14a32a910;
    UE::Math::operator<<(param_1,(TVector<float> *)&TStack_60._s_0);
    uStack_90 = 0x14a32a91c;
    UE::Math::operator<<(param_1,aTStack_38);
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        uStack_90 = 0x14a32a954;
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&dStack_68,4);
      }
      else {
        uStack_90 = 0x14a32a95b;
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)&dStack_68);
      }
    }
    else {
      dStack_68 = (double)(ulonglong)*(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    pTVar27 = this->Transform;
    auVar13._8_4_ = SUB84((double)TStack_60._s_0.Y,0);
    auVar13._0_8_ = (double)TStack_60._s_0.X;
    auVar13._12_4_ = (int)((ulonglong)(double)TStack_60._s_0.Y >> 0x20);
    *(undefined1 (*) [16])(pTVar27->Translation).XY.m128d_f64 = auVar13;
    (pTVar27->Translation).ZW.m128d_f64[0] = (double)TStack_60._s_0.Z;
    (pTVar27->Translation).ZW.m128d_f64[1] = 0.0;
    pTVar27 = this->Transform;
    auVar9._8_4_ = SUB84((double)aTStack_38[0].Y,0);
    auVar9._0_8_ = (double)aTStack_38[0].X;
    auVar9._12_4_ = (int)((ulonglong)(double)aTStack_38[0].Y >> 0x20);
    *(undefined1 (*) [16])(pTVar27->Rotation).XY.m128d_f64 = auVar9;
    auVar23._8_4_ = SUB84((double)aTStack_38[0].W,0);
    auVar23._0_8_ = (double)aTStack_38[0].Z;
    auVar23._12_4_ = (int)((ulonglong)(double)aTStack_38[0].W >> 0x20);
    *(undefined1 (*) [16])(pTVar27->Rotation).ZW.m128d_f64 = auVar23;
    break;
  case Float_Position_Quat_NonUniform:
    uStack_90 = 0x14a32a9c5;
    UE::Math::operator<<(param_1,(TVector<float> *)&TStack_60._s_0);
    uStack_90 = 0x14a32a9d1;
    UE::Math::operator<<(param_1,aTStack_38);
    uStack_90 = 0x14a32a9dd;
    UE::Math::operator<<(param_1,(TVector<float> *)&aTStack_50[0]._s_0);
    pTVar27 = this->Transform;
    auVar11._8_4_ = SUB84((double)TStack_60._s_0.Y,0);
    auVar11._0_8_ = (double)TStack_60._s_0.X;
    auVar11._12_4_ = (int)((ulonglong)(double)TStack_60._s_0.Y >> 0x20);
    *(undefined1 (*) [16])(pTVar27->Translation).XY.m128d_f64 = auVar11;
    (pTVar27->Translation).ZW.m128d_f64[0] = (double)TStack_60._s_0.Z;
    (pTVar27->Translation).ZW.m128d_f64[1] = 0.0;
    pTVar27 = this->Transform;
    auVar8._8_4_ = SUB84((double)aTStack_38[0].Y,0);
    auVar8._0_8_ = (double)aTStack_38[0].X;
    auVar8._12_4_ = (int)((ulonglong)(double)aTStack_38[0].Y >> 0x20);
    *(undefined1 (*) [16])(pTVar27->Rotation).XY.m128d_f64 = auVar8;
    auVar22._8_4_ = SUB84((double)aTStack_38[0].W,0);
    auVar22._0_8_ = (double)aTStack_38[0].Z;
    auVar22._12_4_ = (int)((ulonglong)(double)aTStack_38[0].W >> 0x20);
    *(undefined1 (*) [16])(pTVar27->Rotation).ZW.m128d_f64 = auVar22;
LAB_14a32a65b:
    pTVar27 = this->Transform;
    auVar12._8_4_ = SUB84((double)(float)aTStack_50[0]._4_4_,0);
    auVar12._0_8_ = (double)(float)aTStack_50[0]._0_4_;
    auVar12._12_4_ = (int)((ulonglong)(double)(float)aTStack_50[0]._4_4_ >> 0x20);
    *(undefined1 (*) [16])(pTVar27->Scale3D).XY.m128d_f64 = auVar12;
    (pTVar27->Scale3D).ZW.m128d_f64[0] = (double)(float)aTStack_50[0]._8_4_;
    (pTVar27->Scale3D).ZW.m128d_f64[1] = 0.0;
    return;
  default:
    pTVar27 = this->Transform;
    goto LAB_14a32aa3e;
  }
  pTVar27 = this->Transform;
  dVar21 = (double)dStack_68._0_4_;
  auVar4._8_4_ = SUB84(dVar21,0);
  auVar4._0_8_ = dVar21;
  auVar4._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  *(undefined1 (*) [16])(pTVar27->Scale3D).XY.m128d_f64 = auVar4;
  (pTVar27->Scale3D).ZW.m128d_f64[0] = dVar21;
  (pTVar27->Scale3D).ZW.m128d_f64[1] = 0.0;
switchD_14a32a5ef_caseD_0:
  return;
}

