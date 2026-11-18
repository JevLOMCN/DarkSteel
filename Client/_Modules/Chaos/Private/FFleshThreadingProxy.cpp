// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// GetCurrentPointsTransform @ 143a690e0

TTransform<double> * __thiscall
Chaos::Softs::FFleshThreadingProxy::GetCurrentPointsTransform(FFleshThreadingProxy *this)

{
  ChaosDeformableSimSpace CVar1;
  
  CVar1 = this->SimSpace;
  if (CVar1 == World) {
    return &this->WorldToComponentXf;
  }
  if ((CVar1 != ComponentXf) && (CVar1 == Bone)) {
    return &this->BoneToComponentXf;
  }
  return &UE::Math::TTransform<double>::Identity;
}

// RotateWorldSpaceVector @ 143a90f40

TVector<float,3> * __thiscall
Chaos::Softs::FFleshThreadingProxy::RotateWorldSpaceVector
          (FFleshThreadingProxy *this,TVector<float,3> *__return_storage_ptr__,
          TVector<float,3> *param_1)

{
  ChaosDeformableSimSpace CVar1;
  double dVar2;
  double dVar3;
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
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  undefined4 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  double dVar43;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  
  CVar1 = this->SimSpace;
  if (CVar1 != World) {
    if (CVar1 == ComponentXf) {
      auVar9 = *(undefined1 (*) [16])(this->ComponentToWorldXf).Rotation.ZW.m128d_f64;
      dVar3 = (double)(float)*(undefined8 *)param_1;
      dVar26 = (double)(float)((ulonglong)*(undefined8 *)param_1 >> 0x20);
      uVar28 = (undefined4)((ulonglong)dVar26 >> 0x20);
      dVar27 = (this->ComponentToWorldXf).Rotation.ZW.m128d_f64[1];
      auVar40._8_4_ = SUB84(dVar26,0);
      auVar40._0_8_ = dVar3;
      auVar40._12_4_ = uVar28;
      auVar36._0_8_ = (double)*(float *)&param_1->field_0x8;
      auVar36._8_8_ = 0;
      auVar5 = *(undefined1 (*) [16])(this->ComponentToWorldXf).Rotation.XY.m128d_f64;
      dVar2 = auVar9._0_8_;
      auVar14 = blendpd(auVar5,auVar9,2);
      auVar41._0_8_ = auVar40._8_8_ * auVar5._0_8_ - auVar5._8_8_ * dVar3;
      auVar41._8_8_ = auVar36._0_8_ * auVar5._8_8_ - dVar2 * dVar26;
      auVar5._8_4_ = SUB84(dVar26,0);
      auVar5._0_8_ = dVar3;
      auVar5._12_4_ = uVar28;
      auVar5 = blendpd(auVar5,auVar36,2);
      auVar12._0_8_ = auVar5._0_8_ * dVar2 - auVar14._0_8_ * auVar36._0_8_;
      auVar12._8_8_ = auVar5._8_8_ * auVar9._8_8_ - auVar14._8_8_ * 0.0;
      auVar5 = *(undefined1 (*) [16])(this->ComponentToWorldXf).Rotation.XY.m128d_f64;
      auVar14 = blendpd(auVar41,auVar12,2);
      dVar37 = auVar41._8_8_ + auVar41._8_8_;
      dVar38 = auVar12._0_8_ + auVar12._0_8_;
      auVar42._0_8_ = auVar14._0_8_ + auVar14._0_8_;
      auVar42._8_8_ = auVar14._8_8_ + auVar14._8_8_;
      auVar24._8_4_ = SUB84(dVar38,0);
      auVar24._0_8_ = dVar37;
      uVar28 = (undefined4)((ulonglong)dVar38 >> 0x20);
      auVar24._12_4_ = uVar28;
      auVar18._8_4_ = SUB84(dVar38,0);
      auVar18._0_8_ = dVar37;
      auVar18._12_4_ = uVar28;
      auVar12 = blendpd(auVar18,auVar42,2);
      auVar25._0_8_ = auVar24._8_8_ * auVar5._0_8_ - auVar5._8_8_ * dVar37;
      auVar25._8_8_ = auVar42._0_8_ * auVar5._8_8_ - dVar2 * dVar38;
      auVar14._8_4_ = SUB84(auVar25._8_8_,0);
      auVar14._0_8_ = auVar25._0_8_;
      auVar14._12_4_ = (int)((ulonglong)auVar25._8_8_ >> 0x20);
      auVar5 = blendpd(auVar5,auVar9,2);
      auVar19._0_8_ = auVar12._0_8_ * dVar2 - auVar5._0_8_ * auVar42._0_8_;
      auVar19._8_8_ = auVar12._8_8_ * auVar9._8_8_ - auVar5._8_8_ * auVar42._8_8_;
      *(float *)__return_storage_ptr__ = (float)(dVar37 * dVar27 + dVar3 + auVar14._8_8_);
      auVar9 = blendpd(auVar25,auVar19,2);
      *(float *)&__return_storage_ptr__->field_0x4 =
           (float)(dVar38 * dVar27 + dVar26 + auVar19._0_8_);
      *(float *)&__return_storage_ptr__->field_0x8 =
           (float)(auVar42._0_8_ * dVar27 + auVar36._0_8_ + auVar9._0_8_);
      return __return_storage_ptr__;
    }
    if (CVar1 == Bone) {
      auVar9 = *(undefined1 (*) [16])(this->ComponentToWorldXf).Rotation.ZW.m128d_f64;
      dVar3 = (double)(float)*(undefined8 *)param_1;
      dVar26 = (double)(float)((ulonglong)*(undefined8 *)param_1 >> 0x20);
      uVar28 = (undefined4)((ulonglong)dVar26 >> 0x20);
      dVar27 = (this->ComponentToWorldXf).Rotation.ZW.m128d_f64[1];
      auVar29._8_4_ = SUB84(dVar26,0);
      auVar29._0_8_ = dVar3;
      auVar29._12_4_ = uVar28;
      auVar32._0_8_ = (double)*(float *)&param_1->field_0x8;
      auVar32._8_8_ = 0;
      auVar5 = *(undefined1 (*) [16])(this->ComponentToWorldXf).Rotation.XY.m128d_f64;
      dVar2 = auVar9._0_8_;
      auVar12 = blendpd(auVar5,auVar9,2);
      auVar30._0_8_ = auVar29._8_8_ * auVar5._0_8_ - auVar5._8_8_ * dVar3;
      auVar30._8_8_ = auVar32._0_8_ * auVar5._8_8_ - dVar2 * dVar26;
      auVar39._8_4_ = SUB84(auVar30._8_8_,0);
      auVar39._0_8_ = auVar30._0_8_;
      auVar39._12_4_ = (int)((ulonglong)auVar30._8_8_ >> 0x20);
      auVar4._8_4_ = SUB84(dVar26,0);
      auVar4._0_8_ = dVar3;
      auVar4._12_4_ = uVar28;
      auVar5 = blendpd(auVar4,auVar32,2);
      auVar6._0_8_ = auVar5._0_8_ * dVar2 - auVar12._0_8_ * auVar32._0_8_;
      auVar6._8_8_ = auVar5._8_8_ * auVar9._8_8_ - auVar12._8_8_ * 0.0;
      auVar5 = *(undefined1 (*) [16])(this->ComponentToWorldXf).Rotation.XY.m128d_f64;
      auVar12 = blendpd(auVar30,auVar6,2);
      auVar31._0_8_ = auVar12._0_8_ + auVar12._0_8_;
      auVar31._8_8_ = auVar12._8_8_ + auVar12._8_8_;
      dVar37 = auVar39._8_8_ + auVar39._8_8_;
      dVar43 = auVar6._0_8_ + auVar6._0_8_;
      auVar20._8_4_ = SUB84(dVar43,0);
      auVar20._0_8_ = dVar37;
      uVar28 = (undefined4)((ulonglong)dVar43 >> 0x20);
      auVar20._12_4_ = uVar28;
      auVar13._8_4_ = SUB84(dVar43,0);
      auVar13._0_8_ = dVar37;
      auVar13._12_4_ = uVar28;
      auVar14 = blendpd(auVar13,auVar31,2);
      auVar21._0_8_ = auVar20._8_8_ * auVar5._0_8_ - auVar5._8_8_ * dVar37;
      auVar21._8_8_ = auVar31._0_8_ * auVar5._8_8_ - dVar2 * dVar43;
      auVar12 = blendpd(auVar5,auVar9,2);
      auVar7._8_4_ = SUB84(auVar21._8_8_,0);
      auVar7._0_8_ = auVar21._0_8_;
      auVar7._12_4_ = (int)((ulonglong)auVar21._8_8_ >> 0x20);
      auVar5 = *(undefined1 (*) [16])(this->ComponentToBoneXf).Rotation.ZW.m128d_f64;
      auVar15._0_8_ = auVar14._0_8_ * dVar2 - auVar12._0_8_ * auVar31._0_8_;
      auVar15._8_8_ = auVar14._8_8_ * auVar9._8_8_ - auVar12._8_8_ * auVar31._8_8_;
      dVar38 = dVar37 * dVar27 + dVar3 + auVar7._8_8_;
      dVar43 = dVar43 * dVar27 + dVar26 + auVar15._0_8_;
      auVar9 = *(undefined1 (*) [16])(this->ComponentToBoneXf).Rotation.XY.m128d_f64;
      auVar33._8_4_ = SUB84(dVar43,0);
      auVar33._0_8_ = dVar38;
      uVar28 = (undefined4)((ulonglong)dVar43 >> 0x20);
      auVar33._12_4_ = uVar28;
      auVar12 = blendpd(auVar21,auVar15,2);
      dVar37 = auVar31._0_8_ * dVar27 + auVar32._0_8_ + auVar12._0_8_;
      auVar12 = blendpd(auVar9,auVar5,2);
      dVar3 = (this->ComponentToBoneXf).Rotation.ZW.m128d_f64[1];
      dVar2 = auVar5._0_8_;
      auVar34._0_8_ = auVar33._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar38;
      auVar34._8_8_ = dVar37 * auVar9._8_8_ - dVar2 * dVar43;
      auVar8._8_4_ = SUB84(dVar43,0);
      auVar8._0_8_ = dVar38;
      auVar8._12_4_ = uVar28;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = dVar37;
      auVar9 = blendpd(auVar8,auVar9,2);
      auVar10._0_8_ = auVar9._0_8_ * dVar2 - auVar12._0_8_ * dVar37;
      auVar10._8_8_ = auVar9._8_8_ * auVar5._8_8_ - auVar12._8_8_ * 0.0;
      auVar9 = *(undefined1 (*) [16])(this->ComponentToBoneXf).Rotation.XY.m128d_f64;
      auVar12 = blendpd(auVar34,auVar10,2);
      dVar26 = auVar34._8_8_ + auVar34._8_8_;
      dVar27 = auVar10._0_8_ + auVar10._0_8_;
      auVar35._0_8_ = auVar12._0_8_ + auVar12._0_8_;
      auVar35._8_8_ = auVar12._8_8_ + auVar12._8_8_;
      auVar22._8_4_ = SUB84(dVar27,0);
      auVar22._0_8_ = dVar26;
      uVar28 = (undefined4)((ulonglong)dVar27 >> 0x20);
      auVar22._12_4_ = uVar28;
      auVar16._8_4_ = SUB84(dVar27,0);
      auVar16._0_8_ = dVar26;
      auVar16._12_4_ = uVar28;
      auVar23._0_8_ = auVar22._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar26;
      auVar23._8_8_ = auVar35._0_8_ * auVar9._8_8_ - dVar2 * dVar27;
      auVar12 = blendpd(auVar16,auVar35,2);
      auVar11._8_4_ = SUB84(auVar23._8_8_,0);
      auVar11._0_8_ = auVar23._0_8_;
      auVar11._12_4_ = (int)((ulonglong)auVar23._8_8_ >> 0x20);
      auVar9 = blendpd(auVar9,auVar5,2);
      auVar17._0_8_ = auVar12._0_8_ * dVar2 - auVar9._0_8_ * auVar35._0_8_;
      auVar17._8_8_ = auVar12._8_8_ * auVar5._8_8_ - auVar9._8_8_ * auVar35._8_8_;
      *(float *)__return_storage_ptr__ = (float)(dVar26 * dVar3 + dVar38 + auVar11._8_8_);
      auVar9 = blendpd(auVar23,auVar17,2);
      *(float *)&__return_storage_ptr__->field_0x4 =
           (float)(dVar27 * dVar3 + dVar43 + auVar17._0_8_);
      *(float *)&__return_storage_ptr__->field_0x8 =
           (float)(auVar35._0_8_ * dVar3 + dVar37 + auVar9._0_8_);
      return __return_storage_ptr__;
    }
  }
  uVar28 = *(undefined4 *)&param_1->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = uVar28;
  return __return_storage_ptr__;
}

