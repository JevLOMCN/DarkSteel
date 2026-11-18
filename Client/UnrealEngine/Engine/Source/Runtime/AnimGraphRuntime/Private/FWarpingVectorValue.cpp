// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 2

// StaticStruct @ 1463e9220

UScriptStruct * __cdecl FWarpingVectorValue::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWarpingVectorValue.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FWarpingVectorValue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWarpingVectorValue,(UObject *)pUVar1,
                         L"WarpingVectorValue");
  }
  return Z_Registration_Info_UScriptStruct_FWarpingVectorValue.OuterSingleton;
}

// AsComponentSpaceDirection @ 146416400

TVector<double> * __thiscall
FWarpingVectorValue::AsComponentSpaceDirection
          (FWarpingVectorValue *this,TVector<double> *__return_storage_ptr__,
          FAnimInstanceProxy *param_1,TTransform<double> *param_2)

{
  EWarpingVectorMode EVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  TVector<double> *pTVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
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
  undefined4 uVar30;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar31;
  undefined4 uVar32;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  undefined1 auVar41 [16];
  double dVar45;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar46;
  double dVar49;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined4 uVar63;
  undefined4 uVar64;
  double local_88;
  double dStack_80;
  undefined8 local_78;
  
  EVar1 = this->Mode;
  if (EVar1 == ComponentSpaceVector) {
    UE::Math::TVector<double>::GetSafeNormal
              (&this->Value,__return_storage_ptr__,__real_3e45798ee0000000,
               &UE::Math::TVector<double>::ZeroVector);
    return __return_storage_ptr__;
  }
  if (EVar1 == ActorSpaceVector) {
    auVar35 = *(undefined1 (*) [16])(param_1->ActorTransform).Rotation.ZW.m128d_f64;
    dVar12 = auVar35._0_8_;
    auVar5 = *(undefined1 (*) [16])&(this->Value).field0_0x0;
    dVar56 = (this->Value).field0_0x0._s_0.Z;
    auVar54._8_8_ = 0;
    auVar54._0_8_ = dVar56;
    auVar43 = *(undefined1 (*) [16])(param_1->ActorTransform).Rotation.XY.m128d_f64;
    dVar31 = (param_1->ActorTransform).Rotation.ZW.m128d_f64[1];
    dVar46 = auVar5._8_8_;
    auVar22 = blendpd(auVar43,auVar35,2);
    auVar47._0_8_ = dVar46 * auVar43._0_8_ - auVar43._8_8_ * auVar5._0_8_;
    auVar47._8_8_ = dVar56 * auVar43._8_8_ - dVar12 * dVar46;
    auVar43 = blendpd(auVar5,auVar54,2);
    auVar19._0_8_ = auVar43._0_8_ * dVar12 - auVar22._0_8_ * dVar56;
    auVar19._8_8_ = auVar43._8_8_ * auVar35._8_8_ - auVar22._8_8_ * 0.0;
    auVar43 = *(undefined1 (*) [16])(param_1->ActorTransform).Rotation.XY.m128d_f64;
    auVar22 = blendpd(auVar47,auVar19,2);
    auVar48._0_8_ = auVar22._0_8_ + auVar22._0_8_;
    auVar48._8_8_ = auVar22._8_8_ + auVar22._8_8_;
    dVar40 = auVar47._8_8_ + auVar47._8_8_;
    dVar45 = auVar19._0_8_ + auVar19._0_8_;
    uVar30 = (undefined4)((ulonglong)dVar45 >> 0x20);
    auVar37._8_4_ = SUB84(dVar45,0);
    auVar37._0_8_ = dVar40;
    auVar37._12_4_ = uVar30;
    auVar27._8_4_ = SUB84(dVar45,0);
    auVar27._0_8_ = dVar40;
    auVar27._12_4_ = uVar30;
    auVar22 = blendpd(auVar27,auVar48,2);
    auVar19 = blendpd(auVar43,auVar35,2);
    auVar38._0_8_ = auVar37._8_8_ * auVar43._0_8_ - auVar43._8_8_ * dVar40;
    auVar38._8_8_ = auVar48._0_8_ * auVar43._8_8_ - dVar12 * dVar45;
    auVar28._0_8_ = auVar22._0_8_ * dVar12 - auVar19._0_8_ * auVar48._0_8_;
    auVar28._8_8_ = auVar22._8_8_ * auVar35._8_8_ - auVar19._8_8_ * auVar48._8_8_;
    auVar43._8_4_ = SUB84(auVar38._8_8_,0);
    auVar43._0_8_ = auVar38._0_8_;
    auVar43._12_4_ = (int)((ulonglong)auVar38._8_8_ >> 0x20);
    auVar35 = blendpd(auVar38,auVar28,2);
    dVar56 = auVar48._0_8_ * dVar31 + dVar56 + auVar35._0_8_;
    dVar12 = (param_1->ComponentTransform).Rotation.ZW.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar11 = (param_1->ComponentTransform).Rotation.ZW.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    uVar32 = (undefined4)((ulonglong)dVar11 >> 0x20);
    dVar49 = (param_1->ComponentTransform).Rotation.XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar50 = (param_1->ComponentTransform).Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar40 = dVar40 * dVar31 + auVar5._0_8_ + auVar43._8_8_;
    dVar45 = dVar45 * dVar31 + dVar46 + auVar28._0_8_;
    uVar63 = SUB84(dVar45,0);
    uVar64 = (undefined4)((ulonglong)dVar45 >> 0x20);
    auVar39._8_4_ = SUB84(dVar50,0);
    auVar39._0_8_ = dVar49;
    uVar30 = (undefined4)((ulonglong)dVar50 >> 0x20);
    auVar39._12_4_ = uVar30;
    auVar44._8_4_ = SUB84(dVar50,0);
    auVar44._0_8_ = dVar49;
    auVar44._12_4_ = uVar30;
    auVar60._8_4_ = uVar63;
    auVar60._0_8_ = dVar40;
    auVar60._12_4_ = uVar64;
    auVar22._8_4_ = uVar63;
    auVar22._0_8_ = dVar40;
    auVar22._12_4_ = uVar64;
    auVar15._8_4_ = uVar63;
    auVar15._0_8_ = dVar40;
    auVar15._12_4_ = uVar64;
    auVar55._8_4_ = SUB84(dVar11,0);
    auVar55._0_8_ = dVar12;
    auVar55._12_4_ = uVar32;
    auVar61._0_8_ = auVar60._8_8_ * dVar49 - dVar40 * auVar39._8_8_;
    auVar61._8_8_ = dVar56 * dVar50 - auVar22._8_8_ * dVar12;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar56;
    auVar5 = blendpd(auVar15,auVar5,2);
    auVar29._8_4_ = SUB84(auVar61._8_8_,0);
    auVar29._0_8_ = auVar61._0_8_;
    auVar29._12_4_ = (int)((ulonglong)auVar61._8_8_ >> 0x20);
    auVar35._8_4_ = SUB84(dVar11,0);
    auVar35._0_8_ = dVar12;
    auVar35._12_4_ = uVar32;
    auVar43 = blendpd(auVar44,auVar35,2);
    auVar16._0_8_ = auVar5._0_8_ * dVar12 - dVar56 * auVar43._0_8_;
    auVar16._8_8_ = auVar5._8_8_ * dVar11 - auVar43._8_8_ * 0.0;
    dVar31 = auVar29._8_8_ + auVar29._8_8_;
    dVar46 = auVar16._0_8_ + auVar16._0_8_;
    auVar35 = blendpd(auVar61,auVar16,2);
    auVar62._0_8_ = auVar35._0_8_ + auVar35._0_8_;
    auVar62._8_8_ = auVar35._8_8_ + auVar35._8_8_;
    uVar30 = SUB84(dVar46,0);
    auVar23._8_4_ = uVar30;
    auVar23._0_8_ = dVar31;
    uVar32 = (undefined4)((ulonglong)dVar46 >> 0x20);
    auVar23._12_4_ = uVar32;
    auVar10._8_4_ = uVar30;
    auVar10._0_8_ = dVar31;
    auVar10._12_4_ = uVar32;
    auVar17._8_4_ = uVar30;
    auVar17._0_8_ = dVar31;
    auVar17._12_4_ = uVar32;
    auVar35 = blendpd(auVar17,auVar62,2);
    auVar21._0_8_ = auVar23._8_8_ * dVar49 - dVar31 * auVar39._8_8_;
    auVar21._8_8_ = auVar62._0_8_ * dVar50 - auVar10._8_8_ * dVar12;
    auVar9._8_4_ = SUB84(auVar62._8_8_,0);
    auVar9._0_8_ = auVar62._0_8_;
    auVar9._12_4_ = (int)((ulonglong)auVar62._8_8_ >> 0x20);
    dVar56 = auVar62._0_8_ * auVar55._8_8_ + dVar56;
    dVar40 = dVar31 * auVar55._8_8_ + dVar40;
    dVar45 = dVar46 * dVar11 + dVar45;
  }
  else {
    if (EVar1 != WorldSpaceVector) {
      if (EVar1 != IKFootRootLocalSpaceVector) {
        dVar56 = (this->Value).field0_0x0._s_0.Y;
        (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Value).field0_0x0._s_0.X;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar56;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = (this->Value).field0_0x0._s_0.Z;
        return __return_storage_ptr__;
      }
      pTVar4 = UE::Math::TVector<double>::GetSafeNormal
                         (&this->Value,(TVector<double> *)&local_88,__real_3e45798ee0000000,
                          &UE::Math::TVector<double>::ZeroVector);
      auVar35 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
      dVar11 = auVar35._0_8_;
      auVar5 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
      dVar12 = (param_2->Rotation).ZW.m128d_f64[1];
      auVar43 = *(undefined1 (*) [16])&pTVar4->field0_0x0;
      dVar56 = (pTVar4->field0_0x0)._s_0.Z;
      auVar57._8_8_ = 0;
      auVar57._0_8_ = dVar56;
      auVar19 = blendpd(auVar5,auVar35,2);
      dVar31 = auVar43._8_8_;
      auVar51._0_8_ = dVar31 * auVar5._0_8_ - auVar5._8_8_ * auVar43._0_8_;
      auVar51._8_8_ = dVar56 * auVar5._8_8_ - dVar11 * dVar31;
      auVar5 = blendpd(auVar43,auVar57,2);
      auVar41._8_4_ = SUB84(auVar51._8_8_,0);
      auVar41._0_8_ = auVar51._0_8_;
      auVar41._12_4_ = (int)((ulonglong)auVar51._8_8_ >> 0x20);
      auVar6._0_8_ = auVar5._0_8_ * dVar11 - auVar19._0_8_ * dVar56;
      auVar6._8_8_ = auVar5._8_8_ * auVar35._8_8_ - auVar19._8_8_ * 0.0;
      auVar5 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
      auVar19 = blendpd(auVar51,auVar6,2);
      dVar40 = auVar41._8_8_ + auVar41._8_8_;
      dVar45 = auVar6._0_8_ + auVar6._0_8_;
      auVar52._0_8_ = auVar19._0_8_ + auVar19._0_8_;
      auVar52._8_8_ = auVar19._8_8_ + auVar19._8_8_;
      auVar33._8_4_ = SUB84(dVar45,0);
      auVar33._0_8_ = dVar40;
      uVar30 = (undefined4)((ulonglong)dVar45 >> 0x20);
      auVar33._12_4_ = uVar30;
      auVar24._8_4_ = SUB84(dVar45,0);
      auVar24._0_8_ = dVar40;
      auVar24._12_4_ = uVar30;
      auVar19 = blendpd(auVar24,auVar52,2);
      auVar34._0_8_ = auVar33._8_8_ * auVar5._0_8_ - auVar5._8_8_ * dVar40;
      auVar34._8_8_ = auVar52._0_8_ * auVar5._8_8_ - dVar11 * dVar45;
      auVar5 = blendpd(auVar5,auVar35,2);
      auVar7._8_4_ = SUB84(auVar34._8_8_,0);
      auVar7._0_8_ = auVar34._0_8_;
      auVar7._12_4_ = (int)((ulonglong)auVar34._8_8_ >> 0x20);
      auVar25._0_8_ = auVar19._0_8_ * dVar11 - auVar5._0_8_ * auVar52._0_8_;
      auVar25._8_8_ = auVar19._8_8_ * auVar35._8_8_ - auVar5._8_8_ * auVar52._8_8_;
      auVar35 = blendpd(auVar34,auVar25,2);
      (__return_storage_ptr__->field0_0x0)._s_0.X = dVar40 * dVar12 + auVar43._0_8_ + auVar7._8_8_;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar45 * dVar12 + dVar31 + auVar25._0_8_;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar52._0_8_ * dVar12 + dVar56 + auVar35._0_8_;
      return __return_storage_ptr__;
    }
    auVar5 = *(undefined1 (*) [16])&(this->Value).field0_0x0;
    dVar56 = (this->Value).field0_0x0._s_0.Z;
    dVar46 = (param_1->ComponentTransform).Rotation.XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar49 = (param_1->ComponentTransform).Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar12 = (param_1->ComponentTransform).Rotation.ZW.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar11 = (param_1->ComponentTransform).Rotation.ZW.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    uVar32 = (undefined4)((ulonglong)dVar11 >> 0x20);
    dVar45 = auVar5._8_8_;
    auVar36._8_4_ = SUB84(dVar49,0);
    auVar36._0_8_ = dVar46;
    uVar30 = (undefined4)((ulonglong)dVar49 >> 0x20);
    auVar36._12_4_ = uVar30;
    auVar42._8_4_ = SUB84(dVar49,0);
    auVar42._0_8_ = dVar46;
    auVar42._12_4_ = uVar30;
    auVar53._8_4_ = SUB84(dVar11,0);
    auVar53._0_8_ = dVar12;
    auVar53._12_4_ = uVar32;
    auVar58._0_8_ = dVar45 * dVar46 - auVar5._0_8_ * auVar36._8_8_;
    auVar58._8_8_ = dVar56 * dVar49 - dVar45 * dVar12;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = dVar56;
    auVar35 = blendpd(auVar5,auVar3,2);
    auVar26._8_4_ = SUB84(auVar58._8_8_,0);
    auVar26._0_8_ = auVar58._0_8_;
    auVar26._12_4_ = (int)((ulonglong)auVar58._8_8_ >> 0x20);
    auVar2._8_4_ = SUB84(dVar11,0);
    auVar2._0_8_ = dVar12;
    auVar2._12_4_ = uVar32;
    auVar43 = blendpd(auVar42,auVar2,2);
    auVar13._0_8_ = auVar35._0_8_ * dVar12 - dVar56 * auVar43._0_8_;
    auVar13._8_8_ = auVar35._8_8_ * dVar11 - auVar43._8_8_ * 0.0;
    dVar40 = auVar26._8_8_ + auVar26._8_8_;
    dVar31 = auVar13._0_8_ + auVar13._0_8_;
    auVar35 = blendpd(auVar58,auVar13,2);
    auVar59._0_8_ = auVar35._0_8_ + auVar35._0_8_;
    auVar59._8_8_ = auVar35._8_8_ + auVar35._8_8_;
    uVar30 = SUB84(dVar31,0);
    auVar20._8_4_ = uVar30;
    auVar20._0_8_ = dVar40;
    uVar32 = (undefined4)((ulonglong)dVar31 >> 0x20);
    auVar20._12_4_ = uVar32;
    auVar8._8_4_ = uVar30;
    auVar8._0_8_ = dVar40;
    auVar8._12_4_ = uVar32;
    auVar14._8_4_ = uVar30;
    auVar14._0_8_ = dVar40;
    auVar14._12_4_ = uVar32;
    auVar35 = blendpd(auVar14,auVar59,2);
    auVar21._0_8_ = auVar20._8_8_ * dVar46 - dVar40 * auVar36._8_8_;
    auVar21._8_8_ = auVar59._0_8_ * dVar49 - auVar8._8_8_ * dVar12;
    auVar9._8_4_ = SUB84(auVar59._8_8_,0);
    auVar9._0_8_ = auVar59._0_8_;
    auVar9._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
    dVar40 = dVar40 * auVar53._8_8_ + auVar5._0_8_;
    dVar45 = dVar31 * dVar11 + dVar45;
    dVar56 = auVar59._0_8_ * auVar53._8_8_ + dVar56;
  }
  auVar18._0_8_ = auVar35._0_8_ * dVar12 - auVar9._0_8_ * auVar43._0_8_;
  auVar18._8_8_ = auVar35._8_8_ * dVar11 - auVar9._8_8_ * auVar43._8_8_;
  auVar35 = blendpd(auVar21,auVar18,2);
  local_78 = dVar56 + auVar35._0_8_;
  dStack_80 = dVar45 + auVar18._0_8_;
  local_88 = dVar40 + auVar21._8_8_;
  UE::Math::TVector<double>::GetSafeNormal
            ((TVector<double> *)&local_88,__return_storage_ptr__,__real_3e45798ee0000000,
             &UE::Math::TVector<double>::ZeroVector);
  return __return_storage_ptr__;
}

