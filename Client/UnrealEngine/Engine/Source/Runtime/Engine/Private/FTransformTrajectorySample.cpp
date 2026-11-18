// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 14758d150

UScriptStruct * __cdecl FTransformTrajectorySample::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTransformTrajectorySample.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FTransformTrajectorySample.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTransformTrajectorySample,(UObject *)pUVar1,
                         L"TransformTrajectorySample");
  }
  return Z_Registration_Info_UScriptStruct_FTransformTrajectorySample.OuterSingleton;
}

// Lerp @ 1475e3120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTransformTrajectorySample * __thiscall
FTransformTrajectorySample::Lerp
          (FTransformTrajectorySample *this,FTransformTrajectorySample *__return_storage_ptr__,
          FTransformTrajectorySample *param_1,float param_2)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  undefined7 extraout_var;
  FTransformTrajectorySample *pFVar12;
  uint uVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar23;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar24;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  __m128 _Var34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  uint uVar38;
  uint uVar39;
  
  uVar8 = _UNK_15061cc8c;
  uVar7 = _UNK_15061cc88;
  uVar39 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar38 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar18 = (this->Facing).X;
  dVar23 = (this->Facing).Y;
  dVar25 = (this->Facing).Z;
  dVar30 = (this->Facing).W;
  dVar18 = dVar25 * dVar25 + dVar18 * dVar18;
  dVar23 = dVar30 * dVar30 + dVar23 * dVar23;
  auVar31._8_4_ = SUB84(dVar23,0);
  auVar31._0_8_ = dVar18;
  auVar31._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
  dVar30 = auVar31._8_8_ + dVar18;
  dVar25 = (double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar30;
  dVar28 = (double)GlobalVectorConstants::FloatOne.m128_f32[3] - (dVar18 + dVar23);
  auVar36._8_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] <
        (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) & _UNK_15061cc8c,
                         SUB84(dVar28,0) & _UNK_15061cc88));
  auVar36._0_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] <
        (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar25,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  uVar13 = movmskpd((int)this,auVar36);
  dVar30 = (double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar30;
  dVar18 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - (dVar18 + dVar23);
  lVar16 = -(ulonglong)
            ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] <
            (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar18,0) & _UNK_15061cc88));
  auVar35._8_4_ = (int)lVar16;
  auVar35._0_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] <
        (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar30,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar35._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
  iVar11 = movmskpd((int)&stack0x00000000,auVar35);
  uVar14 = 0;
  if ((uVar13 & 0x3fffffff) != 0 || iVar11 != 0) {
    uVar14 = 0x5170f020;
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Facing.IsNormalized()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\TrajectoryTypes.cpp"
                        ,0xe,L"");
    iVar11 = (int)CONCAT71(extraout_var,bVar10);
    if (bVar10) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FTransformTrajectorySample *)(*pcVar1)();
      return pFVar12;
    }
  }
  dVar18 = (param_1->Facing).X;
  dVar23 = (param_1->Facing).Y;
  dVar25 = (param_1->Facing).Z;
  dVar30 = (param_1->Facing).W;
  dVar18 = dVar25 * dVar25 + dVar18 * dVar18;
  dVar23 = dVar30 * dVar30 + dVar23 * dVar23;
  auVar32._8_4_ = SUB84(dVar23,0);
  auVar32._0_8_ = dVar18;
  auVar32._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
  dVar30 = auVar32._8_8_ + dVar18;
  dVar25 = (double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar30;
  dVar28 = (double)GlobalVectorConstants::FloatOne.m128_f32[3] - (dVar18 + dVar23);
  auVar19._8_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] <
        (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) & uVar8,SUB84(dVar28,0) & uVar7));
  auVar19._0_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] <
        (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & uVar39,SUB84(dVar25,0) & uVar38));
  dVar30 = (double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar30;
  dVar18 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - (dVar18 + dVar23);
  uVar13 = movmskpd(uVar14,auVar19);
  lVar16 = -(ulonglong)
            ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] <
            (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & uVar8,SUB84(dVar18,0) & uVar7));
  auVar4._8_4_ = (int)lVar16;
  auVar4._0_8_ = -(ulonglong)
                  ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] <
                  (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & uVar39,
                                   SUB84(dVar30,0) & uVar38));
  auVar4._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
  iVar11 = movmskpd(iVar11,auVar4);
  _Var34 = GlobalVectorConstants::FloatOne;
  if (((uVar13 & 0x3fffffff) != 0 || iVar11 != 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Other.Facing.IsNormalized()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\TrajectoryTypes.cpp"
                          ,0xf,L""), bVar10)) {
    pcVar1 = (code *)swi(3);
    pFVar12 = (FTransformTrajectorySample *)(*pcVar1)();
    return pFVar12;
  }
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar18 = (param_1->Facing).Y;
  dVar23 = (this->Facing).Y;
  dVar25 = (param_1->Facing).W;
  dVar30 = (this->Facing).W;
  (__return_storage_ptr__->Position).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->Position).field0_0x0._s_0.Y = (double)uVar9;
  (__return_storage_ptr__->Position).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar28 = (double)param_2;
  dVar26 = __real_3ff0000000000000;
  dVar24 = dVar28;
  if (dVar18 * dVar23 + (param_1->Facing).X * (this->Facing).X +
      dVar25 * dVar30 + (param_1->Facing).Z * (this->Facing).Z < 0.0) {
    dVar26 = __real_bff0000000000000;
    dVar24 = (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              SUB84(dVar28,0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  dVar26 = dVar26 - dVar24;
  dVar27 = dVar26 * (this->Facing).X + dVar28 * (param_1->Facing).X;
  dVar29 = dVar26 * (this->Facing).Y + dVar28 * (param_1->Facing).Y;
  dVar25 = dVar26 * (this->Facing).Z + dVar28 * (param_1->Facing).Z;
  dVar30 = dVar26 * (this->Facing).W + dVar28 * (param_1->Facing).W;
  auVar20._8_4_ = SUB84(dVar30,0);
  auVar20._0_8_ = dVar25;
  auVar20._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
  dVar23 = dVar25 * dVar25 + dVar27 * dVar27;
  dVar24 = auVar20._8_8_ * dVar30 + dVar29 * dVar29;
  dVar18 = dVar24 + dVar23;
  dVar23 = dVar23 + dVar24;
  auVar5._8_4_ = SUB84(dVar23,0);
  auVar5._0_8_ = dVar18;
  auVar5._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
  auVar35 = sqrtpd((undefined1  [16])_Var34,auVar5);
  uVar15 = -(ulonglong)(__real_3e45798ee0000000 <= dVar18);
  uVar17 = -(ulonglong)(__real_3e45798ee0000000 <= dVar23);
  auVar36 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar35);
  uVar38 = (uint)(uVar15 >> 0x20);
  uVar39 = (uint)(uVar17 >> 0x20);
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar37._0_8_ = uVar15 & (ulonglong)(auVar36._0_8_ * dVar27);
  uVar6 = uVar17 & (ulonglong)(auVar36._8_8_ * dVar29);
  auVar37._8_4_ = (undefined4)uVar6;
  auVar37._12_4_ = (undefined4)(uVar6 >> 0x20);
  auVar21._0_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar21._4_4_ =
       ~uVar38 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar21._8_4_ = ~(uint)uVar17 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar21._12_4_ =
       ~uVar39 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar35 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar35);
  (__return_storage_ptr__->Facing).X = (double)SUB168(auVar37 | auVar21,0);
  (__return_storage_ptr__->Facing).Y = (double)SUB168(auVar37 | auVar21,8);
  dVar24 = (this->Position).field0_0x0._s_0.Y;
  dVar26 = (this->Position).field0_0x0._s_0.Z;
  auVar33._0_4_ = ~(uint)uVar15 & SUB84((double)fVar2,0);
  auVar33._4_4_ = ~uVar38 & (uint)((ulonglong)(double)fVar2 >> 0x20);
  auVar33._8_4_ = ~(uint)uVar17 & SUB84((double)fVar3,0);
  auVar33._12_4_ = ~uVar39 & (uint)((ulonglong)(double)fVar3 >> 0x20);
  auVar22._0_8_ = (ulonglong)(auVar35._0_8_ * dVar25) & uVar15;
  uVar17 = (ulonglong)(auVar35._8_8_ * dVar30) & uVar17;
  auVar22._8_4_ = (undefined4)uVar17;
  auVar22._12_4_ = (undefined4)(uVar17 >> 0x20);
  dVar18 = (param_1->Position).field0_0x0._s_0.X;
  dVar23 = (this->Position).field0_0x0._s_0.X;
  (__return_storage_ptr__->Facing).Z = (double)SUB168(auVar33 | auVar22,0);
  (__return_storage_ptr__->Facing).W = (double)SUB168(auVar33 | auVar22,8);
  dVar25 = (param_1->Position).field0_0x0._s_0.Y;
  dVar30 = (param_1->Position).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Position).field0_0x0._s_0.X =
       (dVar18 - dVar23) * dVar28 + (this->Position).field0_0x0._s_0.X;
  (__return_storage_ptr__->Position).field0_0x0._s_0.Y = (dVar25 - dVar24) * dVar28 + dVar24;
  (__return_storage_ptr__->Position).field0_0x0._s_0.Z = (dVar30 - dVar26) * dVar28 + dVar26;
  __return_storage_ptr__->TimeInSeconds =
       (param_1->TimeInSeconds - this->TimeInSeconds) * param_2 + this->TimeInSeconds;
  return __return_storage_ptr__;
}

// SetTransform @ 1475fdc90

void __thiscall
FTransformTrajectorySample::SetTransform
          (FTransformTrajectorySample *this,TTransform<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (param_1->Translation).XY.m128d_f64[1];
  dVar1 = (param_1->Translation).ZW.m128d_f64[0];
  (this->Position).field0_0x0._s_0.X = (param_1->Translation).XY.m128d_f64[0];
  (this->Position).field0_0x0._s_0.Y = dVar2;
  (this->Position).field0_0x0._s_0.Z = dVar1;
  dVar1 = (param_1->Rotation).XY.m128d_f64[1];
  dVar2 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar3 = (param_1->Rotation).ZW.m128d_f64[1];
  (this->Facing).X = (param_1->Rotation).XY.m128d_f64[0];
  (this->Facing).Y = dVar1;
  (this->Facing).Z = dVar2;
  (this->Facing).W = dVar3;
  return;
}

