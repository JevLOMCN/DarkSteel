// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 3

// StaticStruct @ 14a2030e0

UScriptStruct * __cdecl FCRSimSoftCollision::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCRSimSoftCollision.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FCRSimSoftCollision.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCRSimSoftCollision,(UObject *)pUVar1,
                         L"CRSimSoftCollision");
  }
  return Z_Registration_Info_UScriptStruct_FCRSimSoftCollision.OuterSingleton;
}

// CalculateFalloff @ 14a2431f0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl
FCRSimSoftCollision::CalculateFalloff
          (FCRSimSoftCollision *param_1,TVector<double> *param_2,float param_3,
          TVector<double> *param_4)

{
  float fVar1;
  ECRSimSoftCollisionType EVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [12];
  undefined8 uVar5;
  TVector<double> *pTVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  double dVar10;
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
  uint uVar24;
  double dVar25;
  uint uVar28;
  uint uVar29;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  uint uVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined4 uVar56;
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  double dVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar72;
  TVector<double>_u_0 local_108;
  double local_e8;
  TVector<double>_u_0 local_e0;
  double local_c8;
  double dStack_c0;
  
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  fVar57 = 0.0;
  fVar72 = 0.0;
  (param_4->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_4->field0_0x0)._s_0.Y = (double)uVar5;
  (param_4->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  EVar2 = param_1->ShapeType;
  if (EVar2 == Plane) {
    auVar50 = *(undefined1 (*) [16])(param_1->Transform).Rotation.ZW.m128d_f64;
    dVar10 = auVar50._0_8_;
    auVar12 = *(undefined1 (*) [16])(param_1->Transform).Rotation.XY.m128d_f64;
    dVar47 = (param_1->Transform).Rotation.ZW.m128d_f64[1];
    auVar33 = blendpd(auVar12,auVar50,2);
    auVar60._0_8_ = auVar12._0_8_ * 0.0 - auVar12._8_8_ * 0.0;
    auVar60._8_8_ = __real_3ff0000000000000 * auVar12._8_8_ - dVar10 * 0.0;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = __real_3ff0000000000000;
    auVar12 = blendpd(ZEXT816(0),auVar13,2);
    auVar20._0_8_ = auVar12._0_8_ * dVar10 - auVar33._0_8_ * __real_3ff0000000000000;
    auVar20._8_8_ = auVar12._8_8_ * auVar50._8_8_ - auVar33._8_8_ * 0.0;
    auVar12 = *(undefined1 (*) [16])(param_1->Transform).Rotation.XY.m128d_f64;
    auVar13 = blendpd(auVar60,auVar20,2);
    dVar63 = auVar60._8_8_ + auVar60._8_8_;
    dVar37 = auVar20._0_8_ + auVar20._0_8_;
    uVar56 = (undefined4)((ulonglong)dVar37 >> 0x20);
    auVar61._0_8_ = auVar13._0_8_ + auVar13._0_8_;
    auVar61._8_8_ = auVar13._8_8_ + auVar13._8_8_;
    auVar54._8_4_ = SUB84(dVar37,0);
    auVar54._0_8_ = dVar63;
    auVar54._12_4_ = uVar56;
    auVar42._8_4_ = SUB84(dVar37,0);
    auVar42._0_8_ = dVar63;
    auVar42._12_4_ = uVar56;
    auVar33 = blendpd(auVar42,auVar61,2);
    auVar13 = blendpd(auVar12,auVar50,2);
    auVar55._0_8_ = auVar54._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar63;
    auVar55._8_8_ = auVar61._0_8_ * auVar12._8_8_ - dVar10 * dVar37;
    dVar31 = auVar61._0_8_ * dVar47 + __real_3ff0000000000000;
    auVar21._8_4_ = SUB84(auVar55._8_8_,0);
    auVar21._0_8_ = auVar55._0_8_;
    auVar21._12_4_ = (int)((ulonglong)auVar55._8_8_ >> 0x20);
    auVar43._0_8_ = auVar33._0_8_ * dVar10 - auVar13._0_8_ * auVar61._0_8_;
    auVar43._8_8_ = auVar33._8_8_ * auVar50._8_8_ - auVar13._8_8_ * auVar61._8_8_;
    dVar37 = dVar37 * dVar47 + auVar43._0_8_;
    auVar12 = blendpd(auVar55,auVar43,2);
    auVar50._8_4_ = SUB84(dVar37,0);
    auVar50._0_8_ = dVar63 * dVar47 + auVar21._8_8_;
    auVar50._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
    *(undefined1 (*) [16])&param_4->field0_0x0 = auVar50;
    (param_4->field0_0x0)._s_0.Z = dVar31 + auVar12._0_8_;
    dVar47 = (param_1->Transform).Rotation.XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar10 = (param_1->Transform).Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    uVar56 = (undefined4)((ulonglong)dVar10 >> 0x20);
    auVar71._0_8_ =
         (param_1->Transform).Rotation.ZW.m128d_f64[0] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    auVar71._8_8_ =
         (param_1->Transform).Rotation.ZW.m128d_f64[1] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    auVar62._8_4_ = SUB84(dVar10,0);
    auVar62._0_8_ = dVar47;
    auVar62._12_4_ = uVar56;
    auVar34._0_8_ = (param_2->field0_0x0)._s_0.X - (param_1->Transform).Translation.XY.m128d_f64[0];
    auVar34._8_8_ = (param_2->field0_0x0)._s_0.Y - (param_1->Transform).Translation.XY.m128d_f64[1];
    dVar31 = (param_2->field0_0x0)._s_0.Z - (param_1->Transform).Translation.ZW.m128d_f64[0];
    auVar50 = *(undefined1 (*) [16])(param_1->Transform).Scale3D.ZW.m128d_f64;
    auVar65._8_4_ = SUB84(auVar34._8_8_,0);
    auVar65._0_8_ = auVar34._0_8_;
    auVar65._12_4_ = (int)((ulonglong)auVar34._8_8_ >> 0x20);
    auVar44._8_4_ = SUB84(dVar10,0);
    auVar44._0_8_ = dVar47;
    auVar44._12_4_ = uVar56;
    dVar68 = auVar62._8_8_;
    auVar22._8_4_ = SUB84(auVar71._0_8_,0);
    auVar22._0_8_ = dVar68;
    auVar22._12_4_ = (int)((ulonglong)auVar71._0_8_ >> 0x20);
    auVar33._8_8_ = 0;
    auVar33._0_8_ = dVar31;
    auVar12 = blendpd(auVar34,auVar33,2);
    auVar66._0_8_ = auVar65._8_8_ * dVar47 - dVar68 * auVar34._0_8_;
    auVar66._8_8_ = dVar31 * dVar10 - auVar22._8_8_ * auVar34._8_8_;
    auVar13 = blendpd(auVar44,auVar71,2);
    auVar35._0_8_ = auVar12._0_8_ * auVar71._0_8_ - dVar31 * auVar13._0_8_;
    auVar35._8_8_ = auVar12._8_8_ * auVar71._8_8_ - auVar13._8_8_ * 0.0;
    auVar12 = blendpd(auVar66,auVar35,2);
    dVar63 = auVar66._8_8_ + auVar66._8_8_;
    dVar37 = auVar35._0_8_ + auVar35._0_8_;
    uVar56 = (undefined4)((ulonglong)dVar37 >> 0x20);
    auVar67._0_8_ = auVar12._0_8_ + auVar12._0_8_;
    auVar67._8_8_ = auVar12._8_8_ + auVar12._8_8_;
    auVar26._8_4_ = SUB84(dVar37,0);
    auVar26._0_8_ = dVar63;
    auVar26._12_4_ = uVar56;
    lVar7 = -(ulonglong)
             ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar50._4_4_,
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar50._0_4_) <=
             (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar12 = blendpd(auVar26,auVar67,2);
    auVar23._8_4_ = SUB84(auVar67._8_8_,0);
    auVar23._0_8_ = auVar67._0_8_;
    auVar23._12_4_ = (int)((ulonglong)auVar67._8_8_ >> 0x20);
    auVar45._8_4_ = SUB84(dVar37,0);
    auVar45._0_8_ = dVar63;
    auVar45._12_4_ = uVar56;
    auVar27._0_8_ = auVar12._0_8_ * auVar71._0_8_ - auVar67._0_8_ * auVar13._0_8_;
    auVar27._8_8_ = auVar12._8_8_ * auVar71._8_8_ - auVar23._8_8_ * auVar13._8_8_;
    auVar12._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar12._0_8_ = auVar50._0_8_;
    auVar12._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar50 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar12);
    auVar46._0_8_ = auVar45._8_8_ * dVar47 - dVar63 * dVar68;
    auVar46._8_8_ = auVar67._0_8_ * dVar10 - dVar37 * auVar71._0_8_;
    auVar12 = blendpd(auVar46,auVar27,2);
    fVar57 = (float)((auVar12._0_8_ + auVar71._8_8_ * auVar67._0_8_ + dVar31) *
                     (double)CONCAT44(~(uint)((ulonglong)lVar7 >> 0x20) & auVar50._4_4_,
                                      ~(uint)lVar7 & auVar50._0_4_) - (double)param_3);
    if (fVar57 <= 0.0) {
      fVar57 = 0.0;
    }
  }
  else if (EVar2 == Sphere) {
    auVar50 = *(undefined1 (*) [16])(param_1->Transform).Translation.ZW.m128d_f64;
    local_108._s_0.Z = (double)auVar50._0_8_;
    dVar63 = (param_2->field0_0x0)._s_0.Z - local_108._s_0.Z;
    dVar37 = (param_2->field0_0x0)._s_0.X - (param_1->Transform).Translation.XY.m128d_f64[0];
    dVar47 = (param_2->field0_0x0)._s_0.Y - (param_1->Transform).Translation.XY.m128d_f64[1];
    (param_4->field0_0x0)._s_0.X = dVar37;
    (param_4->field0_0x0)._s_0.Y = dVar47;
    (param_4->field0_0x0)._s_0.Z = dVar63;
    auVar53._0_8_ = dVar47 * dVar47 + dVar37 * dVar37 + dVar63 * dVar63;
    auVar53._8_8_ = 0;
    auVar50 = sqrtpd(auVar50,auVar53);
    dVar63 = auVar50._0_8_ - (double)param_3;
    if (dVar63 <= 0.0) {
      dVar63 = 0.0;
    }
    fVar57 = (float)dVar63;
    if (__real_322bcc77 < fVar57) {
      pTVar6 = UE::Math::TVector<double>::GetSafeNormal
                         (param_4,(TVector<double> *)&local_108._s_0,__real_3e45798ee0000000,
                          &UE::Math::TVector<double>::ZeroVector);
      dVar63 = (pTVar6->field0_0x0)._s_0.Y;
      (param_4->field0_0x0)._s_0.X = (pTVar6->field0_0x0)._s_0.X;
      (param_4->field0_0x0)._s_0.Y = dVar63;
      (param_4->field0_0x0)._s_0.Z = (pTVar6->field0_0x0)._s_0.Z;
    }
  }
  else if (EVar2 == Cone) {
    dVar63 = (param_2->field0_0x0)._s_0.X;
    dVar37 = (param_2->field0_0x0)._s_0.Y;
    dVar36 = dVar63 - (param_1->Transform).Translation.XY.m128d_f64[0];
    dVar47 = (param_2->field0_0x0)._s_0.Z;
    dVar68 = (param_1->Transform).Rotation.ZW.m128d_f64[1];
    dVar31 = dVar37 - (param_1->Transform).Translation.XY.m128d_f64[1];
    dVar10 = dVar47 - (param_1->Transform).Translation.ZW.m128d_f64[0];
    auVar50 = *(undefined1 (*) [16])(param_1->Transform).Rotation.ZW.m128d_f64;
    dVar25 = auVar50._0_8_;
    auVar11._0_8_ = dVar10 * dVar10;
    auVar11._8_8_ = 0;
    auVar32._0_8_ = dVar31 * dVar31 + dVar36 * dVar36 + auVar11._0_8_;
    auVar32._8_8_ = 0;
    auVar12 = sqrtpd(auVar11,auVar32);
    dVar36 = auVar12._0_8_;
    local_108._0_16_ = *(undefined1 (*) [16])(param_1->Transform).Rotation.XY.m128d_f64;
    auVar33 = blendpd(local_108._0_16_,auVar50,2);
    auVar69._0_8_ = local_108._0_8_ * 0.0 - local_108._8_8_ * 0.0;
    auVar69._8_8_ = dVar36 * local_108._8_8_ - dVar25 * 0.0;
    auVar13 = blendpd(ZEXT816(0),auVar12,2);
    auVar14._0_8_ = auVar13._0_8_ * dVar25 - auVar33._0_8_ * dVar36;
    auVar14._8_8_ = auVar13._8_8_ * auVar50._8_8_ - auVar33._8_8_ * auVar12._8_8_;
    auVar12 = *(undefined1 (*) [16])(param_1->Transform).Rotation.XY.m128d_f64;
    auVar13 = blendpd(auVar69,auVar14,2);
    auVar70._0_8_ = auVar13._0_8_ + auVar13._0_8_;
    auVar70._8_8_ = auVar13._8_8_ + auVar13._8_8_;
    dVar10 = auVar69._8_8_ + auVar69._8_8_;
    dVar31 = auVar14._0_8_ + auVar14._0_8_;
    uVar56 = (undefined4)((ulonglong)dVar31 >> 0x20);
    auVar48._8_4_ = SUB84(dVar31,0);
    auVar48._0_8_ = dVar10;
    auVar48._12_4_ = uVar56;
    auVar38._8_4_ = SUB84(dVar31,0);
    auVar38._0_8_ = dVar10;
    auVar38._12_4_ = uVar56;
    auVar13 = blendpd(auVar38,auVar70,2);
    auVar49._0_8_ = auVar48._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar10;
    auVar49._8_8_ = auVar70._0_8_ * auVar12._8_8_ - dVar25 * dVar31;
    auVar12 = blendpd(auVar12,auVar50,2);
    auVar15._8_4_ = SUB84(auVar49._8_8_,0);
    auVar15._0_8_ = auVar49._0_8_;
    auVar15._12_4_ = (int)((ulonglong)auVar49._8_8_ >> 0x20);
    auVar39._0_8_ = auVar13._0_8_ * dVar25 - auVar12._0_8_ * auVar70._0_8_;
    auVar39._8_8_ = auVar13._8_8_ * auVar50._8_8_ - auVar12._8_8_ * auVar70._8_8_;
    auVar50 = blendpd(auVar49,auVar39,2);
    dVar10 = dVar10 * dVar68 + auVar15._8_8_ + (param_1->Transform).Translation.XY.m128d_f64[0];
    dStack_c0 = dVar31 * dVar68 + auVar39._0_8_ + (param_1->Transform).Translation.XY.m128d_f64[1];
    dVar63 = dVar63 - dVar10;
    auVar4._4_8_ = auVar39._0_8_;
    auVar4._0_4_ = (int)((ulonglong)dVar10 >> 0x20);
    auVar16._0_8_ = auVar4._0_8_ << 0x20;
    auVar16._8_4_ = SUB84(dStack_c0,0);
    auVar16._12_4_ = (int)((ulonglong)dStack_c0 >> 0x20);
    dVar68 = auVar70._0_8_ * dVar68 + dVar36 + auVar50._0_8_ +
             (param_1->Transform).Translation.ZW.m128d_f64[0];
    local_c8 = auVar16._8_8_;
    dVar37 = dVar37 - local_c8;
    dVar47 = dVar47 - dVar68;
    (param_4->field0_0x0)._s_0.X = dVar63;
    (param_4->field0_0x0)._s_0.Y = dVar37;
    (param_4->field0_0x0)._s_0.Z = dVar47;
    dVar31 = __real_3f1a36e2e0000000;
    uVar28 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar24 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    auVar17._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar63 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar63,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar17._8_8_ = 0;
    local_108._s_0.Z = dVar68;
    if (((__real_3f1a36e2e0000000 < auVar17._0_8_) ||
        (auVar17._0_8_ =
              (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar37,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff),
        auVar17._8_8_ = 0, __real_3f1a36e2e0000000 < auVar17._0_8_)) ||
       (auVar17._0_8_ =
             (double)CONCAT44((uint)((ulonglong)dVar47 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar47,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff),
       auVar17._8_8_ = 0, __real_3f1a36e2e0000000 < auVar17._0_8_)) {
      auVar64._0_8_ = dVar63 * dVar63 + dVar37 * dVar37 + dVar47 * dVar47;
      auVar64._8_8_ = 0;
      auVar50 = sqrtpd(auVar17,auVar64);
      fVar57 = (float)auVar50._0_8_;
      pTVar6 = UE::Math::TVector<double>::GetSafeNormal
                         (param_4,(TVector<double> *)&local_108._s_0,__real_3e45798ee0000000,
                          &UE::Math::TVector<double>::ZeroVector);
      dVar63 = (pTVar6->field0_0x0)._s_0.Y;
      (param_4->field0_0x0)._s_0.X = (pTVar6->field0_0x0)._s_0.X;
      (param_4->field0_0x0)._s_0.Y = dVar63;
      fVar8 = fVar57 - param_3;
      (param_4->field0_0x0)._s_0.Z = (pTVar6->field0_0x0)._s_0.Z;
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      dVar63 = (double)fVar8;
      local_e8 = dVar63 * (param_4->field0_0x0)._s_0.X;
      dVar37 = dVar63 * (param_4->field0_0x0)._s_0.Y;
      dVar63 = dVar63 * (param_4->field0_0x0)._s_0.Z;
      if (((dVar31 < (double)CONCAT44((uint)((ulonglong)local_e8 >> 0x20) & uVar28,
                                      SUB84(local_e8,0) & uVar24)) ||
          (dVar31 < (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) & uVar28,
                                     SUB84(dVar37,0) & uVar24))) ||
         (dVar31 < (double)CONCAT44((uint)((ulonglong)dVar63 >> 0x20) & uVar28,
                                    SUB84(dVar63,0) & uVar24))) {
        auVar50 = *(undefined1 (*) [16])(param_1->Transform).Rotation.ZW.m128d_f64;
        dVar36 = auVar50._0_8_;
        dVar25 = (param_1->Transform).Rotation.ZW.m128d_f64[1];
        auVar12 = *(undefined1 (*) [16])(param_1->Transform).Rotation.XY.m128d_f64;
        auVar13 = blendpd(auVar12,auVar50,2);
        auVar58._0_8_ = auVar12._0_8_ * 0.0 - auVar12._8_8_ * 0.0;
        auVar58._8_8_ = __real_3ff0000000000000 * auVar12._8_8_ - dVar36 * 0.0;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = __real_3ff0000000000000;
        auVar12 = blendpd(ZEXT816(0),auVar3,2);
        auVar18._0_8_ = auVar12._0_8_ * dVar36 - auVar13._0_8_ * __real_3ff0000000000000;
        auVar18._8_8_ = auVar12._8_8_ * auVar50._8_8_ - auVar13._8_8_ * 0.0;
        auVar12 = *(undefined1 (*) [16])(param_1->Transform).Rotation.XY.m128d_f64;
        auVar13 = blendpd(auVar58,auVar18,2);
        auVar59._0_8_ = auVar13._0_8_ + auVar13._0_8_;
        auVar59._8_8_ = auVar13._8_8_ + auVar13._8_8_;
        dVar47 = auVar58._8_8_ + auVar58._8_8_;
        dVar31 = auVar18._0_8_ + auVar18._0_8_;
        uVar56 = (undefined4)((ulonglong)dVar31 >> 0x20);
        auVar51._8_4_ = SUB84(dVar31,0);
        auVar51._0_8_ = dVar47;
        auVar51._12_4_ = uVar56;
        auVar40._8_4_ = SUB84(dVar31,0);
        auVar40._0_8_ = dVar47;
        auVar40._12_4_ = uVar56;
        auVar13 = blendpd(auVar12,auVar50,2);
        auVar33 = blendpd(auVar40,auVar59,2);
        auVar52._0_8_ = auVar51._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar47;
        auVar52._8_8_ = auVar59._0_8_ * auVar12._8_8_ - dVar36 * dVar31;
        auVar19._8_4_ = SUB84(auVar52._8_8_,0);
        auVar19._0_8_ = auVar52._0_8_;
        auVar19._12_4_ = (int)((ulonglong)auVar52._8_8_ >> 0x20);
        auVar41._0_8_ = auVar33._0_8_ * dVar36 - auVar13._0_8_ * auVar59._0_8_;
        auVar41._8_8_ = auVar33._8_8_ * auVar50._8_8_ - auVar13._8_8_ * auVar59._8_8_;
        local_e0._s_0.Z = (dVar68 + dVar63) - (param_1->Transform).Translation.ZW.m128d_f64[0];
        dVar63 = dVar31 * dVar25 + auVar41._0_8_;
        local_e0._s_0.X = (dVar10 + local_e8) - (param_1->Transform).Translation.XY.m128d_f64[0];
        auVar50 = blendpd(auVar52,auVar41,2);
        local_108._s_0.Z = auVar59._0_8_ * dVar25 + __real_3ff0000000000000 + auVar50._0_8_;
        local_e0._s_0.Y = (local_c8 + dVar37) - (param_1->Transform).Translation.XY.m128d_f64[1];
        local_108._8_4_ = SUB84(dVar63,0);
        local_108._0_8_ = dVar47 * dVar25 + auVar19._8_8_;
        local_108._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
        fVar57 = FRigVMMathLibrary::AngleBetween
                           ((TVector<double> *)&local_e0._s_0,(TVector<double> *)&local_108._s_0);
        fVar57 = fVar57 * ___real_42e52ee0;
      }
    }
  }
  if (param_1->bInverted != false) {
    uVar24 = *(uint *)((longlong)&param_4->field0_0x0 + 8) ^
             (uint)__xmm_80000000000000008000000000000000;
    uVar28 = *(uint *)((longlong)&param_4->field0_0x0 + 0xc) ^
             __xmm_80000000000000008000000000000000._4_4_;
    uVar29 = *(uint *)((longlong)&param_4->field0_0x0 + 0x10) ^ _UNK_15066df78;
    uVar30 = *(uint *)((longlong)&param_4->field0_0x0 + 0x14) ^ _UNK_15066df7c;
    (param_4->field0_0x0)._s_0.X =
         (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_4->field0_0x0 >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          (uint)*(undefined8 *)&param_4->field0_0x0 ^
                          (uint)__xmm_80000000000000008000000000000000);
    *(uint *)((longlong)&param_4->field0_0x0 + 8) = uVar24;
    *(uint *)((longlong)&param_4->field0_0x0 + 0xc) = uVar28;
    *(uint *)((longlong)&param_4->field0_0x0 + 0x10) = uVar29;
    *(uint *)((longlong)&param_4->field0_0x0 + 0x14) = uVar30;
  }
  fVar8 = param_1->MinimumDistance;
  fVar1 = param_1->MaximumDistance;
  if (fVar8 < fVar1) {
    fVar9 = __real_3f800000;
    if ((fVar8 <= fVar57) && (fVar9 = fVar72, fVar57 < fVar1)) {
      fVar72 = (fVar57 - fVar8) / (fVar1 - fVar8);
      if (__real_3f800000 <= fVar72) {
        fVar72 = __real_3f800000;
      }
      if (fVar72 <= 0.0) {
        fVar72 = 0.0;
      }
      fVar9 = __real_3f800000 - fVar72;
    }
    if (param_1->bInverted != false) {
      fVar9 = __real_3f800000 - fVar9;
    }
    fVar72 = FRigVMMathLibrary::EaseFloat(fVar9,param_1->FalloffType);
  }
  else if (fVar8 <= fVar57) {
    if (param_1->bInverted != false) {
      return __real_3f800000;
    }
  }
  else if (param_1->bInverted == false) {
    fVar72 = __real_3f800000;
  }
  return fVar72;
}

// CalculateForPoint @ 14a243a10

TVector<double> * __thiscall
FCRSimSoftCollision::CalculateForPoint
          (FCRSimSoftCollision *this,TVector<double> *__return_storage_ptr__,FRigVMSimPoint *param_1
          ,float param_2)

{
  float fVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  float fVar7;
  
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  fVar1 = __real_322bcc77;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (fVar1 < param_1->Mass) {
    fVar7 = CalculateFalloff(this,&param_1->Position,param_1->Size,__return_storage_ptr__);
    fVar1 = this->Coefficient;
    dVar4 = (double)fVar1 * (double)fVar7;
    dVar2 = (__return_storage_ptr__->field0_0x0)._s_0.Z;
    dVar5 = dVar4 * (__return_storage_ptr__->field0_0x0)._s_0.Y;
    auVar3._8_4_ = SUB84(dVar5,0);
    auVar3._0_8_ = dVar4 * (__return_storage_ptr__->field0_0x0)._s_0.X;
    auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar7 * dVar2 * (double)fVar1;
  }
  return __return_storage_ptr__;
}

