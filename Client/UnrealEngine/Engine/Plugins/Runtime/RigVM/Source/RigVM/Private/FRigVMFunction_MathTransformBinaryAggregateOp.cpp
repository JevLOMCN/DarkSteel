// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// StaticStruct @ 14a14c650

UScriptStruct * __cdecl FRigVMFunction_MathTransformBinaryAggregateOp::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp,
                         (UObject *)pUVar1,L"RigVMFunction_MathTransformBinaryAggregateOp");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp.
         OuterSingleton;
}

// FRigVMFunction_MathTransformBinaryAggregateOp @ 14a18ea40

FRigVMFunction_MathTransformBinaryAggregateOp * __thiscall
FRigVMFunction_MathTransformBinaryAggregateOp::FRigVMFunction_MathTransformBinaryAggregateOp
          (FRigVMFunction_MathTransformBinaryAggregateOp *this)

{
  float fVar1;
  float fVar2;
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
  double dVar22;
  double dVar23;
  double dVar24;
  
  this->_padding_ = (longlong)&___7FRigVMFunction_MathTransformBinaryAggregateOp__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->A).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->A).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->A).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->A).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->A).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->A).Scale3D.ZW.m128d_f64 = auVar8;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->B).Rotation.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar2,0);
  auVar10._0_8_ = (double)fVar1;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->B).Rotation.ZW.m128d_f64 = auVar10;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->B).Translation.XY.m128d_f64 = auVar11;
  auVar12._8_4_ = SUB84((double)fVar2,0);
  auVar12._0_8_ = (double)fVar1;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->B).Translation.ZW.m128d_f64 = auVar12;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->B).Scale3D.XY.m128d_f64 = auVar13;
  auVar14._8_4_ = SUB84((double)fVar2,0);
  auVar14._0_8_ = (double)fVar1;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->B).Scale3D.ZW.m128d_f64 = auVar14;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar15._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar15._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar15._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Result).Rotation.XY.m128d_f64 = auVar15;
  auVar16._8_4_ = SUB84((double)fVar2,0);
  auVar16._0_8_ = (double)fVar1;
  auVar16._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Result).Rotation.ZW.m128d_f64 = auVar16;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar17._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar17._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar17._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Result).Translation.XY.m128d_f64 = auVar17;
  auVar18._8_4_ = SUB84((double)fVar2,0);
  auVar18._0_8_ = (double)fVar1;
  auVar18._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Result).Translation.ZW.m128d_f64 = auVar18;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar19._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar19._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar19._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Result).Scale3D.XY.m128d_f64 = auVar19;
  auVar20._8_4_ = SUB84((double)fVar2,0);
  auVar20._0_8_ = (double)fVar1;
  auVar20._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Result).Scale3D.ZW.m128d_f64 = auVar20;
  *&(this->Result).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Result).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Result).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Result).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Result).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Result).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  dVar21 = (this->Result).Rotation.XY.m128d_f64[1];
  dVar22 = (this->Result).Rotation.ZW.m128d_f64[0];
  dVar23 = (this->Result).Rotation.ZW.m128d_f64[1];
  (this->B).Rotation.XY.m128d_f64[0] = (this->Result).Rotation.XY.m128d_f64[0];
  (this->B).Rotation.XY.m128d_f64[1] = dVar21;
  dVar21 = (this->Result).Translation.XY.m128d_f64[0];
  dVar24 = (this->Result).Translation.XY.m128d_f64[1];
  (this->B).Rotation.ZW.m128d_f64[0] = dVar22;
  (this->B).Rotation.ZW.m128d_f64[1] = dVar23;
  dVar22 = (this->Result).Translation.ZW.m128d_f64[0];
  dVar23 = (this->Result).Translation.ZW.m128d_f64[1];
  (this->B).Translation.XY.m128d_f64[0] = dVar21;
  (this->B).Translation.XY.m128d_f64[1] = dVar24;
  dVar21 = (this->Result).Scale3D.XY.m128d_f64[0];
  dVar24 = (this->Result).Scale3D.XY.m128d_f64[1];
  (this->B).Translation.ZW.m128d_f64[0] = dVar22;
  (this->B).Translation.ZW.m128d_f64[1] = dVar23;
  dVar22 = (this->Result).Scale3D.ZW.m128d_f64[0];
  dVar23 = (this->Result).Scale3D.ZW.m128d_f64[1];
  (this->B).Scale3D.XY.m128d_f64[0] = dVar21;
  (this->B).Scale3D.XY.m128d_f64[1] = dVar24;
  dVar21 = (this->Result).Rotation.XY.m128d_f64[0];
  dVar24 = (this->Result).Rotation.XY.m128d_f64[1];
  (this->B).Scale3D.ZW.m128d_f64[0] = dVar22;
  (this->B).Scale3D.ZW.m128d_f64[1] = dVar23;
  dVar22 = (this->Result).Rotation.ZW.m128d_f64[0];
  dVar23 = (this->Result).Rotation.ZW.m128d_f64[1];
  (this->A).Rotation.XY.m128d_f64[0] = dVar21;
  (this->A).Rotation.XY.m128d_f64[1] = dVar24;
  dVar21 = (this->Result).Translation.XY.m128d_f64[0];
  dVar24 = (this->Result).Translation.XY.m128d_f64[1];
  (this->A).Rotation.ZW.m128d_f64[0] = dVar22;
  (this->A).Rotation.ZW.m128d_f64[1] = dVar23;
  dVar22 = (this->Result).Translation.ZW.m128d_f64[0];
  dVar23 = (this->Result).Translation.ZW.m128d_f64[1];
  (this->A).Translation.XY.m128d_f64[0] = dVar21;
  (this->A).Translation.XY.m128d_f64[1] = dVar24;
  dVar21 = (this->Result).Scale3D.XY.m128d_f64[0];
  dVar24 = (this->Result).Scale3D.XY.m128d_f64[1];
  (this->A).Translation.ZW.m128d_f64[0] = dVar22;
  (this->A).Translation.ZW.m128d_f64[1] = dVar23;
  dVar22 = (this->Result).Scale3D.ZW.m128d_f64[0];
  dVar23 = (this->Result).Scale3D.ZW.m128d_f64[1];
  (this->A).Scale3D.XY.m128d_f64[0] = dVar21;
  (this->A).Scale3D.XY.m128d_f64[1] = dVar24;
  (this->A).Scale3D.ZW.m128d_f64[0] = dVar22;
  (this->A).Scale3D.ZW.m128d_f64[1] = dVar23;
  return this;
}

