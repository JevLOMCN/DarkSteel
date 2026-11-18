// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// FSamplerResult @ 149c4aa60

FSamplerResult * __thiscall
PCGSplineSamplerHelpers::FSamplerResult::FSamplerResult(FSamplerResult *this)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LocalTransform).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->LocalTransform).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LocalTransform).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->LocalTransform).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LocalTransform).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->LocalTransform).Scale3D.ZW.m128d_f64 = auVar8;
  dVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
           UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
          UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  dVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y -
           UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  dVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z -
           UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  dVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z +
           UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->Box).Min.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X -
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->Box).Min.field0_0x0._s_0.Y = dVar14;
  (this->Box).Min.field0_0x0._s_0.Z = dVar12;
  (this->Box).Max.field0_0x0._s_0.X = dVar10;
  (this->Box).Max.field0_0x0._s_0.Y = dVar9;
  (this->Box).Max.field0_0x0._s_0.Z = dVar13;
  (this->Box).IsValid = '\x01';
  this->Curvature = 0.0;
  this->SampleIndex = 0;
  this->SegmentIndex = 0;
  this->SubsegmentIndex = 0;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->InputKey = 0.0;
  (this->ArriveTangent).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ArriveTangent).field0_0x0._s_0.Y = (double)uVar11;
  (this->ArriveTangent).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LeaveTangent).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LeaveTangent).field0_0x0._s_0.Y = (double)uVar11;
  (this->LeaveTangent).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->PreviousDeltaAngle = 0.0;
  this->NextDeltaAngle = 0.0;
  this->Alpha = 0.0;
  this->Distance = 0.0;
  return this;
}

