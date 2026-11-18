// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 3

// StaticStruct @ 14dee87e0

UScriptStruct * __cdecl FRetargetIKChainSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRetargetIKChainSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FRetargetIKChainSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRetargetIKChainSettings,(UObject *)pUVar1,
                         L"RetargetIKChainSettings");
  }
  return Z_Registration_Info_UScriptStruct_FRetargetIKChainSettings.OuterSingleton;
}

// operator== @ 14df1efd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FRetargetIKChainSettings::operator==
          (FRetargetIKChainSettings *this,FRetargetIKChainSettings *param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  bool bVar8;
  int iVar9;
  uint uVar10;
  FRetargetIKChainSettings *pFVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar36;
  undefined1 auVar35 [16];
  undefined1 auVar37 [16];
  
  if (this->EnableIK == param_1->EnableIK) {
    auVar27._8_8_ = 0;
    auVar27._0_8_ = param_1->BlendToSource;
    pFVar11 = this;
    bVar8 = FMath::TIsNearlyEqualByULP<double,unsigned___int64,_9223372036854775808>
                      (this->BlendToSource,param_1->BlendToSource,4);
    if (((((((bVar8) &&
            (dVar18 = (this->BlendToSourceWeights).field0_0x0._s_0.X -
                      (param_1->BlendToSourceWeights).field0_0x0._s_0.X,
            (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3f1a36e2e0000000)) &&
           (dVar18 = (this->BlendToSourceWeights).field0_0x0._s_0.Y -
                     (param_1->BlendToSourceWeights).field0_0x0._s_0.Y,
           (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
           __real_3f1a36e2e0000000)) &&
          ((dVar18 = (this->BlendToSourceWeights).field0_0x0._s_0.Z -
                     (param_1->BlendToSourceWeights).field0_0x0._s_0.Z,
           (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
           __real_3f1a36e2e0000000 &&
           (this->ApplyPelvisOffsetToSourceGoals == param_1->ApplyPelvisOffsetToSourceGoals)))) &&
         ((dVar18 = (this->StaticOffset).field0_0x0._s_0.X -
                    (param_1->StaticOffset).field0_0x0._s_0.X,
          (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
          __real_3f1a36e2e0000000 &&
          ((dVar18 = (this->StaticOffset).field0_0x0._s_0.Y -
                     (param_1->StaticOffset).field0_0x0._s_0.Y,
           (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
           __real_3f1a36e2e0000000 &&
           (dVar18 = (this->StaticOffset).field0_0x0._s_0.Z -
                     (param_1->StaticOffset).field0_0x0._s_0.Z,
           (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
           __real_3f1a36e2e0000000)))))) &&
        (dVar18 = (this->StaticLocalOffset).field0_0x0._s_0.X -
                  (param_1->StaticLocalOffset).field0_0x0._s_0.X,
        (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3f1a36e2e0000000)) &&
       ((dVar18 = (this->StaticLocalOffset).field0_0x0._s_0.Y -
                  (param_1->StaticLocalOffset).field0_0x0._s_0.Y,
        (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3f1a36e2e0000000 &&
        (dVar18 = (this->StaticLocalOffset).field0_0x0._s_0.Z -
                  (param_1->StaticLocalOffset).field0_0x0._s_0.Z,
        (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3f1a36e2e0000000)))) {
      dVar34 = (this->StaticRotationOffset).Pitch - (param_1->StaticRotationOffset).Pitch;
      dVar36 = (this->StaticRotationOffset).Yaw - (param_1->StaticRotationOffset).Yaw;
      dVar3 = (this->StaticRotationOffset).Roll - (param_1->StaticRotationOffset).Roll;
      auVar19._8_4_ = SUB84(dVar36,0);
      auVar19._0_8_ = dVar34;
      auVar19._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
      auVar20 = divpd(auVar19,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
      auVar27 = roundpd(auVar27,auVar20,3);
      dVar5 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
      auVar28._0_8_ = auVar27._0_8_ * dVar5;
      dVar6 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
      auVar28._8_8_ = auVar27._8_8_ * dVar6;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = dVar3;
      dVar34 = dVar34 - auVar28._0_8_;
      dVar36 = dVar36 - auVar28._8_8_;
      auVar27 = divpd(auVar21,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
      auVar27 = roundpd(auVar28,auVar27,3);
      dVar18 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
      dVar2 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
      auVar22._8_4_ = SUB84(dVar36,0);
      auVar22._0_8_ = dVar34;
      auVar22._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
      dVar3 = dVar3 - auVar27._0_8_ * dVar18;
      dVar4 = 0.0 - auVar27._8_8_ * dVar2;
      uVar12 = -(ulonglong)(0.0 <= dVar34);
      uVar14 = -(ulonglong)(0.0 <= dVar36);
      auVar29._0_8_ = uVar12 & (ulonglong)dVar34;
      auVar29._8_4_ = (undefined4)(uVar14 & (ulonglong)dVar36);
      auVar29._12_4_ = (undefined4)((uVar14 & (ulonglong)dVar36) >> 0x20);
      dVar36 = auVar22._8_8_ + dVar6;
      uVar13 = -(ulonglong)(0.0 <= dVar3);
      uVar15 = -(ulonglong)(0.0 <= dVar4);
      auVar37._0_4_ = ~(uint)uVar12 & SUB84(dVar34 + dVar5,0);
      auVar37._4_4_ = ~(uint)(uVar12 >> 0x20) & (uint)((ulonglong)(dVar34 + dVar5) >> 0x20);
      auVar37._8_4_ = ~(uint)uVar14 & SUB84(dVar36,0);
      auVar37._12_4_ = ~(uint)(uVar14 >> 0x20) & (uint)((ulonglong)dVar36 >> 0x20);
      auVar37 = auVar37 | auVar29;
      auVar23._8_4_ = SUB84(dVar4,0);
      auVar23._0_8_ = dVar3;
      auVar23._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      dVar36 = auVar23._8_8_ + dVar2;
      auVar35._0_4_ = ~(uint)uVar13 & SUB84(dVar3 + dVar18,0);
      auVar35._4_4_ = ~(uint)(uVar13 >> 0x20) & (uint)((ulonglong)(dVar3 + dVar18) >> 0x20);
      auVar35._8_4_ = ~(uint)uVar15 & SUB84(dVar36,0);
      auVar35._12_4_ = ~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)dVar36 >> 0x20);
      auVar20._8_4_ = (int)((ulonglong)dVar4 & uVar15);
      auVar20._0_8_ = (ulonglong)dVar3 & uVar13;
      auVar20._12_4_ = (int)(((ulonglong)dVar4 & uVar15) >> 0x20);
      auVar35 = auVar35 | auVar20;
      uVar13 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar35._0_8_);
      uVar15 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar35._8_8_);
      uVar14 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar37._0_8_);
      uVar16 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar37._8_8_);
      auVar30._0_8_ = uVar13 & (ulonglong)(auVar35._0_8_ - dVar18);
      uVar12 = uVar15 & (ulonglong)(auVar35._8_8_ - dVar2);
      auVar30._8_4_ = (undefined4)uVar12;
      auVar30._12_4_ = (undefined4)(uVar12 >> 0x20);
      auVar24._0_4_ = ~(uint)uVar13 & auVar35._0_4_;
      auVar24._4_4_ = ~(uint)(uVar13 >> 0x20) & auVar35._4_4_;
      auVar24._8_4_ = ~(uint)uVar15 & auVar35._8_4_;
      auVar24._12_4_ = ~(uint)(uVar15 >> 0x20) & auVar35._12_4_;
      auVar30 = auVar30 | auVar24;
      auVar25._8_4_ = SUB84(__real_3f1a36e2e0000000,0);
      auVar25._0_8_ = __real_3f1a36e2e0000000;
      auVar25._12_4_ = (int)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
      auVar31._0_8_ =
           (double)CONCAT44(auVar30._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            auVar30._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar31._8_4_ = auVar30._8_4_ & _UNK_15061cc88;
      auVar31._12_4_ = auVar30._12_4_ & _UNK_15061cc8c;
      auVar26._8_8_ = -(ulonglong)(auVar25._8_8_ < auVar31._8_8_);
      auVar26._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar31._0_8_);
      uVar10 = movmskpd((int)pFVar11,auVar26);
      auVar32._0_8_ = uVar14 & (ulonglong)(auVar37._0_8_ - dVar5);
      uVar12 = uVar16 & (ulonglong)(auVar37._8_8_ - dVar6);
      auVar32._8_4_ = (undefined4)uVar12;
      auVar32._12_4_ = (undefined4)(uVar12 >> 0x20);
      auVar1._4_4_ = ~(uint)(uVar14 >> 0x20) & auVar37._4_4_;
      auVar1._0_4_ = ~(uint)uVar14 & auVar37._0_4_;
      auVar1._8_4_ = ~(uint)uVar16 & auVar37._8_4_;
      auVar1._12_4_ = ~(uint)(uVar16 >> 0x20) & auVar37._12_4_;
      auVar32 = auVar32 | auVar1;
      auVar33._0_8_ =
           (double)CONCAT44(auVar32._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            auVar32._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar33._8_4_ = auVar32._8_4_ & _UNK_15061cc88;
      auVar33._12_4_ = auVar32._12_4_ & _UNK_15061cc8c;
      lVar17 = -(ulonglong)(__real_3f1a36e2e0000000 < auVar33._8_8_);
      auVar7._8_4_ = (int)lVar17;
      auVar7._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar33._0_8_);
      auVar7._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
      iVar9 = movmskpd((uint)param_1->ApplyPelvisOffsetToSourceGoals,auVar7);
      if (((uVar10 & 0x3fffffff) == 0 && iVar9 == 0) &&
         ((bVar8 = FMath::TIsNearlyEqualByULP<double,unsigned___int64,_9223372036854775808>
                             (this->ScaleVertical,param_1->ScaleVertical,4), bVar8 &&
          (bVar8 = FMath::TIsNearlyEqualByULP<double,unsigned___int64,_9223372036854775808>
                             (this->Extension,param_1->Extension,4), bVar8)))) {
        return true;
      }
    }
  }
  return false;
}

// Serialize @ 14df53b30

bool __thiscall
FRetargetIKChainSettings::Serialize(FRetargetIKChainSettings *this,FArchive *param_1)

{
  UScriptStruct *this_00;
  int iVar1;
  UPackage *pUVar2;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FIKRigObjectVersion::GUID);
  if (Z_Registration_Info_UScriptStruct_FRetargetIKChainSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FRetargetIKChainSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRetargetIKChainSettings,(UObject *)pUVar2,
                         L"RetargetIKChainSettings");
  }
  this_00 = Z_Registration_Info_UScriptStruct_FRetargetIKChainSettings.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FRetargetIKChainSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FRetargetIKChainSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRetargetIKChainSettings,(UObject *)pUVar2,
                         L"RetargetIKChainSettings");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)this_00,param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FRetargetIKChainSettings.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FIKRigObjectVersion::GUID),
     iVar1 < 8)) {
    this->ApplyPelvisOffsetToSourceGoals = true;
    return true;
  }
  return true;
}

