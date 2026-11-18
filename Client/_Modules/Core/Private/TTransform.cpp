// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 246

// TTransform<float> @ 14179fba0

TTransform<float> * __thiscall
UE::Math::TTransform<float>::TTransform<float>(TTransform<float> *this,TMatrix<float> *param_1)

{
  SetFromMatrix(this,param_1);
  return this;
}

// TTransform<float> @ 14179fbc0

TTransform<float> * __thiscall
UE::Math::TTransform<float>::TTransform<float>(TTransform<float> *this,TQuat<float> *param_1)

{
  ulong64 uVar1;
  
  uVar1 = *(ulong64 *)&param_1->Z;
  (this->Rotation).m128_u64[0] = *(ulong64 *)param_1;
  (this->Rotation).m128_u64[1] = uVar1;
  this->Translation = GlobalVectorConstants::FloatZero;
  this->Scale3D = GlobalVectorConstants::Float1110;
  return this;
}

// TTransform<float> @ 14179fbf0

TTransform<float> * __thiscall
UE::Math::TTransform<float>::TTransform<float>
          (TTransform<float> *this,TQuat<float> *param_1,TVector<float> *param_2,
          TVector<float> *param_3)

{
  __m128 _Var1;
  __m128 _Var2;
  ulong64 uVar3;
  
  uVar3 = *(ulong64 *)&param_1->Z;
  (this->Rotation).m128_u64[0] = *(ulong64 *)param_1;
  (this->Rotation).m128_u64[1] = uVar3;
  _Var1.m128_f32[3] = 0.0;
  _Var1._0_12_ = (undefined1  [12])param_2->field0_0x0;
  this->Translation = _Var1;
  _Var2.m128_f32[3] = 0.0;
  _Var2._0_12_ = (undefined1  [12])param_3->field0_0x0;
  this->Scale3D = _Var2;
  return this;
}

// TTransform<float> @ 14179fc30

TTransform<float> * __thiscall
UE::Math::TTransform<float>::TTransform<float>(TTransform<float> *this,TRotator<float> *param_1)

{
  ulong64 uVar1;
  TQuat<float> *pTVar2;
  TQuat<float> local_18;
  
  pTVar2 = TRotator<float>::Quaternion(param_1,&local_18);
  uVar1 = *(ulong64 *)&pTVar2->Z;
  (this->Rotation).m128_u64[0] = *(ulong64 *)pTVar2;
  (this->Rotation).m128_u64[1] = uVar1;
  this->Translation = GlobalVectorConstants::FloatZero;
  this->Scale3D = GlobalVectorConstants::Float1110;
  return this;
}

// TTransform<float> @ 14179fc80

TTransform<float> * __thiscall
UE::Math::TTransform<float>::TTransform<float>
          (TTransform<float> *this,TRotator<float> *param_1,TVector<float> *param_2,
          TVector<float> *param_3)

{
  __m128 _Var1;
  __m128 _Var2;
  ulong64 uVar3;
  TQuat<float> *pTVar4;
  TQuat<float> local_18;
  
  pTVar4 = TRotator<float>::Quaternion(param_1,&local_18);
  uVar3 = *(ulong64 *)&pTVar4->Z;
  (this->Rotation).m128_u64[0] = *(ulong64 *)pTVar4;
  (this->Rotation).m128_u64[1] = uVar3;
  _Var1.m128_f32[3] = 0.0;
  _Var1._0_12_ = (undefined1  [12])param_2->field0_0x0;
  this->Translation = _Var1;
  _Var2.m128_f32[3] = 0.0;
  _Var2._0_12_ = (undefined1  [12])param_3->field0_0x0;
  this->Scale3D = _Var2;
  return this;
}

// TTransform<float> @ 14179fcf0

TTransform<float> * __thiscall
UE::Math::TTransform<float>::TTransform<float>
          (TTransform<float> *this,TVector<float> *param_1,TVector<float> *param_2,
          TVector<float> *param_3,TVector<float> *param_4)

{
  TMatrix<float> local_48;
  
  local_48.M[0][0] = (param_1->field0_0x0)._s_0.X;
  local_48.M[0][1] = (param_1->field0_0x0)._s_0.Y;
  local_48.M[0][2] = (param_1->field0_0x0)._s_0.Z;
  local_48.M[1][1] = (param_2->field0_0x0)._s_0.Y;
  local_48.M[1][0] = (param_2->field0_0x0)._s_0.X;
  local_48.M[2][0] = (param_3->field0_0x0)._s_0.X;
  local_48.M[1][2] = (param_2->field0_0x0)._s_0.Z;
  local_48.M[2][2] = (param_3->field0_0x0)._s_0.Z;
  local_48.M[2][1] = (param_3->field0_0x0)._s_0.Y;
  local_48.M[0][3] = 0.0;
  local_48.M[1][3] = 0.0;
  local_48.M[2][3] = 0.0;
  local_48.M[3][3] = 1.0;
  local_48.M[3][0] = (param_4->field0_0x0)._s_0.X;
  local_48.M[3][1] = (param_4->field0_0x0)._s_0.Y;
  local_48.M[3][2] = (param_4->field0_0x0)._s_0.Z;
  SetFromMatrix(this,&local_48);
  return this;
}

// TTransform<float> @ 14179fdc0

TTransform<float> * __thiscall
UE::Math::TTransform<float>::TTransform<float>(TTransform<float> *this,TVector<float> *param_1)

{
  __m128 _Var1;
  
  this->Rotation = GlobalVectorConstants::Float0001;
  _Var1.m128_f32[3] = 0.0;
  _Var1._0_12_ = (undefined1  [12])param_1->field0_0x0;
  this->Translation = _Var1;
  this->Scale3D = GlobalVectorConstants::Float1110;
  return this;
}

// TTransform<float> @ 14179fdf0

TTransform<float> * __thiscall
UE::Math::TTransform<float>::TTransform<float>
          (TTransform<float> *this,__m128 *param_1,__m128 *param_2,__m128 *param_3)

{
  ulong64 uVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  
  uVar1 = param_1->m128_u64[1];
  uVar2 = param_2->m128_u64[0];
  uVar3 = param_2->m128_u64[1];
  (this->Rotation).m128_u64[0] = param_1->m128_u64[0];
  (this->Rotation).m128_u64[1] = uVar1;
  uVar1 = param_3->m128_u64[1];
  (this->Scale3D).m128_u64[0] = param_3->m128_u64[0];
  (this->Scale3D).m128_u64[1] = uVar1;
  (this->Translation).m128_u64[0] = uVar2;
  (this->Translation).m128_u64[1] = uVar3;
  return this;
}

// TTransform<float> @ 14179fe10

TTransform<float> * __thiscall
UE::Math::TTransform<float>::TTransform<float>(TTransform<float> *this,ENoInit param_1)

{
  return this;
}

// TTransform<float> @ 14179fe20

TTransform<float> * __thiscall
UE::Math::TTransform<float>::TTransform<float>(TTransform<float> *this)

{
  this->Rotation = GlobalVectorConstants::Float0001;
  this->Translation = GlobalVectorConstants::FloatZero;
  this->Scale3D = GlobalVectorConstants::Float1110;
  return this;
}

// TTransform<double> @ 14179fe50

TTransform<double> * __thiscall
UE::Math::TTransform<double>::TTransform<double>(TTransform<double> *this,TMatrix<double> *param_1)

{
  SetFromMatrix(this,param_1);
  return this;
}

// TTransform<double> @ 14179fe70

TTransform<double> * __thiscall
UE::Math::TTransform<double>::TTransform<double>(TTransform<double> *this,TQuat<double> *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar7 = param_1->Y;
  dVar8 = param_1->Z;
  dVar9 = param_1->W;
  (this->Rotation).XY.m128d_f64[0] = param_1->X;
  (this->Rotation).XY.m128d_f64[1] = dVar7;
  (this->Rotation).ZW.m128d_f64[0] = dVar8;
  (this->Rotation).ZW.m128d_f64[1] = dVar9;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Translation).XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Translation).ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Scale3D).XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Scale3D).ZW.m128d_f64 = auVar6;
  return this;
}

// TTransform<double> @ 14179fec0

TTransform<double> * __thiscall
UE::Math::TTransform<double>::TTransform<double>
          (TTransform<double> *this,TQuat<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = param_1->Z;
  dVar2 = param_1->W;
  dVar3 = param_1->Y;
  (this->Rotation).XY.m128d_f64[0] = param_1->X;
  (this->Rotation).XY.m128d_f64[1] = dVar3;
  (this->Rotation).ZW.m128d_f64[0] = dVar1;
  (this->Rotation).ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  (this->Translation).XY.m128d_f64[0] = (param_2->field0_0x0)._s_0.X;
  (this->Translation).XY.m128d_f64[1] = dVar2;
  (this->Translation).ZW.m128d_f64[0] = dVar1;
  (this->Translation).ZW.m128d_f64[1] = 0.0;
  dVar2 = (param_3->field0_0x0)._s_0.Y;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  (this->Scale3D).XY.m128d_f64[0] = (param_3->field0_0x0)._s_0.X;
  (this->Scale3D).XY.m128d_f64[1] = dVar2;
  (this->Scale3D).ZW.m128d_f64[0] = dVar1;
  (this->Scale3D).ZW.m128d_f64[1] = 0.0;
  return this;
}

// TTransform<double> @ 14179ff00

TTransform<double> * __thiscall
UE::Math::TTransform<double>::TTransform<double>(TTransform<double> *this,TRotator<double> *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  TQuat<double> *pTVar10;
  TQuat<double> local_28;
  
  pTVar10 = TRotator<double>::Quaternion(param_1,&local_28);
  dVar7 = pTVar10->Y;
  dVar8 = pTVar10->Z;
  dVar9 = pTVar10->W;
  (this->Rotation).XY.m128d_f64[0] = pTVar10->X;
  (this->Rotation).XY.m128d_f64[1] = dVar7;
  (this->Rotation).ZW.m128d_f64[0] = dVar8;
  (this->Rotation).ZW.m128d_f64[1] = dVar9;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Translation).XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Translation).ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Scale3D).XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Scale3D).ZW.m128d_f64 = auVar6;
  return this;
}

// TTransform<double> @ 14179ff70

TTransform<double> * __thiscall
UE::Math::TTransform<double>::TTransform<double>
          (TTransform<double> *this,TRotator<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TQuat<double> *pTVar4;
  TQuat<double> local_28;
  
  pTVar4 = TRotator<double>::Quaternion(param_1,&local_28);
  dVar1 = pTVar4->Y;
  dVar2 = pTVar4->Z;
  dVar3 = pTVar4->W;
  (this->Rotation).XY.m128d_f64[0] = pTVar4->X;
  (this->Rotation).XY.m128d_f64[1] = dVar1;
  (this->Rotation).ZW.m128d_f64[0] = dVar2;
  (this->Rotation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  (this->Translation).XY.m128d_f64[0] = (param_2->field0_0x0)._s_0.X;
  (this->Translation).XY.m128d_f64[1] = dVar2;
  (this->Translation).ZW.m128d_f64[0] = dVar1;
  (this->Translation).ZW.m128d_f64[1] = 0.0;
  dVar2 = (param_3->field0_0x0)._s_0.Y;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  (this->Scale3D).XY.m128d_f64[0] = (param_3->field0_0x0)._s_0.X;
  (this->Scale3D).XY.m128d_f64[1] = dVar2;
  (this->Scale3D).ZW.m128d_f64[0] = dVar1;
  (this->Scale3D).ZW.m128d_f64[1] = 0.0;
  return this;
}

// TTransform<double> @ 14179fff0

TTransform<double> * __thiscall
UE::Math::TTransform<double>::TTransform<double>
          (TTransform<double> *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4)

{
  TMatrix<double> local_88;
  
  local_88.M[0][0] = (param_1->field0_0x0)._s_0.X;
  local_88.M[0][1] = (param_1->field0_0x0)._s_0.Y;
  local_88.M[2][0] = (param_3->field0_0x0)._s_0.X;
  local_88.M[2][1] = (param_3->field0_0x0)._s_0.Y;
  local_88.M[0][2] = (param_1->field0_0x0)._s_0.Z;
  local_88.M[1][0] = (param_2->field0_0x0)._s_0.X;
  local_88.M[1][1] = (param_2->field0_0x0)._s_0.Y;
  local_88.M[2][2] = (param_3->field0_0x0)._s_0.Z;
  local_88.M[1][2] = (param_2->field0_0x0)._s_0.Z;
  local_88.M[3][0] = (param_4->field0_0x0)._s_0.X;
  local_88.M[3][1] = (param_4->field0_0x0)._s_0.Y;
  local_88.M[0][3] = 0.0;
  local_88.M[1][3] = 0.0;
  local_88.M[2][3] = 0.0;
  local_88.M[3][2] = (param_4->field0_0x0)._s_0.Z;
  local_88.M[3][3] = __real_3ff0000000000000;
  SetFromMatrix(this,&local_88);
  return this;
}

// TTransform<double> @ 1417a00a0

TTransform<double> * __thiscall
UE::Math::TTransform<double>::TTransform<double>(TTransform<double> *this,TVector<double> *param_1)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->Rotation).XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Rotation).XY.m128d_f64[1] = (double)fVar2;
  (this->Rotation).ZW.m128d_f64[0] = (double)fVar3;
  (this->Rotation).ZW.m128d_f64[1] = (double)fVar4;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar5 = (param_1->field0_0x0)._s_0.Y;
  (this->Translation).XY.m128d_f64[0] = (param_1->field0_0x0)._s_0.X;
  (this->Translation).XY.m128d_f64[1] = dVar5;
  (this->Translation).ZW.m128d_f64[0] = dVar1;
  (this->Translation).ZW.m128d_f64[1] = 0.0;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Scale3D).XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Scale3D).XY.m128d_f64[1] = (double)fVar2;
  (this->Scale3D).ZW.m128d_f64[0] = (double)fVar3;
  (this->Scale3D).ZW.m128d_f64[1] = (double)fVar4;
  return this;
}

// TTransform<double> @ 1417a00f0

TTransform<double> * __thiscall
UE::Math::TTransform<double>::TTransform<double>
          (TTransform<double> *this,VectorRegister4Double *param_1,VectorRegister4Double *param_2,
          VectorRegister4Double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (param_1->XY).m128d_f64[1];
  dVar2 = (param_1->ZW).m128d_f64[0];
  dVar3 = (param_1->ZW).m128d_f64[1];
  (this->Rotation).XY.m128d_f64[0] = (param_1->XY).m128d_f64[0];
  (this->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_2->XY).m128d_f64[0];
  dVar4 = (param_2->XY).m128d_f64[1];
  (this->Rotation).ZW.m128d_f64[0] = dVar2;
  (this->Rotation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (param_2->ZW).m128d_f64[0];
  dVar3 = (param_2->ZW).m128d_f64[1];
  (this->Translation).XY.m128d_f64[0] = dVar1;
  (this->Translation).XY.m128d_f64[1] = dVar4;
  dVar1 = (param_3->XY).m128d_f64[0];
  dVar4 = (param_3->XY).m128d_f64[1];
  (this->Translation).ZW.m128d_f64[0] = dVar2;
  (this->Translation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (param_3->ZW).m128d_f64[0];
  dVar3 = (param_3->ZW).m128d_f64[1];
  (this->Scale3D).XY.m128d_f64[0] = dVar1;
  (this->Scale3D).XY.m128d_f64[1] = dVar4;
  (this->Scale3D).ZW.m128d_f64[0] = dVar2;
  (this->Scale3D).ZW.m128d_f64[1] = dVar3;
  return this;
}

// TTransform<double> @ 1417a0130

TTransform<double> * __thiscall
UE::Math::TTransform<double>::TTransform<double>(TTransform<double> *this,ENoInit param_1)

{
  return this;
}

// TTransform<double> @ 1417a0140

TTransform<double> * __thiscall
UE::Math::TTransform<double>::TTransform<double>(TTransform<double> *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->Rotation).XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Rotation).XY.m128d_f64[1] = (double)fVar1;
  (this->Rotation).ZW.m128d_f64[0] = (double)fVar2;
  (this->Rotation).ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Translation).XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Translation).XY.m128d_f64[1] = (double)fVar1;
  (this->Translation).ZW.m128d_f64[0] = (double)fVar2;
  (this->Translation).ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Scale3D).XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Scale3D).XY.m128d_f64[1] = (double)fVar1;
  (this->Scale3D).ZW.m128d_f64[0] = (double)fVar2;
  (this->Scale3D).ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

// operator* @ 1417ab340

TTransform<float> * __thiscall
UE::Math::TTransform<float>::operator*
          (TTransform<float> *this,TTransform<float> *__return_storage_ptr__,
          TTransform<float> *param_1)

{
  __return_storage_ptr__->Rotation = GlobalVectorConstants::Float0001;
  __return_storage_ptr__->Translation = GlobalVectorConstants::FloatZero;
  __return_storage_ptr__->Scale3D = GlobalVectorConstants::Float1110;
  Multiply(__return_storage_ptr__,this,param_1);
  return __return_storage_ptr__;
}

// operator* @ 1417ab390

TTransform<float> * __thiscall
UE::Math::TTransform<float>::operator*
          (TTransform<float> *this,TTransform<float> *__return_storage_ptr__,TQuat<float> *param_1)

{
  __m128 local_38;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  __return_storage_ptr__->Rotation = GlobalVectorConstants::Float0001;
  __return_storage_ptr__->Translation = GlobalVectorConstants::FloatZero;
  __return_storage_ptr__->Scale3D = GlobalVectorConstants::Float1110;
  local_38._0_4_ = param_1->X;
  local_38._4_4_ = param_1->Y;
  local_38._8_4_ = param_1->Z;
  local_38._12_4_ = param_1->W;
  local_28._8_4_ = TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_28._0_8_ = TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_28._12_4_ = 0;
  local_18._8_4_ = TVector<float>::OneVector.field0_0x0._s_0.Z;
  local_18._0_8_ = TVector<float>::OneVector.field0_0x0._0_8_;
  local_18._12_4_ = 0;
  Multiply(__return_storage_ptr__,this,(TTransform<float> *)&local_38);
  return __return_storage_ptr__;
}

// operator* @ 1417ab420

TTransform<float> * __thiscall
UE::Math::TTransform<float>::operator*
          (TTransform<float> *this,TTransform<float> *__return_storage_ptr__,ScalarRegister *param_1
          )

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar1 = (param_1->Value).m128_f32[0];
  fVar2 = (param_1->Value).m128_f32[1];
  fVar3 = (param_1->Value).m128_f32[2];
  fVar4 = (param_1->Value).m128_f32[3];
  fVar5 = (this->Rotation).m128_f32[1];
  fVar6 = (this->Rotation).m128_f32[2];
  fVar7 = (this->Rotation).m128_f32[3];
  fVar8 = (this->Translation).m128_f32[0];
  fVar9 = (this->Translation).m128_f32[1];
  fVar10 = (this->Translation).m128_f32[2];
  fVar11 = (this->Translation).m128_f32[3];
  fVar12 = (this->Scale3D).m128_f32[0];
  fVar13 = (this->Scale3D).m128_f32[1];
  fVar14 = (this->Scale3D).m128_f32[2];
  fVar15 = (this->Scale3D).m128_f32[3];
  (__return_storage_ptr__->Rotation).m128_f32[0] = fVar1 * (this->Rotation).m128_f32[0];
  (__return_storage_ptr__->Rotation).m128_f32[1] = fVar2 * fVar5;
  (__return_storage_ptr__->Rotation).m128_f32[2] = fVar3 * fVar6;
  (__return_storage_ptr__->Rotation).m128_f32[3] = fVar4 * fVar7;
  (__return_storage_ptr__->Translation).m128_f32[0] = fVar1 * fVar8;
  (__return_storage_ptr__->Translation).m128_f32[1] = fVar2 * fVar9;
  (__return_storage_ptr__->Translation).m128_f32[2] = fVar3 * fVar10;
  (__return_storage_ptr__->Translation).m128_f32[3] = fVar4 * fVar11;
  (__return_storage_ptr__->Scale3D).m128_f32[0] = fVar1 * fVar12;
  (__return_storage_ptr__->Scale3D).m128_f32[1] = fVar2 * fVar13;
  (__return_storage_ptr__->Scale3D).m128_f32[2] = fVar3 * fVar14;
  (__return_storage_ptr__->Scale3D).m128_f32[3] = fVar4 * fVar15;
  return __return_storage_ptr__;
}

// operator* @ 1417ab450

TTransform<double> * __thiscall
UE::Math::TTransform<double>::operator*
          (TTransform<double> *this,TTransform<double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = (double)fVar3;
  Multiply(__return_storage_ptr__,this,param_1);
  return __return_storage_ptr__;
}

// operator* @ 1417ab4c0

TTransform<double> * __thiscall
UE::Math::TTransform<double>::operator*
          (TTransform<double> *this,TTransform<double> *__return_storage_ptr__,
          TQuat<double> *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  TTransform<double> local_68;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar8;
  local_68.Rotation.XY.m128d_f64[0] = param_1->X;
  local_68.Rotation.XY.m128d_f64[1] = param_1->Y;
  local_68.Rotation.ZW.m128d_f64[0] = param_1->Z;
  local_68.Rotation.ZW.m128d_f64[1] = param_1->W;
  local_68.Translation.XY.m128d_f64[0] = TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_68.Translation.XY.m128d_f64[1] = TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_68.Translation.ZW.m128d_f64[0] = TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_68.Translation.ZW.m128d_f64[1] = 0.0;
  local_68.Scale3D.XY.m128d_f64[0] = TVector<double>::OneVector.field0_0x0._s_0.X;
  local_68.Scale3D.XY.m128d_f64[1] = TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_68.Scale3D.ZW.m128d_f64[0] = TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_68.Scale3D.ZW.m128d_f64[1] = 0.0;
  Multiply(__return_storage_ptr__,this,&local_68);
  return __return_storage_ptr__;
}

// operator* @ 1417ab580

TTransform<double> * __thiscall
UE::Math::TTransform<double>::operator*
          (TTransform<double> *this,TTransform<double> *__return_storage_ptr__,
          ScalarRegister *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  dVar15 = (this->Rotation).ZW.m128d_f64[0];
  dVar6 = (this->Rotation).ZW.m128d_f64[1];
  dVar16 = (this->Scale3D).XY.m128d_f64[0];
  dVar14 = (this->Scale3D).XY.m128d_f64[1];
  dVar17 = (this->Translation).XY.m128d_f64[0];
  dVar18 = (this->Translation).XY.m128d_f64[1];
  dVar19 = (this->Translation).ZW.m128d_f64[0];
  dVar20 = (this->Translation).ZW.m128d_f64[1];
  dVar21 = (this->Scale3D).ZW.m128d_f64[0];
  dVar10 = (this->Scale3D).ZW.m128d_f64[1];
  dVar12 = (double)(param_1->Value).m128_f32[0];
  dVar13 = (double)(param_1->Value).m128_f32[1];
  dVar8 = (double)(param_1->Value).m128_f32[2];
  dVar9 = (double)(param_1->Value).m128_f32[3];
  dVar3 = dVar13 * (this->Rotation).XY.m128d_f64[1];
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar12 * (this->Rotation).XY.m128d_f64[0];
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar1;
  dVar6 = dVar9 * dVar6;
  auVar4._8_4_ = SUB84(dVar6,0);
  auVar4._0_8_ = dVar8 * dVar15;
  auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar4;
  dVar10 = dVar9 * dVar10;
  dVar14 = dVar13 * dVar14;
  dVar13 = dVar13 * dVar18;
  dVar9 = dVar9 * dVar20;
  auVar2._8_4_ = SUB84(dVar13,0);
  auVar2._0_8_ = dVar12 * dVar17;
  auVar2._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar2;
  auVar5._8_4_ = SUB84(dVar9,0);
  auVar5._0_8_ = dVar8 * dVar19;
  auVar5._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar5;
  auVar11._8_4_ = SUB84(dVar14,0);
  auVar11._0_8_ = dVar12 * dVar16;
  auVar11._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar11;
  auVar7._8_4_ = SUB84(dVar10,0);
  auVar7._0_8_ = dVar8 * dVar21;
  auVar7._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar7;
  return __return_storage_ptr__;
}

// operator+ @ 1417abde0

TTransform<float> * __thiscall
UE::Math::TTransform<float>::operator+
          (TTransform<float> *this,TTransform<float> *__return_storage_ptr__,
          TTransform<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar1 = (param_1->Rotation).m128_f32[1];
  fVar2 = (param_1->Rotation).m128_f32[2];
  fVar3 = (param_1->Rotation).m128_f32[3];
  fVar4 = (this->Rotation).m128_f32[1];
  fVar5 = (this->Rotation).m128_f32[2];
  fVar6 = (this->Rotation).m128_f32[3];
  fVar7 = (param_1->Translation).m128_f32[0];
  fVar8 = (param_1->Translation).m128_f32[1];
  fVar9 = (param_1->Translation).m128_f32[2];
  fVar10 = (param_1->Translation).m128_f32[3];
  fVar11 = (this->Translation).m128_f32[0];
  fVar12 = (this->Translation).m128_f32[1];
  fVar13 = (this->Translation).m128_f32[2];
  fVar14 = (this->Translation).m128_f32[3];
  (__return_storage_ptr__->Rotation).m128_f32[0] =
       (param_1->Rotation).m128_f32[0] + (this->Rotation).m128_f32[0];
  (__return_storage_ptr__->Rotation).m128_f32[1] = fVar1 + fVar4;
  (__return_storage_ptr__->Rotation).m128_f32[2] = fVar2 + fVar5;
  (__return_storage_ptr__->Rotation).m128_f32[3] = fVar3 + fVar6;
  fVar1 = (param_1->Scale3D).m128_f32[0];
  fVar2 = (param_1->Scale3D).m128_f32[1];
  fVar3 = (param_1->Scale3D).m128_f32[2];
  fVar4 = (param_1->Scale3D).m128_f32[3];
  fVar5 = (this->Scale3D).m128_f32[0];
  fVar6 = (this->Scale3D).m128_f32[1];
  fVar15 = (this->Scale3D).m128_f32[2];
  fVar16 = (this->Scale3D).m128_f32[3];
  (__return_storage_ptr__->Translation).m128_f32[0] = fVar7 + fVar11;
  (__return_storage_ptr__->Translation).m128_f32[1] = fVar8 + fVar12;
  (__return_storage_ptr__->Translation).m128_f32[2] = fVar9 + fVar13;
  (__return_storage_ptr__->Translation).m128_f32[3] = fVar10 + fVar14;
  (__return_storage_ptr__->Scale3D).m128_f32[0] = fVar1 + fVar5;
  (__return_storage_ptr__->Scale3D).m128_f32[1] = fVar2 + fVar6;
  (__return_storage_ptr__->Scale3D).m128_f32[2] = fVar3 + fVar15;
  (__return_storage_ptr__->Scale3D).m128_f32[3] = fVar4 + fVar16;
  return __return_storage_ptr__;
}

// operator+ @ 1417abe10

TTransform<double> * __thiscall
UE::Math::TTransform<double>::operator+
          (TTransform<double> *this,TTransform<double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  
  dVar13 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar14 = (param_1->Rotation).ZW.m128d_f64[1];
  dVar15 = (this->Rotation).ZW.m128d_f64[0];
  dVar4 = (this->Rotation).ZW.m128d_f64[1];
  dVar16 = (param_1->Translation).XY.m128d_f64[0];
  dVar17 = (param_1->Translation).XY.m128d_f64[1];
  dVar18 = (this->Translation).XY.m128d_f64[0];
  dVar6 = (this->Translation).XY.m128d_f64[1];
  dVar19 = (this->Translation).ZW.m128d_f64[0];
  dVar8 = (this->Translation).ZW.m128d_f64[1];
  dVar2 = (this->Rotation).XY.m128d_f64[1] + (param_1->Rotation).XY.m128d_f64[1];
  dVar20 = (param_1->Translation).ZW.m128d_f64[0];
  dVar21 = (param_1->Translation).ZW.m128d_f64[1];
  dVar22 = (this->Scale3D).XY.m128d_f64[0];
  dVar10 = (this->Scale3D).XY.m128d_f64[1];
  dVar23 = (this->Scale3D).ZW.m128d_f64[0];
  dVar12 = (this->Scale3D).ZW.m128d_f64[1];
  dVar24 = (param_1->Scale3D).XY.m128d_f64[0];
  dVar25 = (param_1->Scale3D).XY.m128d_f64[1];
  dVar26 = (param_1->Scale3D).ZW.m128d_f64[0];
  dVar27 = (param_1->Scale3D).ZW.m128d_f64[1];
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = (this->Rotation).XY.m128d_f64[0] + (param_1->Rotation).XY.m128d_f64[0];
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar1;
  dVar10 = dVar10 + dVar25;
  dVar12 = dVar12 + dVar27;
  dVar8 = dVar8 + dVar21;
  dVar4 = dVar4 + dVar14;
  dVar6 = dVar6 + dVar17;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = dVar15 + dVar13;
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar3;
  auVar5._8_4_ = SUB84(dVar6,0);
  auVar5._0_8_ = dVar18 + dVar16;
  auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar5;
  auVar7._8_4_ = SUB84(dVar8,0);
  auVar7._0_8_ = dVar19 + dVar20;
  auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar7;
  auVar9._8_4_ = SUB84(dVar10,0);
  auVar9._0_8_ = dVar22 + dVar24;
  auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar9;
  auVar11._8_4_ = SUB84(dVar12,0);
  auVar11._0_8_ = dVar23 + dVar26;
  auVar11._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar11;
  return __return_storage_ptr__;
}

// operator*= @ 1417af4c0

TTransform<float> * __thiscall
UE::Math::TTransform<float>::operator*=(TTransform<float> *this,ScalarRegister *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar1 = (param_1->Value).m128_f32[0];
  fVar2 = (param_1->Value).m128_f32[1];
  fVar3 = (param_1->Value).m128_f32[2];
  fVar4 = (param_1->Value).m128_f32[3];
  fVar5 = (this->Translation).m128_f32[1];
  fVar6 = (this->Translation).m128_f32[2];
  fVar7 = (this->Translation).m128_f32[3];
  fVar8 = (this->Rotation).m128_f32[0];
  fVar9 = (this->Rotation).m128_f32[1];
  fVar10 = (this->Rotation).m128_f32[2];
  fVar11 = (this->Rotation).m128_f32[3];
  fVar12 = (this->Scale3D).m128_f32[0];
  fVar13 = (this->Scale3D).m128_f32[1];
  fVar14 = (this->Scale3D).m128_f32[2];
  fVar15 = (this->Scale3D).m128_f32[3];
  (this->Translation).m128_f32[0] = fVar1 * (this->Translation).m128_f32[0];
  (this->Translation).m128_f32[1] = fVar2 * fVar5;
  (this->Translation).m128_f32[2] = fVar3 * fVar6;
  (this->Translation).m128_f32[3] = fVar4 * fVar7;
  (this->Rotation).m128_f32[0] = fVar1 * fVar8;
  (this->Rotation).m128_f32[1] = fVar2 * fVar9;
  (this->Rotation).m128_f32[2] = fVar3 * fVar10;
  (this->Rotation).m128_f32[3] = fVar4 * fVar11;
  (this->Scale3D).m128_f32[0] = fVar1 * fVar12;
  (this->Scale3D).m128_f32[1] = fVar2 * fVar13;
  (this->Scale3D).m128_f32[2] = fVar3 * fVar14;
  (this->Scale3D).m128_f32[3] = fVar4 * fVar15;
  return this;
}

// operator*= @ 1417af4f0

void __thiscall
UE::Math::TTransform<float>::operator*=(TTransform<float> *this,TTransform<float> *param_1)

{
  Multiply(this,this,param_1);
  return;
}

// operator*= @ 1417af510

void __thiscall
UE::Math::TTransform<float>::operator*=(TTransform<float> *this,TQuat<float> *param_1)

{
  __m128 local_38;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  local_38._0_4_ = param_1->X;
  local_38._4_4_ = param_1->Y;
  local_38._8_4_ = param_1->Z;
  local_38._12_4_ = param_1->W;
  local_28._8_4_ = TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_28._0_8_ = TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_28._12_4_ = 0;
  local_18._8_4_ = TVector<float>::OneVector.field0_0x0._s_0.Z;
  local_18._0_8_ = TVector<float>::OneVector.field0_0x0._0_8_;
  local_18._12_4_ = 0;
  Multiply(this,this,(TTransform<float> *)&local_38);
  return;
}

// operator*= @ 1417af570

TTransform<double> * __thiscall
UE::Math::TTransform<double>::operator*=(TTransform<double> *this,ScalarRegister *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  
  dVar10 = (double)(param_1->Value).m128_f32[0];
  dVar11 = (double)(param_1->Value).m128_f32[1];
  dVar7 = (double)(param_1->Value).m128_f32[2];
  dVar8 = (double)(param_1->Value).m128_f32[3];
  dVar3 = dVar11 * (this->Translation).XY.m128d_f64[1];
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar10 * (this->Translation).XY.m128d_f64[0];
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Translation).XY.m128d_f64 = auVar1;
  dVar3 = dVar8 * (this->Translation).ZW.m128d_f64[1];
  auVar4._8_4_ = SUB84(dVar3,0);
  auVar4._0_8_ = dVar7 * (this->Translation).ZW.m128d_f64[0];
  auVar4._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Translation).ZW.m128d_f64 = auVar4;
  dVar3 = dVar11 * (this->Rotation).XY.m128d_f64[1];
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = dVar10 * (this->Rotation).XY.m128d_f64[0];
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Rotation).XY.m128d_f64 = auVar2;
  dVar3 = dVar8 * (this->Rotation).ZW.m128d_f64[1];
  auVar5._8_4_ = SUB84(dVar3,0);
  auVar5._0_8_ = dVar7 * (this->Rotation).ZW.m128d_f64[0];
  auVar5._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Rotation).ZW.m128d_f64 = auVar5;
  dVar11 = dVar11 * (this->Scale3D).XY.m128d_f64[1];
  auVar9._8_4_ = SUB84(dVar11,0);
  auVar9._0_8_ = dVar10 * (this->Scale3D).XY.m128d_f64[0];
  auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])(this->Scale3D).XY.m128d_f64 = auVar9;
  dVar8 = dVar8 * (this->Scale3D).ZW.m128d_f64[1];
  auVar6._8_4_ = SUB84(dVar8,0);
  auVar6._0_8_ = dVar7 * (this->Scale3D).ZW.m128d_f64[0];
  auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])(this->Scale3D).ZW.m128d_f64 = auVar6;
  return this;
}

// operator*= @ 1417af5d0

void __thiscall
UE::Math::TTransform<double>::operator*=(TTransform<double> *this,TTransform<double> *param_1)

{
  Multiply(this,this,param_1);
  return;
}

// operator*= @ 1417af5f0

void __thiscall
UE::Math::TTransform<double>::operator*=(TTransform<double> *this,TQuat<double> *param_1)

{
  TTransform<double> local_68;
  
  local_68.Rotation.ZW.m128d_f64[0] = param_1->Z;
  local_68.Rotation.ZW.m128d_f64[1] = param_1->W;
  local_68.Rotation.XY.m128d_f64[0] = param_1->X;
  local_68.Rotation.XY.m128d_f64[1] = param_1->Y;
  local_68.Translation.XY.m128d_f64[0] = TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_68.Translation.XY.m128d_f64[1] = TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_68.Translation.ZW.m128d_f64[0] = TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_68.Translation.ZW.m128d_f64[1] = 0.0;
  local_68.Scale3D.XY.m128d_f64[0] = TVector<double>::OneVector.field0_0x0._s_0.X;
  local_68.Scale3D.XY.m128d_f64[1] = TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_68.Scale3D.ZW.m128d_f64[0] = TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_68.Scale3D.ZW.m128d_f64[1] = 0.0;
  Multiply(this,this,&local_68);
  return;
}

// operator+= @ 1417afee0

TTransform<float> * __thiscall
UE::Math::TTransform<float>::operator+=(TTransform<float> *this,TTransform<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (param_1->Translation).m128_f32[1];
  fVar2 = (param_1->Translation).m128_f32[2];
  fVar3 = (param_1->Translation).m128_f32[3];
  fVar4 = (this->Translation).m128_f32[1];
  fVar5 = (this->Translation).m128_f32[2];
  fVar6 = (this->Translation).m128_f32[3];
  (this->Translation).m128_f32[0] =
       (param_1->Translation).m128_f32[0] + (this->Translation).m128_f32[0];
  (this->Translation).m128_f32[1] = fVar1 + fVar4;
  (this->Translation).m128_f32[2] = fVar2 + fVar5;
  (this->Translation).m128_f32[3] = fVar3 + fVar6;
  fVar1 = (param_1->Rotation).m128_f32[1];
  fVar2 = (param_1->Rotation).m128_f32[2];
  fVar3 = (param_1->Rotation).m128_f32[3];
  fVar4 = (this->Rotation).m128_f32[1];
  fVar5 = (this->Rotation).m128_f32[2];
  fVar6 = (this->Rotation).m128_f32[3];
  (this->Rotation).m128_f32[0] = (param_1->Rotation).m128_f32[0] + (this->Rotation).m128_f32[0];
  (this->Rotation).m128_f32[1] = fVar1 + fVar4;
  (this->Rotation).m128_f32[2] = fVar2 + fVar5;
  (this->Rotation).m128_f32[3] = fVar3 + fVar6;
  fVar1 = (param_1->Scale3D).m128_f32[1];
  fVar2 = (param_1->Scale3D).m128_f32[2];
  fVar3 = (param_1->Scale3D).m128_f32[3];
  fVar4 = (this->Scale3D).m128_f32[1];
  fVar5 = (this->Scale3D).m128_f32[2];
  fVar6 = (this->Scale3D).m128_f32[3];
  (this->Scale3D).m128_f32[0] = (param_1->Scale3D).m128_f32[0] + (this->Scale3D).m128_f32[0];
  (this->Scale3D).m128_f32[1] = fVar1 + fVar4;
  (this->Scale3D).m128_f32[2] = fVar2 + fVar5;
  (this->Scale3D).m128_f32[3] = fVar3 + fVar6;
  return this;
}

// operator+= @ 1417aff10

TTransform<double> * __thiscall
UE::Math::TTransform<double>::operator+=(TTransform<double> *this,TTransform<double> *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar9 = (param_1->Translation).ZW.m128d_f64[0];
  dVar10 = (param_1->Translation).ZW.m128d_f64[1];
  dVar8 = (param_1->Translation).XY.m128d_f64[1] + (this->Translation).XY.m128d_f64[1];
  dVar4 = (this->Translation).ZW.m128d_f64[1];
  auVar5._8_4_ = SUB84(dVar8,0);
  auVar5._0_8_ = (param_1->Translation).XY.m128d_f64[0] + (this->Translation).XY.m128d_f64[0];
  auVar5._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])(this->Translation).XY.m128d_f64 = auVar5;
  dVar4 = dVar4 + dVar10;
  auVar1._8_4_ = SUB84(dVar4,0);
  auVar1._0_8_ = (this->Translation).ZW.m128d_f64[0] + dVar9;
  auVar1._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])(this->Translation).ZW.m128d_f64 = auVar1;
  dVar9 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar10 = (param_1->Rotation).ZW.m128d_f64[1];
  dVar4 = (this->Rotation).XY.m128d_f64[1] + (param_1->Rotation).XY.m128d_f64[1];
  dVar8 = (this->Rotation).ZW.m128d_f64[1];
  auVar2._8_4_ = SUB84(dVar4,0);
  auVar2._0_8_ = (this->Rotation).XY.m128d_f64[0] + (param_1->Rotation).XY.m128d_f64[0];
  auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])(this->Rotation).XY.m128d_f64 = auVar2;
  dVar8 = dVar8 + dVar10;
  auVar6._8_4_ = SUB84(dVar8,0);
  auVar6._0_8_ = (this->Rotation).ZW.m128d_f64[0] + dVar9;
  auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])(this->Rotation).ZW.m128d_f64 = auVar6;
  dVar9 = (param_1->Scale3D).ZW.m128d_f64[0];
  dVar4 = (this->Scale3D).XY.m128d_f64[1] + (param_1->Scale3D).XY.m128d_f64[1];
  dVar8 = (this->Scale3D).ZW.m128d_f64[1] + (param_1->Scale3D).ZW.m128d_f64[1];
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = (this->Scale3D).XY.m128d_f64[0] + (param_1->Scale3D).XY.m128d_f64[0];
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])(this->Scale3D).XY.m128d_f64 = auVar3;
  auVar7._8_4_ = SUB84(dVar8,0);
  auVar7._0_8_ = (this->Scale3D).ZW.m128d_f64[0] + dVar9;
  auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])(this->Scale3D).ZW.m128d_f64 = auVar7;
  return this;
}

// Accumulate @ 1417b1fa0

void __thiscall
UE::Math::TTransform<float>::Accumulate(TTransform<float> *this,TTransform<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar10 = (param_1->Rotation).m128_f32[0];
  fVar11 = (param_1->Rotation).m128_f32[1];
  fVar12 = (param_1->Rotation).m128_f32[2];
  fVar13 = (param_1->Rotation).m128_f32[3];
  fVar14 = (this->Rotation).m128_f32[0];
  fVar15 = (this->Rotation).m128_f32[1];
  fVar16 = (this->Rotation).m128_f32[2];
  fVar17 = (this->Rotation).m128_f32[3];
  fVar1 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1];
  fVar4 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2];
  fVar7 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3];
  fVar2 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1];
  fVar5 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2];
  fVar8 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3];
  fVar3 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
  fVar6 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
  fVar9 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
  (this->Rotation).m128_f32[0] =
       fVar10 * fVar17 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] + fVar13 * fVar14 +
       fVar11 * fVar16 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
       fVar12 * fVar15 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
  (this->Rotation).m128_f32[1] =
       fVar10 * fVar16 * fVar1 + fVar13 * fVar15 + fVar11 * fVar17 * fVar2 + fVar12 * fVar14 * fVar3
  ;
  (this->Rotation).m128_f32[2] =
       fVar10 * fVar15 * fVar4 + fVar13 * fVar16 + fVar11 * fVar14 * fVar5 + fVar12 * fVar17 * fVar6
  ;
  (this->Rotation).m128_f32[3] =
       fVar10 * fVar14 * fVar7 + fVar13 * fVar17 + fVar11 * fVar15 * fVar8 + fVar12 * fVar16 * fVar9
  ;
  fVar1 = (param_1->Translation).m128_f32[1];
  fVar2 = (param_1->Translation).m128_f32[2];
  fVar3 = (param_1->Translation).m128_f32[3];
  fVar4 = (this->Translation).m128_f32[1];
  fVar5 = (this->Translation).m128_f32[2];
  fVar6 = (this->Translation).m128_f32[3];
  (this->Translation).m128_f32[0] =
       (param_1->Translation).m128_f32[0] + (this->Translation).m128_f32[0];
  (this->Translation).m128_f32[1] = fVar1 + fVar4;
  (this->Translation).m128_f32[2] = fVar2 + fVar5;
  (this->Translation).m128_f32[3] = fVar3 + fVar6;
  fVar1 = (param_1->Scale3D).m128_f32[1];
  fVar2 = (param_1->Scale3D).m128_f32[2];
  fVar3 = (param_1->Scale3D).m128_f32[3];
  fVar4 = (this->Scale3D).m128_f32[1];
  fVar5 = (this->Scale3D).m128_f32[2];
  fVar6 = (this->Scale3D).m128_f32[3];
  (this->Scale3D).m128_f32[0] = (param_1->Scale3D).m128_f32[0] * (this->Scale3D).m128_f32[0];
  (this->Scale3D).m128_f32[1] = fVar1 * fVar4;
  (this->Scale3D).m128_f32[2] = fVar2 * fVar5;
  (this->Scale3D).m128_f32[3] = fVar3 * fVar6;
  return;
}

// Accumulate @ 1417b2020

void __thiscall
UE::Math::TTransform<float>::Accumulate
          (TTransform<float> *this,TTransform<float> *param_1,ScalarRegister *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  fVar10 = (this->Rotation).m128_f32[0];
  fVar11 = (this->Rotation).m128_f32[1];
  fVar12 = (this->Rotation).m128_f32[2];
  fVar13 = (this->Rotation).m128_f32[3];
  fVar14 = (param_2->Value).m128_f32[0];
  fVar15 = (param_2->Value).m128_f32[1];
  fVar16 = (param_2->Value).m128_f32[2];
  fVar17 = (param_2->Value).m128_f32[3];
  fVar26 = fVar14 * (param_1->Rotation).m128_f32[0];
  fVar27 = fVar15 * (param_1->Rotation).m128_f32[1];
  fVar28 = fVar16 * (param_1->Rotation).m128_f32[2];
  fVar29 = fVar17 * (param_1->Rotation).m128_f32[3];
  fVar18 = (param_1->Scale3D).m128_f32[0];
  fVar19 = (param_1->Scale3D).m128_f32[1];
  fVar20 = (param_1->Scale3D).m128_f32[2];
  fVar21 = (param_1->Scale3D).m128_f32[3];
  fVar22 = (this->Scale3D).m128_f32[0];
  fVar23 = (this->Scale3D).m128_f32[1];
  fVar24 = (this->Scale3D).m128_f32[2];
  fVar25 = (this->Scale3D).m128_f32[3];
  fVar1 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1];
  fVar4 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2];
  fVar7 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3];
  fVar2 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1];
  fVar5 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2];
  fVar8 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3];
  fVar3 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
  fVar6 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
  fVar9 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
  (this->Rotation).m128_f32[0] =
       fVar26 * fVar13 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] + fVar29 * fVar10 +
       fVar27 * fVar12 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
       fVar28 * fVar11 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
  (this->Rotation).m128_f32[1] =
       fVar26 * fVar12 * fVar1 + fVar29 * fVar11 + fVar27 * fVar13 * fVar2 + fVar28 * fVar10 * fVar3
  ;
  (this->Rotation).m128_f32[2] =
       fVar26 * fVar11 * fVar4 + fVar29 * fVar12 + fVar27 * fVar10 * fVar5 + fVar28 * fVar13 * fVar6
  ;
  (this->Rotation).m128_f32[3] =
       fVar26 * fVar10 * fVar7 + fVar29 * fVar13 + fVar27 * fVar11 * fVar8 + fVar28 * fVar12 * fVar9
  ;
  fVar1 = (param_1->Translation).m128_f32[0];
  fVar2 = (param_1->Translation).m128_f32[1];
  fVar3 = (param_1->Translation).m128_f32[2];
  fVar4 = (param_1->Translation).m128_f32[3];
  (this->Scale3D).m128_f32[0] = fVar14 * fVar18 * fVar22;
  (this->Scale3D).m128_f32[1] = fVar15 * fVar19 * fVar23;
  (this->Scale3D).m128_f32[2] = fVar16 * fVar20 * fVar24;
  (this->Scale3D).m128_f32[3] = fVar17 * fVar21 * fVar25;
  fVar5 = (this->Translation).m128_f32[1];
  fVar6 = (this->Translation).m128_f32[2];
  fVar7 = (this->Translation).m128_f32[3];
  (this->Translation).m128_f32[0] = fVar14 * fVar1 + (this->Translation).m128_f32[0];
  (this->Translation).m128_f32[1] = fVar15 * fVar2 + fVar5;
  (this->Translation).m128_f32[2] = fVar16 * fVar3 + fVar6;
  (this->Translation).m128_f32[3] = fVar17 * fVar4 + fVar7;
  return;
}

// Accumulate @ 1417b20c0

void __thiscall
UE::Math::TTransform<double>::Accumulate(TTransform<double> *this,TTransform<double> *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  dVar12 = (param_1->Rotation).XY.m128d_f64[0];
  dVar13 = (param_1->Rotation).XY.m128d_f64[1];
  dVar14 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar15 = (param_1->Rotation).ZW.m128d_f64[1];
  dVar16 = (this->Rotation).ZW.m128d_f64[0];
  dVar17 = (this->Rotation).ZW.m128d_f64[1];
  dVar18 = (this->Rotation).XY.m128d_f64[0];
  dVar19 = (this->Rotation).XY.m128d_f64[1];
  dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar1 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar11 = dVar18 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar15 * dVar17 +
           dVar13 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar16 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar9 = dVar16 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar15 * dVar19 +
          dVar13 * (this->Rotation).ZW.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar18 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar8._8_4_ = SUB84(dVar9,0);
  auVar8._0_8_ = dVar17 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 dVar15 * dVar18 +
                 dVar13 * (this->Rotation).ZW.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 dVar19 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])(this->Rotation).XY.m128d_f64 = auVar8;
  auVar10._8_4_ = SUB84(dVar11,0);
  auVar10._0_8_ =
       dVar19 * dVar12 * dVar7 + dVar15 * dVar16 + dVar13 * dVar18 * dVar4 + dVar17 * dVar14 * dVar1
  ;
  auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])(this->Rotation).ZW.m128d_f64 = auVar10;
  dVar1 = (param_1->Translation).ZW.m128d_f64[0];
  dVar9 = (param_1->Translation).ZW.m128d_f64[1];
  dVar4 = (this->Translation).XY.m128d_f64[1] + (param_1->Translation).XY.m128d_f64[1];
  dVar7 = (this->Translation).ZW.m128d_f64[1];
  auVar2._8_4_ = SUB84(dVar4,0);
  auVar2._0_8_ = (this->Translation).XY.m128d_f64[0] + (param_1->Translation).XY.m128d_f64[0];
  auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])(this->Translation).XY.m128d_f64 = auVar2;
  dVar7 = dVar7 + dVar9;
  auVar5._8_4_ = SUB84(dVar7,0);
  auVar5._0_8_ = (this->Translation).ZW.m128d_f64[0] + dVar1;
  auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])(this->Translation).ZW.m128d_f64 = auVar5;
  dVar1 = (param_1->Scale3D).ZW.m128d_f64[0];
  dVar4 = (this->Scale3D).XY.m128d_f64[1] * (param_1->Scale3D).XY.m128d_f64[1];
  dVar7 = (this->Scale3D).ZW.m128d_f64[1] * (param_1->Scale3D).ZW.m128d_f64[1];
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = (this->Scale3D).XY.m128d_f64[0] * (param_1->Scale3D).XY.m128d_f64[0];
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])(this->Scale3D).XY.m128d_f64 = auVar3;
  auVar6._8_4_ = SUB84(dVar7,0);
  auVar6._0_8_ = (this->Scale3D).ZW.m128d_f64[0] * dVar1;
  auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])(this->Scale3D).ZW.m128d_f64 = auVar6;
  return;
}

// Accumulate @ 1417b2200

void __thiscall
UE::Math::TTransform<double>::Accumulate
          (TTransform<double> *this,TTransform<double> *param_1,ScalarRegister *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  
  dVar22 = (this->Rotation).ZW.m128d_f64[0];
  dVar23 = (this->Rotation).ZW.m128d_f64[1];
  dVar24 = (this->Rotation).XY.m128d_f64[0];
  dVar25 = (this->Rotation).XY.m128d_f64[1];
  dVar26 = (param_1->Scale3D).XY.m128d_f64[0];
  dVar27 = (param_1->Scale3D).XY.m128d_f64[1];
  dVar28 = (param_1->Scale3D).ZW.m128d_f64[0];
  dVar29 = (param_1->Scale3D).ZW.m128d_f64[1];
  dVar17 = (double)(param_2->Value).m128_f32[0];
  dVar18 = (double)(param_2->Value).m128_f32[1];
  dVar20 = (double)(param_2->Value).m128_f32[2];
  dVar21 = (double)(param_2->Value).m128_f32[3];
  dVar12 = dVar17 * (param_1->Rotation).XY.m128d_f64[0];
  dVar13 = dVar18 * (param_1->Rotation).XY.m128d_f64[1];
  dVar14 = dVar20 * (param_1->Rotation).ZW.m128d_f64[0];
  dVar15 = dVar21 * (param_1->Rotation).ZW.m128d_f64[1];
  dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  dVar1 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  dVar2 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar9 = dVar22 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar25 * dVar15 +
          dVar23 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar24 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar8._8_4_ = SUB84(dVar9,0);
  auVar8._0_8_ = dVar23 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 dVar24 * dVar15 +
                 dVar22 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 dVar25 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])(this->Rotation).XY.m128d_f64 = auVar8;
  dVar11 = dVar24 * dVar12 * dVar11 + dVar23 * dVar15 + dVar25 * dVar13 * dVar3 +
           dVar22 * dVar14 * dVar4;
  auVar10._8_4_ = SUB84(dVar11,0);
  auVar10._0_8_ =
       dVar25 * dVar12 * dVar6 + dVar22 * dVar15 + dVar24 * dVar13 * dVar1 + dVar23 * dVar14 * dVar2
  ;
  auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])(this->Rotation).ZW.m128d_f64 = auVar10;
  dVar1 = (param_1->Translation).ZW.m128d_f64[0];
  dVar2 = (param_1->Translation).ZW.m128d_f64[1];
  dVar6 = dVar18 * (param_1->Translation).XY.m128d_f64[1] + (this->Translation).XY.m128d_f64[1];
  auVar5._8_4_ = SUB84(dVar6,0);
  auVar5._0_8_ = dVar17 * (param_1->Translation).XY.m128d_f64[0] +
                 (this->Translation).XY.m128d_f64[0];
  auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(this->Translation).XY.m128d_f64 = auVar5;
  dVar6 = dVar21 * dVar2 + (this->Translation).ZW.m128d_f64[1];
  auVar7._8_4_ = SUB84(dVar6,0);
  auVar7._0_8_ = dVar20 * dVar1 + (this->Translation).ZW.m128d_f64[0];
  auVar7._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(this->Translation).ZW.m128d_f64 = auVar7;
  dVar6 = dVar18 * dVar27 * (this->Scale3D).XY.m128d_f64[1];
  auVar16._8_4_ = SUB84(dVar6,0);
  auVar16._0_8_ = dVar17 * dVar26 * (this->Scale3D).XY.m128d_f64[0];
  auVar16._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(this->Scale3D).XY.m128d_f64 = auVar16;
  dVar6 = dVar21 * dVar29 * (this->Scale3D).ZW.m128d_f64[1];
  auVar19._8_4_ = SUB84(dVar6,0);
  auVar19._0_8_ = dVar20 * dVar28 * (this->Scale3D).ZW.m128d_f64[0];
  auVar19._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(this->Scale3D).ZW.m128d_f64 = auVar19;
  return;
}

// AccumulateWithAdditiveScale @ 1417b23d0

void __thiscall
UE::Math::TTransform<float>::AccumulateWithAdditiveScale
          (TTransform<float> *this,TTransform<float> *param_1,ScalarRegister *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  fVar14 = (this->Rotation).m128_f32[0];
  fVar15 = (this->Rotation).m128_f32[1];
  fVar16 = (this->Rotation).m128_f32[2];
  fVar17 = (this->Rotation).m128_f32[3];
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  fVar18 = (param_2->Value).m128_f32[0];
  fVar19 = (param_2->Value).m128_f32[1];
  fVar20 = (param_2->Value).m128_f32[2];
  fVar21 = (param_2->Value).m128_f32[3];
  fVar22 = fVar18 * (param_1->Rotation).m128_f32[0];
  fVar23 = fVar19 * (param_1->Rotation).m128_f32[1];
  fVar24 = fVar20 * (param_1->Rotation).m128_f32[2];
  fVar25 = fVar21 * (param_1->Rotation).m128_f32[3];
  fVar5 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1];
  fVar8 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2];
  fVar11 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3];
  fVar6 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1];
  fVar9 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2];
  fVar12 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3];
  fVar7 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
  fVar10 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
  fVar13 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
  (this->Rotation).m128_f32[0] =
       fVar22 * fVar17 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] + fVar25 * fVar14 +
       fVar23 * fVar16 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
       fVar24 * fVar15 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
  (this->Rotation).m128_f32[1] =
       fVar22 * fVar16 * fVar5 + fVar25 * fVar15 + fVar23 * fVar17 * fVar6 + fVar24 * fVar14 * fVar7
  ;
  (this->Rotation).m128_f32[2] =
       fVar22 * fVar15 * fVar8 + fVar25 * fVar16 + fVar23 * fVar14 * fVar9 +
       fVar24 * fVar17 * fVar10;
  (this->Rotation).m128_f32[3] =
       fVar22 * fVar14 * fVar11 + fVar25 * fVar17 + fVar23 * fVar15 * fVar12 +
       fVar24 * fVar16 * fVar13;
  fVar5 = (param_1->Translation).m128_f32[1];
  fVar6 = (param_1->Translation).m128_f32[2];
  fVar7 = (param_1->Translation).m128_f32[3];
  fVar8 = (this->Translation).m128_f32[1];
  fVar9 = (this->Translation).m128_f32[2];
  fVar10 = (this->Translation).m128_f32[3];
  (this->Translation).m128_f32[0] =
       fVar18 * (param_1->Translation).m128_f32[0] + (this->Translation).m128_f32[0];
  (this->Translation).m128_f32[1] = fVar19 * fVar5 + fVar8;
  (this->Translation).m128_f32[2] = fVar20 * fVar6 + fVar9;
  (this->Translation).m128_f32[3] = fVar21 * fVar7 + fVar10;
  fVar5 = (param_1->Scale3D).m128_f32[1];
  fVar6 = (param_1->Scale3D).m128_f32[2];
  fVar7 = (param_1->Scale3D).m128_f32[3];
  fVar8 = (this->Scale3D).m128_f32[1];
  fVar9 = (this->Scale3D).m128_f32[2];
  fVar10 = (this->Scale3D).m128_f32[3];
  (this->Scale3D).m128_f32[0] =
       (fVar18 * (param_1->Scale3D).m128_f32[0] + fVar1) * (this->Scale3D).m128_f32[0];
  (this->Scale3D).m128_f32[1] = (fVar19 * fVar5 + fVar2) * fVar8;
  (this->Scale3D).m128_f32[2] = (fVar20 * fVar6 + fVar3) * fVar9;
  (this->Scale3D).m128_f32[3] = (fVar21 * fVar7 + fVar4) * fVar10;
  return;
}

// AccumulateWithAdditiveScale @ 1417b2480

void __thiscall
UE::Math::TTransform<double>::AccumulateWithAdditiveScale
          (TTransform<double> *this,TTransform<double> *param_1,ScalarRegister *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  
  dVar26 = (this->Rotation).ZW.m128d_f64[0];
  dVar27 = (this->Rotation).ZW.m128d_f64[1];
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  dVar28 = (this->Rotation).XY.m128d_f64[0];
  dVar29 = (this->Rotation).XY.m128d_f64[1];
  dVar21 = (double)(param_2->Value).m128_f32[0];
  dVar22 = (double)(param_2->Value).m128_f32[1];
  dVar12 = dVar21 * (param_1->Rotation).XY.m128d_f64[0];
  dVar13 = dVar22 * (param_1->Rotation).XY.m128d_f64[1];
  dVar24 = (double)(param_2->Value).m128_f32[2];
  dVar25 = (double)(param_2->Value).m128_f32[3];
  dVar18 = dVar24 * (param_1->Rotation).ZW.m128d_f64[0];
  dVar19 = dVar25 * (param_1->Rotation).ZW.m128d_f64[1];
  dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar17 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar15 = dVar26 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar29 * dVar19 +
           dVar27 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           dVar28 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar14._8_4_ = SUB84(dVar15,0);
  auVar14._0_8_ =
       dVar27 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar28 * dVar19 +
       dVar26 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar29 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  auVar14._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  *(undefined1 (*) [16])(this->Rotation).XY.m128d_f64 = auVar14;
  dVar17 = dVar28 * dVar12 * dVar17 + dVar27 * dVar19 + dVar29 * dVar13 * dVar7 +
           dVar26 * dVar18 * dVar8;
  auVar16._8_4_ = SUB84(dVar17,0);
  auVar16._0_8_ =
       dVar29 * dVar12 * dVar10 + dVar26 * dVar19 + dVar28 * dVar13 * dVar5 +
       dVar27 * dVar18 * dVar6;
  auVar16._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  *(undefined1 (*) [16])(this->Rotation).ZW.m128d_f64 = auVar16;
  dVar5 = (param_1->Translation).ZW.m128d_f64[0];
  dVar6 = (param_1->Translation).ZW.m128d_f64[1];
  dVar10 = dVar22 * (param_1->Translation).XY.m128d_f64[1] + (this->Translation).XY.m128d_f64[1];
  auVar9._8_4_ = SUB84(dVar10,0);
  auVar9._0_8_ = dVar21 * (param_1->Translation).XY.m128d_f64[0] +
                 (this->Translation).XY.m128d_f64[0];
  auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])(this->Translation).XY.m128d_f64 = auVar9;
  dVar10 = dVar25 * dVar6 + (this->Translation).ZW.m128d_f64[1];
  auVar11._8_4_ = SUB84(dVar10,0);
  auVar11._0_8_ = dVar24 * dVar5 + (this->Translation).ZW.m128d_f64[0];
  auVar11._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])(this->Translation).ZW.m128d_f64 = auVar11;
  dVar5 = (param_1->Scale3D).ZW.m128d_f64[0];
  dVar6 = (param_1->Scale3D).ZW.m128d_f64[1];
  dVar10 = (dVar22 * (param_1->Scale3D).XY.m128d_f64[1] + (double)fVar2) *
           (this->Scale3D).XY.m128d_f64[1];
  auVar20._8_4_ = SUB84(dVar10,0);
  auVar20._0_8_ =
       (dVar21 * (param_1->Scale3D).XY.m128d_f64[0] + (double)fVar1) *
       (this->Scale3D).XY.m128d_f64[0];
  auVar20._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])(this->Scale3D).XY.m128d_f64 = auVar20;
  dVar10 = (dVar25 * dVar6 + (double)fVar4) * (this->Scale3D).ZW.m128d_f64[1];
  auVar23._8_4_ = SUB84(dVar10,0);
  auVar23._0_8_ = (dVar24 * dVar5 + (double)fVar3) * (this->Scale3D).ZW.m128d_f64[0];
  auVar23._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])(this->Scale3D).ZW.m128d_f64 = auVar23;
  return;
}

// AccumulateWithShortestRotation @ 1417b2660

void __thiscall
UE::Math::TTransform<float>::AccumulateWithShortestRotation
          (TTransform<float> *this,TTransform<float> *param_1,ScalarRegister *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar1 = (param_2->Value).m128_f32[0];
  fVar2 = (param_2->Value).m128_f32[1];
  fVar3 = (param_2->Value).m128_f32[2];
  fVar4 = (param_2->Value).m128_f32[3];
  fVar14 = fVar1 * (param_1->Rotation).m128_f32[0];
  fVar15 = fVar2 * (param_1->Rotation).m128_f32[1];
  fVar16 = fVar3 * (param_1->Rotation).m128_f32[2];
  fVar17 = fVar4 * (param_1->Rotation).m128_f32[3];
  fVar9 = (this->Rotation).m128_f32[0] * fVar14;
  fVar10 = (this->Rotation).m128_f32[1] * fVar15;
  fVar11 = (this->Rotation).m128_f32[2] * fVar16;
  fVar12 = (this->Rotation).m128_f32[3] * fVar17;
  fVar13 = fVar10 + fVar9;
  fVar9 = fVar9 + fVar10;
  fVar10 = fVar12 + fVar11;
  fVar11 = fVar11 + fVar12;
  uVar5 = -(uint)(0.0 <= fVar10 + fVar13);
  uVar6 = -(uint)(0.0 <= fVar11 + fVar9);
  uVar7 = -(uint)(0.0 <= fVar13 + fVar10);
  uVar8 = -(uint)(0.0 <= fVar9 + fVar11);
  fVar9 = (this->Rotation).m128_f32[1];
  fVar10 = (this->Rotation).m128_f32[2];
  fVar11 = (this->Rotation).m128_f32[3];
  (this->Rotation).m128_f32[0] =
       (float)(~uVar5 & (uint)(0.0 - fVar14) | uVar5 & (uint)fVar14) + (this->Rotation).m128_f32[0];
  (this->Rotation).m128_f32[1] =
       (float)(~uVar6 & (uint)(0.0 - fVar15) | uVar6 & (uint)fVar15) + fVar9;
  (this->Rotation).m128_f32[2] =
       (float)(~uVar7 & (uint)(0.0 - fVar16) | uVar7 & (uint)fVar16) + fVar10;
  (this->Rotation).m128_f32[3] =
       (float)(~uVar8 & (uint)(0.0 - fVar17) | uVar8 & (uint)fVar17) + fVar11;
  fVar9 = (param_1->Translation).m128_f32[1];
  fVar10 = (param_1->Translation).m128_f32[2];
  fVar11 = (param_1->Translation).m128_f32[3];
  fVar12 = (this->Translation).m128_f32[1];
  fVar13 = (this->Translation).m128_f32[2];
  fVar14 = (this->Translation).m128_f32[3];
  (this->Translation).m128_f32[0] =
       fVar1 * (param_1->Translation).m128_f32[0] + (this->Translation).m128_f32[0];
  (this->Translation).m128_f32[1] = fVar2 * fVar9 + fVar12;
  (this->Translation).m128_f32[2] = fVar3 * fVar10 + fVar13;
  (this->Translation).m128_f32[3] = fVar4 * fVar11 + fVar14;
  fVar9 = (param_1->Scale3D).m128_f32[1];
  fVar10 = (param_1->Scale3D).m128_f32[2];
  fVar11 = (param_1->Scale3D).m128_f32[3];
  fVar12 = (this->Scale3D).m128_f32[1];
  fVar13 = (this->Scale3D).m128_f32[2];
  fVar14 = (this->Scale3D).m128_f32[3];
  (this->Scale3D).m128_f32[0] = fVar1 * (param_1->Scale3D).m128_f32[0] + (this->Scale3D).m128_f32[0]
  ;
  (this->Scale3D).m128_f32[1] = fVar2 * fVar9 + fVar12;
  (this->Scale3D).m128_f32[2] = fVar3 * fVar10 + fVar13;
  (this->Scale3D).m128_f32[3] = fVar4 * fVar11 + fVar14;
  return;
}

// AccumulateWithShortestRotation @ 1417b26e0

void __thiscall
UE::Math::TTransform<double>::AccumulateWithShortestRotation
          (TTransform<double> *this,TTransform<double> *param_1,ScalarRegister *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint uVar22;
  double dVar23;
  double dVar24;
  uint uVar21;
  
  dVar9 = (double)(param_2->Value).m128_f32[0];
  dVar10 = (double)(param_2->Value).m128_f32[1];
  dVar23 = dVar9 * (param_1->Rotation).XY.m128d_f64[0];
  dVar24 = dVar10 * (param_1->Rotation).XY.m128d_f64[1];
  dVar12 = (double)(param_2->Value).m128_f32[2];
  dVar13 = (double)(param_2->Value).m128_f32[3];
  auVar16._8_4_ = SUB84(dVar24,0);
  auVar16._0_8_ = dVar23;
  auVar16._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  dVar6 = dVar12 * (param_1->Rotation).ZW.m128d_f64[0];
  dVar7 = dVar13 * (param_1->Rotation).ZW.m128d_f64[1];
  dVar3 = dVar6 * (this->Rotation).ZW.m128d_f64[0] + dVar23 * (this->Rotation).XY.m128d_f64[0];
  dVar4 = dVar7 * (this->Rotation).ZW.m128d_f64[1] +
          auVar16._8_8_ * (this->Rotation).XY.m128d_f64[1];
  auVar17._8_4_ = SUB84(dVar4,0);
  auVar17._0_8_ = dVar3;
  auVar17._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  uVar14 = -(ulonglong)(0.0 <= auVar17._8_8_ + dVar3);
  uVar15 = -(ulonglong)(0.0 <= dVar3 + dVar4);
  uVar22 = (uint)(uVar15 >> 0x20);
  auVar20._0_4_ = ~(uint)uVar14 & SUB84(0.0 - dVar23,0);
  uVar21 = (uint)(uVar14 >> 0x20);
  auVar20._4_4_ = ~uVar21 & (uint)((ulonglong)(0.0 - dVar23) >> 0x20);
  auVar20._8_4_ = ~(uint)uVar15 & SUB84(0.0 - dVar24,0);
  auVar20._12_4_ = ~uVar22 & (uint)((ulonglong)(0.0 - dVar24) >> 0x20);
  auVar1._8_4_ = (int)((ulonglong)dVar24 & uVar15);
  auVar1._0_8_ = (ulonglong)dVar23 & uVar14;
  auVar1._12_4_ = (int)(((ulonglong)dVar24 & uVar15) >> 0x20);
  dVar3 = (this->Rotation).XY.m128d_f64[1];
  auVar18._0_4_ = ~(uint)uVar14 & SUB84(0.0 - dVar6,0);
  auVar18._4_4_ = ~uVar21 & (uint)((ulonglong)(0.0 - dVar6) >> 0x20);
  auVar18._8_4_ = ~(uint)uVar15 & SUB84(0.0 - dVar7,0);
  auVar18._12_4_ = ~uVar22 & (uint)((ulonglong)(0.0 - dVar7) >> 0x20);
  (this->Rotation).XY.m128d_f64[0] = SUB168(auVar20 | auVar1,0) + (this->Rotation).XY.m128d_f64[0];
  (this->Rotation).XY.m128d_f64[1] = SUB168(auVar20 | auVar1,8) + dVar3;
  auVar5._8_4_ = (int)((ulonglong)dVar7 & uVar15);
  auVar5._0_8_ = (ulonglong)dVar6 & uVar14;
  auVar5._12_4_ = (int)(((ulonglong)dVar7 & uVar15) >> 0x20);
  dVar3 = (this->Rotation).ZW.m128d_f64[1];
  (this->Rotation).ZW.m128d_f64[0] = SUB168(auVar18 | auVar5,0) + (this->Rotation).ZW.m128d_f64[0];
  (this->Rotation).ZW.m128d_f64[1] = SUB168(auVar18 | auVar5,8) + dVar3;
  dVar4 = (param_1->Translation).ZW.m128d_f64[0];
  dVar6 = (param_1->Translation).ZW.m128d_f64[1];
  auVar19._8_4_ = SUB84(dVar10,0);
  auVar19._0_8_ = dVar9;
  auVar19._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  dVar7 = (param_1->Translation).XY.m128d_f64[1];
  dVar3 = (this->Translation).XY.m128d_f64[1];
  (this->Translation).XY.m128d_f64[0] =
       dVar9 * (param_1->Translation).XY.m128d_f64[0] + (this->Translation).XY.m128d_f64[0];
  (this->Translation).XY.m128d_f64[1] = auVar19._8_8_ * dVar7 + dVar3;
  dVar3 = dVar13 * dVar6 + (this->Translation).ZW.m128d_f64[1];
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = dVar12 * dVar4 + (this->Translation).ZW.m128d_f64[0];
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Translation).ZW.m128d_f64 = auVar2;
  dVar4 = (param_1->Scale3D).ZW.m128d_f64[0];
  dVar6 = (param_1->Scale3D).ZW.m128d_f64[1];
  dVar3 = dVar10 * (param_1->Scale3D).XY.m128d_f64[1] + (this->Scale3D).XY.m128d_f64[1];
  auVar8._8_4_ = SUB84(dVar3,0);
  auVar8._0_8_ = dVar9 * (param_1->Scale3D).XY.m128d_f64[0] + (this->Scale3D).XY.m128d_f64[0];
  auVar8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Scale3D).XY.m128d_f64 = auVar8;
  dVar3 = dVar13 * dVar6 + (this->Scale3D).ZW.m128d_f64[1];
  auVar11._8_4_ = SUB84(dVar3,0);
  auVar11._0_8_ = dVar12 * dVar4 + (this->Scale3D).ZW.m128d_f64[0];
  auVar11._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Scale3D).ZW.m128d_f64 = auVar11;
  return;
}

// AddToTranslation @ 1417b3750

void __thiscall
UE::Math::TTransform<float>::AddToTranslation(TTransform<float> *this,TVector<float> *param_1)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = (param_1->field0_0x0)._s_0.Z;
  uVar2 = *(undefined8 *)&param_1->field0_0x0;
  fVar3 = (this->Translation).m128_f32[1];
  fVar4 = (this->Translation).m128_f32[2];
  fVar5 = (this->Translation).m128_f32[3];
  (this->Translation).m128_f32[0] = (float)uVar2 + (this->Translation).m128_f32[0];
  (this->Translation).m128_f32[1] = (float)((ulonglong)uVar2 >> 0x20) + fVar3;
  (this->Translation).m128_f32[2] = fVar1 + fVar4;
  (this->Translation).m128_f32[3] = fVar5 + 0.0;
  return;
}

// AddToTranslation @ 1417b3770

void __thiscall
UE::Math::TTransform<double>::AddToTranslation(TTransform<double> *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar4 = (param_1->field0_0x0)._s_0.Y + (this->Translation).XY.m128d_f64[1];
  dVar2 = (this->Translation).ZW.m128d_f64[1];
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = (param_1->field0_0x0)._s_0.X + (this->Translation).XY.m128d_f64[0];
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])(this->Translation).XY.m128d_f64 = auVar3;
  (this->Translation).ZW.m128d_f64[0] = dVar1 + (this->Translation).ZW.m128d_f64[0];
  (this->Translation).ZW.m128d_f64[1] = dVar2 + 0.0;
  return;
}

// AddTranslations @ 1417b3890

TVector<float> * __cdecl
UE::Math::TTransform<float>::AddTranslations
          (TVector<float> *__return_storage_ptr__,TTransform<float> *param_1,
          TTransform<float> *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (param_1->Translation).m128_f32[2];
  fVar2 = (param_2->Translation).m128_f32[2];
  *(ulonglong *)&__return_storage_ptr__->field0_0x0 =
       CONCAT44((param_1->Translation).m128_f32[1] + (param_2->Translation).m128_f32[1],
                (param_1->Translation).m128_f32[0] + (param_2->Translation).m128_f32[0]);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1 + fVar2;
  return __return_storage_ptr__;
}

// AddTranslations @ 1417b38b0

TVector<double> * __cdecl
UE::Math::TTransform<double>::AddTranslations
          (TVector<double> *__return_storage_ptr__,TTransform<double> *param_1,
          TTransform<double> *param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = (param_2->Translation).ZW.m128d_f64[0];
  dVar4 = (param_1->Translation).ZW.m128d_f64[0];
  dVar2 = (param_1->Translation).XY.m128d_f64[1] + (param_2->Translation).XY.m128d_f64[1];
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = (param_1->Translation).XY.m128d_f64[0] + (param_2->Translation).XY.m128d_f64[0];
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar4 + dVar3;
  return __return_storage_ptr__;
}

// AnyHasNegativeScale @ 1417b47b0

bool __cdecl
UE::Math::TTransform<float>::AnyHasNegativeScale(TVector<float> *param_1,TVector<float> *param_2)

{
  undefined4 in_EAX;
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar2._12_4_ = 0;
  auVar2._0_12_ = (undefined1  [12])param_1->field0_0x0;
  auVar3._12_4_ = 0;
  auVar3._0_12_ = (undefined1  [12])param_2->field0_0x0;
  auVar3 = minps(auVar2,auVar3);
  auVar4._4_4_ = -(uint)(auVar3._4_4_ < GlobalVectorConstants::FloatZero.m128_f32[1]);
  auVar4._0_4_ = -(uint)(auVar3._0_4_ < GlobalVectorConstants::FloatZero.m128_f32[0]);
  auVar4._8_4_ = -(uint)(auVar3._8_4_ < GlobalVectorConstants::FloatZero.m128_f32[2]);
  auVar4._12_4_ = -(uint)(auVar3._12_4_ < GlobalVectorConstants::FloatZero.m128_f32[3]);
  iVar1 = movmskps(in_EAX,auVar4);
  return iVar1 != 0;
}

// AnyHasNegativeScale @ 1417b47f0

bool __cdecl
UE::Math::TTransform<double>::AnyHasNegativeScale(TVector<double> *param_1,TVector<double> *param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (param_1->field0_0x0)._s_0.Z;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (param_2->field0_0x0)._s_0.Z;
  auVar4 = minpd(auVar3,auVar4);
  auVar5._8_8_ = -(ulonglong)(auVar4._8_8_ < (double)GlobalVectorConstants::FloatZero.m128_f32[3]);
  auVar5._0_8_ = -(ulonglong)(auVar4._0_8_ < (double)GlobalVectorConstants::FloatZero.m128_f32[2]);
  uVar2 = movmskpd((int)param_1,auVar5);
  auVar4 = minpd(*(undefined1 (*) [16])&param_1->field0_0x0,
                 *(undefined1 (*) [16])&param_2->field0_0x0);
  auVar6._8_8_ = -(ulonglong)(auVar4._8_8_ < (double)GlobalVectorConstants::FloatZero.m128_f32[1]);
  auVar6._0_8_ = -(ulonglong)(auVar4._0_8_ < (double)GlobalVectorConstants::FloatZero.m128_f32[0]);
  iVar1 = movmskpd((int)param_1,auVar6);
  return (uVar2 & 0x3fffffff) != 0 || iVar1 != 0;
}

// AreRotationsEqual @ 1417b4d60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UE::Math::TTransform<float>::AreRotationsEqual
          (TTransform<float> *param_1,TTransform<float> *param_2,float param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  int iVar3;
  
  auVar1._4_4_ = -(uint)(param_3 <
                        (float)((uint)((param_1->Rotation).m128_f32[1] -
                                      (param_2->Rotation).m128_f32[1]) & _UNK_15061cc74));
  auVar1._0_4_ = -(uint)(param_3 <
                        (float)((uint)((param_1->Rotation).m128_f32[0] -
                                      (param_2->Rotation).m128_f32[0]) &
                               __xmm_7fffffff7fffffff7fffffff7fffffff));
  auVar1._8_4_ = -(uint)(param_3 <
                        (float)((uint)((param_1->Rotation).m128_f32[2] -
                                      (param_2->Rotation).m128_f32[2]) & _UNK_15061cc78));
  auVar1._12_4_ =
       -(uint)(param_3 <
              (float)((uint)((param_1->Rotation).m128_f32[3] - (param_2->Rotation).m128_f32[3]) &
                     _UNK_15061cc7c));
  iVar3 = movmskps(in_EAX,auVar1);
  if ((iVar3 != 0) &&
     (auVar2._4_4_ = -(uint)(param_3 <
                            (float)((uint)((param_1->Rotation).m128_f32[1] +
                                          (param_2->Rotation).m128_f32[1]) & _UNK_15061cc74)),
     auVar2._0_4_ = -(uint)(param_3 <
                           (float)((uint)((param_1->Rotation).m128_f32[0] +
                                         (param_2->Rotation).m128_f32[0]) &
                                  __xmm_7fffffff7fffffff7fffffff7fffffff)),
     auVar2._8_4_ = -(uint)(param_3 <
                           (float)((uint)((param_1->Rotation).m128_f32[2] +
                                         (param_2->Rotation).m128_f32[2]) & _UNK_15061cc78)),
     auVar2._12_4_ =
          -(uint)(param_3 <
                 (float)((uint)((param_1->Rotation).m128_f32[3] + (param_2->Rotation).m128_f32[3]) &
                        _UNK_15061cc7c)), iVar3 = movmskps(iVar3,auVar2), iVar3 != 0)) {
    return false;
  }
  return true;
}

// AreRotationsEqual @ 1417b4db0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UE::Math::TTransform<double>::AreRotationsEqual
          (TTransform<double> *param_1,TTransform<double> *param_2,double param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined4 in_EAX;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  dVar5 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar6 = (param_1->Rotation).ZW.m128d_f64[1];
  dVar15 = (param_1->Rotation).XY.m128d_f64[0];
  dVar16 = (param_1->Rotation).XY.m128d_f64[1];
  dVar11 = dVar5 - (param_2->Rotation).ZW.m128d_f64[0];
  dVar12 = dVar6 - (param_2->Rotation).ZW.m128d_f64[1];
  dVar5 = dVar5 + (param_2->Rotation).ZW.m128d_f64[0];
  dVar6 = dVar6 + (param_2->Rotation).ZW.m128d_f64[1];
  dVar13 = dVar15 - (param_2->Rotation).XY.m128d_f64[0];
  dVar14 = dVar16 - (param_2->Rotation).XY.m128d_f64[1];
  dVar15 = dVar15 + (param_2->Rotation).XY.m128d_f64[0];
  dVar16 = dVar16 + (param_2->Rotation).XY.m128d_f64[1];
  lVar10 = -(ulonglong)
            (param_3 <
            (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar12,0) & _UNK_15061cc88));
  auVar1._8_4_ = (int)lVar10;
  auVar1._0_8_ = -(ulonglong)
                  (param_3 <
                  (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar1._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
  iVar8 = movmskpd((int)param_1,auVar1);
  lVar10 = -(ulonglong)
            (param_3 <
            (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar14,0) & _UNK_15061cc88));
  auVar2._8_4_ = (int)lVar10;
  auVar2._0_8_ = -(ulonglong)
                  (param_3 <
                  (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar2._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
  uVar7 = movmskpd(in_EAX,auVar2);
  uVar9 = iVar8 << 2 | uVar7;
  if (uVar9 != 0) {
    lVar10 = -(ulonglong)
              (param_3 <
              (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar6,0) & _UNK_15061cc88));
    auVar3._8_4_ = (int)lVar10;
    auVar3._0_8_ = -(ulonglong)
                    (param_3 <
                    (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
    ;
    auVar3._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
    uVar9 = movmskpd(uVar9,auVar3);
    lVar10 = -(ulonglong)
              (param_3 <
              (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar16,0) & _UNK_15061cc88));
    auVar4._8_4_ = (int)lVar10;
    auVar4._0_8_ = -(ulonglong)
                    (param_3 <
                    (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar4._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
    iVar8 = movmskpd(uVar7,auVar4);
    if ((uVar9 & 0x3fffffff) != 0 || iVar8 != 0) {
      return false;
    }
  }
  return true;
}

// AreScale3DsEqual @ 1417b4e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UE::Math::TTransform<float>::AreScale3DsEqual
          (TTransform<float> *param_1,TTransform<float> *param_2,float param_3)

{
  undefined1 auVar1 [16];
  undefined4 in_EAX;
  int iVar2;
  
  auVar1._4_4_ = -(uint)(param_3 <
                        (float)((uint)((param_1->Scale3D).m128_f32[1] -
                                      (param_2->Scale3D).m128_f32[1]) & _UNK_15061cc74));
  auVar1._0_4_ = -(uint)(param_3 <
                        (float)((uint)((param_1->Scale3D).m128_f32[0] -
                                      (param_2->Scale3D).m128_f32[0]) &
                               __xmm_7fffffff7fffffff7fffffff7fffffff));
  auVar1._8_4_ = -(uint)(param_3 <
                        (float)((uint)((param_1->Scale3D).m128_f32[2] -
                                      (param_2->Scale3D).m128_f32[2]) & _UNK_15061cc78));
  auVar1._12_4_ =
       -(uint)(param_3 <
              (float)((uint)((param_1->Scale3D).m128_f32[3] - (param_2->Scale3D).m128_f32[3]) &
                     _UNK_15061cc7c));
  iVar2 = movmskps(in_EAX,auVar1);
  return iVar2 == 0;
}

// AreScale3DsEqual @ 1417b4e80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UE::Math::TTransform<double>::AreScale3DsEqual
          (TTransform<double> *param_1,TTransform<double> *param_2,double param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar6 = (param_1->Scale3D).ZW.m128d_f64[0] - (param_2->Scale3D).ZW.m128d_f64[0];
  dVar7 = (param_1->Scale3D).ZW.m128d_f64[1] - (param_2->Scale3D).ZW.m128d_f64[1];
  dVar8 = (param_1->Scale3D).XY.m128d_f64[0] - (param_2->Scale3D).XY.m128d_f64[0];
  dVar9 = (param_1->Scale3D).XY.m128d_f64[1] - (param_2->Scale3D).XY.m128d_f64[1];
  lVar5 = -(ulonglong)
           (param_3 <
           (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & _UNK_15061cc8c,
                            SUB84(dVar7,0) & _UNK_15061cc88));
  auVar1._8_4_ = (int)lVar5;
  auVar1._0_8_ = -(ulonglong)
                  (param_3 <
                  (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar1._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
  uVar4 = movmskpd((int)param_1,auVar1);
  lVar5 = -(ulonglong)
           (param_3 <
           (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & _UNK_15061cc8c,
                            SUB84(dVar9,0) & _UNK_15061cc88));
  auVar2._8_4_ = (int)lVar5;
  auVar2._0_8_ = -(ulonglong)
                  (param_3 <
                  (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar2._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
  iVar3 = movmskpd(in_EAX,auVar2);
  return (uVar4 & 0x3fffffff) == 0 && iVar3 == 0;
}

// AreTranslationsEqual @ 1417b4ed0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UE::Math::TTransform<float>::AreTranslationsEqual
          (TTransform<float> *param_1,TTransform<float> *param_2,float param_3)

{
  undefined1 auVar1 [16];
  undefined4 in_EAX;
  int iVar2;
  
  auVar1._4_4_ = -(uint)(param_3 <
                        (float)((uint)((param_1->Translation).m128_f32[1] -
                                      (param_2->Translation).m128_f32[1]) & _UNK_15061cc74));
  auVar1._0_4_ = -(uint)(param_3 <
                        (float)((uint)((param_1->Translation).m128_f32[0] -
                                      (param_2->Translation).m128_f32[0]) &
                               __xmm_7fffffff7fffffff7fffffff7fffffff));
  auVar1._8_4_ = -(uint)(param_3 <
                        (float)((uint)((param_1->Translation).m128_f32[2] -
                                      (param_2->Translation).m128_f32[2]) & _UNK_15061cc78));
  auVar1._12_4_ =
       -(uint)(param_3 <
              (float)((uint)((param_1->Translation).m128_f32[3] - (param_2->Translation).m128_f32[3]
                            ) & _UNK_15061cc7c));
  iVar2 = movmskps(in_EAX,auVar1);
  return iVar2 == 0;
}

// AreTranslationsEqual @ 1417b4f00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UE::Math::TTransform<double>::AreTranslationsEqual
          (TTransform<double> *param_1,TTransform<double> *param_2,double param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar6 = (param_1->Translation).ZW.m128d_f64[0] - (param_2->Translation).ZW.m128d_f64[0];
  dVar7 = (param_1->Translation).ZW.m128d_f64[1] - (param_2->Translation).ZW.m128d_f64[1];
  dVar8 = (param_1->Translation).XY.m128d_f64[0] - (param_2->Translation).XY.m128d_f64[0];
  dVar9 = (param_1->Translation).XY.m128d_f64[1] - (param_2->Translation).XY.m128d_f64[1];
  lVar5 = -(ulonglong)
           (param_3 <
           (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & _UNK_15061cc8c,
                            SUB84(dVar7,0) & _UNK_15061cc88));
  auVar1._8_4_ = (int)lVar5;
  auVar1._0_8_ = -(ulonglong)
                  (param_3 <
                  (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar1._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
  uVar4 = movmskpd((int)param_1,auVar1);
  lVar5 = -(ulonglong)
           (param_3 <
           (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & _UNK_15061cc8c,
                            SUB84(dVar9,0) & _UNK_15061cc88));
  auVar2._8_4_ = (int)lVar5;
  auVar2._0_8_ = -(ulonglong)
                  (param_3 <
                  (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar2._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
  iVar3 = movmskpd(in_EAX,auVar2);
  return (uVar4 & 0x3fffffff) == 0 && iVar3 == 0;
}

// Blend @ 1417b59e0

void __thiscall
UE::Math::TTransform<float>::Blend
          (TTransform<float> *this,TTransform<float> *param_1,TTransform<float> *param_2,
          float param_3)

{
  ulong64 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar10 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if ((float)((uint)param_3 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_3727c5ac) {
    uVar1 = (param_1->Rotation).m128_u64[1];
    (this->Rotation).m128_u64[0] = (param_1->Rotation).m128_u64[0];
    (this->Rotation).m128_u64[1] = uVar1;
    uVar1 = (param_1->Translation).m128_u64[1];
    (this->Translation).m128_u64[0] = (param_1->Translation).m128_u64[0];
    (this->Translation).m128_u64[1] = uVar1;
    uVar1 = (param_1->Scale3D).m128_u64[1];
    (this->Scale3D).m128_u64[0] = (param_1->Scale3D).m128_u64[0];
    (this->Scale3D).m128_u64[1] = uVar1;
    return;
  }
  if ((float)((uint)(param_3 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
      __real_3727c5ac) {
    uVar1 = (param_2->Rotation).m128_u64[1];
    (this->Rotation).m128_u64[0] = (param_2->Rotation).m128_u64[0];
    (this->Rotation).m128_u64[1] = uVar1;
    uVar1 = (param_2->Translation).m128_u64[1];
    (this->Translation).m128_u64[0] = (param_2->Translation).m128_u64[0];
    (this->Translation).m128_u64[1] = uVar1;
    uVar1 = (param_2->Scale3D).m128_u64[1];
    (this->Scale3D).m128_u64[0] = (param_2->Scale3D).m128_u64[0];
    (this->Scale3D).m128_u64[1] = uVar1;
    return;
  }
  fVar15 = GlobalVectorConstants::FloatOne.m128_f32[1];
  fVar16 = GlobalVectorConstants::FloatOne.m128_f32[3];
  fVar14 = GlobalVectorConstants::FloatOne.m128_f32[2];
  fVar17 = (param_2->Translation).m128_f32[1];
  fVar18 = (param_2->Translation).m128_f32[2];
  fVar9 = (param_2->Translation).m128_f32[3];
  fVar11 = (param_1->Translation).m128_f32[1];
  fVar12 = (param_1->Translation).m128_f32[2];
  fVar13 = (param_1->Translation).m128_f32[3];
  (this->Translation).m128_f32[0] =
       (GlobalVectorConstants::FloatOne.m128_f32[0] - param_3) * (param_1->Translation).m128_f32[0]
       + param_3 * (param_2->Translation).m128_f32[0];
  (this->Translation).m128_f32[1] = (fVar15 - param_3) * fVar11 + param_3 * fVar17;
  (this->Translation).m128_f32[2] = (fVar14 - param_3) * fVar12 + param_3 * fVar18;
  (this->Translation).m128_f32[3] = (fVar16 - param_3) * fVar13 + param_3 * fVar9;
  fVar18 = (param_2->Scale3D).m128_f32[1];
  fVar9 = (param_2->Scale3D).m128_f32[2];
  fVar11 = (param_2->Scale3D).m128_f32[3];
  fVar15 = GlobalVectorConstants::FloatOne.m128_f32[1];
  fVar16 = GlobalVectorConstants::FloatOne.m128_f32[2];
  fVar17 = GlobalVectorConstants::FloatOne.m128_f32[3];
  fVar12 = (param_1->Scale3D).m128_f32[1];
  fVar13 = (param_1->Scale3D).m128_f32[2];
  fVar14 = (param_1->Scale3D).m128_f32[3];
  (this->Scale3D).m128_f32[0] =
       (GlobalVectorConstants::FloatOne.m128_f32[0] - param_3) * (param_1->Scale3D).m128_f32[0] +
       param_3 * (param_2->Scale3D).m128_f32[0];
  (this->Scale3D).m128_f32[1] = (fVar15 - param_3) * fVar12 + param_3 * fVar18;
  (this->Scale3D).m128_f32[2] = (fVar16 - param_3) * fVar13 + param_3 * fVar9;
  (this->Scale3D).m128_f32[3] = (fVar17 - param_3) * fVar14 + param_3 * fVar11;
  fVar15 = (param_1->Rotation).m128_f32[0];
  fVar16 = (param_1->Rotation).m128_f32[1];
  fVar17 = (param_1->Rotation).m128_f32[2];
  fVar18 = (param_1->Rotation).m128_f32[3];
  fVar9 = fVar15 * (param_2->Rotation).m128_f32[0];
  fVar11 = fVar16 * (param_2->Rotation).m128_f32[1];
  fVar12 = fVar17 * (param_2->Rotation).m128_f32[2];
  fVar13 = fVar18 * (param_2->Rotation).m128_f32[3];
  fVar14 = fVar11 + fVar9;
  fVar9 = fVar9 + fVar11;
  fVar11 = fVar13 + fVar12;
  fVar12 = fVar12 + fVar13;
  uVar2 = -(uint)(0.0 <= fVar11 + fVar14);
  uVar3 = -(uint)(0.0 <= fVar12 + fVar9);
  uVar5 = -(uint)(0.0 <= fVar14 + fVar11);
  uVar7 = -(uint)(0.0 <= fVar9 + fVar12);
  fVar9 = (float)(~uVar2 & (uint)(0.0 - fVar15) | uVar2 & (uint)fVar15) *
          (GlobalVectorConstants::FloatOne.m128_f32[0] - param_3) +
          (param_2->Rotation).m128_f32[0] * param_3;
  fVar11 = (float)(~uVar3 & (uint)(0.0 - fVar16) | uVar3 & (uint)fVar16) *
           (GlobalVectorConstants::FloatOne.m128_f32[1] - param_3) +
           (param_2->Rotation).m128_f32[1] * param_3;
  fVar12 = (float)(~uVar5 & (uint)(0.0 - fVar17) | uVar5 & (uint)fVar17) *
           (GlobalVectorConstants::FloatOne.m128_f32[2] - param_3) +
           (param_2->Rotation).m128_f32[2] * param_3;
  fVar13 = (float)(~uVar7 & (uint)(0.0 - fVar18) | uVar7 & (uint)fVar18) *
           (GlobalVectorConstants::FloatOne.m128_f32[3] - param_3) +
           (param_2->Rotation).m128_f32[3] * param_3;
  fVar15 = fVar11 * fVar11 + fVar9 * fVar9;
  fVar16 = fVar9 * fVar9 + fVar11 * fVar11;
  fVar17 = fVar13 * fVar13 + fVar12 * fVar12;
  fVar18 = fVar12 * fVar12 + fVar13 * fVar13;
  auVar10._0_4_ = fVar17 + fVar15;
  auVar10._4_4_ = fVar18 + fVar16;
  auVar10._8_4_ = fVar15 + fVar17;
  auVar10._12_4_ = fVar16 + fVar18;
  uVar7 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar10._0_4_);
  uVar4 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar10._4_4_);
  uVar6 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar10._8_4_);
  uVar8 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <= auVar10._12_4_);
  auVar10 = sqrtps(auVar10,auVar10);
  auVar10 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar10);
  uVar2 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar3 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar5 = GlobalVectorConstants::Float0001.m128_u32[3];
  (this->Rotation).m128_u32[0] =
       (uint)(auVar10._0_4_ * fVar9) & uVar7 | ~uVar7 & GlobalVectorConstants::Float0001.m128_u32[0]
  ;
  (this->Rotation).m128_u32[1] = (uint)(auVar10._4_4_ * fVar11) & uVar4 | ~uVar4 & uVar2;
  (this->Rotation).m128_u32[2] = (uint)(auVar10._8_4_ * fVar12) & uVar6 | ~uVar6 & uVar3;
  (this->Rotation).m128_u32[3] = (uint)(auVar10._12_4_ * fVar13) & uVar8 | ~uVar8 & uVar5;
  return;
}

// Blend @ 1417b5b40

void __thiscall
UE::Math::TTransform<double>::Blend
          (TTransform<double> *this,TTransform<double> *param_1,TTransform<double> *param_2,
          float param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  double dVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar19;
  double dVar20;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint uVar21;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auVar22 [16];
  double dVar26;
  double dVar27;
  double dVar29;
  undefined1 auVar28 [16];
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  
  if ((float)((uint)param_3 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_3727c5ac) {
    dVar14 = (param_1->Rotation).XY.m128d_f64[1];
    (this->Rotation).XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
    (this->Rotation).XY.m128d_f64[1] = dVar14;
    dVar14 = (param_1->Rotation).ZW.m128d_f64[1];
    (this->Rotation).ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
    (this->Rotation).ZW.m128d_f64[1] = dVar14;
    dVar14 = (param_1->Translation).XY.m128d_f64[1];
    (this->Translation).XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
    (this->Translation).XY.m128d_f64[1] = dVar14;
    dVar14 = (param_1->Translation).ZW.m128d_f64[1];
    (this->Translation).ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
    (this->Translation).ZW.m128d_f64[1] = dVar14;
    dVar14 = (param_1->Scale3D).XY.m128d_f64[1];
    (this->Scale3D).XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
    (this->Scale3D).XY.m128d_f64[1] = dVar14;
    dVar14 = (param_1->Scale3D).ZW.m128d_f64[1];
    (this->Scale3D).ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
    (this->Scale3D).ZW.m128d_f64[1] = dVar14;
    return;
  }
  if ((float)((uint)(param_3 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
      __real_3727c5ac) {
    dVar14 = (param_2->Rotation).XY.m128d_f64[1];
    (this->Rotation).XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
    (this->Rotation).XY.m128d_f64[1] = dVar14;
    dVar14 = (param_2->Rotation).ZW.m128d_f64[1];
    (this->Rotation).ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
    (this->Rotation).ZW.m128d_f64[1] = dVar14;
    dVar14 = (param_2->Translation).XY.m128d_f64[1];
    (this->Translation).XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
    (this->Translation).XY.m128d_f64[1] = dVar14;
    dVar14 = (param_2->Translation).ZW.m128d_f64[1];
    (this->Translation).ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
    (this->Translation).ZW.m128d_f64[1] = dVar14;
    dVar14 = (param_2->Scale3D).XY.m128d_f64[1];
    (this->Scale3D).XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
    (this->Scale3D).XY.m128d_f64[1] = dVar14;
    dVar14 = (param_2->Scale3D).ZW.m128d_f64[1];
    (this->Scale3D).ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
    (this->Scale3D).ZW.m128d_f64[1] = dVar14;
    return;
  }
  dVar13 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0];
  dVar26 = (double)param_3;
  dVar29 = (double)param_3;
  dVar27 = (double)param_3;
  dVar30 = (double)param_3;
  dVar20 = (param_2->Translation).ZW.m128d_f64[0];
  dVar31 = (param_2->Translation).ZW.m128d_f64[1];
  dVar19 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1];
  dVar33 = (param_1->Translation).ZW.m128d_f64[0];
  dVar6 = (param_1->Translation).ZW.m128d_f64[1];
  dVar14 = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - dVar29) *
           (param_1->Translation).XY.m128d_f64[1] + (param_2->Translation).XY.m128d_f64[1] * dVar29;
  auVar18._8_4_ = SUB84(dVar14,0);
  auVar18._0_8_ =
       (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - dVar26) *
       (param_1->Translation).XY.m128d_f64[0] + (param_2->Translation).XY.m128d_f64[0] * dVar26;
  auVar18._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  *(undefined1 (*) [16])(this->Translation).XY.m128d_f64 = auVar18;
  (this->Translation).ZW.m128d_f64[0] = (dVar13 - dVar27) * dVar33 + dVar20 * dVar27;
  (this->Translation).ZW.m128d_f64[1] = (dVar19 - dVar30) * dVar6 + dVar31 * dVar30;
  dVar13 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0];
  dVar20 = (param_2->Scale3D).ZW.m128d_f64[0];
  dVar31 = (param_2->Scale3D).ZW.m128d_f64[1];
  dVar19 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1];
  dVar33 = (param_1->Scale3D).ZW.m128d_f64[0];
  dVar6 = (param_1->Scale3D).ZW.m128d_f64[1];
  dVar14 = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - dVar29) *
           (param_1->Scale3D).XY.m128d_f64[1] + (param_2->Scale3D).XY.m128d_f64[1] * dVar29;
  auVar34._8_4_ = SUB84(dVar14,0);
  auVar34._0_8_ =
       (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - dVar26) *
       (param_1->Scale3D).XY.m128d_f64[0] + (param_2->Scale3D).XY.m128d_f64[0] * dVar26;
  auVar34._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  *(undefined1 (*) [16])(this->Scale3D).XY.m128d_f64 = auVar34;
  (this->Scale3D).ZW.m128d_f64[0] = (dVar13 - dVar27) * dVar33 + dVar20 * dVar27;
  (this->Scale3D).ZW.m128d_f64[1] = (dVar19 - dVar30) * dVar6 + dVar31 * dVar30;
  auVar18 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
  dVar14 = (param_1->Rotation).ZW.m128d_f64[0] * (param_2->Rotation).ZW.m128d_f64[0] +
           (param_1->Rotation).XY.m128d_f64[0] * (param_2->Rotation).XY.m128d_f64[0];
  dVar20 = (param_1->Rotation).ZW.m128d_f64[1] * (param_2->Rotation).ZW.m128d_f64[1] +
           (param_1->Rotation).XY.m128d_f64[1] * (param_2->Rotation).XY.m128d_f64[1];
  auVar34 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  lVar7 = -(ulonglong)(0.0 <= dVar20 + dVar14);
  lVar10 = -(ulonglong)(0.0 <= dVar14 + dVar20);
  uVar21 = (uint)lVar7;
  uVar23 = (uint)((ulonglong)lVar7 >> 0x20);
  uVar24 = (uint)lVar10;
  uVar25 = (uint)((ulonglong)lVar10 >> 0x20);
  dVar14 = 0.0 - auVar34._0_8_;
  dVar20 = 0.0 - auVar34._8_8_;
  auVar15._0_4_ = auVar34._0_4_ & uVar21;
  auVar15._4_4_ = auVar34._4_4_ & uVar23;
  auVar15._8_4_ = auVar34._8_4_ & uVar24;
  auVar15._12_4_ = auVar34._12_4_ & uVar25;
  auVar32._0_4_ = ~uVar21 & SUB84(dVar14,0);
  auVar32._4_4_ = ~uVar23 & (uint)((ulonglong)dVar14 >> 0x20);
  auVar32._8_4_ = ~uVar24 & SUB84(dVar20,0);
  auVar32._12_4_ = ~uVar25 & (uint)((ulonglong)dVar20 >> 0x20);
  dVar14 = 0.0 - auVar18._0_8_;
  dVar20 = 0.0 - auVar18._8_8_;
  auVar28._0_4_ = ~uVar21 & SUB84(dVar14,0);
  auVar28._4_4_ = ~uVar23 & (uint)((ulonglong)dVar14 >> 0x20);
  auVar28._8_4_ = ~uVar24 & SUB84(dVar20,0);
  auVar28._12_4_ = ~uVar25 & (uint)((ulonglong)dVar20 >> 0x20);
  auVar3._4_4_ = auVar18._4_4_ & uVar23;
  auVar3._0_4_ = auVar18._0_4_ & uVar21;
  auVar3._8_4_ = auVar18._8_4_ & uVar24;
  auVar3._12_4_ = auVar18._12_4_ & uVar25;
  dVar31 = SUB168(auVar32 | auVar15,0) * (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - dVar26)
           + (param_2->Rotation).XY.m128d_f64[0] * dVar26;
  dVar33 = SUB168(auVar32 | auVar15,8) * (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - dVar29)
           + (param_2->Rotation).XY.m128d_f64[1] * dVar29;
  dVar27 = SUB168(auVar28 | auVar3,0) * (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] - dVar27)
           + (param_2->Rotation).ZW.m128d_f64[0] * dVar27;
  dVar30 = SUB168(auVar28 | auVar3,8) * (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1] - dVar30)
           + (param_2->Rotation).ZW.m128d_f64[1] * dVar30;
  auVar16._8_4_ = SUB84(dVar30,0);
  auVar16._0_8_ = dVar27;
  auVar16._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
  auVar17._0_8_ = dVar27 * dVar27 + dVar31 * dVar31;
  auVar17._8_8_ = auVar16._8_8_ * dVar30 + dVar33 * dVar33;
  dVar14 = auVar17._8_8_ + auVar17._0_8_;
  dVar20 = auVar17._0_8_ + auVar17._8_8_;
  auVar1._8_4_ = SUB84(dVar20,0);
  auVar1._0_8_ = dVar14;
  auVar1._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  auVar18 = sqrtpd(auVar17,auVar1);
  uVar8 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= dVar14);
  uVar11 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= dVar20)
  ;
  auVar34 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar18);
  auVar18 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar18);
  auVar35._0_8_ = uVar8 & (ulonglong)(auVar34._0_8_ * dVar31);
  uVar5 = uVar11 & (ulonglong)(auVar34._8_8_ * dVar33);
  auVar35._8_4_ = (undefined4)uVar5;
  auVar35._12_4_ = (undefined4)(uVar5 >> 0x20);
  uVar9 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= dVar14);
  uVar12 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= dVar20)
  ;
  auVar22._0_8_ = uVar9 & (ulonglong)(auVar18._0_8_ * dVar27);
  uVar5 = uVar12 & (ulonglong)(auVar18._8_8_ * dVar30);
  auVar22._8_4_ = (undefined4)uVar5;
  auVar22._12_4_ = (undefined4)(uVar5 >> 0x20);
  auVar4._4_4_ = ~(uint)(uVar8 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
  auVar4._0_4_ = ~(uint)uVar8 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
  auVar4._8_4_ = ~(uint)uVar11 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
  auVar4._12_4_ = ~(uint)(uVar11 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
  uVar21 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
  uVar23 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
  uVar24 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
  uVar25 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
  *(undefined1 (*) [16])(this->Rotation).XY.m128d_f64 = auVar35 | auVar4;
  auVar2._4_4_ = ~(uint)(uVar9 >> 0x20) & uVar23;
  auVar2._0_4_ = ~(uint)uVar9 & uVar21;
  auVar2._8_4_ = ~(uint)uVar12 & uVar24;
  auVar2._12_4_ = ~(uint)(uVar12 >> 0x20) & uVar25;
  *(undefined1 (*) [16])(this->Rotation).ZW.m128d_f64 = auVar22 | auVar2;
  return;
}

// BlendFromIdentityAndAccumulate @ 1417b5dd0

void __cdecl
UE::Math::TTransform<float>::BlendFromIdentityAndAccumulate
          (TTransform<float> *param_1,TTransform<float> *param_2,ScalarRegister *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar9 = (param_1->Rotation).m128_f32[0];
  fVar10 = (param_1->Rotation).m128_f32[1];
  fVar11 = (param_1->Rotation).m128_f32[2];
  fVar12 = (param_1->Rotation).m128_f32[3];
  uVar17 = -(uint)(0.0 <= (param_2->Rotation).m128_f32[0]);
  uVar18 = -(uint)(0.0 <= (param_2->Rotation).m128_f32[1]);
  uVar19 = -(uint)(0.0 <= (param_2->Rotation).m128_f32[2]);
  uVar20 = -(uint)(0.0 <= (param_2->Rotation).m128_f32[3]);
  fVar13 = (param_3->Value).m128_f32[0];
  fVar14 = (param_3->Value).m128_f32[1];
  fVar15 = (param_3->Value).m128_f32[2];
  fVar16 = (param_3->Value).m128_f32[3];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[3];
  fVar26 = (float)(~uVar17 & (uint)(0.0 - fVar1) | uVar17 & (uint)fVar1) *
           (GlobalVectorConstants::FloatOne.m128_f32[0] - fVar13) +
           (param_2->Rotation).m128_f32[0] * fVar13;
  fVar27 = (float)(~uVar18 & (uint)(0.0 - fVar3) | uVar18 & (uint)fVar3) *
           (GlobalVectorConstants::FloatOne.m128_f32[1] - fVar14) +
           (param_2->Rotation).m128_f32[1] * fVar14;
  fVar28 = (float)(~uVar19 & (uint)(0.0 - fVar5) | uVar19 & (uint)fVar5) *
           (GlobalVectorConstants::FloatOne.m128_f32[2] - fVar15) +
           (param_2->Rotation).m128_f32[2] * fVar15;
  fVar29 = (float)(~uVar20 & (uint)(0.0 - fVar7) | uVar20 & (uint)fVar7) *
           (GlobalVectorConstants::FloatOne.m128_f32[3] - fVar16) +
           (param_2->Rotation).m128_f32[3] * fVar16;
  fVar22 = fVar27 * fVar27 + fVar26 * fVar26;
  fVar23 = fVar26 * fVar26 + fVar27 * fVar27;
  fVar24 = fVar29 * fVar29 + fVar28 * fVar28;
  fVar25 = fVar28 * fVar28 + fVar29 * fVar29;
  auVar21._0_4_ = fVar24 + fVar22;
  auVar21._4_4_ = fVar25 + fVar23;
  auVar21._8_4_ = fVar22 + fVar24;
  auVar21._12_4_ = fVar23 + fVar25;
  uVar17 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar21._0_4_);
  uVar18 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar21._4_4_);
  uVar19 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar21._8_4_);
  uVar20 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <= auVar21._12_4_);
  auVar21 = sqrtps(auVar21,auVar21);
  auVar21 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar21);
  fVar30 = (float)((uint)(auVar21._0_4_ * fVar26) & uVar17 | ~uVar17 & (uint)fVar1);
  fVar27 = (float)((uint)(auVar21._4_4_ * fVar27) & uVar18 | ~uVar18 & (uint)fVar3);
  fVar28 = (float)((uint)(auVar21._8_4_ * fVar28) & uVar19 | ~uVar19 & (uint)fVar5);
  fVar29 = (float)((uint)(auVar21._12_4_ * fVar29) & uVar20 | ~uVar20 & (uint)fVar7);
  fVar1 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1];
  fVar7 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2];
  fVar24 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3];
  fVar3 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1];
  fVar22 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2];
  fVar25 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3];
  fVar5 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
  fVar23 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
  fVar26 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
  (param_1->Rotation).m128_f32[0] =
       fVar30 * fVar12 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] + fVar29 * fVar9 +
       fVar27 * fVar11 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
       fVar28 * fVar10 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
  (param_1->Rotation).m128_f32[1] =
       fVar30 * fVar11 * fVar1 + fVar29 * fVar10 + fVar27 * fVar12 * fVar3 + fVar28 * fVar9 * fVar5;
  (param_1->Rotation).m128_f32[2] =
       fVar30 * fVar10 * fVar7 + fVar29 * fVar11 + fVar27 * fVar9 * fVar22 +
       fVar28 * fVar12 * fVar23;
  (param_1->Rotation).m128_f32[3] =
       fVar30 * fVar9 * fVar24 + fVar29 * fVar12 + fVar27 * fVar10 * fVar25 +
       fVar28 * fVar11 * fVar26;
  fVar1 = (param_2->Scale3D).m128_f32[0];
  fVar3 = (param_2->Scale3D).m128_f32[1];
  fVar5 = (param_2->Scale3D).m128_f32[2];
  fVar7 = (param_2->Scale3D).m128_f32[3];
  fVar22 = (param_2->Translation).m128_f32[1];
  fVar23 = (param_2->Translation).m128_f32[2];
  fVar24 = (param_2->Translation).m128_f32[3];
  fVar25 = (param_1->Translation).m128_f32[1];
  fVar26 = (param_1->Translation).m128_f32[2];
  fVar9 = (param_1->Translation).m128_f32[3];
  fVar10 = (param_1->Scale3D).m128_f32[0];
  fVar11 = (param_1->Scale3D).m128_f32[1];
  fVar12 = (param_1->Scale3D).m128_f32[2];
  fVar27 = (param_1->Scale3D).m128_f32[3];
  (param_1->Translation).m128_f32[0] =
       (param_2->Translation).m128_f32[0] * fVar13 + (param_1->Translation).m128_f32[0];
  (param_1->Translation).m128_f32[1] = fVar22 * fVar14 + fVar25;
  (param_1->Translation).m128_f32[2] = fVar23 * fVar15 + fVar26;
  (param_1->Translation).m128_f32[3] = fVar24 * fVar16 + fVar9;
  (param_1->Scale3D).m128_f32[0] = (fVar1 * fVar13 + fVar2) * fVar10;
  (param_1->Scale3D).m128_f32[1] = (fVar3 * fVar14 + fVar4) * fVar11;
  (param_1->Scale3D).m128_f32[2] = (fVar5 * fVar15 + fVar6) * fVar12;
  (param_1->Scale3D).m128_f32[3] = (fVar7 * fVar16 + fVar8) * fVar27;
  return;
}

// BlendFromIdentityAndAccumulate @ 1417b5f00

void __cdecl
UE::Math::TTransform<double>::BlendFromIdentityAndAccumulate
          (TTransform<double> *param_1,TTransform<double> *param_2,ScalarRegister *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar38;
  undefined1 auVar37 [16];
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  
  dVar19 = (double)(param_3->Value).m128_f32[0];
  dVar20 = (double)(param_3->Value).m128_f32[1];
  dVar36 = (double)(param_3->Value).m128_f32[2];
  dVar38 = (double)(param_3->Value).m128_f32[3];
  dVar14 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dVar15 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  dVar17 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dVar18 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  dVar6 = (param_2->Rotation).XY.m128d_f64[0];
  dVar7 = (param_2->Rotation).XY.m128d_f64[1];
  uVar21 = -(ulonglong)(0.0 <= (param_2->Rotation).ZW.m128d_f64[0]);
  uVar23 = -(ulonglong)(0.0 <= (param_2->Rotation).ZW.m128d_f64[1]);
  uVar22 = -(ulonglong)(0.0 <= dVar6);
  uVar24 = -(ulonglong)(0.0 <= dVar7);
  auVar34._0_4_ = ~(uint)uVar22 & SUB84(0.0 - dVar14,0);
  auVar34._4_4_ = ~(uint)(uVar22 >> 0x20) & (uint)((ulonglong)(0.0 - dVar14) >> 0x20);
  auVar34._8_4_ = ~(uint)uVar24 & SUB84(0.0 - dVar15,0);
  auVar34._12_4_ = ~(uint)(uVar24 >> 0x20) & (uint)((ulonglong)(0.0 - dVar15) >> 0x20);
  auVar29._8_4_ = (int)((ulonglong)dVar15 & uVar24);
  auVar29._0_8_ = (ulonglong)dVar14 & uVar22;
  auVar29._12_4_ = (int)(((ulonglong)dVar15 & uVar24) >> 0x20);
  dVar33 = SUB168(auVar34 | auVar29,0) *
           ((double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar19) + dVar19 * dVar6;
  dVar35 = SUB168(auVar34 | auVar29,8) *
           ((double)GlobalVectorConstants::FloatOne.m128_f32[1] - dVar20) + dVar20 * dVar7;
  auVar26._0_8_ = (ulonglong)dVar17 & uVar21;
  auVar26._8_4_ = (undefined4)((ulonglong)dVar18 & uVar23);
  auVar26._12_4_ = (undefined4)(((ulonglong)dVar18 & uVar23) >> 0x20);
  auVar31._0_4_ = ~(uint)uVar21 & SUB84(0.0 - dVar17,0);
  auVar31._4_4_ = ~(uint)(uVar21 >> 0x20) & (uint)((ulonglong)(0.0 - dVar17) >> 0x20);
  auVar31._8_4_ = ~(uint)uVar23 & SUB84(0.0 - dVar18,0);
  auVar31._12_4_ = ~(uint)(uVar23 >> 0x20) & (uint)((ulonglong)(0.0 - dVar18) >> 0x20);
  dVar30 = SUB168(auVar31 | auVar26,0) *
           ((double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar36) +
           dVar36 * (param_2->Rotation).ZW.m128d_f64[0];
  dVar32 = SUB168(auVar31 | auVar26,8) *
           ((double)GlobalVectorConstants::FloatOne.m128_f32[3] - dVar38) +
           dVar38 * (param_2->Rotation).ZW.m128d_f64[1];
  auVar27._8_4_ = SUB84(dVar32,0);
  auVar27._0_8_ = dVar30;
  auVar27._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
  auVar28._0_8_ = dVar30 * dVar30 + dVar33 * dVar33;
  auVar28._8_8_ = auVar27._8_8_ * dVar32 + dVar35 * dVar35;
  dVar6 = auVar28._8_8_ + auVar28._0_8_;
  dVar7 = auVar28._0_8_ + auVar28._8_8_;
  auVar41._8_4_ = SUB84(dVar7,0);
  auVar41._0_8_ = dVar6;
  auVar41._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar29 = sqrtpd(auVar28,auVar41);
  uVar22 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= dVar6);
  uVar24 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= dVar7);
  auVar41 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar29);
  uVar23 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= dVar6);
  uVar25 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= dVar7);
  auVar42._0_8_ = uVar22 & (ulonglong)(auVar41._0_8_ * dVar33);
  uVar21 = uVar24 & (ulonglong)(auVar41._8_8_ * dVar35);
  auVar42._8_4_ = (undefined4)uVar21;
  auVar42._12_4_ = (undefined4)(uVar21 >> 0x20);
  auVar8._4_4_ = ~(uint)(uVar22 >> 0x20) & (uint)((ulonglong)dVar14 >> 0x20);
  auVar8._0_4_ = ~(uint)uVar22 & SUB84(dVar14,0);
  auVar8._8_4_ = ~(uint)uVar24 & SUB84(dVar15,0);
  auVar8._12_4_ = ~(uint)(uVar24 >> 0x20) & (uint)((ulonglong)dVar15 >> 0x20);
  dVar33 = (param_1->Rotation).XY.m128d_f64[0];
  dVar35 = (param_1->Rotation).XY.m128d_f64[1];
  auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar29);
  dVar40 = SUB168(auVar42 | auVar8,0);
  dVar43 = SUB168(auVar42 | auVar8,8);
  auVar37._0_8_ = uVar23 & (ulonglong)(auVar29._0_8_ * dVar30);
  uVar21 = uVar25 & (ulonglong)(auVar29._8_8_ * dVar32);
  auVar37._8_4_ = (undefined4)uVar21;
  auVar37._12_4_ = (undefined4)(uVar21 >> 0x20);
  auVar10._4_4_ = ~(uint)(uVar23 >> 0x20) & (uint)((ulonglong)dVar17 >> 0x20);
  auVar10._0_4_ = ~(uint)uVar23 & SUB84(dVar17,0);
  auVar10._8_4_ = ~(uint)uVar25 & SUB84(dVar18,0);
  auVar10._12_4_ = ~(uint)(uVar25 >> 0x20) & (uint)((ulonglong)dVar18 >> 0x20);
  dVar18 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar30 = (param_1->Rotation).ZW.m128d_f64[1];
  dVar32 = SUB168(auVar37 | auVar10,0);
  dVar39 = SUB168(auVar37 | auVar10,8);
  dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar14 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar17 = dVar33 * dVar40 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar30 * dVar39 +
           dVar35 * dVar43 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar18 * dVar32 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar15 = dVar18 * dVar40 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar35 * dVar39 +
           dVar30 * dVar43 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           dVar33 * dVar32 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar13._8_4_ = SUB84(dVar15,0);
  auVar13._0_8_ =
       dVar30 * dVar40 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar33 * dVar39 +
       dVar18 * dVar43 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar35 * dVar32 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  auVar13._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar13;
  auVar16._8_4_ = SUB84(dVar17,0);
  auVar16._0_8_ =
       dVar35 * dVar40 * dVar6 + dVar18 * dVar39 + dVar33 * dVar43 * dVar7 +
       dVar30 * dVar32 * dVar14;
  auVar16._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64 = auVar16;
  dVar7 = (param_2->Translation).ZW.m128d_f64[0];
  dVar14 = (param_2->Translation).ZW.m128d_f64[1];
  dVar15 = (param_2->Scale3D).XY.m128d_f64[0];
  dVar17 = (param_2->Scale3D).XY.m128d_f64[1];
  dVar18 = (param_2->Scale3D).ZW.m128d_f64[0];
  dVar33 = (param_2->Scale3D).ZW.m128d_f64[1];
  dVar6 = (param_2->Translation).XY.m128d_f64[1] * dVar20 + (param_1->Translation).XY.m128d_f64[1];
  dVar35 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] - dVar36;
  dVar30 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1] - dVar38;
  auVar5._8_4_ = SUB84(dVar6,0);
  auVar5._0_8_ = (param_2->Translation).XY.m128d_f64[0] * dVar19 +
                 (param_1->Translation).XY.m128d_f64[0];
  auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(param_1->Translation).XY.m128d_f64 = auVar5;
  dVar6 = dVar14 * dVar38 + dVar30 * 0.0 + (param_1->Translation).ZW.m128d_f64[1];
  auVar9._8_4_ = SUB84(dVar6,0);
  auVar9._0_8_ = dVar7 * dVar36 + dVar35 * 0.0 + (param_1->Translation).ZW.m128d_f64[0];
  auVar9._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(param_1->Translation).ZW.m128d_f64 = auVar9;
  dVar6 = (dVar17 * dVar20 + (double)fVar2) * (param_1->Scale3D).XY.m128d_f64[1];
  auVar11._8_4_ = SUB84(dVar6,0);
  auVar11._0_8_ = (dVar15 * dVar19 + (double)fVar1) * (param_1->Scale3D).XY.m128d_f64[0];
  auVar11._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(param_1->Scale3D).XY.m128d_f64 = auVar11;
  dVar6 = (dVar33 * dVar38 + dVar30 * 0.0 + (double)fVar4) * (param_1->Scale3D).ZW.m128d_f64[1];
  auVar12._8_4_ = SUB84(dVar6,0);
  auVar12._0_8_ =
       (dVar18 * dVar36 + dVar35 * 0.0 + (double)fVar3) * (param_1->Scale3D).ZW.m128d_f64[0];
  auVar12._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(param_1->Scale3D).ZW.m128d_f64 = auVar12;
  return;
}

// BlendWith @ 1417b6210

void __thiscall
UE::Math::TTransform<float>::BlendWith
          (TTransform<float> *this,TTransform<float> *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulong64 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar14 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  if (__real_3727c5ac < param_2) {
    if (__real_3f7fff58 <= param_2) {
      uVar5 = (param_1->Rotation).m128_u64[1];
      (this->Rotation).m128_u64[0] = (param_1->Rotation).m128_u64[0];
      (this->Rotation).m128_u64[1] = uVar5;
      uVar5 = (param_1->Translation).m128_u64[1];
      (this->Translation).m128_u64[0] = (param_1->Translation).m128_u64[0];
      (this->Translation).m128_u64[1] = uVar5;
      uVar5 = (param_1->Scale3D).m128_u64[1];
      (this->Scale3D).m128_u64[0] = (param_1->Scale3D).m128_u64[0];
      (this->Scale3D).m128_u64[1] = uVar5;
      return;
    }
    fVar13 = GlobalVectorConstants::FloatOne.m128_f32[1];
    fVar15 = GlobalVectorConstants::FloatOne.m128_f32[2];
    fVar16 = GlobalVectorConstants::FloatOne.m128_f32[3];
    fVar19 = (this->Rotation).m128_f32[0];
    fVar20 = (this->Rotation).m128_f32[1];
    fVar21 = (this->Rotation).m128_f32[2];
    fVar22 = (this->Rotation).m128_f32[3];
    fVar17 = (param_1->Translation).m128_f32[1];
    fVar18 = (param_1->Translation).m128_f32[2];
    fVar1 = (param_1->Translation).m128_f32[3];
    fVar2 = (this->Translation).m128_f32[1];
    fVar3 = (this->Translation).m128_f32[2];
    fVar4 = (this->Translation).m128_f32[3];
    (this->Translation).m128_f32[0] =
         (GlobalVectorConstants::FloatOne.m128_f32[0] - param_2) * (this->Translation).m128_f32[0] +
         param_2 * (param_1->Translation).m128_f32[0];
    (this->Translation).m128_f32[1] = (fVar13 - param_2) * fVar2 + param_2 * fVar17;
    (this->Translation).m128_f32[2] = (fVar15 - param_2) * fVar3 + param_2 * fVar18;
    (this->Translation).m128_f32[3] = (fVar16 - param_2) * fVar4 + param_2 * fVar1;
    fVar17 = (param_1->Scale3D).m128_f32[1];
    fVar18 = (param_1->Scale3D).m128_f32[2];
    fVar1 = (param_1->Scale3D).m128_f32[3];
    fVar13 = GlobalVectorConstants::FloatOne.m128_f32[1];
    fVar15 = GlobalVectorConstants::FloatOne.m128_f32[2];
    fVar16 = GlobalVectorConstants::FloatOne.m128_f32[3];
    fVar2 = (this->Scale3D).m128_f32[1];
    fVar3 = (this->Scale3D).m128_f32[2];
    fVar4 = (this->Scale3D).m128_f32[3];
    (this->Scale3D).m128_f32[0] =
         (GlobalVectorConstants::FloatOne.m128_f32[0] - param_2) * (this->Scale3D).m128_f32[0] +
         param_2 * (param_1->Scale3D).m128_f32[0];
    (this->Scale3D).m128_f32[1] = (fVar13 - param_2) * fVar2 + param_2 * fVar17;
    (this->Scale3D).m128_f32[2] = (fVar15 - param_2) * fVar3 + param_2 * fVar18;
    (this->Scale3D).m128_f32[3] = (fVar16 - param_2) * fVar4 + param_2 * fVar1;
    fVar13 = fVar19 * (param_1->Rotation).m128_f32[0];
    fVar15 = fVar20 * (param_1->Rotation).m128_f32[1];
    fVar16 = fVar21 * (param_1->Rotation).m128_f32[2];
    fVar17 = fVar22 * (param_1->Rotation).m128_f32[3];
    fVar18 = fVar15 + fVar13;
    fVar13 = fVar13 + fVar15;
    fVar15 = fVar17 + fVar16;
    fVar16 = fVar16 + fVar17;
    uVar6 = -(uint)(0.0 <= fVar15 + fVar18);
    uVar7 = -(uint)(0.0 <= fVar16 + fVar13);
    uVar9 = -(uint)(0.0 <= fVar18 + fVar15);
    uVar11 = -(uint)(0.0 <= fVar13 + fVar16);
    fVar17 = (float)(~uVar6 & (uint)(0.0 - fVar19) | uVar6 & (uint)fVar19) *
             (GlobalVectorConstants::FloatOne.m128_f32[0] - param_2) +
             (param_1->Rotation).m128_f32[0] * param_2;
    fVar20 = (float)(~uVar7 & (uint)(0.0 - fVar20) | uVar7 & (uint)fVar20) *
             (GlobalVectorConstants::FloatOne.m128_f32[1] - param_2) +
             (param_1->Rotation).m128_f32[1] * param_2;
    fVar21 = (float)(~uVar9 & (uint)(0.0 - fVar21) | uVar9 & (uint)fVar21) *
             (GlobalVectorConstants::FloatOne.m128_f32[2] - param_2) +
             (param_1->Rotation).m128_f32[2] * param_2;
    fVar22 = (float)(~uVar11 & (uint)(0.0 - fVar22) | uVar11 & (uint)fVar22) *
             (GlobalVectorConstants::FloatOne.m128_f32[3] - param_2) +
             (param_1->Rotation).m128_f32[3] * param_2;
    fVar13 = fVar20 * fVar20 + fVar17 * fVar17;
    fVar15 = fVar17 * fVar17 + fVar20 * fVar20;
    fVar16 = fVar22 * fVar22 + fVar21 * fVar21;
    fVar19 = fVar21 * fVar21 + fVar22 * fVar22;
    auVar14._0_4_ = fVar16 + fVar13;
    auVar14._4_4_ = fVar19 + fVar15;
    auVar14._8_4_ = fVar13 + fVar16;
    auVar14._12_4_ = fVar15 + fVar19;
    uVar11 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar14._0_4_);
    uVar8 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar14._4_4_);
    uVar10 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar14._8_4_);
    uVar12 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <= auVar14._12_4_);
    auVar14 = sqrtps(auVar14,auVar14);
    auVar14 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar14);
    uVar6 = GlobalVectorConstants::Float0001.m128_u32[1];
    uVar7 = GlobalVectorConstants::Float0001.m128_u32[2];
    uVar9 = GlobalVectorConstants::Float0001.m128_u32[3];
    (this->Rotation).m128_u32[0] =
         (uint)(auVar14._0_4_ * fVar17) & uVar11 |
         ~uVar11 & GlobalVectorConstants::Float0001.m128_u32[0];
    (this->Rotation).m128_u32[1] = (uint)(auVar14._4_4_ * fVar20) & uVar8 | ~uVar8 & uVar6;
    (this->Rotation).m128_u32[2] = (uint)(auVar14._8_4_ * fVar21) & uVar10 | ~uVar10 & uVar7;
    (this->Rotation).m128_u32[3] = (uint)(auVar14._12_4_ * fVar22) & uVar12 | ~uVar12 & uVar9;
  }
  return;
}

// BlendWith @ 1417b6330

void __thiscall
UE::Math::TTransform<double>::BlendWith
          (TTransform<double> *this,TTransform<double> *param_1,float param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar18;
  double dVar19;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint uVar20;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined1 auVar21 [16];
  double dVar25;
  double dVar26;
  double dVar28;
  undefined1 auVar27 [16];
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  
  if (__real_3727c5ac < param_2) {
    if (__real_3f7fff58 <= param_2) {
      dVar13 = (param_1->Rotation).XY.m128d_f64[1];
      (this->Rotation).XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
      (this->Rotation).XY.m128d_f64[1] = dVar13;
      dVar13 = (param_1->Rotation).ZW.m128d_f64[1];
      (this->Rotation).ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
      (this->Rotation).ZW.m128d_f64[1] = dVar13;
      dVar13 = (param_1->Translation).XY.m128d_f64[1];
      (this->Translation).XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
      (this->Translation).XY.m128d_f64[1] = dVar13;
      dVar13 = (param_1->Translation).ZW.m128d_f64[1];
      (this->Translation).ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
      (this->Translation).ZW.m128d_f64[1] = dVar13;
      dVar13 = (param_1->Scale3D).XY.m128d_f64[1];
      (this->Scale3D).XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
      (this->Scale3D).XY.m128d_f64[1] = dVar13;
      dVar13 = (param_1->Scale3D).ZW.m128d_f64[1];
      (this->Scale3D).ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
      (this->Scale3D).ZW.m128d_f64[1] = dVar13;
      return;
    }
    dVar12 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0];
    dVar25 = (double)param_2;
    dVar28 = (double)param_2;
    dVar26 = (double)param_2;
    dVar29 = (double)param_2;
    dVar19 = (param_1->Translation).ZW.m128d_f64[0];
    dVar30 = (param_1->Translation).ZW.m128d_f64[1];
    dVar18 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1];
    dVar32 = (this->Translation).ZW.m128d_f64[1];
    dVar13 = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - dVar28) *
             (this->Translation).XY.m128d_f64[1] + (param_1->Translation).XY.m128d_f64[1] * dVar28;
    auVar17._8_4_ = SUB84(dVar13,0);
    auVar17._0_8_ =
         (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - dVar25) *
         (this->Translation).XY.m128d_f64[0] + (param_1->Translation).XY.m128d_f64[0] * dVar25;
    auVar17._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    *(undefined1 (*) [16])(this->Translation).XY.m128d_f64 = auVar17;
    (this->Translation).ZW.m128d_f64[0] =
         (dVar12 - dVar26) * (this->Translation).ZW.m128d_f64[0] + dVar19 * dVar26;
    (this->Translation).ZW.m128d_f64[1] = (dVar18 - dVar29) * dVar32 + dVar30 * dVar29;
    dVar12 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0];
    dVar19 = (param_1->Scale3D).ZW.m128d_f64[0];
    dVar30 = (param_1->Scale3D).ZW.m128d_f64[1];
    dVar18 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1];
    dVar32 = (this->Scale3D).ZW.m128d_f64[1];
    dVar13 = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - dVar28) *
             (this->Scale3D).XY.m128d_f64[1] + (param_1->Scale3D).XY.m128d_f64[1] * dVar28;
    auVar33._8_4_ = SUB84(dVar13,0);
    auVar33._0_8_ =
         (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - dVar25) *
         (this->Scale3D).XY.m128d_f64[0] + (param_1->Scale3D).XY.m128d_f64[0] * dVar25;
    auVar33._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    *(undefined1 (*) [16])(this->Scale3D).XY.m128d_f64 = auVar33;
    (this->Scale3D).ZW.m128d_f64[0] =
         (dVar12 - dVar26) * (this->Scale3D).ZW.m128d_f64[0] + dVar19 * dVar26;
    (this->Scale3D).ZW.m128d_f64[1] = (dVar18 - dVar29) * dVar32 + dVar30 * dVar29;
    auVar17 = *(undefined1 (*) [16])(this->Rotation).ZW.m128d_f64;
    dVar13 = (this->Rotation).ZW.m128d_f64[0] * (param_1->Rotation).ZW.m128d_f64[0] +
             (this->Rotation).XY.m128d_f64[0] * (param_1->Rotation).XY.m128d_f64[0];
    dVar19 = (this->Rotation).ZW.m128d_f64[1] * (param_1->Rotation).ZW.m128d_f64[1] +
             (this->Rotation).XY.m128d_f64[1] * (param_1->Rotation).XY.m128d_f64[1];
    auVar33 = *(undefined1 (*) [16])(this->Rotation).XY.m128d_f64;
    lVar6 = -(ulonglong)(0.0 <= dVar19 + dVar13);
    lVar9 = -(ulonglong)(0.0 <= dVar13 + dVar19);
    uVar20 = (uint)lVar6;
    uVar22 = (uint)((ulonglong)lVar6 >> 0x20);
    uVar23 = (uint)lVar9;
    uVar24 = (uint)((ulonglong)lVar9 >> 0x20);
    dVar13 = 0.0 - auVar33._0_8_;
    dVar19 = 0.0 - auVar33._8_8_;
    auVar14._0_4_ = auVar33._0_4_ & uVar20;
    auVar14._4_4_ = auVar33._4_4_ & uVar22;
    auVar14._8_4_ = auVar33._8_4_ & uVar23;
    auVar14._12_4_ = auVar33._12_4_ & uVar24;
    auVar31._0_4_ = ~uVar20 & SUB84(dVar13,0);
    auVar31._4_4_ = ~uVar22 & (uint)((ulonglong)dVar13 >> 0x20);
    auVar31._8_4_ = ~uVar23 & SUB84(dVar19,0);
    auVar31._12_4_ = ~uVar24 & (uint)((ulonglong)dVar19 >> 0x20);
    dVar13 = 0.0 - auVar17._0_8_;
    dVar19 = 0.0 - auVar17._8_8_;
    auVar27._0_4_ = ~uVar20 & SUB84(dVar13,0);
    auVar27._4_4_ = ~uVar22 & (uint)((ulonglong)dVar13 >> 0x20);
    auVar27._8_4_ = ~uVar23 & SUB84(dVar19,0);
    auVar27._12_4_ = ~uVar24 & (uint)((ulonglong)dVar19 >> 0x20);
    auVar3._4_4_ = auVar17._4_4_ & uVar22;
    auVar3._0_4_ = auVar17._0_4_ & uVar20;
    auVar3._8_4_ = auVar17._8_4_ & uVar23;
    auVar3._12_4_ = auVar17._12_4_ & uVar24;
    dVar30 = SUB168(auVar31 | auVar14,0) *
             (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - dVar25) +
             (param_1->Rotation).XY.m128d_f64[0] * dVar25;
    dVar32 = SUB168(auVar31 | auVar14,8) *
             (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - dVar28) +
             (param_1->Rotation).XY.m128d_f64[1] * dVar28;
    dVar26 = SUB168(auVar27 | auVar3,0) *
             (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] - dVar26) +
             (param_1->Rotation).ZW.m128d_f64[0] * dVar26;
    dVar29 = SUB168(auVar27 | auVar3,8) *
             (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1] - dVar29) +
             (param_1->Rotation).ZW.m128d_f64[1] * dVar29;
    auVar15._8_4_ = SUB84(dVar29,0);
    auVar15._0_8_ = dVar26;
    auVar15._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
    auVar16._0_8_ = dVar26 * dVar26 + dVar30 * dVar30;
    auVar16._8_8_ = auVar15._8_8_ * dVar29 + dVar32 * dVar32;
    dVar13 = auVar16._8_8_ + auVar16._0_8_;
    dVar19 = auVar16._0_8_ + auVar16._8_8_;
    auVar1._8_4_ = SUB84(dVar19,0);
    auVar1._0_8_ = dVar13;
    auVar1._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
    auVar17 = sqrtpd(auVar16,auVar1);
    uVar7 = -(ulonglong)
             (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= dVar13);
    uVar10 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= dVar19);
    auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar17);
    auVar17 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar17);
    auVar34._0_8_ = uVar7 & (ulonglong)(auVar33._0_8_ * dVar30);
    uVar5 = uVar10 & (ulonglong)(auVar33._8_8_ * dVar32);
    auVar34._8_4_ = (undefined4)uVar5;
    auVar34._12_4_ = (undefined4)(uVar5 >> 0x20);
    uVar8 = -(ulonglong)
             (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= dVar13);
    uVar11 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= dVar19);
    auVar21._0_8_ = uVar8 & (ulonglong)(auVar17._0_8_ * dVar26);
    uVar5 = uVar11 & (ulonglong)(auVar17._8_8_ * dVar29);
    auVar21._8_4_ = (undefined4)uVar5;
    auVar21._12_4_ = (undefined4)(uVar5 >> 0x20);
    auVar4._4_4_ = ~(uint)(uVar7 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
    auVar4._0_4_ = ~(uint)uVar7 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
    auVar4._8_4_ = ~(uint)uVar10 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
    auVar4._12_4_ =
         ~(uint)(uVar10 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
    uVar20 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
    uVar22 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
    uVar23 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
    uVar24 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
    *(undefined1 (*) [16])(this->Rotation).XY.m128d_f64 = auVar34 | auVar4;
    auVar2._4_4_ = ~(uint)(uVar8 >> 0x20) & uVar22;
    auVar2._0_4_ = ~(uint)uVar8 & uVar20;
    auVar2._8_4_ = ~(uint)uVar11 & uVar23;
    auVar2._12_4_ = ~(uint)(uVar11 >> 0x20) & uVar24;
    *(undefined1 (*) [16])(this->Rotation).ZW.m128d_f64 = auVar21 | auVar2;
  }
  return;
}

// ConcatenateRotation @ 1417bc000

void __thiscall
UE::Math::TTransform<float>::ConcatenateRotation(TTransform<float> *this,TQuat<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar10 = (this->Rotation).m128_f32[0];
  fVar11 = (this->Rotation).m128_f32[1];
  fVar12 = (this->Rotation).m128_f32[2];
  fVar13 = (this->Rotation).m128_f32[3];
  fVar14 = param_1->X;
  fVar15 = param_1->Y;
  fVar16 = param_1->Z;
  fVar17 = param_1->W;
  fVar1 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1];
  fVar4 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2];
  fVar7 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3];
  fVar2 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1];
  fVar5 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2];
  fVar8 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3];
  fVar3 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
  fVar6 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
  fVar9 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
  (this->Rotation).m128_f32[0] =
       fVar10 * fVar17 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] + fVar13 * fVar14 +
       fVar11 * fVar16 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
       fVar12 * fVar15 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
  (this->Rotation).m128_f32[1] =
       fVar10 * fVar16 * fVar1 + fVar13 * fVar15 + fVar11 * fVar17 * fVar2 + fVar12 * fVar14 * fVar3
  ;
  (this->Rotation).m128_f32[2] =
       fVar10 * fVar15 * fVar4 + fVar13 * fVar16 + fVar11 * fVar14 * fVar5 + fVar12 * fVar17 * fVar6
  ;
  (this->Rotation).m128_f32[3] =
       fVar10 * fVar14 * fVar7 + fVar13 * fVar17 + fVar11 * fVar15 * fVar8 + fVar12 * fVar16 * fVar9
  ;
  return;
}

// ConcatenateRotation @ 1417bc070

void __thiscall
UE::Math::TTransform<double>::ConcatenateRotation(TTransform<double> *this,TQuat<double> *param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  dVar8 = (this->Rotation).ZW.m128d_f64[0];
  dVar9 = (this->Rotation).XY.m128d_f64[1];
  dVar10 = (this->Rotation).ZW.m128d_f64[1];
  dVar11 = param_1->Z;
  dVar12 = param_1->W;
  dVar13 = (this->Rotation).XY.m128d_f64[0];
  dVar14 = param_1->X;
  dVar15 = param_1->Y;
  dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar7 = dVar13 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar10 * dVar12 +
          dVar9 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar8 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar2 = dVar13 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar10 * dVar15 +
          dVar9 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar8 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = dVar13 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 dVar10 * dVar14 +
                 dVar9 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 dVar8 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Rotation).XY.m128d_f64 = auVar1;
  auVar6._8_4_ = SUB84(dVar7,0);
  auVar6._0_8_ = dVar13 * dVar15 * dVar4 + dVar10 * dVar11 + dVar9 * dVar14 * dVar5 +
                 dVar8 * dVar12 * dVar3;
  auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])(this->Rotation).ZW.m128d_f64 = auVar6;
  return;
}

// ConstructTransformFromMatrixWithDesiredScale @ 1417bc210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Math::TTransform<float>::ConstructTransformFromMatrixWithDesiredScale
          (TMatrix<float> *param_1,TMatrix<float> *param_2,__m128 *param_3,
          TTransform<float> *param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  __m128 _Var18;
  undefined1 auStack_a8 [32];
  TQuat<float> local_88;
  TMatrix<float> local_78;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  VectorMatrixMultiply(&local_78,param_1,param_2);
  TMatrix<float>::RemoveScaling(&local_78,__real_322bcc77);
  fVar6 = param_3->m128_f32[0];
  fVar7 = param_3->m128_f32[1];
  fVar8 = param_3->m128_f32[2];
  fVar9 = param_3->m128_f32[3];
  uVar10 = -(uint)(GlobalVectorConstants::FloatZero.m128_f32[0] <= fVar6);
  uVar11 = -(uint)(GlobalVectorConstants::FloatZero.m128_f32[1] <= fVar7);
  uVar12 = -(uint)(GlobalVectorConstants::FloatZero.m128_f32[2] <= fVar8);
  local_88.X = (float)(uVar10 & GlobalVectorConstants::FloatOne.m128_u32[0] |
                      ~uVar10 & GlobalVectorConstants::FloatMinusOne.m128_u32[0]);
  local_88.Y = (float)(uVar11 & GlobalVectorConstants::FloatOne.m128_u32[1] |
                      ~uVar11 & GlobalVectorConstants::FloatMinusOne.m128_u32[1]);
  fVar14 = (float)(uVar12 & GlobalVectorConstants::FloatOne.m128_u32[2] |
                  ~uVar12 & GlobalVectorConstants::FloatMinusOne.m128_u32[2]);
  local_78.M[0][0] = local_78.M[0][0] * local_88.X;
  local_78.M[0][1] = local_78.M[0][1] * local_88.X;
  local_78.M[0][2] = local_78.M[0][2] * local_88.X;
  local_78.M[1][1] = local_78.M[1][1] * local_88.Y;
  local_78.M[1][0] = local_78.M[1][0] * local_88.Y;
  local_78.M[2][0] = local_78.M[2][0] * fVar14;
  local_78.M[1][2] = local_78.M[1][2] * local_88.Y;
  local_78.M[2][2] = local_78.M[2][2] * fVar14;
  local_78.M[2][1] = local_78.M[2][1] * fVar14;
  TQuat<float>::TQuat<float>(&local_88,&local_78);
  fVar14 = local_88.Y * local_88.Y + local_88.X * local_88.X;
  fVar15 = local_88.X * local_88.X + local_88.Y * local_88.Y;
  fVar16 = local_88.W * local_88.W + local_88.Z * local_88.Z;
  fVar17 = local_88.Z * local_88.Z + local_88.W * local_88.W;
  auVar13._0_4_ = fVar16 + fVar14;
  auVar13._4_4_ = fVar17 + fVar15;
  auVar13._8_4_ = fVar14 + fVar16;
  auVar13._12_4_ = fVar15 + fVar17;
  bVar2 = ___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar13._0_4_;
  bVar3 = _UNK_1506895d4 <= auVar13._4_4_;
  bVar4 = _UNK_1506895d8 <= auVar13._8_4_;
  bVar5 = _UNK_1506895dc <= auVar13._12_4_;
  auVar13 = sqrtps(auVar13,auVar13);
  auVar13 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar13);
  uVar10 = GlobalVectorConstants::Float0001.m128_u32[0];
  uVar11 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar12 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar1 = GlobalVectorConstants::Float0001.m128_u32[3];
  (param_4->Scale3D).m128_f32[0] = fVar6;
  (param_4->Scale3D).m128_f32[1] = fVar7;
  (param_4->Scale3D).m128_f32[2] = fVar8;
  (param_4->Scale3D).m128_f32[3] = fVar9;
  _Var18.m128_f32[2] = local_78.M[3][2];
  _Var18._0_4_ = local_78.M[3][0];
  _Var18._4_4_ = local_78.M[3][1];
  _Var18.m128_f32[3] = 0.0;
  param_4->Translation = _Var18;
  (param_4->Rotation).m128_u32[0] =
       (uint)(auVar13._0_4_ * local_88.X) & -(uint)bVar2 | ~-(uint)bVar2 & uVar10;
  (param_4->Rotation).m128_u32[1] =
       (uint)(auVar13._4_4_ * local_88.Y) & -(uint)bVar3 | ~-(uint)bVar3 & uVar11;
  (param_4->Rotation).m128_u32[2] =
       (uint)(auVar13._8_4_ * local_88.Z) & -(uint)bVar4 | ~-(uint)bVar4 & uVar12;
  (param_4->Rotation).m128_u32[3] =
       (uint)(auVar13._12_4_ * local_88.W) & -(uint)bVar5 | ~-(uint)bVar5 & uVar1;
  return;
}

// ConstructTransformFromMatrixWithDesiredScale @ 1417bc3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Math::TTransform<double>::ConstructTransformFromMatrixWithDesiredScale
          (TMatrix<double> *param_1,TMatrix<double> *param_2,VectorRegister4Double *param_3,
          TTransform<double> *param_4)

{
  ulonglong uVar1;
  double dVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar15;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_148 [48];
  TQuat<double> local_118 [2];
  undefined1 local_c8 [40];
  double dStack_a0;
  double local_98;
  undefined1 local_88 [16];
  double local_78;
  double local_68;
  double dStack_60;
  double local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  VectorMatrixMultiply((TMatrix<double> *)local_c8,param_1,param_2);
  dVar2 = __real_3e45798ee0000000;
  TMatrix<double>::RemoveScaling((TMatrix<double> *)local_c8,__real_3e45798ee0000000);
  lVar3 = -(ulonglong)
           (GlobalVectorConstants::DoubleZero.XY.m128d_f64[0] <= (param_3->XY).m128d_f64[0]);
  lVar5 = -(ulonglong)
           (GlobalVectorConstants::DoubleZero.XY.m128d_f64[1] <= (param_3->XY).m128d_f64[1]);
  uVar7 = (uint)lVar3;
  uVar8 = (uint)((ulonglong)lVar3 >> 0x20);
  uVar9 = (uint)lVar5;
  uVar10 = (uint)((ulonglong)lVar5 >> 0x20);
  lVar3 = -(ulonglong)
           (GlobalVectorConstants::DoubleZero.ZW.m128d_f64[0] <= (param_3->ZW).m128d_f64[0]);
  uVar11 = (uint)lVar3;
  uVar15 = (uint)((ulonglong)lVar3 >> 0x20);
  auVar17._0_4_ = ~uVar7 & GlobalVectorConstants::DoubleMinusOne.XY.m128d_f64[0]._0_4_;
  auVar17._4_4_ = ~uVar8 & GlobalVectorConstants::DoubleMinusOne.XY.m128d_f64[0]._4_4_;
  auVar17._8_4_ = ~uVar9 & GlobalVectorConstants::DoubleMinusOne.XY.m128d_f64[1]._0_4_;
  auVar17._12_4_ = ~uVar10 & GlobalVectorConstants::DoubleMinusOne.XY.m128d_f64[1]._4_4_;
  auVar20._4_4_ = uVar8 & GlobalVectorConstants::DoubleOne.XY.m128d_f64[0]._4_4_;
  auVar20._0_4_ = uVar7 & GlobalVectorConstants::DoubleOne.XY.m128d_f64[0]._0_4_;
  auVar20._8_4_ = uVar9 & GlobalVectorConstants::DoubleOne.XY.m128d_f64[1]._0_4_;
  auVar20._12_4_ = uVar10 & GlobalVectorConstants::DoubleOne.XY.m128d_f64[1]._4_4_;
  dVar18 = (double)(CONCAT44(~uVar15 & GlobalVectorConstants::DoubleMinusOne.ZW.m128d_f64[0]._4_4_,
                             ~uVar11 & GlobalVectorConstants::DoubleMinusOne.ZW.m128d_f64[0]._0_4_)
                   | CONCAT44(uVar15 & GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0]._4_4_,
                              uVar11 & GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0]._0_4_));
  dVar16 = SUB168(auVar17 | auVar20,0);
  local_c8._0_8_ = (double)local_c8._0_8_ * dVar16;
  local_c8._8_8_ = (double)local_c8._8_8_ * dVar16;
  local_c8._16_8_ = (double)local_c8._16_8_ * dVar16;
  dVar12 = SUB168(auVar17 | auVar20,8);
  dVar16 = dStack_a0 * dVar12;
  unique0x100000c7 = SUB84(dVar16,0);
  local_c8._32_8_ = (double)local_c8._32_8_ * dVar12;
  unique0x100000cb = (int)((ulonglong)dVar16 >> 0x20);
  local_98 = local_98 * dVar12;
  dVar16 = (double)local_88._8_8_ * dVar18;
  local_88._8_4_ = SUB84(dVar16,0);
  local_88._0_8_ = (double)local_88._0_8_ * dVar18;
  local_88._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
  local_78 = local_78 * dVar18;
  TQuat<double>::TQuat<double>(local_118,(TMatrix<double> *)local_c8);
  dVar12 = local_118[0].Z * local_118[0].Z + local_118[0].X * local_118[0].X;
  dVar18 = local_118[0].W * local_118[0].W + local_118[0].Y * local_118[0].Y;
  dVar16 = dVar18 + dVar12;
  dVar12 = dVar12 + dVar18;
  auVar21._8_4_ = SUB84(dVar12,0);
  auVar21._0_8_ = dVar16;
  auVar21._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  auVar20 = sqrtpd(in_XMM4,auVar21);
  uVar4 = -(ulonglong)(dVar2 <= dVar16);
  uVar6 = -(ulonglong)(dVar2 <= dVar12);
  uVar7 = (uint)(uVar4 >> 0x20);
  uVar8 = (uint)(uVar6 >> 0x20);
  auVar21 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar20);
  auVar22._0_8_ = uVar4 & (ulonglong)(auVar21._0_8_ * local_118[0].X);
  uVar1 = uVar6 & (ulonglong)(auVar21._8_8_ * local_118[0].Y);
  auVar22._8_4_ = (undefined4)uVar1;
  auVar22._12_4_ = (undefined4)(uVar1 >> 0x20);
  auVar13._0_4_ = ~(uint)uVar4 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar13._4_4_ =
       ~uVar7 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar13._8_4_ = ~(uint)uVar6 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar13._12_4_ =
       ~uVar8 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar20 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar20);
  auVar19._0_4_ = ~(uint)uVar4 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar19._4_4_ =
       ~uVar7 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar19._8_4_ = ~(uint)uVar6 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar19._12_4_ =
       ~uVar8 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  dVar16 = (param_3->XY).m128d_f64[1];
  auVar14._0_8_ = (ulonglong)(auVar20._0_8_ * local_118[0].Z) & uVar4;
  uVar6 = (ulonglong)(auVar20._8_8_ * local_118[0].W) & uVar6;
  auVar14._8_4_ = (undefined4)uVar6;
  auVar14._12_4_ = (undefined4)(uVar6 >> 0x20);
  (param_4->Scale3D).XY.m128d_f64[0] = (param_3->XY).m128d_f64[0];
  (param_4->Scale3D).XY.m128d_f64[1] = dVar16;
  dVar16 = (param_3->ZW).m128d_f64[1];
  (param_4->Scale3D).ZW.m128d_f64[0] = (param_3->ZW).m128d_f64[0];
  (param_4->Scale3D).ZW.m128d_f64[1] = dVar16;
  *(undefined1 (*) [16])(param_4->Rotation).XY.m128d_f64 = auVar22 | auVar13;
  *(undefined1 (*) [16])(param_4->Rotation).ZW.m128d_f64 = auVar19 | auVar14;
  (param_4->Translation).XY.m128d_f64[0] = local_68;
  (param_4->Translation).XY.m128d_f64[1] = dStack_60;
  (param_4->Translation).ZW.m128d_f64[0] = local_58;
  (param_4->Translation).ZW.m128d_f64[1] = 0.0;
  return;
}

// ContainsNaN @ 1417bcd60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall UE::Math::TTransform<float>::ContainsNaN(TTransform<float> *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 in_EAX;
  int iVar4;
  
  auVar1._4_4_ = -(uint)((float)((uint)_UNK_1506896e4 & (this->Rotation).m128_u32[1]) ==
                        _UNK_1506896e4);
  auVar1._0_4_ = -(uint)((float)((uint)__xmm_7f8000007f8000007f8000007f800000 &
                                (this->Rotation).m128_u32[0]) ==
                        __xmm_7f8000007f8000007f8000007f800000);
  auVar1._8_4_ = -(uint)((float)((uint)_UNK_1506896e8 & (this->Rotation).m128_u32[2]) ==
                        _UNK_1506896e8);
  auVar1._12_4_ =
       -(uint)((float)((uint)_UNK_1506896ec & (this->Rotation).m128_u32[3]) == _UNK_1506896ec);
  iVar4 = movmskps(in_EAX,auVar1);
  if ((iVar4 == 0) &&
     (auVar2._4_4_ = -(uint)((float)((uint)_UNK_1506896e4 & (this->Translation).m128_u32[1]) ==
                            _UNK_1506896e4),
     auVar2._0_4_ = -(uint)((float)((uint)__xmm_7f8000007f8000007f8000007f800000 &
                                   (this->Translation).m128_u32[0]) ==
                           __xmm_7f8000007f8000007f8000007f800000),
     auVar2._8_4_ = -(uint)((float)((uint)_UNK_1506896e8 & (this->Translation).m128_u32[2]) ==
                           _UNK_1506896e8),
     auVar2._12_4_ =
          -(uint)((float)((uint)_UNK_1506896ec & (this->Translation).m128_u32[3]) == _UNK_1506896ec)
     , iVar4 = movmskps(0,auVar2), iVar4 == 0)) {
    auVar3._4_4_ = -(uint)((float)((uint)_UNK_1506896e4 & (this->Scale3D).m128_u32[1]) ==
                          _UNK_1506896e4);
    auVar3._0_4_ = -(uint)((float)((uint)__xmm_7f8000007f8000007f8000007f800000 &
                                  (this->Scale3D).m128_u32[0]) ==
                          __xmm_7f8000007f8000007f8000007f800000);
    auVar3._8_4_ = -(uint)((float)((uint)_UNK_1506896e8 & (this->Scale3D).m128_u32[2]) ==
                          _UNK_1506896e8);
    auVar3._12_4_ =
         -(uint)((float)((uint)_UNK_1506896ec & (this->Scale3D).m128_u32[3]) == _UNK_1506896ec);
    iVar4 = movmskps(0,auVar3);
    return iVar4 != 0;
  }
  return true;
}

// ContainsNaN @ 1417bcdb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall UE::Math::TTransform<double>::ContainsNaN(TTransform<double> *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 in_EAX;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar12;
  double dVar11;
  uint uVar13;
  uint uVar15;
  double dVar14;
  
  uVar10 = (uint)__xmm_7ff00000000000007ff0000000000000;
  uVar12 = __xmm_7ff00000000000007ff0000000000000._4_4_;
  uVar13 = __xmm_7ff00000000000007ff0000000000000._8_4_;
  uVar15 = __xmm_7ff00000000000007ff0000000000000._12_4_;
  dVar11 = (double)__xmm_7ff00000000000007ff0000000000000;
  dVar14 = __xmm_7ff00000000000007ff0000000000000._8_8_;
  lVar9 = -(ulonglong)
           ((double)CONCAT44(uVar15 & *(uint *)((longlong)(this->Rotation).ZW.m128d_f64 + 0xc),
                             uVar13 & *(uint *)((this->Rotation).ZW.m128d_f64 + 1)) == dVar14);
  auVar1._8_4_ = (int)lVar9;
  auVar1._0_8_ = -(ulonglong)
                  ((double)CONCAT44(uVar12 & *(uint *)((longlong)(this->Rotation).ZW.m128d_f64 + 4),
                                    uVar10 & *(uint *)(this->Rotation).ZW.m128d_f64) == dVar11);
  auVar1._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
  uVar8 = movmskpd((int)this,auVar1);
  lVar9 = -(ulonglong)
           ((double)CONCAT44(uVar15 & *(uint *)((longlong)(this->Rotation).XY.m128d_f64 + 0xc),
                             uVar13 & *(uint *)((this->Rotation).XY.m128d_f64 + 1)) == dVar14);
  auVar4._8_4_ = (int)lVar9;
  auVar4._0_8_ = -(ulonglong)
                  ((double)CONCAT44(uVar12 & *(uint *)((longlong)(this->Rotation).XY.m128d_f64 + 4),
                                    uVar10 & *(uint *)(this->Rotation).XY.m128d_f64) == dVar11);
  auVar4._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
  iVar7 = movmskpd(in_EAX,auVar4);
  if ((uVar8 & 0x3fffffff) == 0 && iVar7 == 0) {
    lVar9 = -(ulonglong)
             ((double)CONCAT44(uVar15 & *(uint *)((longlong)(this->Translation).ZW.m128d_f64 + 0xc),
                               uVar13 & *(uint *)((this->Translation).ZW.m128d_f64 + 1)) == dVar14);
    auVar2._8_4_ = (int)lVar9;
    auVar2._0_8_ = -(ulonglong)
                    ((double)CONCAT44(uVar12 & *(uint *)((longlong)(this->Translation).ZW.m128d_f64
                                                        + 4),
                                      uVar10 & *(uint *)(this->Translation).ZW.m128d_f64) == dVar11)
    ;
    auVar2._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
    uVar8 = movmskpd(0,auVar2);
    lVar9 = -(ulonglong)
             ((double)CONCAT44(uVar15 & *(uint *)((longlong)(this->Translation).XY.m128d_f64 + 0xc),
                               uVar13 & *(uint *)((this->Translation).XY.m128d_f64 + 1)) == dVar14);
    auVar5._8_4_ = (int)lVar9;
    auVar5._0_8_ = -(ulonglong)
                    ((double)CONCAT44(uVar12 & *(uint *)((longlong)(this->Translation).XY.m128d_f64
                                                        + 4),
                                      uVar10 & *(uint *)(this->Translation).XY.m128d_f64) == dVar11)
    ;
    auVar5._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
    iVar7 = movmskpd(iVar7,auVar5);
    if ((uVar8 & 0x3fffffff) == 0 && iVar7 == 0) {
      lVar9 = -(ulonglong)
               ((double)CONCAT44(uVar15 & *(uint *)((longlong)(this->Scale3D).ZW.m128d_f64 + 0xc),
                                 uVar13 & *(uint *)((this->Scale3D).ZW.m128d_f64 + 1)) == dVar14);
      auVar3._8_4_ = (int)lVar9;
      auVar3._0_8_ = -(ulonglong)
                      ((double)CONCAT44(uVar12 & *(uint *)((longlong)(this->Scale3D).ZW.m128d_f64 +
                                                          4),
                                        uVar10 & *(uint *)(this->Scale3D).ZW.m128d_f64) == dVar11);
      auVar3._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
      uVar8 = movmskpd(0,auVar3);
      lVar9 = -(ulonglong)
               ((double)CONCAT44(uVar15 & *(uint *)((longlong)(this->Scale3D).XY.m128d_f64 + 0xc),
                                 uVar13 & *(uint *)((this->Scale3D).XY.m128d_f64 + 1)) == dVar14);
      auVar6._8_4_ = (int)lVar9;
      auVar6._0_8_ = -(ulonglong)
                      ((double)CONCAT44(uVar12 & *(uint *)((longlong)(this->Scale3D).XY.m128d_f64 +
                                                          4),
                                        uVar10 & *(uint *)(this->Scale3D).XY.m128d_f64) == dVar11);
      auVar6._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
      iVar7 = movmskpd(iVar7,auVar6);
      return (uVar8 & 0x3fffffff) != 0 || iVar7 != 0;
    }
  }
  return true;
}

// CopyRotation @ 1417bdad0

void __thiscall
UE::Math::TTransform<float>::CopyRotation(TTransform<float> *this,TTransform<float> *param_1)

{
  ulong64 uVar1;
  
  uVar1 = (param_1->Rotation).m128_u64[1];
  (this->Rotation).m128_u64[0] = (param_1->Rotation).m128_u64[0];
  (this->Rotation).m128_u64[1] = uVar1;
  return;
}

// CopyRotation @ 1417bdae0

void __thiscall
UE::Math::TTransform<double>::CopyRotation(TTransform<double> *this,TTransform<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->Rotation).XY.m128d_f64[1];
  (this->Rotation).XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (this->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Rotation).ZW.m128d_f64[1];
  (this->Rotation).ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
  (this->Rotation).ZW.m128d_f64[1] = dVar1;
  return;
}

// CopyRotationPart @ 1417bdb00

void __thiscall
UE::Math::TTransform<float>::CopyRotationPart(TTransform<float> *this,TTransform<float> *param_1)

{
  ulong64 uVar1;
  
  uVar1 = (param_1->Rotation).m128_u64[1];
  (this->Rotation).m128_u64[0] = (param_1->Rotation).m128_u64[0];
  (this->Rotation).m128_u64[1] = uVar1;
  uVar1 = (param_1->Scale3D).m128_u64[1];
  (this->Scale3D).m128_u64[0] = (param_1->Scale3D).m128_u64[0];
  (this->Scale3D).m128_u64[1] = uVar1;
  return;
}

// CopyRotationPart @ 1417bdb20

void __thiscall
UE::Math::TTransform<double>::CopyRotationPart(TTransform<double> *this,TTransform<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->Rotation).XY.m128d_f64[1];
  (this->Rotation).XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (this->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Rotation).ZW.m128d_f64[1];
  (this->Rotation).ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
  (this->Rotation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Scale3D).XY.m128d_f64[1];
  (this->Scale3D).XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
  (this->Scale3D).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Scale3D).ZW.m128d_f64[1];
  (this->Scale3D).ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
  (this->Scale3D).ZW.m128d_f64[1] = dVar1;
  return;
}

// CopyScale3D @ 1417bdb50

void __thiscall
UE::Math::TTransform<float>::CopyScale3D(TTransform<float> *this,TTransform<float> *param_1)

{
  ulong64 uVar1;
  
  uVar1 = (param_1->Scale3D).m128_u64[1];
  (this->Scale3D).m128_u64[0] = (param_1->Scale3D).m128_u64[0];
  (this->Scale3D).m128_u64[1] = uVar1;
  return;
}

// CopyScale3D @ 1417bdb60

void __thiscall
UE::Math::TTransform<double>::CopyScale3D(TTransform<double> *this,TTransform<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->Scale3D).XY.m128d_f64[1];
  (this->Scale3D).XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
  (this->Scale3D).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Scale3D).ZW.m128d_f64[1];
  (this->Scale3D).ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
  (this->Scale3D).ZW.m128d_f64[1] = dVar1;
  return;
}

// CopyTranslation @ 1417bdb80

void __thiscall
UE::Math::TTransform<float>::CopyTranslation(TTransform<float> *this,TTransform<float> *param_1)

{
  ulong64 uVar1;
  
  uVar1 = (param_1->Translation).m128_u64[1];
  (this->Translation).m128_u64[0] = (param_1->Translation).m128_u64[0];
  (this->Translation).m128_u64[1] = uVar1;
  return;
}

// CopyTranslation @ 1417bdb90

void __thiscall
UE::Math::TTransform<double>::CopyTranslation(TTransform<double> *this,TTransform<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->Translation).XY.m128d_f64[1];
  (this->Translation).XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
  (this->Translation).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Translation).ZW.m128d_f64[1];
  (this->Translation).ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
  (this->Translation).ZW.m128d_f64[1] = dVar1;
  return;
}

// CopyTranslationAndScale3D @ 1417bdbb0

void __thiscall
UE::Math::TTransform<float>::CopyTranslationAndScale3D
          (TTransform<float> *this,TTransform<float> *param_1)

{
  ulong64 uVar1;
  
  uVar1 = (param_1->Translation).m128_u64[1];
  (this->Translation).m128_u64[0] = (param_1->Translation).m128_u64[0];
  (this->Translation).m128_u64[1] = uVar1;
  uVar1 = (param_1->Scale3D).m128_u64[1];
  (this->Scale3D).m128_u64[0] = (param_1->Scale3D).m128_u64[0];
  (this->Scale3D).m128_u64[1] = uVar1;
  return;
}

// CopyTranslationAndScale3D @ 1417bdbd0

void __thiscall
UE::Math::TTransform<double>::CopyTranslationAndScale3D
          (TTransform<double> *this,TTransform<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->Translation).XY.m128d_f64[1];
  (this->Translation).XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
  (this->Translation).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Translation).ZW.m128d_f64[1];
  (this->Translation).ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
  (this->Translation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Scale3D).XY.m128d_f64[1];
  (this->Scale3D).XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
  (this->Scale3D).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Scale3D).ZW.m128d_f64[1];
  (this->Scale3D).ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
  (this->Scale3D).ZW.m128d_f64[1] = dVar1;
  return;
}

// DebugEqualMatrix @ 1417c1b60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Math::TTransform<float>::DebugEqualMatrix(TTransform<float> *this,TMatrix<float> *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 extraout_EAX;
  int iVar19;
  int extraout_EAX_00;
  int extraout_EAX_01;
  int extraout_EAX_02;
  int extraout_EAX_03;
  int iVar20;
  int extraout_EAX_04;
  int extraout_EAX_05;
  int extraout_EAX_06;
  int extraout_EAX_07;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float local_98;
  float fStack_94;
  __m128 local_88;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  
  SetFromMatrix((TTransform<float> *)&local_88,param_1);
  fVar18 = _UNK_15068960c;
  fVar17 = _UNK_150689608;
  fVar16 = _UNK_150689604;
  fVar15 = ___xmm_3c23d70a3c23d70a3c23d70a3c23d70a;
  fVar14 = _UNK_1506895ec;
  fVar13 = _UNK_1506895e8;
  fVar12 = _UNK_1506895e4;
  fVar11 = ___xmm_38d1b71738d1b71738d1b71738d1b717;
  uVar10 = _UNK_15061cc7c;
  uVar9 = _UNK_15061cc78;
  uVar8 = _UNK_15061cc74;
  uVar7 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar1._4_4_ = -(uint)(_UNK_1506895e4 <
                        (float)((uint)((this->Translation).m128_f32[1] - fStack_74) & _UNK_15061cc74
                               ));
  auVar1._0_4_ = -(uint)(___xmm_38d1b71738d1b71738d1b71738d1b717 <
                        (float)((uint)((this->Translation).m128_f32[0] - local_78) &
                               __xmm_7fffffff7fffffff7fffffff7fffffff));
  auVar1._8_4_ = -(uint)(_UNK_1506895e8 <
                        (float)((uint)((this->Translation).m128_f32[2] - fStack_70) & _UNK_15061cc78
                               ));
  auVar1._12_4_ =
       -(uint)(_UNK_1506895ec <
              (float)((uint)((this->Translation).m128_f32[3] - fStack_6c) & _UNK_15061cc7c));
  iVar19 = movmskps(extraout_EAX,auVar1);
  if (iVar19 == 0) {
    auVar2._4_4_ = -(uint)(_UNK_1506895e4 <
                          (float)((uint)((this->Rotation).m128_f32[1] - local_88.m128_f32[1]) &
                                 _UNK_15061cc74));
    auVar2._0_4_ = -(uint)(___xmm_38d1b71738d1b71738d1b71738d1b717 <
                          (float)((uint)((this->Rotation).m128_f32[0] - local_88.m128_f32[0]) &
                                 __xmm_7fffffff7fffffff7fffffff7fffffff));
    auVar2._8_4_ = -(uint)(_UNK_1506895e8 <
                          (float)((uint)((this->Rotation).m128_f32[2] - local_88.m128_f32[2]) &
                                 _UNK_15061cc78));
    auVar2._12_4_ =
         -(uint)(_UNK_1506895ec <
                (float)((uint)((this->Rotation).m128_f32[3] - local_88.m128_f32[3]) & _UNK_15061cc7c
                       ));
    iVar19 = movmskps(0,auVar2);
    if (((iVar19 == 0) ||
        (auVar3._4_4_ = -(uint)(_UNK_1506895e4 <
                               (float)((uint)(local_88.m128_f32[1] + (this->Rotation).m128_f32[1]) &
                                      _UNK_15061cc74)),
        auVar3._0_4_ = -(uint)(___xmm_38d1b71738d1b71738d1b71738d1b717 <
                              (float)((uint)(local_88.m128_f32[0] + (this->Rotation).m128_f32[0]) &
                                     __xmm_7fffffff7fffffff7fffffff7fffffff)),
        auVar3._8_4_ = -(uint)(_UNK_1506895e8 <
                              (float)((uint)(local_88.m128_f32[2] + (this->Rotation).m128_f32[2]) &
                                     _UNK_15061cc78)),
        auVar3._12_4_ =
             -(uint)(_UNK_1506895ec <
                    (float)((uint)(local_88.m128_f32[3] + (this->Rotation).m128_f32[3]) &
                           _UNK_15061cc7c)), iVar19 = movmskps(iVar19,auVar3), iVar19 == 0)) &&
       (auVar4._4_4_ = -(uint)(_UNK_1506895e4 <
                              (float)((uint)((this->Scale3D).m128_f32[1] - fStack_64) &
                                     _UNK_15061cc74)),
       auVar4._0_4_ = -(uint)(___xmm_38d1b71738d1b71738d1b71738d1b717 <
                             (float)((uint)((this->Scale3D).m128_f32[0] - local_68) &
                                    __xmm_7fffffff7fffffff7fffffff7fffffff)),
       auVar4._8_4_ = -(uint)(_UNK_1506895e8 <
                             (float)((uint)((this->Scale3D).m128_f32[2] - fStack_60) &
                                    _UNK_15061cc78)),
       auVar4._12_4_ =
            -(uint)(_UNK_1506895ec <
                   (float)((uint)((this->Scale3D).m128_f32[3] - fStack_5c) & _UNK_15061cc7c)),
       iVar19 = movmskps(0,auVar4), iVar19 == 0)) {
      return true;
    }
  }
  auVar5._4_4_ = -(uint)(_UNK_150689604 <
                        (float)((uint)((this->Scale3D).m128_f32[1] - fStack_64) & _UNK_15061cc74));
  auVar5._0_4_ = -(uint)(___xmm_3c23d70a3c23d70a3c23d70a3c23d70a <
                        (float)((uint)((this->Scale3D).m128_f32[0] - local_68) &
                               __xmm_7fffffff7fffffff7fffffff7fffffff));
  auVar5._8_4_ = -(uint)(_UNK_150689608 <
                        (float)((uint)((this->Scale3D).m128_f32[2] - fStack_60) & _UNK_15061cc78));
  auVar5._12_4_ =
       -(uint)(_UNK_15068960c <
              (float)((uint)((this->Scale3D).m128_f32[3] - fStack_5c) & _UNK_15061cc7c));
  iVar19 = movmskps(iVar19,auVar5);
  if ((iVar19 != 0) && (4 < (byte)LogTransform._0_1_)) {
    local_98 = local_68;
    fStack_94 = fStack_64;
    ::FString::PrintfImpl((FString *)&local_98,L"X=%3.3f Y=%3.3f Z=%3.3f");
    Logging::Private::BasicLog<5>
              (&`public:_bool___cdecl_UE::Math::TTransform<float>::DebugEqualMatrix(UE::Math::TMatrix<float>_const&___ptr64)const___ptr64'
                ::__l9::LOG_Static,(FLogCategoryBase *)&LogTransform);
    iVar19 = extraout_EAX_00;
    if ((void *)CONCAT44(fStack_94,local_98) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(fStack_94,local_98));
      iVar19 = extraout_EAX_01;
    }
    if (4 < (byte)LogTransform._0_1_) {
      local_98 = (float)(this->Scale3D).m128_i32[0];
      fStack_94 = (float)(this->Scale3D).m128_i32[1];
      ::FString::PrintfImpl((FString *)&local_98,L"X=%3.3f Y=%3.3f Z=%3.3f");
      Logging::Private::BasicLog<5>
                (&`public:_bool___cdecl_UE::Math::TTransform<float>::DebugEqualMatrix(UE::Math::TMatrix<float>_const&___ptr64)const___ptr64'
                  ::__l26::LOG_Static,(FLogCategoryBase *)&LogTransform);
      iVar19 = extraout_EAX_02;
      if ((void *)CONCAT44(fStack_94,local_98) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(fStack_94,local_98));
        iVar19 = extraout_EAX_03;
      }
    }
  }
  auVar6._4_4_ = -(uint)(fVar12 < (float)((uint)((this->Rotation).m128_f32[1] - local_88.m128_f32[1]
                                                ) & uVar8));
  auVar6._0_4_ = -(uint)(fVar11 < (float)((uint)((this->Rotation).m128_f32[0] - local_88.m128_f32[0]
                                                ) & uVar7));
  auVar6._8_4_ = -(uint)(fVar13 < (float)((uint)((this->Rotation).m128_f32[2] - local_88.m128_f32[2]
                                                ) & uVar9));
  auVar6._12_4_ =
       -(uint)(fVar14 < (float)((uint)((this->Rotation).m128_f32[3] - local_88.m128_f32[3]) & uVar10
                               ));
  iVar20 = movmskps(iVar19,auVar6);
  iVar19 = 0;
  if (((iVar20 != 0) &&
      (auVar21._4_4_ =
            -(uint)(fVar12 < (float)((uint)(local_88.m128_f32[1] + (this->Rotation).m128_f32[1]) &
                                    uVar8)),
      auVar21._0_4_ =
           -(uint)(fVar11 < (float)((uint)(local_88.m128_f32[0] + (this->Rotation).m128_f32[0]) &
                                   uVar7)),
      auVar21._8_4_ =
           -(uint)(fVar13 < (float)((uint)(local_88.m128_f32[2] + (this->Rotation).m128_f32[2]) &
                                   uVar9)),
      auVar21._12_4_ =
           -(uint)(fVar14 < (float)((uint)(local_88.m128_f32[3] + (this->Rotation).m128_f32[3]) &
                                   uVar10)), iVar19 = movmskps(iVar20,auVar21), iVar19 != 0)) &&
     (4 < (byte)LogTransform._0_1_)) {
    ::FString::PrintfImpl((FString *)&local_98,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
    Logging::Private::BasicLog<5>
              (&`public:_bool___cdecl_UE::Math::TTransform<float>::DebugEqualMatrix(UE::Math::TMatrix<float>_const&___ptr64)const___ptr64'
                ::__l46::LOG_Static,(FLogCategoryBase *)&LogTransform);
    iVar19 = extraout_EAX_04;
    if ((void *)CONCAT44(fStack_94,local_98) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(fStack_94,local_98));
      iVar19 = extraout_EAX_05;
    }
    if (4 < (byte)LogTransform._0_1_) {
      ::FString::PrintfImpl((FString *)&local_98,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
      Logging::Private::BasicLog<5>
                (&`public:_bool___cdecl_UE::Math::TTransform<float>::DebugEqualMatrix(UE::Math::TMatrix<float>_const&___ptr64)const___ptr64'
                  ::__l63::LOG_Static,(FLogCategoryBase *)&LogTransform);
      iVar19 = extraout_EAX_06;
      if ((void *)CONCAT44(fStack_94,local_98) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(fStack_94,local_98));
        iVar19 = extraout_EAX_07;
      }
    }
  }
  auVar22._4_4_ =
       -(uint)(fVar16 < (float)((uint)((this->Translation).m128_f32[1] - fStack_74) & uVar8));
  auVar22._0_4_ =
       -(uint)(fVar15 < (float)((uint)((this->Translation).m128_f32[0] - local_78) & uVar7));
  auVar22._8_4_ =
       -(uint)(fVar17 < (float)((uint)((this->Translation).m128_f32[2] - fStack_70) & uVar9));
  auVar22._12_4_ =
       -(uint)(fVar18 < (float)((uint)((this->Translation).m128_f32[3] - fStack_6c) & uVar10));
  iVar19 = movmskps(iVar19,auVar22);
  if ((iVar19 != 0) && (4 < (byte)LogTransform._0_1_)) {
    local_98 = local_78;
    fStack_94 = fStack_74;
    ::FString::PrintfImpl((FString *)&local_98,L"X=%3.3f Y=%3.3f Z=%3.3f");
    Logging::Private::BasicLog<5>
              (&`public:_bool___cdecl_UE::Math::TTransform<float>::DebugEqualMatrix(UE::Math::TMatrix<float>_const&___ptr64)const___ptr64'
                ::__l83::LOG_Static,(FLogCategoryBase *)&LogTransform);
    if ((void *)CONCAT44(fStack_94,local_98) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(fStack_94,local_98));
    }
    if (4 < (byte)LogTransform._0_1_) {
      local_98 = (float)(this->Translation).m128_i32[0];
      fStack_94 = (float)(this->Translation).m128_i32[1];
      ::FString::PrintfImpl((FString *)&local_98,L"X=%3.3f Y=%3.3f Z=%3.3f");
      Logging::Private::BasicLog<5>
                (&`public:_bool___cdecl_UE::Math::TTransform<float>::DebugEqualMatrix(UE::Math::TMatrix<float>_const&___ptr64)const___ptr64'
                  ::__l100::LOG_Static,(FLogCategoryBase *)&LogTransform);
      if ((void *)CONCAT44(fStack_94,local_98) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(fStack_94,local_98));
      }
    }
  }
  return false;
}

// DebugEqualMatrix @ 1417c1ff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Math::TTransform<double>::DebugEqualMatrix(TTransform<double> *this,TMatrix<double> *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  double dVar26;
  double dVar27;
  undefined4 extraout_EAX;
  uint uVar28;
  uint extraout_EAX_00;
  uint extraout_EAX_01;
  uint extraout_EAX_02;
  uint extraout_EAX_03;
  uint extraout_EAX_04;
  uint extraout_EAX_05;
  uint extraout_EAX_06;
  uint extraout_EAX_07;
  int iVar29;
  uint uVar30;
  TTransform<double> *this_00;
  ForAnyElementType FVar31;
  longlong lVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  FString local_118;
  double local_108;
  TTransform<double> local_f8 [2];
  
  this_00 = local_f8;
  SetFromMatrix(this_00,param_1);
  dVar27 = __real_3f847ae140000000;
  dVar26 = __real_3f1a36e2e0000000;
  uVar25 = _UNK_15061cc8c;
  uVar24 = _UNK_15061cc88;
  uVar23 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar22 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar33 = (this->Translation).ZW.m128d_f64[0] - local_f8[0].Translation.ZW.m128d_f64[0];
  dVar35 = (this->Translation).ZW.m128d_f64[1] - local_f8[0].Translation.ZW.m128d_f64[1];
  dVar34 = (this->Translation).XY.m128d_f64[0] - local_f8[0].Translation.XY.m128d_f64[0];
  dVar11 = (this->Translation).XY.m128d_f64[1] - local_f8[0].Translation.XY.m128d_f64[1];
  lVar32 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar35,0) & _UNK_15061cc88));
  auVar1._8_4_ = (int)lVar32;
  auVar1._0_8_ = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar33,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar1._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
  iVar29 = movmskpd((int)this_00,auVar1);
  lVar32 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar11,0) & _UNK_15061cc88));
  auVar12._8_4_ = (int)lVar32;
  auVar12._0_8_ =
       -(ulonglong)
        (__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar34,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar12._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
  uVar28 = movmskpd(extraout_EAX,auVar12);
  uVar30 = iVar29 << 2 | uVar28;
  if (uVar30 == 0) {
    dVar34 = (this->Rotation).ZW.m128d_f64[0];
    dVar11 = (this->Rotation).ZW.m128d_f64[1];
    dVar33 = (this->Rotation).XY.m128d_f64[0];
    dVar35 = (this->Rotation).XY.m128d_f64[1];
    dVar20 = local_f8[0].Rotation.ZW.m128d_f64[0] + dVar34;
    dVar21 = local_f8[0].Rotation.ZW.m128d_f64[1] + dVar11;
    dVar18 = local_f8[0].Rotation.XY.m128d_f64[0] + dVar33;
    dVar19 = local_f8[0].Rotation.XY.m128d_f64[1] + dVar35;
    dVar34 = dVar34 - local_f8[0].Rotation.ZW.m128d_f64[0];
    dVar11 = dVar11 - local_f8[0].Rotation.ZW.m128d_f64[1];
    dVar33 = dVar33 - local_f8[0].Rotation.XY.m128d_f64[0];
    dVar35 = dVar35 - local_f8[0].Rotation.XY.m128d_f64[1];
    lVar32 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar11,0) & _UNK_15061cc88));
    auVar2._8_4_ = (int)lVar32;
    auVar2._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar34,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar2._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
    iVar29 = movmskpd(0,auVar2);
    lVar32 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar35,0) & _UNK_15061cc88));
    auVar3._8_4_ = (int)lVar32;
    auVar3._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar33,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar3._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
    uVar28 = movmskpd(uVar28,auVar3);
    uVar30 = iVar29 << 2 | uVar28;
    if (uVar30 != 0) {
      lVar32 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar21,0) & _UNK_15061cc88));
      auVar4._8_4_ = (int)lVar32;
      auVar4._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar20,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar4._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
      iVar29 = movmskpd(uVar30,auVar4);
      lVar32 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar19,0) & _UNK_15061cc88));
      auVar15._8_4_ = (int)lVar32;
      auVar15._0_8_ =
           -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar15._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
      uVar28 = movmskpd(uVar28,auVar15);
      uVar30 = iVar29 << 2 | uVar28;
      if (uVar30 != 0) goto LAB_1417c216e;
    }
    dVar33 = (this->Scale3D).ZW.m128d_f64[0] - local_f8[0].Scale3D.ZW.m128d_f64[0];
    dVar35 = (this->Scale3D).ZW.m128d_f64[1] - local_f8[0].Scale3D.ZW.m128d_f64[1];
    dVar34 = (this->Scale3D).XY.m128d_f64[0] - local_f8[0].Scale3D.XY.m128d_f64[0];
    dVar11 = (this->Scale3D).XY.m128d_f64[1] - local_f8[0].Scale3D.XY.m128d_f64[1];
    lVar32 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar35,0) & _UNK_15061cc88));
    auVar5._8_4_ = (int)lVar32;
    auVar5._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar33,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar5._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
    iVar29 = movmskpd(0,auVar5);
    lVar32 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar11,0) & _UNK_15061cc88));
    auVar13._8_4_ = (int)lVar32;
    auVar13._0_8_ =
         -(ulonglong)
          (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar34,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar13._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
    uVar28 = movmskpd(uVar28,auVar13);
    uVar30 = iVar29 << 2 | uVar28;
    if (uVar30 == 0) {
      return true;
    }
  }
LAB_1417c216e:
  dVar34 = (this->Scale3D).ZW.m128d_f64[0] - local_f8[0].Scale3D.ZW.m128d_f64[0];
  local_f8[0].Scale3D.ZW.m128d_f64[1] =
       (this->Scale3D).ZW.m128d_f64[1] - local_f8[0].Scale3D.ZW.m128d_f64[1];
  local_f8[0].Scale3D.XY.m128d_f64[0] =
       (this->Scale3D).XY.m128d_f64[0] - local_f8[0].Scale3D.XY.m128d_f64[0];
  local_f8[0].Scale3D.XY.m128d_f64[1] =
       (this->Scale3D).XY.m128d_f64[1] - local_f8[0].Scale3D.XY.m128d_f64[1];
  lVar32 = -(ulonglong)
            (__real_3f847ae140000000 <
            (double)CONCAT44((uint)((ulonglong)local_f8[0].Scale3D.ZW.m128d_f64[1] >> 0x20) &
                             _UNK_15061cc8c,
                             SUB84(local_f8[0].Scale3D.ZW.m128d_f64[1],0) & _UNK_15061cc88));
  auVar6._8_4_ = (int)lVar32;
  auVar6._0_8_ = -(ulonglong)
                  (__real_3f847ae140000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar34,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar6._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
  iVar29 = movmskpd(uVar30,auVar6);
  lVar32 = -(ulonglong)
            (__real_3f847ae140000000 <
            (double)CONCAT44((uint)((ulonglong)local_f8[0].Scale3D.XY.m128d_f64[1] >> 0x20) &
                             _UNK_15061cc8c,
                             SUB84(local_f8[0].Scale3D.XY.m128d_f64[1],0) & _UNK_15061cc88));
  auVar14._8_4_ = (int)lVar32;
  auVar14._0_8_ =
       -(ulonglong)
        (__real_3f847ae140000000 <
        (double)CONCAT44((uint)((ulonglong)local_f8[0].Scale3D.XY.m128d_f64[0] >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_f8[0].Scale3D.XY.m128d_f64[0],0) &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar14._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
  uVar28 = movmskpd(uVar28,auVar14);
  uVar30 = iVar29 << 2 | uVar28;
  FVar31.Data = (FScriptContainerElement *)(ulonglong)uVar30;
  if ((uVar30 != 0) && (4 < (byte)LogTransform._0_1_)) {
    local_108 = local_f8[0].Scale3D.ZW.m128d_f64[0];
    ::FString::PrintfImpl(&local_118,L"X=%3.3f Y=%3.3f Z=%3.3f");
    Logging::Private::BasicLog<5>
              (&`public:_bool___cdecl_UE::Math::TTransform<double>::DebugEqualMatrix(UE::Math::TMatrix<double>_const&___ptr64)const___ptr64'
                ::__l9::LOG_Static,(FLogCategoryBase *)&LogTransform);
    FVar31.Data = local_118.Data.AllocatorInstance.Data;
    uVar28 = extraout_EAX_00;
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
      uVar28 = extraout_EAX_01;
    }
    if (4 < (byte)LogTransform._0_1_) {
      local_108 = (this->Scale3D).ZW.m128d_f64[0];
      ::FString::PrintfImpl(&local_118,L"X=%3.3f Y=%3.3f Z=%3.3f");
      Logging::Private::BasicLog<5>
                (&`public:_bool___cdecl_UE::Math::TTransform<double>::DebugEqualMatrix(UE::Math::TMatrix<double>_const&___ptr64)const___ptr64'
                  ::__l26::LOG_Static,(FLogCategoryBase *)&LogTransform);
      FVar31.Data = local_118.Data.AllocatorInstance.Data;
      uVar28 = extraout_EAX_02;
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
        uVar28 = extraout_EAX_03;
      }
    }
  }
  dVar34 = (this->Rotation).ZW.m128d_f64[0];
  dVar11 = (this->Rotation).ZW.m128d_f64[1];
  dVar33 = (this->Rotation).XY.m128d_f64[0];
  dVar35 = (this->Rotation).XY.m128d_f64[1];
  dVar20 = local_f8[0].Rotation.ZW.m128d_f64[0] + dVar34;
  dVar21 = local_f8[0].Rotation.ZW.m128d_f64[1] + dVar11;
  dVar34 = dVar34 - local_f8[0].Rotation.ZW.m128d_f64[0];
  dVar11 = dVar11 - local_f8[0].Rotation.ZW.m128d_f64[1];
  dVar18 = local_f8[0].Rotation.XY.m128d_f64[0] + dVar33;
  dVar19 = local_f8[0].Rotation.XY.m128d_f64[1] + dVar35;
  dVar33 = dVar33 - local_f8[0].Rotation.XY.m128d_f64[0];
  dVar35 = dVar35 - local_f8[0].Rotation.XY.m128d_f64[1];
  lVar32 = -(ulonglong)
            (dVar26 < (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & uVar25,
                                       SUB84(dVar11,0) & uVar24));
  auVar7._8_4_ = (int)lVar32;
  auVar7._0_8_ = -(ulonglong)
                  (dVar26 < (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) & uVar23,
                                             SUB84(dVar34,0) & uVar22));
  auVar7._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
  iVar29 = movmskpd((int)FVar31.Data,auVar7);
  lVar32 = -(ulonglong)
            (dVar26 < (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) & uVar25,
                                       SUB84(dVar35,0) & uVar24));
  auVar8._8_4_ = (int)lVar32;
  auVar8._0_8_ = -(ulonglong)
                  (dVar26 < (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & uVar23,
                                             SUB84(dVar33,0) & uVar22));
  auVar8._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
  uVar28 = movmskpd(uVar28,auVar8);
  uVar30 = iVar29 << 2 | uVar28;
  FVar31.Data = (FScriptContainerElement *)(ulonglong)uVar30;
  if (uVar30 != 0) {
    lVar32 = -(ulonglong)
              (dVar26 < (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & uVar25,
                                         SUB84(dVar21,0) & uVar24));
    auVar9._8_4_ = (int)lVar32;
    auVar9._0_8_ = -(ulonglong)
                    (dVar26 < (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & uVar23,
                                               SUB84(dVar20,0) & uVar22));
    auVar9._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
    iVar29 = movmskpd(uVar30,auVar9);
    lVar32 = -(ulonglong)
              (dVar26 < (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) & uVar25,
                                         SUB84(dVar19,0) & uVar24));
    auVar16._8_4_ = (int)lVar32;
    auVar16._0_8_ =
         -(ulonglong)
          (dVar26 < (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & uVar23,
                                     SUB84(dVar18,0) & uVar22));
    auVar16._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
    uVar28 = movmskpd(uVar28,auVar16);
    uVar30 = iVar29 << 2 | uVar28;
    FVar31.Data = (FScriptContainerElement *)(ulonglong)uVar30;
    if ((uVar30 != 0) && (4 < (byte)LogTransform._0_1_)) {
      ::FString::PrintfImpl(&local_118,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
      Logging::Private::BasicLog<5>
                (&`public:_bool___cdecl_UE::Math::TTransform<double>::DebugEqualMatrix(UE::Math::TMatrix<double>_const&___ptr64)const___ptr64'
                  ::__l46::LOG_Static,(FLogCategoryBase *)&LogTransform);
      FVar31.Data = local_118.Data.AllocatorInstance.Data;
      uVar28 = extraout_EAX_04;
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
        uVar28 = extraout_EAX_05;
      }
      if (4 < (byte)LogTransform._0_1_) {
        ::FString::PrintfImpl(&local_118,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
        Logging::Private::BasicLog<5>
                  (&`public:_bool___cdecl_UE::Math::TTransform<double>::DebugEqualMatrix(UE::Math::TMatrix<double>_const&___ptr64)const___ptr64'
                    ::__l63::LOG_Static,(FLogCategoryBase *)&LogTransform);
        FVar31.Data = local_118.Data.AllocatorInstance.Data;
        uVar28 = extraout_EAX_06;
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
          uVar28 = extraout_EAX_07;
        }
      }
    }
  }
  dVar34 = (this->Translation).ZW.m128d_f64[0] - local_f8[0].Translation.ZW.m128d_f64[0];
  local_f8[0].Translation.ZW.m128d_f64[1] =
       (this->Translation).ZW.m128d_f64[1] - local_f8[0].Translation.ZW.m128d_f64[1];
  local_f8[0].Translation.XY.m128d_f64[0] =
       (this->Translation).XY.m128d_f64[0] - local_f8[0].Translation.XY.m128d_f64[0];
  local_f8[0].Translation.XY.m128d_f64[1] =
       (this->Translation).XY.m128d_f64[1] - local_f8[0].Translation.XY.m128d_f64[1];
  lVar32 = -(ulonglong)
            (dVar27 < (double)CONCAT44((uint)((ulonglong)local_f8[0].Translation.ZW.m128d_f64[1] >>
                                             0x20) & uVar25,
                                       SUB84(local_f8[0].Translation.ZW.m128d_f64[1],0) & uVar24));
  auVar10._8_4_ = (int)lVar32;
  auVar10._0_8_ =
       -(ulonglong)
        (dVar27 < (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) & uVar23,
                                   SUB84(dVar34,0) & uVar22));
  auVar10._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
  uVar30 = movmskpd((int)FVar31.Data,auVar10);
  lVar32 = -(ulonglong)
            (dVar27 < (double)CONCAT44((uint)((ulonglong)local_f8[0].Translation.XY.m128d_f64[1] >>
                                             0x20) & uVar25,
                                       SUB84(local_f8[0].Translation.XY.m128d_f64[1],0) & uVar24));
  auVar17._8_4_ = (int)lVar32;
  auVar17._0_8_ =
       -(ulonglong)
        (dVar27 < (double)CONCAT44((uint)((ulonglong)local_f8[0].Translation.XY.m128d_f64[0] >> 0x20
                                         ) & uVar23,
                                   SUB84(local_f8[0].Translation.XY.m128d_f64[0],0) & uVar22));
  auVar17._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
  iVar29 = movmskpd(uVar28,auVar17);
  if (((uVar30 & 0x3fffffff) != 0 || iVar29 != 0) && (4 < (byte)LogTransform._0_1_)) {
    local_108 = local_f8[0].Translation.ZW.m128d_f64[0];
    ::FString::PrintfImpl(&local_118,L"X=%3.3f Y=%3.3f Z=%3.3f");
    Logging::Private::BasicLog<5>
              (&`public:_bool___cdecl_UE::Math::TTransform<double>::DebugEqualMatrix(UE::Math::TMatrix<double>_const&___ptr64)const___ptr64'
                ::__l83::LOG_Static,(FLogCategoryBase *)&LogTransform);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if (4 < (byte)LogTransform._0_1_) {
      local_108 = (this->Translation).ZW.m128d_f64[0];
      ::FString::PrintfImpl(&local_118,L"X=%3.3f Y=%3.3f Z=%3.3f");
      Logging::Private::BasicLog<5>
                (&`public:_bool___cdecl_UE::Math::TTransform<double>::DebugEqualMatrix(UE::Math::TMatrix<double>_const&___ptr64)const___ptr64'
                  ::__l100::LOG_Static,(FLogCategoryBase *)&LogTransform);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

// DebugPrint @ 1417c2980

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::Math::TTransform<float>::DebugPrint(TTransform<float> *this)

{
  TRotator<float> *pTVar1;
  int iVar2;
  TQuat<float> local_58;
  FString local_48;
  FString local_38 [3];
  
  if (4 < (byte)LogTransform._0_1_) {
    local_58._0_8_ = (this->Rotation).m128_u64[0];
    local_58._8_8_ = (this->Rotation).m128_u64[1];
    pTVar1 = TQuat<float>::Rotator(&local_58,(TRotator<float> *)&local_48);
    local_58._0_8_ = (this->Scale3D).m128_u64[0];
    local_48.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pTVar1;
    ::FString::PrintfImpl(local_38,L"Rotation: Pitch %f Yaw %f Roll %f\r\n");
    ::FString::PrintfImpl(&local_48,L"Translation: %f %f %f\r\n");
    iVar2 = local_48.Data.ArrayNum + -1;
    if ((float)local_48.Data.ArrayNum == 0.0) {
      iVar2 = 0;
    }
    ::FString::AppendChars(local_38,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar2);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_48,L"Scale3D: %f %f %f\r\n");
    iVar2 = local_48.Data.ArrayNum + -1;
    if ((float)local_48.Data.ArrayNum == 0.0) {
      iVar2 = 0;
    }
    ::FString::AppendChars(local_38,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar2);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    Logging::Private::BasicLog<5>
              (&`public:_void___cdecl_UE::Math::TTransform<float>::DebugPrint(void)const___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogTransform);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

// DebugPrint @ 1417c2b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::Math::TTransform<double>::DebugPrint(TTransform<double> *this)

{
  double dVar1;
  TRotator<double> *pTVar2;
  int iVar3;
  FString local_88;
  TQuat<double> local_78;
  TRotator<double> local_58 [3];
  
  if (4 < (byte)LogTransform._0_1_) {
    local_78.X = (this->Rotation).XY.m128d_f64[0];
    local_78.Y = (this->Rotation).XY.m128d_f64[1];
    local_78.Z = (this->Rotation).ZW.m128d_f64[0];
    local_78.W = (this->Rotation).ZW.m128d_f64[1];
    pTVar2 = TQuat<double>::Rotator(&local_78,local_58);
    local_58[0].Roll = (this->Scale3D).ZW.m128d_f64[0];
    dVar1 = (this->Translation).ZW.m128d_f64[0];
    local_78.Z = pTVar2->Roll;
    ::FString::PrintfImpl(&local_88,L"Rotation: Pitch %f Yaw %f Roll %f\r\n");
    local_78.Z = dVar1;
    ::FString::PrintfImpl((FString *)&local_78,L"Translation: %f %f %f\r\n");
    iVar3 = SUB84(local_78.Y,0) + -1;
    if (SUB84(local_78.Y,0) == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars(&local_88,(wchar_t *)local_78.X,iVar3);
    if ((wchar_t *)local_78.X != (wchar_t *)0x0) {
      FMemory::Free((void *)local_78.X);
    }
    ::FString::PrintfImpl((FString *)&local_78,L"Scale3D: %f %f %f\r\n");
    iVar3 = SUB84(local_78.Y,0) + -1;
    if (SUB84(local_78.Y,0) == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars(&local_88,(wchar_t *)local_78.X,iVar3);
    if ((wchar_t *)local_78.X != (wchar_t *)0x0) {
      FMemory::Free((void *)local_78.X);
    }
    Logging::Private::BasicLog<5>
              (&`public:_void___cdecl_UE::Math::TTransform<double>::DebugPrint(void)const___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogTransform);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// DiagnosticCheckNaN_All @ 1417c4490

void __thiscall UE::Math::TTransform<float>::DiagnosticCheckNaN_All(TTransform<float> *this)

{
  return;
}

// DiagnosticCheckNaN_All @ 1417c44a0

void __thiscall UE::Math::TTransform<double>::DiagnosticCheckNaN_All(TTransform<double> *this)

{
  return;
}

// DiagnosticCheckNaN_Rotate @ 1417c44b0

void __thiscall UE::Math::TTransform<float>::DiagnosticCheckNaN_Rotate(TTransform<float> *this)

{
  return;
}

// DiagnosticCheckNaN_Rotate @ 1417c44c0

void __thiscall UE::Math::TTransform<double>::DiagnosticCheckNaN_Rotate(TTransform<double> *this)

{
  return;
}

// DiagnosticCheckNaN_Scale3D @ 1417c44d0

void __thiscall UE::Math::TTransform<float>::DiagnosticCheckNaN_Scale3D(TTransform<float> *this)

{
  return;
}

// DiagnosticCheckNaN_Scale3D @ 1417c44e0

void __thiscall UE::Math::TTransform<double>::DiagnosticCheckNaN_Scale3D(TTransform<double> *this)

{
  return;
}

// DiagnosticCheckNaN_Translate @ 1417c44f0

void __thiscall UE::Math::TTransform<float>::DiagnosticCheckNaN_Translate(TTransform<float> *this)

{
  return;
}

// DiagnosticCheckNaN_Translate @ 1417c4500

void __thiscall UE::Math::TTransform<double>::DiagnosticCheckNaN_Translate(TTransform<double> *this)

{
  return;
}

// DiagnosticCheck_IsValid @ 1417c4510

void __thiscall UE::Math::TTransform<float>::DiagnosticCheck_IsValid(TTransform<float> *this)

{
  return;
}

// DiagnosticCheck_IsValid @ 1417c4520

void __thiscall UE::Math::TTransform<double>::DiagnosticCheck_IsValid(TTransform<double> *this)

{
  return;
}

// Equals @ 1417c5b80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Math::TTransform<float>::Equals
          (TTransform<float> *this,TTransform<float> *param_1,float param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 in_EAX;
  int iVar5;
  
  auVar1._4_4_ = -(uint)(param_2 <
                        (float)((uint)((this->Translation).m128_f32[1] -
                                      (param_1->Translation).m128_f32[1]) & _UNK_15061cc74));
  auVar1._0_4_ = -(uint)(param_2 <
                        (float)((uint)((this->Translation).m128_f32[0] -
                                      (param_1->Translation).m128_f32[0]) &
                               __xmm_7fffffff7fffffff7fffffff7fffffff));
  auVar1._8_4_ = -(uint)(param_2 <
                        (float)((uint)((this->Translation).m128_f32[2] -
                                      (param_1->Translation).m128_f32[2]) & _UNK_15061cc78));
  auVar1._12_4_ =
       -(uint)(param_2 <
              (float)((uint)((this->Translation).m128_f32[3] - (param_1->Translation).m128_f32[3]) &
                     _UNK_15061cc7c));
  iVar5 = movmskps(in_EAX,auVar1);
  if (iVar5 == 0) {
    auVar2._4_4_ = -(uint)(param_2 <
                          (float)((uint)((this->Rotation).m128_f32[1] -
                                        (param_1->Rotation).m128_f32[1]) & _UNK_15061cc74));
    auVar2._0_4_ = -(uint)(param_2 <
                          (float)((uint)((this->Rotation).m128_f32[0] -
                                        (param_1->Rotation).m128_f32[0]) &
                                 __xmm_7fffffff7fffffff7fffffff7fffffff));
    auVar2._8_4_ = -(uint)(param_2 <
                          (float)((uint)((this->Rotation).m128_f32[2] -
                                        (param_1->Rotation).m128_f32[2]) & _UNK_15061cc78));
    auVar2._12_4_ =
         -(uint)(param_2 <
                (float)((uint)((this->Rotation).m128_f32[3] - (param_1->Rotation).m128_f32[3]) &
                       _UNK_15061cc7c));
    iVar5 = movmskps(0,auVar2);
    if (((iVar5 == 0) ||
        (auVar3._4_4_ = -(uint)(param_2 <
                               (float)((uint)((this->Rotation).m128_f32[1] +
                                             (param_1->Rotation).m128_f32[1]) & _UNK_15061cc74)),
        auVar3._0_4_ = -(uint)(param_2 <
                              (float)((uint)((this->Rotation).m128_f32[0] +
                                            (param_1->Rotation).m128_f32[0]) &
                                     __xmm_7fffffff7fffffff7fffffff7fffffff)),
        auVar3._8_4_ = -(uint)(param_2 <
                              (float)((uint)((this->Rotation).m128_f32[2] +
                                            (param_1->Rotation).m128_f32[2]) & _UNK_15061cc78)),
        auVar3._12_4_ =
             -(uint)(param_2 <
                    (float)((uint)((this->Rotation).m128_f32[3] + (param_1->Rotation).m128_f32[3]) &
                           _UNK_15061cc7c)), iVar5 = movmskps(iVar5,auVar3), iVar5 == 0)) &&
       (auVar4._4_4_ = -(uint)(param_2 <
                              (float)((uint)((this->Scale3D).m128_f32[1] -
                                            (param_1->Scale3D).m128_f32[1]) & _UNK_15061cc74)),
       auVar4._0_4_ = -(uint)(param_2 <
                             (float)((uint)((this->Scale3D).m128_f32[0] -
                                           (param_1->Scale3D).m128_f32[0]) &
                                    __xmm_7fffffff7fffffff7fffffff7fffffff)),
       auVar4._8_4_ = -(uint)(param_2 <
                             (float)((uint)((this->Scale3D).m128_f32[2] -
                                           (param_1->Scale3D).m128_f32[2]) & _UNK_15061cc78)),
       auVar4._12_4_ =
            -(uint)(param_2 <
                   (float)((uint)((this->Scale3D).m128_f32[3] - (param_1->Scale3D).m128_f32[3]) &
                          _UNK_15061cc7c)), iVar5 = movmskps(0,auVar4), iVar5 == 0)) {
      return true;
    }
  }
  return false;
}

// Equals @ 1417c5c00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Math::TTransform<double>::Equals
          (TTransform<double> *this,TTransform<double> *param_1,double param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 in_EAX;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  dVar14 = (this->Translation).ZW.m128d_f64[0] - (param_1->Translation).ZW.m128d_f64[0];
  dVar17 = (this->Translation).ZW.m128d_f64[1] - (param_1->Translation).ZW.m128d_f64[1];
  dVar16 = (this->Translation).XY.m128d_f64[0] - (param_1->Translation).XY.m128d_f64[0];
  dVar19 = (this->Translation).XY.m128d_f64[1] - (param_1->Translation).XY.m128d_f64[1];
  lVar13 = -(ulonglong)
            (param_2 <
            (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar17,0) & _UNK_15061cc88));
  auVar1._8_4_ = (int)lVar13;
  auVar1._0_8_ = -(ulonglong)
                  (param_2 <
                  (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar1._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
  uVar10 = movmskpd((int)this,auVar1);
  lVar13 = -(ulonglong)
            (param_2 <
            (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar19,0) & _UNK_15061cc88));
  auVar7._8_4_ = (int)lVar13;
  auVar7._0_8_ = -(ulonglong)
                  (param_2 <
                  (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar7._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
  iVar9 = movmskpd(in_EAX,auVar7);
  if ((uVar10 & 0x3fffffff) == 0 && iVar9 == 0) {
    dVar14 = (this->Rotation).ZW.m128d_f64[0];
    dVar17 = (this->Rotation).ZW.m128d_f64[1];
    dVar16 = (this->Rotation).XY.m128d_f64[0];
    dVar19 = (this->Rotation).XY.m128d_f64[1];
    dVar15 = dVar14 - (param_1->Rotation).ZW.m128d_f64[0];
    dVar18 = dVar17 - (param_1->Rotation).ZW.m128d_f64[1];
    dVar14 = dVar14 + (param_1->Rotation).ZW.m128d_f64[0];
    dVar17 = dVar17 + (param_1->Rotation).ZW.m128d_f64[1];
    dVar20 = dVar16 - (param_1->Rotation).XY.m128d_f64[0];
    dVar21 = dVar19 - (param_1->Rotation).XY.m128d_f64[1];
    dVar16 = dVar16 + (param_1->Rotation).XY.m128d_f64[0];
    dVar19 = dVar19 + (param_1->Rotation).XY.m128d_f64[1];
    lVar13 = -(ulonglong)
              (param_2 <
              (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar18,0) & _UNK_15061cc88));
    auVar2._8_4_ = (int)lVar13;
    auVar2._0_8_ = -(ulonglong)
                    (param_2 <
                    (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar2._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    iVar11 = movmskpd(0,auVar2);
    lVar13 = -(ulonglong)
              (param_2 <
              (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar21,0) & _UNK_15061cc88));
    auVar3._8_4_ = (int)lVar13;
    auVar3._0_8_ = -(ulonglong)
                    (param_2 <
                    (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar3._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    uVar10 = movmskpd(iVar9,auVar3);
    uVar12 = iVar11 << 2 | uVar10;
    if (uVar12 != 0) {
      lVar13 = -(ulonglong)
                (param_2 <
                (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar17,0) & _UNK_15061cc88));
      auVar4._8_4_ = (int)lVar13;
      auVar4._0_8_ = -(ulonglong)
                      (param_2 <
                      (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar14,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar4._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
      uVar12 = movmskpd(uVar12,auVar4);
      lVar13 = -(ulonglong)
                (param_2 <
                (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar19,0) & _UNK_15061cc88));
      auVar6._8_4_ = (int)lVar13;
      auVar6._0_8_ = -(ulonglong)
                      (param_2 <
                      (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar16,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar6._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
      uVar10 = movmskpd(uVar10,auVar6);
      if ((uVar12 & 0x3fffffff) != 0 || uVar10 != 0) {
        return false;
      }
    }
    dVar16 = (this->Scale3D).ZW.m128d_f64[0] - (param_1->Scale3D).ZW.m128d_f64[0];
    dVar19 = (this->Scale3D).ZW.m128d_f64[1] - (param_1->Scale3D).ZW.m128d_f64[1];
    dVar14 = (this->Scale3D).XY.m128d_f64[0] - (param_1->Scale3D).XY.m128d_f64[0];
    dVar17 = (this->Scale3D).XY.m128d_f64[1] - (param_1->Scale3D).XY.m128d_f64[1];
    lVar13 = -(ulonglong)
              (param_2 <
              (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar19,0) & _UNK_15061cc88));
    auVar5._8_4_ = (int)lVar13;
    auVar5._0_8_ = -(ulonglong)
                    (param_2 <
                    (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar5._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    uVar12 = movmskpd(0,auVar5);
    lVar13 = -(ulonglong)
              (param_2 <
              (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar17,0) & _UNK_15061cc88));
    auVar8._8_4_ = (int)lVar13;
    auVar8._0_8_ = -(ulonglong)
                    (param_2 <
                    (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar8._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    iVar9 = movmskpd(uVar10,auVar8);
    if ((uVar12 & 0x3fffffff) == 0 && iVar9 == 0) {
      return true;
    }
  }
  return false;
}

// EqualsNoScale @ 1417c5ec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Math::TTransform<float>::EqualsNoScale
          (TTransform<float> *this,TTransform<float> *param_1,float param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 in_EAX;
  int iVar4;
  
  auVar1._4_4_ = -(uint)(param_2 <
                        (float)((uint)((this->Translation).m128_f32[1] -
                                      (param_1->Translation).m128_f32[1]) & _UNK_15061cc74));
  auVar1._0_4_ = -(uint)(param_2 <
                        (float)((uint)((this->Translation).m128_f32[0] -
                                      (param_1->Translation).m128_f32[0]) &
                               __xmm_7fffffff7fffffff7fffffff7fffffff));
  auVar1._8_4_ = -(uint)(param_2 <
                        (float)((uint)((this->Translation).m128_f32[2] -
                                      (param_1->Translation).m128_f32[2]) & _UNK_15061cc78));
  auVar1._12_4_ =
       -(uint)(param_2 <
              (float)((uint)((this->Translation).m128_f32[3] - (param_1->Translation).m128_f32[3]) &
                     _UNK_15061cc7c));
  iVar4 = movmskps(in_EAX,auVar1);
  if (iVar4 == 0) {
    auVar2._4_4_ = -(uint)(param_2 <
                          (float)((uint)((this->Rotation).m128_f32[1] -
                                        (param_1->Rotation).m128_f32[1]) & _UNK_15061cc74));
    auVar2._0_4_ = -(uint)(param_2 <
                          (float)((uint)((this->Rotation).m128_f32[0] -
                                        (param_1->Rotation).m128_f32[0]) &
                                 __xmm_7fffffff7fffffff7fffffff7fffffff));
    auVar2._8_4_ = -(uint)(param_2 <
                          (float)((uint)((this->Rotation).m128_f32[2] -
                                        (param_1->Rotation).m128_f32[2]) & _UNK_15061cc78));
    auVar2._12_4_ =
         -(uint)(param_2 <
                (float)((uint)((this->Rotation).m128_f32[3] - (param_1->Rotation).m128_f32[3]) &
                       _UNK_15061cc7c));
    iVar4 = movmskps(0,auVar2);
    if ((iVar4 == 0) ||
       (auVar3._4_4_ = -(uint)(param_2 <
                              (float)((uint)((this->Rotation).m128_f32[1] +
                                            (param_1->Rotation).m128_f32[1]) & _UNK_15061cc74)),
       auVar3._0_4_ = -(uint)(param_2 <
                             (float)((uint)((this->Rotation).m128_f32[0] +
                                           (param_1->Rotation).m128_f32[0]) &
                                    __xmm_7fffffff7fffffff7fffffff7fffffff)),
       auVar3._8_4_ = -(uint)(param_2 <
                             (float)((uint)((this->Rotation).m128_f32[2] +
                                           (param_1->Rotation).m128_f32[2]) & _UNK_15061cc78)),
       auVar3._12_4_ =
            -(uint)(param_2 <
                   (float)((uint)((this->Rotation).m128_f32[3] + (param_1->Rotation).m128_f32[3]) &
                          _UNK_15061cc7c)), iVar4 = movmskps(iVar4,auVar3), iVar4 == 0)) {
      return true;
    }
  }
  return false;
}

// EqualsNoScale @ 1417c5f30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Math::TTransform<double>::EqualsNoScale
          (TTransform<double> *this,TTransform<double> *param_1,double param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 in_EAX;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  dVar12 = (this->Translation).ZW.m128d_f64[0] - (param_1->Translation).ZW.m128d_f64[0];
  dVar14 = (this->Translation).ZW.m128d_f64[1] - (param_1->Translation).ZW.m128d_f64[1];
  dVar18 = (this->Translation).XY.m128d_f64[0] - (param_1->Translation).XY.m128d_f64[0];
  dVar19 = (this->Translation).XY.m128d_f64[1] - (param_1->Translation).XY.m128d_f64[1];
  lVar11 = -(ulonglong)
            (param_2 <
            (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar14,0) & _UNK_15061cc88));
  auVar1._8_4_ = (int)lVar11;
  auVar1._0_8_ = -(ulonglong)
                  (param_2 <
                  (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar1._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
  uVar8 = movmskpd((int)this,auVar1);
  lVar11 = -(ulonglong)
            (param_2 <
            (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar19,0) & _UNK_15061cc88));
  auVar5._8_4_ = (int)lVar11;
  auVar5._0_8_ = -(ulonglong)
                  (param_2 <
                  (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar5._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
  iVar7 = movmskpd(in_EAX,auVar5);
  if ((uVar8 & 0x3fffffff) != 0 || iVar7 != 0) {
    return false;
  }
  dVar12 = (this->Rotation).ZW.m128d_f64[0];
  dVar14 = (this->Rotation).ZW.m128d_f64[1];
  dVar18 = (this->Rotation).XY.m128d_f64[0];
  dVar19 = (this->Rotation).XY.m128d_f64[1];
  dVar13 = dVar12 - (param_1->Rotation).ZW.m128d_f64[0];
  dVar15 = dVar14 - (param_1->Rotation).ZW.m128d_f64[1];
  dVar12 = dVar12 + (param_1->Rotation).ZW.m128d_f64[0];
  dVar14 = dVar14 + (param_1->Rotation).ZW.m128d_f64[1];
  dVar16 = dVar18 - (param_1->Rotation).XY.m128d_f64[0];
  dVar17 = dVar19 - (param_1->Rotation).XY.m128d_f64[1];
  dVar18 = dVar18 + (param_1->Rotation).XY.m128d_f64[0];
  dVar19 = dVar19 + (param_1->Rotation).XY.m128d_f64[1];
  lVar11 = -(ulonglong)
            (param_2 <
            (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar15,0) & _UNK_15061cc88));
  auVar2._8_4_ = (int)lVar11;
  auVar2._0_8_ = -(ulonglong)
                  (param_2 <
                  (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar2._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
  iVar9 = movmskpd(0,auVar2);
  lVar11 = -(ulonglong)
            (param_2 <
            (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar17,0) & _UNK_15061cc88));
  auVar3._8_4_ = (int)lVar11;
  auVar3._0_8_ = -(ulonglong)
                  (param_2 <
                  (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar3._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
  uVar8 = movmskpd(iVar7,auVar3);
  uVar10 = iVar9 << 2 | uVar8;
  if (uVar10 != 0) {
    lVar11 = -(ulonglong)
              (param_2 <
              (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar14,0) & _UNK_15061cc88));
    auVar4._8_4_ = (int)lVar11;
    auVar4._0_8_ = -(ulonglong)
                    (param_2 <
                    (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar4._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
    uVar10 = movmskpd(uVar10,auVar4);
    lVar11 = -(ulonglong)
              (param_2 <
              (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar19,0) & _UNK_15061cc88));
    auVar6._8_4_ = (int)lVar11;
    auVar6._0_8_ = -(ulonglong)
                    (param_2 <
                    (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar6._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
    iVar7 = movmskpd(uVar8,auVar6);
    if ((uVar10 & 0x3fffffff) != 0 || iVar7 != 0) {
      return false;
    }
  }
  return true;
}

// GetDeterminant @ 1417d3010

float __thiscall UE::Math::TTransform<float>::GetDeterminant(TTransform<float> *this)

{
  return (this->Scale3D).m128_f32[1] * (this->Scale3D).m128_f32[0] * (this->Scale3D).m128_f32[2];
}

// GetDeterminant @ 1417d3030

double __thiscall UE::Math::TTransform<double>::GetDeterminant(TTransform<double> *this)

{
  return (this->Scale3D).XY.m128d_f64[1] * (this->Scale3D).XY.m128d_f64[0] *
         (this->Scale3D).ZW.m128d_f64[0];
}

// GetLocation @ 1417d4260

TVector<float> * __thiscall
UE::Math::TTransform<float>::GetLocation
          (TTransform<float> *this,TVector<float> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (this->Translation).m128_f32[1];
  fVar2 = (this->Translation).m128_f32[2];
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Translation).m128_f32[0];
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2;
  return __return_storage_ptr__;
}

// GetLocation @ 1417d4280

TVector<double> * __thiscall
UE::Math::TTransform<double>::GetLocation
          (TTransform<double> *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->Translation).XY.m128d_f64[1];
  dVar1 = (this->Translation).ZW.m128d_f64[0];
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetMaximumAxisScale @ 1417d4750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall UE::Math::TTransform<float>::GetMaximumAxisScale(TTransform<float> *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar5;
  uint uVar6;
  undefined1 auVar4 [16];
  
  uVar3 = __xmm_7fffffff7fffffff7fffffff7fffffff & (this->Scale3D).m128_u32[0];
  uVar5 = _UNK_15061cc74 & (this->Scale3D).m128_u32[1];
  auVar1._4_4_ = uVar5;
  auVar1._0_4_ = uVar3;
  uVar6 = _UNK_15061cc78 & (this->Scale3D).m128_u32[2];
  auVar4._12_4_ = _UNK_15061cc7c & (this->Scale3D).m128_u32[3];
  auVar1._8_4_ = uVar6;
  auVar1._12_4_ = auVar4._12_4_;
  auVar2._4_4_ = uVar6;
  auVar2._0_4_ = uVar5;
  auVar2._8_4_ = uVar3;
  auVar2._12_4_ = auVar4._12_4_;
  auVar2 = maxps(auVar1,auVar2);
  auVar4._4_4_ = uVar3;
  auVar4._0_4_ = uVar6;
  auVar4._8_4_ = uVar5;
  auVar2 = maxps(auVar2,auVar4);
  return auVar2._0_4_;
}

// GetMaximumAxisScale @ 1417d4780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall UE::Math::TTransform<double>::GetMaximumAxisScale(TTransform<double> *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auVar8 [16];
  
  uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff & *(uint *)(this->Scale3D).ZW.m128d_f64;
  uVar9 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
          *(uint *)((longlong)(this->Scale3D).ZW.m128d_f64 + 4);
  auVar8._0_8_ = CONCAT44(uVar9,uVar7);
  auVar8._8_4_ = _UNK_15061cc88 & *(uint *)((this->Scale3D).ZW.m128d_f64 + 1);
  auVar8._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(this->Scale3D).ZW.m128d_f64 + 0xc);
  uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff & *(uint *)(this->Scale3D).XY.m128d_f64;
  uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
           *(uint *)((longlong)(this->Scale3D).XY.m128d_f64 + 4);
  uVar12 = _UNK_15061cc88 & *(uint *)((this->Scale3D).XY.m128d_f64 + 1);
  uVar13 = _UNK_15061cc8c & *(uint *)((longlong)(this->Scale3D).XY.m128d_f64 + 0xc);
  auVar5._12_4_ = uVar11;
  auVar5._8_4_ = uVar10;
  auVar5._0_8_ = auVar8._0_8_;
  auVar4._4_4_ = uVar13;
  auVar4._0_4_ = uVar12;
  auVar3._4_4_ = uVar11;
  auVar3._0_4_ = uVar10;
  auVar3._8_4_ = uVar12;
  auVar3._12_4_ = uVar13;
  auVar4._8_4_ = uVar7;
  auVar4._12_4_ = uVar9;
  auVar4 = maxpd(auVar3,auVar4);
  auVar5 = maxpd(auVar4,auVar5);
  auVar2._4_4_ = uVar11;
  auVar2._0_4_ = uVar10;
  auVar2._8_4_ = uVar12;
  auVar2._12_4_ = uVar13;
  auVar1._4_4_ = uVar13;
  auVar1._0_4_ = uVar12;
  auVar4 = blendpd(auVar2,auVar8,2);
  auVar6._8_4_ = auVar8._8_4_;
  auVar6._0_8_ = auVar8._0_8_;
  auVar6._12_4_ = auVar8._12_4_;
  auVar4 = maxpd(auVar6,auVar4);
  auVar1._8_4_ = auVar8._8_4_;
  auVar1._12_4_ = auVar8._12_4_;
  maxpd(auVar4,auVar1);
  return (float)auVar5._0_8_;
}

// GetMinimumAxisScale @ 1417d49e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall UE::Math::TTransform<float>::GetMinimumAxisScale(TTransform<float> *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar5;
  uint uVar6;
  undefined1 auVar4 [16];
  
  uVar3 = __xmm_7fffffff7fffffff7fffffff7fffffff & (this->Scale3D).m128_u32[0];
  uVar5 = _UNK_15061cc74 & (this->Scale3D).m128_u32[1];
  auVar1._4_4_ = uVar5;
  auVar1._0_4_ = uVar3;
  uVar6 = _UNK_15061cc78 & (this->Scale3D).m128_u32[2];
  auVar4._12_4_ = _UNK_15061cc7c & (this->Scale3D).m128_u32[3];
  auVar1._8_4_ = uVar6;
  auVar1._12_4_ = auVar4._12_4_;
  auVar2._4_4_ = uVar6;
  auVar2._0_4_ = uVar5;
  auVar2._8_4_ = uVar3;
  auVar2._12_4_ = auVar4._12_4_;
  auVar2 = minps(auVar1,auVar2);
  auVar4._4_4_ = uVar3;
  auVar4._0_4_ = uVar6;
  auVar4._8_4_ = uVar5;
  auVar2 = minps(auVar2,auVar4);
  return auVar2._0_4_;
}

// GetMinimumAxisScale @ 1417d4a10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall UE::Math::TTransform<double>::GetMinimumAxisScale(TTransform<double> *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auVar8 [16];
  
  uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff & *(uint *)(this->Scale3D).ZW.m128d_f64;
  uVar9 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
          *(uint *)((longlong)(this->Scale3D).ZW.m128d_f64 + 4);
  auVar8._0_8_ = CONCAT44(uVar9,uVar7);
  auVar8._8_4_ = _UNK_15061cc88 & *(uint *)((this->Scale3D).ZW.m128d_f64 + 1);
  auVar8._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(this->Scale3D).ZW.m128d_f64 + 0xc);
  uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff & *(uint *)(this->Scale3D).XY.m128d_f64;
  uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
           *(uint *)((longlong)(this->Scale3D).XY.m128d_f64 + 4);
  uVar12 = _UNK_15061cc88 & *(uint *)((this->Scale3D).XY.m128d_f64 + 1);
  uVar13 = _UNK_15061cc8c & *(uint *)((longlong)(this->Scale3D).XY.m128d_f64 + 0xc);
  auVar5._12_4_ = uVar11;
  auVar5._8_4_ = uVar10;
  auVar5._0_8_ = auVar8._0_8_;
  auVar4._4_4_ = uVar13;
  auVar4._0_4_ = uVar12;
  auVar3._4_4_ = uVar11;
  auVar3._0_4_ = uVar10;
  auVar3._8_4_ = uVar12;
  auVar3._12_4_ = uVar13;
  auVar4._8_4_ = uVar7;
  auVar4._12_4_ = uVar9;
  auVar4 = minpd(auVar3,auVar4);
  auVar5 = minpd(auVar4,auVar5);
  auVar2._4_4_ = uVar11;
  auVar2._0_4_ = uVar10;
  auVar2._8_4_ = uVar12;
  auVar2._12_4_ = uVar13;
  auVar1._4_4_ = uVar13;
  auVar1._0_4_ = uVar12;
  auVar4 = blendpd(auVar2,auVar8,2);
  auVar6._8_4_ = auVar8._8_4_;
  auVar6._0_8_ = auVar8._0_8_;
  auVar6._12_4_ = auVar8._12_4_;
  auVar4 = minpd(auVar6,auVar4);
  auVar1._8_4_ = auVar8._8_4_;
  auVar1._12_4_ = auVar8._12_4_;
  minpd(auVar4,auVar1);
  return (float)auVar5._0_8_;
}

// GetRelativeTransform @ 1417d5330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<float> * __thiscall
UE::Math::TTransform<float>::GetRelativeTransform
          (TTransform<float> *this,TTransform<float> *__return_storage_ptr__,
          TTransform<float> *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  __m128 _Var5;
  __m128 _Var6;
  undefined4 in_EAX;
  int iVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar19;
  float fVar20;
  undefined1 auVar18 [16];
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  __m128 local_78;
  undefined1 local_68 [8];
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  
  _Var5 = Identity.Translation;
  uVar4 = _UNK_15061cc7c;
  uVar3 = _UNK_15061cc78;
  uVar2 = _UNK_15061cc74;
  uVar1 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  local_78 = GlobalVectorConstants::Float0001;
  _local_58 = GlobalVectorConstants::Float1110;
  fVar9 = (param_1->Rotation).m128_f32[0] * (param_1->Rotation).m128_f32[0];
  fVar11 = (param_1->Rotation).m128_f32[1] * (param_1->Rotation).m128_f32[1];
  fVar12 = (param_1->Rotation).m128_f32[2] * (param_1->Rotation).m128_f32[2];
  fVar13 = (param_1->Rotation).m128_f32[3] * (param_1->Rotation).m128_f32[3];
  _local_68 = GlobalVectorConstants::FloatZero;
  fVar10 = fVar9 + fVar11;
  fVar11 = fVar11 + fVar9;
  fVar9 = fVar12 + fVar13;
  fVar13 = fVar13 + fVar12;
  auVar8._4_4_ = -(uint)(GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] <
                        (float)((uint)(GlobalVectorConstants::FloatOne.m128_f32[1] -
                                      (fVar11 + fVar13)) & _UNK_15061cc74));
  auVar8._0_4_ = -(uint)(GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] <
                        (float)((uint)(GlobalVectorConstants::FloatOne.m128_f32[0] -
                                      (fVar10 + fVar9)) & __xmm_7fffffff7fffffff7fffffff7fffffff));
  auVar8._8_4_ = -(uint)(GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] <
                        (float)((uint)(GlobalVectorConstants::FloatOne.m128_f32[2] -
                                      (fVar9 + fVar10)) & _UNK_15061cc78));
  auVar8._12_4_ =
       -(uint)(GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] <
              (float)((uint)(GlobalVectorConstants::FloatOne.m128_f32[3] - (fVar13 + fVar11)) &
                     _UNK_15061cc7c));
  iVar7 = movmskps(in_EAX,auVar8);
  if (iVar7 == 0) {
    auVar8 = minps((undefined1  [16])this->Scale3D,(undefined1  [16])param_1->Scale3D);
    auVar23._4_4_ = -(uint)(auVar8._4_4_ < GlobalVectorConstants::FloatZero.m128_f32[1]);
    auVar23._0_4_ = -(uint)(auVar8._0_4_ < GlobalVectorConstants::FloatZero.m128_f32[0]);
    auVar23._8_4_ = -(uint)(auVar8._8_4_ < GlobalVectorConstants::FloatZero.m128_f32[2]);
    auVar23._12_4_ = -(uint)(auVar8._12_4_ < GlobalVectorConstants::FloatZero.m128_f32[3]);
    iVar7 = movmskps(0,auVar23);
    if (iVar7 == 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_struct_UE::Math::TTransform<float>___cdecl_UE::Math::TTransform<float>::GetRelativeTransform(UE::Math::TTransform<float>_const&___ptr64)const___ptr64'
           ::__l10::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_struct_UE::Math::TTransform<float>___cdecl_UE::Math::TTransform<float>::GetRelativeTransform(UE::Math::TTransform<float>_const&___ptr64)const___ptr64'
                               ::__l10::_thread_safe_static_guard_0__),
         `public:_struct_UE::Math::TTransform<float>___cdecl_UE::Math::TTransform<float>::GetRelativeTransform(UE::Math::TTransform<float>_const&___ptr64)const___ptr64'
         ::__l10::_thread_safe_static_guard_0__ == -1)) {
        `public:_struct_UE::Math::TTransform<float>___cdecl_UE::Math::TTransform<float>::GetRelativeTransform(UE::Math::TTransform<float>_const&___ptr64)const___ptr64'
        ::__l10::STolerance.Value = ___xmm_322bcc77322bcc77322bcc77322bcc77;
        _Init_thread_footer(&`public:_struct_UE::Math::TTransform<float>___cdecl_UE::Math::TTransform<float>::GetRelativeTransform(UE::Math::TTransform<float>_const&___ptr64)const___ptr64'
                             ::__l10::_thread_safe_static_guard_0__);
      }
      auVar8 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,
                     (undefined1  [16])param_1->Scale3D);
      fVar9 = (this->Rotation).m128_f32[0];
      fVar10 = (this->Rotation).m128_f32[1];
      fVar11 = (this->Rotation).m128_f32[2];
      fVar12 = (this->Rotation).m128_f32[3];
      auVar22._0_4_ =
           ~-(uint)((float)((param_1->Scale3D).m128_u32[0] & uVar1) <=
                   `public:_struct_UE::Math::TTransform<float>___cdecl_UE::Math::TTransform<float>::GetRelativeTransform(UE::Math::TTransform<float>_const&___ptr64)const___ptr64'
                   ::__l10::STolerance.Value._0_4_) & auVar8._0_4_;
      auVar22._4_4_ =
           ~-(uint)((float)((param_1->Scale3D).m128_u32[1] & uVar2) <=
                   `public:_struct_UE::Math::TTransform<float>___cdecl_UE::Math::TTransform<float>::GetRelativeTransform(UE::Math::TTransform<float>_const&___ptr64)const___ptr64'
                   ::__l10::STolerance.Value._4_4_) & auVar8._4_4_;
      auVar22._8_4_ =
           ~-(uint)((float)((param_1->Scale3D).m128_u32[2] & uVar3) <=
                   `public:_struct_UE::Math::TTransform<float>___cdecl_UE::Math::TTransform<float>::GetRelativeTransform(UE::Math::TTransform<float>_const&___ptr64)const___ptr64'
                   ::__l10::STolerance.Value._8_4_) & auVar8._8_4_;
      auVar22._12_4_ =
           ~-(uint)((float)((param_1->Scale3D).m128_u32[3] & uVar4) <=
                   `public:_struct_UE::Math::TTransform<float>___cdecl_UE::Math::TTransform<float>::GetRelativeTransform(UE::Math::TTransform<float>_const&___ptr64)const___ptr64'
                   ::__l10::STolerance.Value._12_4_) & auVar8._12_4_;
      fVar24 = (param_1->Rotation).m128_f32[0] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
      fVar25 = (param_1->Rotation).m128_f32[1] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
      fVar26 = (param_1->Rotation).m128_f32[2] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
      fVar27 = (param_1->Rotation).m128_f32[3] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
      auVar18._0_4_ = (this->Translation).m128_f32[0] - (param_1->Translation).m128_f32[0];
      auVar18._4_4_ = (this->Translation).m128_f32[1] - (param_1->Translation).m128_f32[1];
      auVar18._8_4_ = (this->Translation).m128_f32[2] - (param_1->Translation).m128_f32[2];
      auVar18._12_4_ = (this->Translation).m128_f32[3] - (param_1->Translation).m128_f32[3];
      auVar23 = insertps(auVar22,auVar22,8);
      local_58._0_4_ = auVar23._0_4_ * (this->Scale3D).m128_f32[0];
      local_58._4_4_ = auVar23._4_4_ * (this->Scale3D).m128_f32[1];
      fStack_50 = auVar23._8_4_ * (this->Scale3D).m128_f32[2];
      fStack_4c = auVar23._12_4_ * (this->Scale3D).m128_f32[3];
      auVar8 = insertps(auVar18,auVar18,8);
      fVar17 = auVar8._0_4_;
      fVar19 = auVar8._4_4_;
      fVar20 = auVar8._8_4_;
      fVar21 = auVar8._12_4_;
      fVar13 = fVar19 * fVar24 - fVar25 * fVar17;
      fVar14 = fVar20 * fVar25 - fVar26 * fVar19;
      fVar15 = fVar17 * fVar26 - fVar24 * fVar20;
      fVar16 = fVar21 * fVar27 - fVar27 * fVar21;
      fVar14 = fVar14 + fVar14;
      fVar15 = fVar15 + fVar15;
      fVar13 = fVar13 + fVar13;
      fVar16 = fVar16 + fVar16;
      local_68._0_4_ =
           (fVar27 * fVar14 + fVar17 + (fVar13 * fVar25 - fVar15 * fVar26)) * auVar23._0_4_;
      local_68._4_4_ =
           (fVar27 * fVar15 + fVar19 + (fVar14 * fVar26 - fVar13 * fVar24)) * auVar23._4_4_;
      fStack_60 = (fVar27 * fVar13 + fVar20 + (fVar15 * fVar24 - fVar14 * fVar25)) * auVar23._8_4_;
      fStack_5c = (fVar27 * fVar16 + fVar21 + (fVar16 * fVar27 - fVar16 * fVar27)) * auVar23._12_4_;
      local_78.m128_f32[0] =
           fVar12 * fVar24 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] + fVar27 * fVar9 +
           fVar11 * fVar25 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
           fVar10 * fVar26 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
      local_78.m128_f32[1] =
           fVar11 * fVar24 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1] + fVar27 * fVar10
           + fVar12 * fVar25 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1] +
           fVar9 * fVar26 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
      local_78.m128_f32[2] =
           fVar10 * fVar24 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2] + fVar27 * fVar11
           + fVar9 * fVar25 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2] +
           fVar12 * fVar26 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
      local_78.m128_f32[3] =
           fVar9 * fVar24 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3] + fVar27 * fVar12 +
           fVar10 * fVar25 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3] +
           fVar11 * fVar26 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
    }
    else {
      GetRelativeTransformUsingMatrixWithScale((TTransform<float> *)&local_78,this,param_1);
    }
    (__return_storage_ptr__->Rotation).m128_i32[0] = (int)local_78.m128_f32[0];
    (__return_storage_ptr__->Rotation).m128_i32[1] = (int)local_78.m128_f32[1];
    (__return_storage_ptr__->Rotation).m128_i32[2] = (int)local_78.m128_f32[2];
    (__return_storage_ptr__->Rotation).m128_i32[3] = (int)local_78.m128_f32[3];
    (__return_storage_ptr__->Translation).m128_i32[0] = local_68._0_4_;
    (__return_storage_ptr__->Translation).m128_i32[1] = local_68._4_4_;
    (__return_storage_ptr__->Translation).m128_i32[2] = (int)fStack_60;
    (__return_storage_ptr__->Translation).m128_i32[3] = (int)fStack_5c;
    (__return_storage_ptr__->Scale3D).m128_i32[0] = local_58._0_4_;
    (__return_storage_ptr__->Scale3D).m128_i32[1] = local_58._4_4_;
    (__return_storage_ptr__->Scale3D).m128_i32[2] = (int)fStack_50;
    (__return_storage_ptr__->Scale3D).m128_i32[3] = (int)fStack_4c;
  }
  else {
    __return_storage_ptr__->Rotation = Identity.Rotation;
    _Var6 = Identity.Scale3D;
    __return_storage_ptr__->Translation = _Var5;
    __return_storage_ptr__->Scale3D = _Var6;
  }
  return __return_storage_ptr__;
}

// GetRelativeTransform @ 1417d55c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __thiscall
UE::Math::TTransform<double>::GetRelativeTransform
          (TTransform<double> *this,TTransform<double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  __m128d _Var15;
  uint uVar16;
  TMatrix<double> *pTVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  double dVar38;
  double dVar39;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar40 [16];
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined4 uVar46;
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined4 uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auStack_328 [48];
  VectorRegister4Double local_2f8;
  TTransform<double> local_2d8;
  TMatrix<double> local_248;
  TMatrix<double> local_1c8;
  TMatrix<double> local_148;
  ulonglong local_c8;
  
  uVar14 = _UNK_15061cc8c;
  uVar13 = _UNK_15061cc88;
  uVar12 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar11 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_328;
  local_2d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_2d8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_2d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_2d8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_2d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_2d8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_2d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_2d8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  dVar3 = (param_1->Rotation).XY.m128d_f64[0];
  dVar32 = (param_1->Rotation).XY.m128d_f64[1];
  dVar31 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar41 = (param_1->Rotation).ZW.m128d_f64[1];
  local_2d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_2d8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  dVar31 = dVar3 * dVar3 + dVar31 * dVar31;
  dVar38 = dVar32 * dVar32 + dVar41 * dVar41;
  auVar42._8_4_ = SUB84(dVar38,0);
  auVar42._0_8_ = dVar31;
  auVar42._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
  dVar41 = auVar42._8_8_ + dVar31;
  dVar3 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  dVar32 = (double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar41;
  dVar39 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - (dVar31 + dVar38);
  auVar49._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar32,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar49._8_4_ = SUB84(dVar39,0) & _UNK_15061cc88;
  auVar49._12_4_ = (uint)((ulonglong)dVar39 >> 0x20) & _UNK_15061cc8c;
  auVar23._8_8_ =
       -(ulonglong)((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] < auVar49._8_8_)
  ;
  auVar23._0_8_ =
       -(ulonglong)((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] < auVar49._0_8_)
  ;
  iVar18 = movmskpd((int)this,auVar23);
  dVar41 = (double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar41;
  dVar32 = (double)GlobalVectorConstants::FloatOne.m128_f32[3] - (dVar31 + dVar38);
  local_2d8.Translation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar3,0);
  local_2d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_2d8.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar3 >> 0x20);
  auVar33._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar41,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar33._8_4_ = SUB84(dVar32,0) & _UNK_15061cc88;
  auVar33._12_4_ = (uint)((ulonglong)dVar32 >> 0x20) & _UNK_15061cc8c;
  auVar34._8_8_ =
       -(ulonglong)((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] < auVar33._8_8_)
  ;
  auVar34._0_8_ =
       -(ulonglong)((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] < auVar33._0_8_)
  ;
  uVar16 = movmskpd((int)local_c8,auVar34);
  if ((uVar16 & 0x3fffffff) == 0 && iVar18 == 0) {
    auVar34 = minpd(*(undefined1 (*) [16])(this->Scale3D).ZW.m128d_f64,
                    *(undefined1 (*) [16])(param_1->Scale3D).ZW.m128d_f64);
    auVar23 = minpd(*(undefined1 (*) [16])(this->Scale3D).XY.m128d_f64,
                    *(undefined1 (*) [16])(param_1->Scale3D).XY.m128d_f64);
    auVar35._8_8_ = -(ulonglong)(auVar34._8_8_ < dVar3);
    auVar35._0_8_ =
         -(ulonglong)(auVar34._0_8_ < (double)GlobalVectorConstants::FloatZero.m128_f32[2]);
    uVar16 = movmskpd(0,auVar35);
    auVar24._8_8_ = -(ulonglong)(auVar23._8_8_ < local_2d8.Translation.XY.m128d_f64[1]);
    auVar24._0_8_ = -(ulonglong)(auVar23._0_8_ < local_2d8.Translation.XY.m128d_f64[0]);
    iVar18 = movmskpd(iVar18,auVar24);
    if ((uVar16 & 0x3fffffff) == 0 && iVar18 == 0) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) <
          `public:_struct_UE::Math::TTransform<double>___cdecl_UE::Math::TTransform<double>::GetRelativeTransform(UE::Math::TTransform<double>_const&___ptr64)const___ptr64'
          ::__l10::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:_struct_UE::Math::TTransform<double>___cdecl_UE::Math::TTransform<double>::GetRelativeTransform(UE::Math::TTransform<double>_const&___ptr64)const___ptr64'
                             ::__l10::_thread_safe_static_guard_0__);
        if (`public:_struct_UE::Math::TTransform<double>___cdecl_UE::Math::TTransform<double>::GetRelativeTransform(UE::Math::TTransform<double>_const&___ptr64)const___ptr64'
            ::__l10::_thread_safe_static_guard_0__ == -1) {
          `public:_struct_UE::Math::TTransform<double>___cdecl_UE::Math::TTransform<double>::GetRelativeTransform(UE::Math::TTransform<double>_const&___ptr64)const___ptr64'
          ::__l10::STolerance.Value = ___xmm_322bcc77322bcc77322bcc77322bcc77;
          _Init_thread_footer(&`public:_struct_UE::Math::TTransform<double>___cdecl_UE::Math::TTransform<double>::GetRelativeTransform(UE::Math::TTransform<double>_const&___ptr64)const___ptr64'
                               ::__l10::_thread_safe_static_guard_0__);
        }
      }
      auVar51._0_8_ =
           (double)CONCAT44(uVar12 & *(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 4),
                            uVar11 & *(uint *)(param_1->Scale3D).XY.m128d_f64);
      auVar51._8_4_ = uVar13 & *(uint *)((param_1->Scale3D).XY.m128d_f64 + 1);
      auVar51._12_4_ = uVar14 & *(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 0xc);
      dVar31 = (param_1->Rotation).XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar41 = (param_1->Rotation).XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar38 = (param_1->Rotation).ZW.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar39 = (param_1->Rotation).ZW.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      uVar50 = (undefined4)((ulonglong)dVar39 >> 0x20);
      dVar3 = (this->Translation).XY.m128d_f64[0] - (param_1->Translation).XY.m128d_f64[0];
      dVar32 = (this->Translation).XY.m128d_f64[1] - (param_1->Translation).XY.m128d_f64[1];
      uVar46 = (undefined4)((ulonglong)dVar32 >> 0x20);
      lVar19 = -(ulonglong)
                ((double)CONCAT44(uVar12 & *(uint *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 4),
                                  uVar11 & *(uint *)(param_1->Scale3D).ZW.m128d_f64) <=
                (double)`public:_struct_UE::Math::TTransform<double>___cdecl_UE::Math::TTransform<double>::GetRelativeTransform(UE::Math::TTransform<double>_const&___ptr64)const___ptr64'
                        ::__l10::STolerance.Value._8_4_);
      auVar23 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                      *(undefined1 (*) [16])(param_1->Scale3D).XY.m128d_f64);
      lVar20 = -(ulonglong)
                (auVar51._0_8_ <=
                (double)`public:_struct_UE::Math::TTransform<double>___cdecl_UE::Math::TTransform<double>::GetRelativeTransform(UE::Math::TTransform<double>_const&___ptr64)const___ptr64'
                        ::__l10::STolerance.Value._0_4_);
      lVar21 = -(ulonglong)
                (auVar51._8_8_ <=
                (double)`public:_struct_UE::Math::TTransform<double>___cdecl_UE::Math::TTransform<double>::GetRelativeTransform(UE::Math::TTransform<double>_const&___ptr64)const___ptr64'
                        ::__l10::STolerance.Value._4_4_);
      auVar52._0_8_ =
           (double)CONCAT44(~(uint)((ulonglong)lVar20 >> 0x20) & auVar23._4_4_,
                            ~(uint)lVar20 & auVar23._0_4_);
      auVar52._8_4_ = ~(uint)lVar21 & auVar23._8_4_;
      auVar52._12_4_ = ~(uint)((ulonglong)lVar21 >> 0x20) & auVar23._12_4_;
      auVar23 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                      *(undefined1 (*) [16])(param_1->Scale3D).ZW.m128d_f64);
      auVar53._8_4_ = SUB84(dVar32,0);
      auVar53._0_8_ = dVar3;
      auVar53._12_4_ = uVar46;
      auVar40._8_4_ = SUB84(dVar41,0);
      auVar40._0_8_ = dVar31;
      auVar40._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
      local_2d8.Translation.ZW.m128d_f64[0] =
           (double)CONCAT44(~(uint)((ulonglong)lVar19 >> 0x20) & auVar23._4_4_,
                            ~(uint)lVar19 & auVar23._0_4_);
      dVar22 = (this->Translation).ZW.m128d_f64[0] - (param_1->Translation).ZW.m128d_f64[0];
      auVar25._8_4_ = SUB84(dVar38,0);
      auVar25._0_8_ = dVar41;
      auVar25._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
      auVar6._8_4_ = SUB84(dVar39,0);
      auVar6._0_8_ = dVar38;
      auVar6._12_4_ = uVar50;
      auVar34 = blendpd(auVar40,auVar6,2);
      auVar54._0_8_ = auVar53._8_8_ * dVar31 - dVar41 * dVar3;
      auVar54._8_8_ = dVar22 * dVar41 - auVar25._8_8_ * dVar32;
      auVar36._8_4_ = SUB84(dVar32,0);
      auVar36._0_8_ = dVar3;
      auVar36._12_4_ = uVar46;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = dVar22;
      auVar23 = blendpd(auVar36,auVar5,2);
      auVar43._8_4_ = SUB84(auVar54._8_8_,0);
      auVar43._0_8_ = auVar54._0_8_;
      auVar43._12_4_ = (int)((ulonglong)auVar54._8_8_ >> 0x20);
      auVar37._0_8_ = auVar23._0_8_ * dVar38 - auVar34._0_8_ * dVar22;
      auVar37._8_8_ = auVar23._8_8_ * dVar39 - auVar34._8_8_ * 0.0;
      auVar44._0_8_ = auVar43._8_8_ + auVar43._8_8_;
      auVar44._8_8_ = auVar37._0_8_ + auVar37._0_8_;
      auVar23 = blendpd(auVar54,auVar37,2);
      dVar7 = (this->Rotation).ZW.m128d_f64[0];
      dVar8 = (this->Rotation).ZW.m128d_f64[1];
      auVar47._8_4_ = SUB84(auVar44._8_8_,0);
      auVar47._0_8_ = auVar44._0_8_;
      uVar46 = (undefined4)((ulonglong)auVar44._8_8_ >> 0x20);
      auVar47._12_4_ = uVar46;
      auVar26._8_4_ = SUB84(auVar44._8_8_,0);
      auVar26._0_8_ = auVar44._0_8_;
      auVar26._12_4_ = uVar46;
      auVar55._0_8_ = auVar23._0_8_ + auVar23._0_8_;
      auVar55._8_8_ = auVar23._8_8_ + auVar23._8_8_;
      auVar23 = blendpd(auVar44,auVar55,2);
      auVar48._0_8_ = auVar47._8_8_ * dVar31 - auVar44._0_8_ * dVar41;
      auVar48._8_8_ = auVar55._0_8_ * dVar41 - auVar26._8_8_ * dVar38;
      auVar27._8_4_ = SUB84(auVar55._8_8_,0);
      auVar27._0_8_ = auVar55._0_8_;
      auVar27._12_4_ = (int)((ulonglong)auVar55._8_8_ >> 0x20);
      auVar45._0_8_ = auVar23._0_8_ * dVar38 - auVar55._0_8_ * auVar34._0_8_;
      auVar45._8_8_ = auVar23._8_8_ * dVar39 - auVar27._8_8_ * auVar34._8_8_;
      dVar9 = (this->Rotation).XY.m128d_f64[0];
      dVar10 = (this->Rotation).XY.m128d_f64[1];
      auVar28._8_4_ = auVar52._8_4_;
      auVar28._0_8_ = auVar52._0_8_;
      auVar28._12_4_ = auVar52._12_4_;
      local_2d8.Scale3D.XY.m128d_f64[0] = auVar52._0_8_ * (this->Scale3D).XY.m128d_f64[0];
      local_2d8.Scale3D.XY.m128d_f64[1] = auVar28._8_8_ * (this->Scale3D).XY.m128d_f64[1];
      local_2d8.Scale3D.ZW.m128d_f64[0] =
           local_2d8.Translation.ZW.m128d_f64[0] * (this->Scale3D).ZW.m128d_f64[0];
      local_2d8.Scale3D.ZW.m128d_f64[1] = (this->Scale3D).ZW.m128d_f64[1] * 0.0;
      auVar29._8_4_ = SUB84(auVar48._8_8_,0);
      auVar29._0_8_ = auVar48._0_8_;
      auVar29._12_4_ = (int)((ulonglong)auVar48._8_8_ >> 0x20);
      auVar23 = blendpd(auVar48,auVar45,2);
      auVar30._8_4_ = SUB84(dVar39,0);
      auVar30._0_8_ = dVar39;
      auVar30._12_4_ = uVar50;
      local_2d8.Rotation.XY.m128d_f64[0] =
           dVar8 * dVar31 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar39 * dVar9 +
           dVar7 * dVar41 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar10 * dVar38 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      local_2d8.Rotation.XY.m128d_f64[1] =
           dVar7 * dVar31 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           auVar30._8_8_ * dVar10 +
           dVar8 * dVar41 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           dVar9 * dVar38 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      local_2d8.Rotation.ZW.m128d_f64[0] =
           dVar10 * dVar31 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar39 * dVar7 +
           dVar9 * dVar41 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar8 * dVar38 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      local_2d8.Rotation.ZW.m128d_f64[1] =
           dVar9 * dVar31 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar39 * dVar8 +
           dVar10 * dVar41 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar7 * dVar38 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      local_2d8.Translation.XY.m128d_f64[0] =
           (auVar44._0_8_ * dVar39 + dVar3 + auVar29._8_8_) * auVar52._0_8_;
      local_2d8.Translation.XY.m128d_f64[1] =
           (auVar44._8_8_ * dVar39 + dVar32 + auVar45._0_8_) * auVar52._8_8_;
      local_2d8.Translation.ZW.m128d_f64[0] =
           (auVar55._0_8_ * dVar39 + dVar22 + auVar23._0_8_) * local_2d8.Translation.ZW.m128d_f64[0]
      ;
      local_2d8.Translation.ZW.m128d_f64[1] = (auVar55._8_8_ * dVar39 + 0.0 + auVar23._8_8_) * 0.0;
    }
    else {
      ToMatrixWithScale(this,&local_1c8);
      ToMatrixWithScale(param_1,&local_248);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) <
          `private:_static_void___cdecl_UE::Math::TTransform<double>::GetRelativeTransformUsingMatrixWithScale(UE::Math::TTransform<double>*___ptr64,UE::Math::TTransform<double>_const*___ptr64,UE::Math::TTransform<double>_const*___ptr64)'
          ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`private:_static_void___cdecl_UE::Math::TTransform<double>::GetRelativeTransformUsingMatrixWithScale(UE::Math::TTransform<double>*___ptr64,UE::Math::TTransform<double>_const*___ptr64,UE::Math::TTransform<double>_const*___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`private:_static_void___cdecl_UE::Math::TTransform<double>::GetRelativeTransformUsingMatrixWithScale(UE::Math::TTransform<double>*___ptr64,UE::Math::TTransform<double>_const*___ptr64,UE::Math::TTransform<double>_const*___ptr64)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          `private:_static_void___cdecl_UE::Math::TTransform<double>::GetRelativeTransformUsingMatrixWithScale(UE::Math::TTransform<double>*___ptr64,UE::Math::TTransform<double>_const*___ptr64,UE::Math::TTransform<double>_const*___ptr64)'
          ::__l2::STolerance.Value = ___xmm_322bcc77322bcc77322bcc77322bcc77;
          _Init_thread_footer(&`private:_static_void___cdecl_UE::Math::TTransform<double>::GetRelativeTransformUsingMatrixWithScale(UE::Math::TTransform<double>*___ptr64,UE::Math::TTransform<double>_const*___ptr64,UE::Math::TTransform<double>_const*___ptr64)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      _Var15.m128d_f64 = GlobalVectorConstants::DoubleOne.XY.m128d_f64;
      fVar2 = `private:_static_void___cdecl_UE::Math::TTransform<double>::GetRelativeTransformUsingMatrixWithScale(UE::Math::TTransform<double>*___ptr64,UE::Math::TTransform<double>_const*___ptr64,UE::Math::TTransform<double>_const*___ptr64)'
              ::__l2::STolerance.Value._0_4_;
      auVar23 = *(undefined1 (*) [16])(param_1->Scale3D).XY.m128d_f64;
      dVar31 = (this->Scale3D).XY.m128d_f64[0];
      dVar32 = (this->Scale3D).XY.m128d_f64[1];
      fVar1 = `private:_static_void___cdecl_UE::Math::TTransform<double>::GetRelativeTransformUsingMatrixWithScale(UE::Math::TTransform<double>*___ptr64,UE::Math::TTransform<double>_const*___ptr64,UE::Math::TTransform<double>_const*___ptr64)'
              ::__l2::STolerance.Value._4_4_;
      lVar19 = -(ulonglong)
                ((double)CONCAT44(*(uint *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 4) & uVar12,
                                  *(uint *)(param_1->Scale3D).ZW.m128d_f64 & uVar11) <=
                (double)`private:_static_void___cdecl_UE::Math::TTransform<double>::GetRelativeTransformUsingMatrixWithScale(UE::Math::TTransform<double>*___ptr64,UE::Math::TTransform<double>_const*___ptr64,UE::Math::TTransform<double>_const*___ptr64)'
                        ::__l2::STolerance.Value._8_4_);
      auVar34 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                      *(undefined1 (*) [16])(param_1->Scale3D).ZW.m128d_f64);
      dVar41 = (this->Scale3D).ZW.m128d_f64[0];
      dVar3 = (this->Scale3D).ZW.m128d_f64[1] * 0.0;
      pTVar17 = TMatrix<double>::Inverse(&local_248,&local_148);
      auVar49 = divpd((undefined1  [16])_Var15.m128d_f64,auVar23);
      local_2f8.ZW.m128d_f64[1]._0_4_ = SUB84(dVar3,0);
      local_2f8.ZW.m128d_f64[0] =
           (double)CONCAT44(~(uint)((ulonglong)lVar19 >> 0x20) & auVar34._4_4_,
                            ~(uint)lVar19 & auVar34._0_4_) * dVar41;
      local_2f8.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar3 >> 0x20);
      lVar19 = -(ulonglong)
                ((double)CONCAT44(auVar23._4_4_ & uVar12,auVar23._0_4_ & uVar11) <= (double)fVar2);
      lVar20 = -(ulonglong)
                ((double)CONCAT44(auVar23._12_4_ & uVar14,auVar23._8_4_ & uVar13) <= (double)fVar1);
      dVar32 = (double)CONCAT44(~(uint)((ulonglong)lVar20 >> 0x20) & auVar49._12_4_,
                                ~(uint)lVar20 & auVar49._8_4_) * dVar32;
      local_2f8.XY.m128d_f64[1]._0_4_ = SUB84(dVar32,0);
      local_2f8.XY.m128d_f64[0] =
           (double)CONCAT44(~(uint)((ulonglong)lVar19 >> 0x20) & auVar49._4_4_,
                            ~(uint)lVar19 & auVar49._0_4_) * dVar31;
      local_2f8.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar32 >> 0x20);
      ConstructTransformFromMatrixWithDesiredScale(&local_1c8,pTVar17,&local_2f8,&local_2d8);
    }
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_2d8.Rotation.XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_2d8.Rotation.XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_2d8.Rotation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_2d8.Rotation.ZW.m128d_f64[1];
    auVar4._8_4_ = SUB84(local_2d8.Translation.XY.m128d_f64[1],0);
    auVar4._0_8_ = local_2d8.Translation.XY.m128d_f64[0];
    auVar4._12_4_ = (int)((ulonglong)local_2d8.Translation.XY.m128d_f64[1] >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar4;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_2d8.Translation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_2d8.Translation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_2d8.Scale3D.XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_2d8.Scale3D.XY.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_2d8.Scale3D.ZW.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = local_2d8.Scale3D.ZW.m128d_f64[1];
  }
  else {
    *&(__return_storage_ptr__->Rotation).XY.m128d_f64 = Identity.Rotation.XY.m128d_f64;
    *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 = Identity.Rotation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Translation).XY.m128d_f64 = Identity.Translation.XY.m128d_f64;
    *&(__return_storage_ptr__->Translation).ZW.m128d_f64 = Identity.Translation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 = Identity.Scale3D.XY.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = Identity.Scale3D.ZW.m128d_f64;
  }
  return __return_storage_ptr__;
}

// GetRelativeTransformReverse @ 1417d5c50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<float> * __thiscall
UE::Math::TTransform<float>::GetRelativeTransformReverse
          (TTransform<float> *this,TTransform<float> *__return_storage_ptr__,
          TTransform<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  __m128 _Var6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar21;
  float fVar22;
  undefined1 auVar20 [16];
  float fVar23;
  
  __return_storage_ptr__->Rotation = GlobalVectorConstants::Float0001;
  __return_storage_ptr__->Translation = GlobalVectorConstants::FloatZero;
  __return_storage_ptr__->Scale3D = GlobalVectorConstants::Float1110;
  fVar1 = (param_1->Rotation).m128_f32[0];
  fVar2 = (param_1->Rotation).m128_f32[1];
  fVar3 = (param_1->Rotation).m128_f32[2];
  fVar4 = (param_1->Rotation).m128_f32[3];
  auVar5 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,(undefined1  [16])this->Scale3D);
  fVar7 = (this->Rotation).m128_f32[0] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
  fVar8 = (this->Rotation).m128_f32[1] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
  fVar9 = (this->Rotation).m128_f32[2] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
  fVar10 = (this->Rotation).m128_f32[3] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
  auVar20._0_4_ =
       ~-(uint)((float)(__xmm_7fffffff7fffffff7fffffff7fffffff & (this->Scale3D).m128_u32[0]) <=
               GlobalVectorConstants::SmallNumber.m128_f32[0]) & auVar5._0_4_;
  auVar20._4_4_ =
       ~-(uint)((float)(_UNK_15061cc74 & (this->Scale3D).m128_u32[1]) <=
               GlobalVectorConstants::SmallNumber.m128_f32[1]) & auVar5._4_4_;
  auVar20._8_4_ =
       ~-(uint)((float)(_UNK_15061cc78 & (this->Scale3D).m128_u32[2]) <=
               GlobalVectorConstants::SmallNumber.m128_f32[2]) & auVar5._8_4_;
  auVar20._12_4_ =
       ~-(uint)((float)(_UNK_15061cc7c & (this->Scale3D).m128_u32[3]) <=
               GlobalVectorConstants::SmallNumber.m128_f32[3]) & auVar5._12_4_;
  auVar5 = insertps(auVar20,auVar20,8);
  fVar19 = auVar5._0_4_ * (param_1->Scale3D).m128_f32[0];
  fVar21 = auVar5._4_4_ * (param_1->Scale3D).m128_f32[1];
  fVar22 = auVar5._8_4_ * (param_1->Scale3D).m128_f32[2];
  fVar23 = auVar5._12_4_ * (param_1->Scale3D).m128_f32[3];
  fVar11 = (this->Translation).m128_f32[0] * fVar19;
  fVar12 = (this->Translation).m128_f32[1] * fVar21;
  fVar13 = (this->Translation).m128_f32[2] * fVar22;
  fVar14 = (this->Translation).m128_f32[3] * fVar23;
  fVar15 = fVar1 * fVar10 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] + fVar4 * fVar7 +
           fVar2 * fVar9 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
           fVar3 * fVar8 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
  fVar16 = fVar1 * fVar9 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1] + fVar4 * fVar8 +
           fVar2 * fVar10 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1] +
           fVar3 * fVar7 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
  fVar17 = fVar1 * fVar8 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2] + fVar4 * fVar9 +
           fVar2 * fVar7 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2] +
           fVar3 * fVar10 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
  fVar18 = fVar1 * fVar7 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3] + fVar4 * fVar10 +
           fVar2 * fVar8 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3] +
           fVar3 * fVar9 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
  fVar7 = fVar12 * fVar15 - fVar16 * fVar11;
  fVar8 = fVar13 * fVar16 - fVar17 * fVar12;
  fVar9 = fVar11 * fVar17 - fVar15 * fVar13;
  fVar10 = fVar14 * fVar18 - fVar18 * fVar14;
  fVar8 = fVar8 + fVar8;
  fVar9 = fVar9 + fVar9;
  fVar7 = fVar7 + fVar7;
  fVar10 = fVar10 + fVar10;
  fVar1 = (param_1->Translation).m128_f32[0];
  fVar2 = (param_1->Translation).m128_f32[1];
  fVar3 = (param_1->Translation).m128_f32[2];
  fVar4 = (param_1->Translation).m128_f32[3];
  (__return_storage_ptr__->Scale3D).m128_f32[0] = fVar19;
  (__return_storage_ptr__->Scale3D).m128_f32[1] = fVar21;
  (__return_storage_ptr__->Scale3D).m128_f32[2] = fVar22;
  (__return_storage_ptr__->Scale3D).m128_f32[3] = fVar23;
  (__return_storage_ptr__->Rotation).m128_f32[0] = fVar15;
  (__return_storage_ptr__->Rotation).m128_f32[1] = fVar16;
  (__return_storage_ptr__->Rotation).m128_f32[2] = fVar17;
  (__return_storage_ptr__->Rotation).m128_f32[3] = fVar18;
  auVar5._0_4_ = fVar1 - (fVar18 * fVar8 + fVar11 + (fVar7 * fVar16 - fVar9 * fVar17));
  auVar5._4_4_ = fVar2 - (fVar18 * fVar9 + fVar12 + (fVar8 * fVar17 - fVar7 * fVar15));
  auVar5._8_4_ = fVar3 - (fVar18 * fVar7 + fVar13 + (fVar9 * fVar15 - fVar8 * fVar16));
  auVar5._12_4_ = fVar4 - (fVar18 * fVar10 + fVar14 + (fVar10 * fVar18 - fVar10 * fVar18));
  _Var6 = (__m128)insertps(auVar5,auVar5,8);
  __return_storage_ptr__->Translation = _Var6;
  return __return_storage_ptr__;
}

// GetRelativeTransformReverse @ 1417d5d90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __thiscall
UE::Math::TTransform<double>::GetRelativeTransformReverse
          (TTransform<double> *this,TTransform<double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  __m128 _Var18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
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
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar38;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  undefined4 uVar44;
  double dVar45;
  double dVar46;
  undefined4 uVar47;
  double dVar48;
  double dVar52;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  double dVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar59;
  
  _Var18.m128_f32 = GlobalVectorConstants::Float0001.m128_f32;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)_Var18.m128_f32[2];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)_Var18.m128_f32[3];
  _Var18 = GlobalVectorConstants::FloatZero;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)_Var18.m128_f32[2];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)_Var18.m128_f32[3];
  _Var18 = GlobalVectorConstants::Float1110;
  uVar17 = _UNK_15061cc8c;
  uVar16 = _UNK_15061cc88;
  uVar15 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar14 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)_Var18.m128_f32[2];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = (double)_Var18.m128_f32[3];
  auVar57._0_8_ =
       (double)CONCAT44(uVar15 & *(uint *)((longlong)(this->Scale3D).XY.m128d_f64 + 4),
                        uVar14 & *(uint *)(this->Scale3D).XY.m128d_f64);
  auVar57._8_4_ = uVar16 & *(uint *)((this->Scale3D).XY.m128d_f64 + 1);
  auVar57._12_4_ = uVar17 & *(uint *)((longlong)(this->Scale3D).XY.m128d_f64 + 0xc);
  dVar4 = (this->Rotation).ZW.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar5 = (this->Rotation).ZW.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar38 = (param_1->Rotation).XY.m128d_f64[0];
  dVar48 = (this->Rotation).XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar52 = (this->Rotation).XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar32 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
  dVar45 = auVar32._8_8_;
  auVar40 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
  dVar43 = auVar40._0_8_;
  lVar19 = -(ulonglong)
            ((double)CONCAT44(uVar15 & *(uint *)((longlong)(this->Scale3D).ZW.m128d_f64 + 4),
                              uVar14 & *(uint *)(this->Scale3D).ZW.m128d_f64) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                  *(undefined1 (*) [16])(this->Scale3D).XY.m128d_f64);
  lVar20 = -(ulonglong)(auVar57._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar21 = -(ulonglong)(auVar57._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar58._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar20 >> 0x20) & auVar29._4_4_,
                        ~(uint)lVar20 & auVar29._0_4_);
  auVar58._8_4_ = ~(uint)lVar21 & auVar29._8_4_;
  auVar58._12_4_ = ~(uint)((ulonglong)lVar21 >> 0x20) & auVar29._12_4_;
  auVar22 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                  *(undefined1 (*) [16])(this->Scale3D).ZW.m128d_f64);
  dVar56 = auVar58._0_8_ * (param_1->Scale3D).XY.m128d_f64[0];
  dVar59 = auVar58._8_8_ * (param_1->Scale3D).XY.m128d_f64[1];
  auVar34._8_4_ = SUB84(dVar52,0);
  auVar34._0_8_ = dVar48;
  auVar34._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
  auVar29 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  dVar12 = (double)CONCAT44(~(uint)((ulonglong)lVar19 >> 0x20) & auVar22._4_4_,
                            ~(uint)lVar19 & auVar22._0_4_) * (param_1->Scale3D).ZW.m128d_f64[0];
  dVar13 = (param_1->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar46 = auVar29._8_8_;
  auVar30._8_4_ = auVar29._8_4_;
  auVar30._0_8_ = dVar46;
  auVar30._12_4_ = auVar29._12_4_;
  auVar23._8_4_ = auVar32._8_4_;
  auVar23._0_8_ = dVar45;
  auVar23._12_4_ = auVar32._12_4_;
  auVar24._8_4_ = auVar40._0_4_;
  auVar24._0_8_ = dVar43;
  auVar24._12_4_ = auVar40._4_4_;
  dVar8 = dVar38 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          dVar45 * dVar48 +
          dVar46 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          dVar43 * auVar34._8_8_ * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar9 = dVar38 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          auVar23._8_8_ * dVar52 +
          auVar30._8_8_ * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          auVar24._8_8_ * dVar48 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  uVar53 = SUB84(dVar9,0);
  uVar54 = (undefined4)((ulonglong)dVar9 >> 0x20);
  auVar35._8_4_ = uVar53;
  auVar35._0_8_ = dVar8;
  auVar35._12_4_ = uVar54;
  dVar6 = (this->Translation).ZW.m128d_f64[0] * dVar12;
  dVar7 = (this->Translation).ZW.m128d_f64[1] * dVar13;
  dVar2 = (this->Translation).XY.m128d_f64[0] * dVar56;
  dVar3 = (this->Translation).XY.m128d_f64[1] * dVar59;
  uVar44 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar10 = dVar38 * auVar34._8_8_ * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
           + dVar45 * dVar4 +
           dVar46 * dVar48 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar43 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar4 = dVar38 * dVar48 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar45 * dVar5 +
          dVar46 * dVar52 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar43 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  uVar55 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar49._8_4_ = SUB84(dVar3,0);
  auVar49._0_8_ = dVar2;
  auVar49._12_4_ = uVar44;
  auVar39._8_4_ = uVar53;
  auVar39._0_8_ = dVar8;
  auVar39._12_4_ = uVar54;
  auVar31._8_4_ = SUB84(dVar3,0);
  auVar31._0_8_ = dVar2;
  auVar31._12_4_ = uVar44;
  dVar38 = auVar35._8_8_;
  auVar25._8_4_ = SUB84(dVar10,0);
  auVar25._0_8_ = dVar38;
  auVar25._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  auVar29._8_4_ = SUB84(dVar4,0);
  auVar29._0_8_ = dVar10;
  auVar29._12_4_ = uVar55;
  auVar40 = blendpd(auVar39,auVar29,2);
  auVar50._0_8_ = auVar49._8_8_ * dVar8 - dVar38 * dVar2;
  auVar50._8_8_ = dVar6 * dVar9 - auVar25._8_8_ * dVar3;
  auVar32._8_4_ = SUB84(dVar7,0);
  auVar32._0_8_ = dVar6;
  auVar32._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar32 = blendpd(auVar31,auVar32,2);
  auVar33._0_8_ = auVar32._0_8_ * dVar10 - auVar40._0_8_ * dVar6;
  auVar33._8_8_ = auVar32._8_8_ * dVar4 - auVar40._8_8_ * dVar7;
  auVar32 = blendpd(auVar50,auVar33,2);
  auVar51._0_8_ = auVar32._0_8_ + auVar32._0_8_;
  auVar51._8_8_ = auVar32._8_8_ + auVar32._8_8_;
  dVar5 = (param_1->Translation).ZW.m128d_f64[0];
  dVar43 = auVar50._8_8_ + auVar50._8_8_;
  dVar46 = auVar33._0_8_ + auVar33._0_8_;
  uVar44 = SUB84(dVar46,0);
  auVar41._8_4_ = uVar44;
  auVar41._0_8_ = dVar43;
  uVar47 = (undefined4)((ulonglong)dVar46 >> 0x20);
  auVar41._12_4_ = uVar47;
  auVar26._8_4_ = uVar44;
  auVar26._0_8_ = dVar43;
  auVar26._12_4_ = uVar47;
  auVar36._8_4_ = uVar44;
  auVar36._0_8_ = dVar43;
  auVar36._12_4_ = uVar47;
  auVar32 = blendpd(auVar36,auVar51,2);
  auVar42._0_8_ = auVar41._8_8_ * dVar8 - dVar43 * dVar38;
  auVar42._8_8_ = auVar51._0_8_ * dVar9 - auVar26._8_8_ * dVar10;
  auVar27._8_4_ = SUB84(auVar51._8_8_,0);
  auVar27._0_8_ = auVar51._0_8_;
  auVar27._12_4_ = (int)((ulonglong)auVar51._8_8_ >> 0x20);
  dVar7 = (param_1->Translation).XY.m128d_f64[0];
  dVar9 = (param_1->Translation).XY.m128d_f64[1];
  auVar11._8_4_ = SUB84(dVar13,0);
  auVar11._0_8_ = dVar12;
  auVar11._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar11;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar56;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar59;
  auVar37._0_8_ = auVar32._0_8_ * dVar10 - auVar51._0_8_ * auVar40._0_8_;
  auVar37._8_8_ = auVar32._8_8_ * dVar4 - auVar27._8_8_ * auVar40._8_8_;
  auVar28._8_4_ = SUB84(auVar42._8_8_,0);
  auVar28._0_8_ = auVar42._0_8_;
  auVar28._12_4_ = (int)((ulonglong)auVar42._8_8_ >> 0x20);
  auVar32 = blendpd(auVar42,auVar37,2);
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
       dVar7 - (dVar43 * dVar4 + dVar2 + auVar28._8_8_);
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] =
       dVar9 - (dVar46 * dVar4 + dVar3 + auVar37._0_8_);
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] =
       dVar5 - (auVar51._0_8_ * dVar4 + dVar6 + auVar32._0_8_);
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  auVar40._8_4_ = uVar53;
  auVar40._0_8_ = dVar8;
  auVar40._12_4_ = uVar54;
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar40;
  auVar22._8_4_ = SUB84(dVar4,0);
  auVar22._0_8_ = dVar10;
  auVar22._12_4_ = uVar55;
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar22;
  return __return_storage_ptr__;
}

// GetRelativeTransformUsingMatrixWithScale @ 1417d60b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Math::TTransform<float>::GetRelativeTransformUsingMatrixWithScale
          (TTransform<float> *param_1,TTransform<float> *param_2,TTransform<float> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  TMatrix<float> *pTVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_138 [32];
  __m128 local_118;
  TMatrix<float> local_108;
  TMatrix<float> local_c8;
  TMatrix<float> local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  fVar6 = (param_2->Rotation).m128_f32[0];
  fVar9 = (param_2->Rotation).m128_f32[1];
  fVar1 = (param_2->Rotation).m128_f32[2];
  fVar11 = (param_2->Rotation).m128_f32[3];
  local_c8.M[0][2] = (param_2->Scale3D).m128_f32[0];
  local_c8.M[1][0] = (param_2->Scale3D).m128_f32[1];
  local_c8.M[2][1] = (param_2->Scale3D).m128_f32[2];
  fVar8 = fVar9 + fVar9;
  fVar10 = fVar1 + fVar1;
  fVar5 = (fVar6 + fVar6) * fVar6;
  fVar12 = fVar11 * (fVar6 + fVar6);
  auVar13._0_4_ =
       (GlobalVectorConstants::FloatOne.m128_f32[0] - (fVar8 * fVar9 + fVar10 * fVar1)) *
       local_c8.M[0][2];
  auVar13._4_4_ =
       (GlobalVectorConstants::FloatOne.m128_f32[1] - (fVar5 + fVar10 * fVar1)) * local_c8.M[1][0];
  auVar13._8_4_ =
       (GlobalVectorConstants::FloatOne.m128_f32[2] - (fVar5 + fVar8 * fVar9)) * local_c8.M[2][1];
  auVar13._12_4_ =
       (GlobalVectorConstants::FloatOne.m128_f32[3] - (fVar5 + fVar5)) *
       (param_2->Scale3D).m128_f32[3];
  fVar1 = (param_3->Rotation).m128_f32[0];
  fVar5 = (param_3->Rotation).m128_f32[1];
  fVar2 = (param_3->Rotation).m128_f32[2];
  fVar3 = (param_3->Rotation).m128_f32[3];
  auVar13 = insertps(auVar13,auVar13,8);
  local_c8.M[0][1] = (fVar11 * fVar10 + fVar6 * fVar8) * local_c8.M[0][2];
  local_c8.M[1][2] = (fVar12 + fVar9 * fVar10) * local_c8.M[1][0];
  local_c8.M[2][0] = (fVar11 * fVar8 + fVar6 * fVar10) * local_c8.M[2][1];
  local_c8.M[1][0] = local_c8.M[1][0] * (fVar6 * fVar8 - fVar11 * fVar10);
  local_c8.M[2][1] = local_c8.M[2][1] * (fVar9 * fVar10 - fVar12);
  local_c8.M[0][2] = local_c8.M[0][2] * (fVar6 * fVar10 - fVar11 * fVar8);
  local_c8.M[0][0] = auVar13._0_4_;
  local_c8.M[1][1] = auVar13._4_4_;
  local_c8.M[2][2] = auVar13._8_4_;
  local_c8.M[0][3] = auVar13._12_4_;
  local_108.M[0][2] = (param_3->Scale3D).m128_f32[0];
  local_108.M[1][0] = (param_3->Scale3D).m128_f32[1];
  local_108.M[2][1] = (param_3->Scale3D).m128_f32[2];
  fVar9 = fVar5 + fVar5;
  fVar11 = fVar2 + fVar2;
  local_c8.M[3] =
       (float  [4])blendps(param_2->Translation,GlobalVectorConstants::FloatOne.m128_f32,8);
  fVar6 = (fVar1 + fVar1) * fVar1;
  fVar8 = fVar3 * (fVar1 + fVar1);
  auVar14._0_4_ =
       (GlobalVectorConstants::FloatOne.m128_f32[0] - (fVar9 * fVar5 + fVar11 * fVar2)) *
       local_108.M[0][2];
  auVar14._4_4_ =
       (GlobalVectorConstants::FloatOne.m128_f32[1] - (fVar6 + fVar11 * fVar2)) * local_108.M[1][0];
  auVar14._8_4_ =
       (GlobalVectorConstants::FloatOne.m128_f32[2] - (fVar6 + fVar9 * fVar5)) * local_108.M[2][1];
  auVar14._12_4_ =
       (GlobalVectorConstants::FloatOne.m128_f32[3] - (fVar6 + fVar6)) *
       (param_3->Scale3D).m128_f32[3];
  auVar13 = insertps(auVar14,auVar14,8);
  local_108.M[0][1] = (fVar3 * fVar11 + fVar1 * fVar9) * local_108.M[0][2];
  local_108.M[1][2] = (fVar8 + fVar5 * fVar11) * local_108.M[1][0];
  local_108.M[2][0] = (fVar3 * fVar9 + fVar1 * fVar11) * local_108.M[2][1];
  local_108.M[1][0] = local_108.M[1][0] * (fVar1 * fVar9 - fVar3 * fVar11);
  local_108.M[2][1] = local_108.M[2][1] * (fVar5 * fVar11 - fVar8);
  local_108.M[0][2] = local_108.M[0][2] * (fVar1 * fVar11 - fVar3 * fVar9);
  local_108.M[0][0] = auVar13._0_4_;
  local_108.M[1][1] = auVar13._4_4_;
  local_108.M[2][2] = auVar13._8_4_;
  local_108.M[0][3] = auVar13._12_4_;
  local_108.M[3] =
       (float  [4])blendps(param_3->Translation,GlobalVectorConstants::FloatOne.m128_f32,8);
  local_108.M[1][3] = local_108.M[0][3];
  local_108.M[2][3] = local_108.M[0][3];
  local_c8.M[1][3] = local_c8.M[0][3];
  local_c8.M[2][3] = local_c8.M[0][3];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_void___cdecl_UE::Math::TTransform<float>::GetRelativeTransformUsingMatrixWithScale(UE::Math::TTransform<float>*___ptr64,UE::Math::TTransform<float>_const*___ptr64,UE::Math::TTransform<float>_const*___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_void___cdecl_UE::Math::TTransform<float>::GetRelativeTransformUsingMatrixWithScale(UE::Math::TTransform<float>*___ptr64,UE::Math::TTransform<float>_const*___ptr64,UE::Math::TTransform<float>_const*___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_void___cdecl_UE::Math::TTransform<float>::GetRelativeTransformUsingMatrixWithScale(UE::Math::TTransform<float>*___ptr64,UE::Math::TTransform<float>_const*___ptr64,UE::Math::TTransform<float>_const*___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_static_void___cdecl_UE::Math::TTransform<float>::GetRelativeTransformUsingMatrixWithScale(UE::Math::TTransform<float>*___ptr64,UE::Math::TTransform<float>_const*___ptr64,UE::Math::TTransform<float>_const*___ptr64)'
    ::__l2::STolerance.Value = ___xmm_322bcc77322bcc77322bcc77322bcc77;
    _Init_thread_footer(&`private:_static_void___cdecl_UE::Math::TTransform<float>::GetRelativeTransformUsingMatrixWithScale(UE::Math::TTransform<float>*___ptr64,UE::Math::TTransform<float>_const*___ptr64,UE::Math::TTransform<float>_const*___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  auVar13 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,
                  (undefined1  [16])param_3->Scale3D);
  auVar7._0_4_ = ~-(uint)((float)(__xmm_7fffffff7fffffff7fffffff7fffffff &
                                 (param_3->Scale3D).m128_u32[0]) <=
                         `private:_static_void___cdecl_UE::Math::TTransform<float>::GetRelativeTransformUsingMatrixWithScale(UE::Math::TTransform<float>*___ptr64,UE::Math::TTransform<float>_const*___ptr64,UE::Math::TTransform<float>_const*___ptr64)'
                         ::__l2::STolerance.Value._0_4_) & auVar13._0_4_;
  auVar7._4_4_ = ~-(uint)((float)(_UNK_15061cc74 & (param_3->Scale3D).m128_u32[1]) <=
                         `private:_static_void___cdecl_UE::Math::TTransform<float>::GetRelativeTransformUsingMatrixWithScale(UE::Math::TTransform<float>*___ptr64,UE::Math::TTransform<float>_const*___ptr64,UE::Math::TTransform<float>_const*___ptr64)'
                         ::__l2::STolerance.Value._4_4_) & auVar13._4_4_;
  auVar7._8_4_ = ~-(uint)((float)(_UNK_15061cc78 & (param_3->Scale3D).m128_u32[2]) <=
                         `private:_static_void___cdecl_UE::Math::TTransform<float>::GetRelativeTransformUsingMatrixWithScale(UE::Math::TTransform<float>*___ptr64,UE::Math::TTransform<float>_const*___ptr64,UE::Math::TTransform<float>_const*___ptr64)'
                         ::__l2::STolerance.Value._8_4_) & auVar13._8_4_;
  auVar7._12_4_ =
       ~-(uint)((float)(_UNK_15061cc7c & (param_3->Scale3D).m128_u32[3]) <=
               `private:_static_void___cdecl_UE::Math::TTransform<float>::GetRelativeTransformUsingMatrixWithScale(UE::Math::TTransform<float>*___ptr64,UE::Math::TTransform<float>_const*___ptr64,UE::Math::TTransform<float>_const*___ptr64)'
               ::__l2::STolerance.Value._12_4_) & auVar13._12_4_;
  auVar13 = insertps(auVar7,auVar7,8);
  local_118.m128_f32[0] = auVar13._0_4_ * (param_2->Scale3D).m128_f32[0];
  local_118.m128_f32[1] = auVar13._4_4_ * (param_2->Scale3D).m128_f32[1];
  local_118.m128_f32[2] = auVar13._8_4_ * (param_2->Scale3D).m128_f32[2];
  local_118.m128_f32[3] = auVar13._12_4_ * (param_2->Scale3D).m128_f32[3];
  pTVar4 = TMatrix<float>::Inverse(&local_108,&local_88);
  ConstructTransformFromMatrixWithDesiredScale(&local_c8,pTVar4,&local_118,param_1);
  return;
}

// GetRelativeTransformUsingMatrixWithScale @ 1417d6330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Math::TTransform<double>::GetRelativeTransformUsingMatrixWithScale
          (TTransform<double> *param_1,TTransform<double> *param_2,TTransform<double> *param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  __m128d _Var11;
  TMatrix<double> *pTVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_258 [32];
  VectorRegister4Double local_238;
  TMatrix<double> local_218;
  TMatrix<double> local_198;
  TMatrix<double> local_118;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_258;
  ToMatrixWithScale(param_2,&local_198);
  ToMatrixWithScale(param_3,&local_218);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_void___cdecl_UE::Math::TTransform<double>::GetRelativeTransformUsingMatrixWithScale(UE::Math::TTransform<double>*___ptr64,UE::Math::TTransform<double>_const*___ptr64,UE::Math::TTransform<double>_const*___ptr64)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_void___cdecl_UE::Math::TTransform<double>::GetRelativeTransformUsingMatrixWithScale(UE::Math::TTransform<double>*___ptr64,UE::Math::TTransform<double>_const*___ptr64,UE::Math::TTransform<double>_const*___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_void___cdecl_UE::Math::TTransform<double>::GetRelativeTransformUsingMatrixWithScale(UE::Math::TTransform<double>*___ptr64,UE::Math::TTransform<double>_const*___ptr64,UE::Math::TTransform<double>_const*___ptr64)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `private:_static_void___cdecl_UE::Math::TTransform<double>::GetRelativeTransformUsingMatrixWithScale(UE::Math::TTransform<double>*___ptr64,UE::Math::TTransform<double>_const*___ptr64,UE::Math::TTransform<double>_const*___ptr64)'
      ::__l2::STolerance.Value = ___xmm_322bcc77322bcc77322bcc77322bcc77;
      _Init_thread_footer(&`private:_static_void___cdecl_UE::Math::TTransform<double>::GetRelativeTransformUsingMatrixWithScale(UE::Math::TTransform<double>*___ptr64,UE::Math::TTransform<double>_const*___ptr64,UE::Math::TTransform<double>_const*___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  _Var11.m128d_f64 = GlobalVectorConstants::DoubleOne.XY.m128d_f64;
  uVar10 = _UNK_15061cc8c;
  uVar9 = _UNK_15061cc88;
  uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  fVar2 = `private:_static_void___cdecl_UE::Math::TTransform<double>::GetRelativeTransformUsingMatrixWithScale(UE::Math::TTransform<double>*___ptr64,UE::Math::TTransform<double>_const*___ptr64,UE::Math::TTransform<double>_const*___ptr64)'
          ::__l2::STolerance.Value._0_4_;
  auVar17 = *(undefined1 (*) [16])(param_3->Scale3D).XY.m128d_f64;
  dVar4 = (param_2->Scale3D).XY.m128d_f64[0];
  dVar5 = (param_2->Scale3D).XY.m128d_f64[1];
  fVar1 = `private:_static_void___cdecl_UE::Math::TTransform<double>::GetRelativeTransformUsingMatrixWithScale(UE::Math::TTransform<double>*___ptr64,UE::Math::TTransform<double>_const*___ptr64,UE::Math::TTransform<double>_const*___ptr64)'
          ::__l2::STolerance.Value._4_4_;
  lVar13 = -(ulonglong)
            ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                              *(uint *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 4),
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                              *(uint *)(param_3->Scale3D).ZW.m128d_f64) <=
            (double)`private:_static_void___cdecl_UE::Math::TTransform<double>::GetRelativeTransformUsingMatrixWithScale(UE::Math::TTransform<double>*___ptr64,UE::Math::TTransform<double>_const*___ptr64,UE::Math::TTransform<double>_const*___ptr64)'
                    ::__l2::STolerance.Value._8_4_);
  auVar15 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                  *(undefined1 (*) [16])(param_3->Scale3D).ZW.m128d_f64);
  dVar6 = (param_2->Scale3D).ZW.m128d_f64[0];
  dVar3 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
  pTVar12 = TMatrix<double>::Inverse(&local_218,&local_118);
  auVar18 = divpd((undefined1  [16])_Var11.m128d_f64,auVar17);
  auVar16._0_8_ = (double)CONCAT44(uVar8 & auVar17._4_4_,uVar7 & auVar17._0_4_);
  auVar16._8_4_ = uVar9 & auVar17._8_4_;
  auVar16._12_4_ = uVar10 & auVar17._12_4_;
  local_238.ZW.m128d_f64[1]._0_4_ = SUB84(dVar3,0);
  local_238.ZW.m128d_f64[0] =
       (double)CONCAT44(~(uint)((ulonglong)lVar13 >> 0x20) & auVar15._4_4_,
                        ~(uint)lVar13 & auVar15._0_4_) * dVar6;
  local_238.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar3 >> 0x20);
  lVar13 = -(ulonglong)(auVar16._0_8_ <= (double)fVar2);
  lVar14 = -(ulonglong)(auVar16._8_8_ <= (double)fVar1);
  auVar17._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar13 >> 0x20) & auVar18._4_4_,
                        ~(uint)lVar13 & auVar18._0_4_);
  auVar17._8_4_ = ~(uint)lVar14 & auVar18._8_4_;
  auVar17._12_4_ = ~(uint)((ulonglong)lVar14 >> 0x20) & auVar18._12_4_;
  local_238.XY.m128d_f64[0] = auVar17._0_8_ * dVar4;
  local_238.XY.m128d_f64[1] = auVar17._8_8_ * dVar5;
  ConstructTransformFromMatrixWithDesiredScale(&local_198,pTVar12,&local_238,param_1);
  return;
}

// GetRotation @ 1417d69b0

TQuat<float> * __thiscall
UE::Math::TTransform<float>::GetRotation
          (TTransform<float> *this,TQuat<float> *__return_storage_ptr__)

{
  ulong64 uVar1;
  ulong64 uVar2;
  
  uVar1 = (this->Rotation).m128_u64[0];
  uVar2 = (this->Rotation).m128_u64[1];
  __return_storage_ptr__->X = (float)(int)uVar1;
  __return_storage_ptr__->Y = (float)(int)(uVar1 >> 0x20);
  __return_storage_ptr__->Z = (float)(int)uVar2;
  __return_storage_ptr__->W = (float)(int)(uVar2 >> 0x20);
  return __return_storage_ptr__;
}

// GetRotation @ 1417d69c0

TQuat<double> * __thiscall
UE::Math::TTransform<double>::GetRotation
          (TTransform<double> *this,TQuat<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (this->Rotation).XY.m128d_f64[1];
  dVar2 = (this->Rotation).ZW.m128d_f64[0];
  dVar3 = (this->Rotation).ZW.m128d_f64[1];
  __return_storage_ptr__->X = (this->Rotation).XY.m128d_f64[0];
  __return_storage_ptr__->Y = dVar1;
  __return_storage_ptr__->Z = dVar2;
  __return_storage_ptr__->W = dVar3;
  return __return_storage_ptr__;
}

// GetRotationRegister @ 1417d6b10

__m128 * __thiscall
UE::Math::TTransform<float>::GetRotationRegister
          (TTransform<float> *this,__m128 *__return_storage_ptr__)

{
  ulong64 uVar1;
  
  uVar1 = (this->Rotation).m128_u64[1];
  __return_storage_ptr__->m128_u64[0] = (this->Rotation).m128_u64[0];
  __return_storage_ptr__->m128_u64[1] = uVar1;
  return __return_storage_ptr__;
}

// GetRotationRegister @ 1417d6b20

VectorRegister4Double * __thiscall
UE::Math::TTransform<double>::GetRotationRegister
          (TTransform<double> *this,VectorRegister4Double *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (this->Rotation).XY.m128d_f64[1];
  dVar2 = (this->Rotation).ZW.m128d_f64[0];
  dVar3 = (this->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->XY).m128d_f64[0] = (this->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->XY).m128d_f64[1] = dVar1;
  (__return_storage_ptr__->ZW).m128d_f64[0] = dVar2;
  (__return_storage_ptr__->ZW).m128d_f64[1] = dVar3;
  return __return_storage_ptr__;
}

// GetSafeScaleReciprocal @ 1417d6ff0

__m128 * __cdecl
UE::Math::TTransform<float>::GetSafeScaleReciprocal
          (__m128 *__return_storage_ptr__,__m128 *param_1,ScalarRegister *param_2)

{
  __m128 *in_RAX;
  
  divps((undefined1  [16])GlobalVectorConstants::FloatOne,(undefined1  [16])*__return_storage_ptr__)
  ;
  return in_RAX;
}

// GetSafeScaleReciprocal @ 1417d7020

TVector<float> * __cdecl
UE::Math::TTransform<float>::GetSafeScaleReciprocal
          (TVector<float> *__return_storage_ptr__,TVector<float> *param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  
  uVar2 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar1 = __real_3f800000;
  fVar3 = (param_1->field0_0x0)._s_0.X;
  if (param_2 < (float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar3 = __real_3f800000 / fVar3;
  }
  else {
    fVar3 = 0.0;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar3;
  fVar3 = (param_1->field0_0x0)._s_0.Y;
  if (param_2 < (float)((uint)fVar3 & uVar2)) {
    fVar3 = fVar1 / fVar3;
  }
  else {
    fVar3 = 0.0;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar3;
  fVar3 = (param_1->field0_0x0)._s_0.Z;
  if ((float)((uint)fVar3 & uVar2) <= param_2) {
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1 / fVar3;
  return __return_storage_ptr__;
}

// GetSafeScaleReciprocal @ 1417d70c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

VectorRegister4Double * __cdecl
UE::Math::TTransform<double>::GetSafeScaleReciprocal
          (VectorRegister4Double *__return_storage_ptr__,VectorRegister4Double *param_1,
          ScalarRegister *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  auVar5._0_8_ = (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                  *(uint *)((longlong)(param_1->XY).m128d_f64 + 4),
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                  *(uint *)(param_1->XY).m128d_f64);
  auVar5._8_4_ = _UNK_15061cc88 & *(uint *)((param_1->XY).m128d_f64 + 1);
  auVar5._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(param_1->XY).m128d_f64 + 0xc);
  lVar1 = -(ulonglong)
           ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                             *(uint *)((longlong)(param_1->ZW).m128d_f64 + 4),
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                             *(uint *)(param_1->ZW).m128d_f64) <=
           (double)(param_2->Value).m128_f32[2]);
  lVar3 = -(ulonglong)
           ((double)CONCAT44(_UNK_15061cc8c & *(uint *)((longlong)(param_1->ZW).m128d_f64 + 0xc),
                             _UNK_15061cc88 & *(uint *)((param_1->ZW).m128d_f64 + 1)) <=
           (double)(param_2->Value).m128_f32[3]);
  auVar6 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                 *(undefined1 (*) [16])(param_1->XY).m128d_f64);
  lVar2 = -(ulonglong)(auVar5._0_8_ <= (double)(param_2->Value).m128_f32[0]);
  lVar4 = -(ulonglong)(auVar5._8_8_ <= (double)(param_2->Value).m128_f32[1]);
  auVar5 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                 *(undefined1 (*) [16])(param_1->ZW).m128d_f64);
  *(uint *)(__return_storage_ptr__->XY).m128d_f64 = ~(uint)lVar2 & auVar6._0_4_;
  *(uint *)((longlong)(__return_storage_ptr__->XY).m128d_f64 + 4) =
       ~(uint)((ulonglong)lVar2 >> 0x20) & auVar6._4_4_;
  *(uint *)((__return_storage_ptr__->XY).m128d_f64 + 1) = ~(uint)lVar4 & auVar6._8_4_;
  *(uint *)((longlong)(__return_storage_ptr__->XY).m128d_f64 + 0xc) =
       ~(uint)((ulonglong)lVar4 >> 0x20) & auVar6._12_4_;
  *(uint *)(__return_storage_ptr__->ZW).m128d_f64 = ~(uint)lVar1 & auVar5._0_4_;
  *(uint *)((longlong)(__return_storage_ptr__->ZW).m128d_f64 + 4) =
       ~(uint)((ulonglong)lVar1 >> 0x20) & auVar5._4_4_;
  *(uint *)((__return_storage_ptr__->ZW).m128d_f64 + 1) = ~(uint)lVar3 & auVar5._8_4_;
  *(uint *)((longlong)(__return_storage_ptr__->ZW).m128d_f64 + 0xc) =
       ~(uint)((ulonglong)lVar3 >> 0x20) & auVar5._12_4_;
  return __return_storage_ptr__;
}

// GetSafeScaleReciprocal @ 1417d7130

TVector<double> * __cdecl
UE::Math::TTransform<double>::GetSafeScaleReciprocal
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,double param_2)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  
  uVar3 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar2 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar1 = __real_3ff0000000000000;
  dVar4 = *(double *)&param_1->field0_0x0;
  if (param_2 < (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar4 = __real_3ff0000000000000 / dVar4;
  }
  else {
    dVar4 = 0.0;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar4;
  dVar4 = *(double *)((longlong)&param_1->field0_0x0 + 8);
  if (param_2 < (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) & uVar3,SUB84(dVar4,0) & uVar2)) {
    dVar4 = dVar1 / dVar4;
  }
  else {
    dVar4 = 0.0;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  dVar4 = *(double *)((longlong)&param_1->field0_0x0 + 0x10);
  if ((double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) & uVar3,SUB84(dVar4,0) & uVar2) <= param_2)
  {
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1 / dVar4;
  return __return_storage_ptr__;
}

// GetScale3D @ 1417d71d0

TVector<float> * __thiscall
UE::Math::TTransform<float>::GetScale3D
          (TTransform<float> *this,TVector<float> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (this->Scale3D).m128_f32[1];
  fVar2 = (this->Scale3D).m128_f32[2];
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Scale3D).m128_f32[0];
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2;
  return __return_storage_ptr__;
}

// GetScale3D @ 1417d71f0

TVector<double> * __thiscall
UE::Math::TTransform<double>::GetScale3D
          (TTransform<double> *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->Scale3D).XY.m128d_f64[1];
  dVar1 = (this->Scale3D).ZW.m128d_f64[0];
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Scale3D).XY.m128d_f64[0];
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetScaled @ 1417d73b0

TTransform<float> * __thiscall
UE::Math::TTransform<float>::GetScaled
          (TTransform<float> *this,TTransform<float> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  
  uVar4 = (this->Translation).m128_u64[0];
  uVar5 = (this->Translation).m128_u64[1];
  uVar6 = (this->Rotation).m128_u64[1];
  (__return_storage_ptr__->Rotation).m128_u64[0] = (this->Rotation).m128_u64[0];
  (__return_storage_ptr__->Rotation).m128_u64[1] = uVar6;
  (__return_storage_ptr__->Translation).m128_u64[0] = uVar4;
  (__return_storage_ptr__->Translation).m128_u64[1] = uVar5;
  fVar1 = (this->Scale3D).m128_f32[1];
  fVar2 = (this->Scale3D).m128_f32[2];
  fVar3 = (this->Scale3D).m128_f32[3];
  (__return_storage_ptr__->Scale3D).m128_f32[0] = param_1 * (this->Scale3D).m128_f32[0];
  (__return_storage_ptr__->Scale3D).m128_f32[1] = param_1 * fVar1;
  (__return_storage_ptr__->Scale3D).m128_f32[2] = param_1 * fVar2;
  (__return_storage_ptr__->Scale3D).m128_f32[3] = param_1 * fVar3;
  return __return_storage_ptr__;
}

// GetScaled @ 1417d73e0

TTransform<float> * __thiscall
UE::Math::TTransform<float>::GetScaled
          (TTransform<float> *this,TTransform<float> *__return_storage_ptr__,TVector<float> *param_1
          )

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  ulong64 uVar9;
  
  fVar1 = (param_1->field0_0x0)._s_0.Z;
  uVar2 = *(undefined8 *)&param_1->field0_0x0;
  uVar7 = (this->Rotation).m128_u64[1];
  uVar8 = (this->Translation).m128_u64[0];
  uVar9 = (this->Translation).m128_u64[1];
  (__return_storage_ptr__->Rotation).m128_u64[0] = (this->Rotation).m128_u64[0];
  (__return_storage_ptr__->Rotation).m128_u64[1] = uVar7;
  fVar3 = (this->Scale3D).m128_f32[0];
  fVar4 = (this->Scale3D).m128_f32[1];
  fVar5 = (this->Scale3D).m128_f32[2];
  fVar6 = (this->Scale3D).m128_f32[3];
  (__return_storage_ptr__->Translation).m128_u64[0] = uVar8;
  (__return_storage_ptr__->Translation).m128_u64[1] = uVar9;
  (__return_storage_ptr__->Scale3D).m128_f32[0] = (float)uVar2 * fVar3;
  (__return_storage_ptr__->Scale3D).m128_f32[1] = (float)((ulonglong)uVar2 >> 0x20) * fVar4;
  (__return_storage_ptr__->Scale3D).m128_f32[2] = fVar1 * fVar5;
  (__return_storage_ptr__->Scale3D).m128_f32[3] = fVar6 * 0.0;
  return __return_storage_ptr__;
}

// GetScaled @ 1417d7410

TTransform<double> * __thiscall
UE::Math::TTransform<double>::GetScaled
          (TTransform<double> *this,TTransform<double> *__return_storage_ptr__,double param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar2 = (this->Rotation).XY.m128d_f64[1];
  dVar4 = (this->Rotation).ZW.m128d_f64[0];
  dVar5 = (this->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (this->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar2;
  dVar2 = (this->Translation).XY.m128d_f64[0];
  dVar6 = (this->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar4;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar5;
  dVar4 = (this->Translation).ZW.m128d_f64[0];
  dVar5 = (this->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar6;
  dVar2 = (this->Scale3D).XY.m128d_f64[0];
  dVar6 = (this->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar4;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar5;
  dVar5 = (this->Scale3D).ZW.m128d_f64[0];
  dVar4 = (this->Scale3D).ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar6;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar5;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar4;
  dVar2 = param_1 * (__return_storage_ptr__->Scale3D).XY.m128d_f64[1];
  dVar4 = param_1 * dVar4;
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = param_1 * (__return_storage_ptr__->Scale3D).XY.m128d_f64[0];
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar1;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = param_1 * dVar5;
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar3;
  return __return_storage_ptr__;
}

// GetScaled @ 1417d7470

TTransform<double> * __thiscall
UE::Math::TTransform<double>::GetScaled
          (TTransform<double> *this,TTransform<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar1 = (this->Rotation).XY.m128d_f64[1];
  dVar3 = (this->Rotation).ZW.m128d_f64[0];
  dVar5 = (this->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (this->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (this->Translation).XY.m128d_f64[0];
  dVar6 = (this->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar3;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar5;
  dVar3 = (this->Translation).ZW.m128d_f64[0];
  dVar5 = (this->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar6;
  dVar1 = (this->Scale3D).XY.m128d_f64[0];
  dVar6 = (this->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar3;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar5;
  dVar5 = (this->Scale3D).ZW.m128d_f64[0];
  dVar7 = (this->Scale3D).ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar6;
  dVar6 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar5;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar7;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar3 = dVar3 * (__return_storage_ptr__->Scale3D).XY.m128d_f64[1];
  dVar5 = (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = dVar6 * (__return_storage_ptr__->Scale3D).XY.m128d_f64[0];
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar2;
  auVar4._8_4_ = SUB84(dVar5,0);
  auVar4._0_8_ = dVar1 * (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0];
  auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar4;
  return __return_storage_ptr__;
}

// GetScaledAxis @ 1417d7700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<float> * __thiscall
UE::Math::TTransform<float>::GetScaledAxis
          (TTransform<float> *this,TVector<float> *__return_storage_ptr__,Type param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [12];
  
  fVar1 = (this->Rotation).m128_f32[0];
  fVar2 = (this->Rotation).m128_f32[1];
  fVar3 = (this->Rotation).m128_f32[2];
  fVar4 = (this->Rotation).m128_f32[3];
  fVar5 = (this->Scale3D).m128_f32[0];
  fVar6 = (this->Scale3D).m128_f32[1];
  fVar7 = (this->Scale3D).m128_f32[2];
  if (param_1 == X) {
    auVar8._0_4_ = ___xmm_0000000000000000000000003f800000 * fVar5;
    auVar8._4_4_ = _UNK_1506894f4 * fVar6;
    auVar8._8_4_ = _UNK_1506894f8 * fVar7;
    fVar5 = auVar8._0_4_ * fVar2;
    fVar6 = auVar8._4_4_ * fVar3;
    fVar7 = auVar8._8_4_ * fVar1;
  }
  else if (param_1 == Y) {
    auVar8._0_4_ = ___xmm_00000000000000003f80000000000000 * fVar5;
    auVar8._4_4_ = _UNK_150689504 * fVar6;
    auVar8._8_4_ = _UNK_150689508 * fVar7;
    fVar5 = auVar8._0_4_ * fVar2;
    fVar6 = auVar8._4_4_ * fVar3;
    fVar7 = auVar8._8_4_ * fVar1;
  }
  else {
    auVar8._0_4_ = ___xmm_000000003f8000000000000000000000 * fVar5;
    auVar8._4_4_ = _UNK_150689534 * fVar6;
    auVar8._8_4_ = _UNK_150689538 * fVar7;
    fVar5 = fVar2 * auVar8._0_4_;
    fVar6 = fVar3 * auVar8._4_4_;
    fVar7 = fVar1 * auVar8._8_4_;
  }
  fVar5 = auVar8._4_4_ * fVar1 - fVar5;
  fVar6 = auVar8._8_4_ * fVar2 - fVar6;
  fVar7 = auVar8._0_4_ * fVar3 - fVar7;
  fVar6 = fVar6 + fVar6;
  fVar7 = fVar7 + fVar7;
  fVar5 = fVar5 + fVar5;
  *(ulonglong *)&__return_storage_ptr__->field0_0x0 =
       CONCAT44(fVar4 * fVar7 + auVar8._4_4_ + (fVar6 * fVar3 - fVar5 * fVar1),
                fVar4 * fVar6 + auVar8._0_4_ + (fVar5 * fVar2 - fVar7 * fVar3));
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       fVar4 * fVar5 + auVar8._8_4_ + (fVar7 * fVar1 - fVar6 * fVar2);
  return __return_storage_ptr__;
}

// GetScaledAxis @ 1417d77a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
UE::Math::TTransform<double>::GetScaledAxis
          (TTransform<double> *this,TVector<double> *__return_storage_ptr__,Type param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 uVar21;
  undefined4 uVar22;
  
  dVar4 = (this->Scale3D).XY.m128d_f64[0];
  dVar5 = (this->Scale3D).XY.m128d_f64[1];
  uVar16 = 0;
  uVar22 = 0;
  if (param_1 == X) {
    dVar4 = dVar4 * ___xmm_00000000000000003ff0000000000000;
    dVar5 = dVar5 * _UNK_150689518;
  }
  else if (param_1 == Y) {
    dVar4 = dVar4 * ___xmm_3ff00000000000000000000000000000;
    dVar5 = dVar5 * _UNK_15061cbc8;
    uVar22 = 0;
  }
  else {
    uVar16 = (undefined4)__real_3ff0000000000000;
    uVar22 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    dVar4 = dVar4 * 0.0;
    dVar5 = dVar5 * 0.0;
  }
  uVar21 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar11 = *(undefined1 (*) [16])(this->Rotation).ZW.m128d_f64;
  auVar17._8_4_ = SUB84(dVar5,0);
  auVar17._0_8_ = dVar4;
  auVar17._12_4_ = uVar21;
  dVar6 = (double)CONCAT44(uVar22,uVar16) * (this->Scale3D).ZW.m128d_f64[0];
  dVar7 = (this->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar8 = *(undefined1 (*) [16])(this->Rotation).XY.m128d_f64;
  dVar1 = auVar11._0_8_;
  auVar10 = blendpd(auVar8,auVar11,2);
  auVar18._0_8_ = auVar17._8_8_ * auVar8._0_8_ - auVar8._8_8_ * dVar4;
  auVar18._8_8_ = dVar6 * auVar8._8_8_ - dVar1 * dVar5;
  dVar3 = auVar11._8_8_;
  auVar19._8_4_ = SUB84(dVar5,0);
  auVar19._0_8_ = dVar4;
  auVar19._12_4_ = uVar21;
  auVar8._8_4_ = SUB84(dVar7,0);
  auVar8._0_8_ = dVar6;
  auVar8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar8 = blendpd(auVar19,auVar8,2);
  auVar9._0_8_ = auVar8._0_8_ * dVar1 - auVar10._0_8_ * dVar6;
  auVar9._8_8_ = auVar8._8_8_ * dVar3 - auVar10._8_8_ * dVar7;
  auVar8 = *(undefined1 (*) [16])(this->Rotation).XY.m128d_f64;
  auVar19 = blendpd(auVar18,auVar9,2);
  auVar20._0_8_ = auVar19._0_8_ + auVar19._0_8_;
  auVar20._8_8_ = auVar19._8_8_ + auVar19._8_8_;
  dVar7 = auVar18._8_8_ + auVar18._8_8_;
  dVar2 = auVar9._0_8_ + auVar9._0_8_;
  uVar16 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar14._8_4_ = SUB84(dVar2,0);
  auVar14._0_8_ = dVar7;
  auVar14._12_4_ = uVar16;
  auVar12._8_4_ = SUB84(dVar2,0);
  auVar12._0_8_ = dVar7;
  auVar12._12_4_ = uVar16;
  auVar19 = blendpd(auVar12,auVar20,2);
  auVar15._0_8_ = auVar14._8_8_ * auVar8._0_8_ - auVar8._8_8_ * dVar7;
  auVar15._8_8_ = auVar20._0_8_ * auVar8._8_8_ - dVar1 * dVar2;
  auVar10._8_4_ = SUB84(auVar15._8_8_,0);
  auVar10._0_8_ = auVar15._0_8_;
  auVar10._12_4_ = (int)((ulonglong)auVar15._8_8_ >> 0x20);
  auVar11 = blendpd(auVar8,auVar11,2);
  auVar13._0_8_ = auVar19._0_8_ * dVar1 - auVar11._0_8_ * auVar20._0_8_;
  auVar13._8_8_ = auVar19._8_8_ * dVar3 - auVar11._8_8_ * auVar20._8_8_;
  auVar8 = blendpd(auVar15,auVar13,2);
  dVar5 = dVar2 * dVar3 + dVar5 + auVar13._0_8_;
  auVar11._8_4_ = SUB84(dVar5,0);
  auVar11._0_8_ = dVar7 * dVar3 + dVar4 + auVar10._8_8_;
  auVar11._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar11;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar20._0_8_ * dVar3 + dVar6 + auVar8._0_8_;
  return __return_storage_ptr__;
}

// GetTranslation @ 1417d8460

TVector<float> * __thiscall
UE::Math::TTransform<float>::GetTranslation
          (TTransform<float> *this,TVector<float> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (this->Translation).m128_f32[1];
  fVar2 = (this->Translation).m128_f32[2];
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Translation).m128_f32[0];
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2;
  return __return_storage_ptr__;
}

// GetTranslation @ 1417d8480

TVector<double> * __thiscall
UE::Math::TTransform<double>::GetTranslation
          (TTransform<double> *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->Translation).XY.m128d_f64[1];
  dVar1 = (this->Translation).ZW.m128d_f64[0];
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetTranslationRegister @ 1417d84a0

__m128 * __thiscall
UE::Math::TTransform<float>::GetTranslationRegister
          (TTransform<float> *this,__m128 *__return_storage_ptr__)

{
  ulong64 uVar1;
  
  uVar1 = (this->Translation).m128_u64[1];
  __return_storage_ptr__->m128_u64[0] = (this->Translation).m128_u64[0];
  __return_storage_ptr__->m128_u64[1] = uVar1;
  return __return_storage_ptr__;
}

// GetTranslationRegister @ 1417d84c0

VectorRegister4Double * __thiscall
UE::Math::TTransform<double>::GetTranslationRegister
          (TTransform<double> *this,VectorRegister4Double *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (this->Translation).XY.m128d_f64[1];
  dVar2 = (this->Translation).ZW.m128d_f64[0];
  dVar3 = (this->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->XY).m128d_f64[0] = (this->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->XY).m128d_f64[1] = dVar1;
  (__return_storage_ptr__->ZW).m128d_f64[0] = dVar2;
  (__return_storage_ptr__->ZW).m128d_f64[1] = dVar3;
  return __return_storage_ptr__;
}

// GetUnitAxis @ 1417d8c50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<float> * __thiscall
UE::Math::TTransform<float>::GetUnitAxis
          (TTransform<float> *this,TVector<float> *__return_storage_ptr__,Type param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar10;
  undefined1 auVar9 [12];
  float fVar11;
  
  fVar1 = (this->Rotation).m128_f32[0];
  fVar2 = (this->Rotation).m128_f32[1];
  fVar3 = (this->Rotation).m128_f32[2];
  fVar4 = (this->Rotation).m128_f32[3];
  if (param_1 == X) {
    auVar9 = __xmm_0000000000000000000000003f800000._0_12_;
  }
  else if (param_1 == Y) {
    auVar9 = __xmm_00000000000000003f80000000000000._0_12_;
  }
  else {
    auVar9 = __xmm_000000003f8000000000000000000000._0_12_;
  }
  fVar8 = auVar9._0_4_;
  fVar10 = auVar9._4_4_;
  fVar11 = auVar9._8_4_;
  fVar5 = fVar10 * fVar1 - fVar8 * fVar2;
  fVar6 = fVar11 * fVar2 - fVar10 * fVar3;
  fVar7 = fVar8 * fVar3 - fVar11 * fVar1;
  fVar6 = fVar6 + fVar6;
  fVar7 = fVar7 + fVar7;
  fVar5 = fVar5 + fVar5;
  *(ulonglong *)&__return_storage_ptr__->field0_0x0 =
       CONCAT44(fVar4 * fVar7 + (fVar6 * fVar3 - fVar5 * fVar1) + fVar10,
                fVar4 * fVar6 + (fVar5 * fVar2 - fVar7 * fVar3) + fVar8);
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       fVar4 * fVar5 + (fVar7 * fVar1 - fVar6 * fVar2) + fVar11;
  return __return_storage_ptr__;
}

// GetUnitAxis @ 1417d8ce0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
UE::Math::TTransform<double>::GetUnitAxis
          (TTransform<double> *this,TVector<double> *__return_storage_ptr__,Type param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  double dVar20;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar21;
  double dVar22;
  double dVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  auVar11 = *(undefined1 (*) [16])(this->Rotation).ZW.m128d_f64;
  dVar4 = auVar11._8_8_;
  dVar1 = auVar11._0_8_;
  auVar19 = ___xmm_00000000000000003ff0000000000000;
  if ((param_1 == X) || (auVar19 = ___xmm_3ff00000000000000000000000000000, param_1 == Y)) {
    auVar6 = *(undefined1 (*) [16])(this->Rotation).XY.m128d_f64;
    dVar27 = auVar19._8_8_;
    auVar10 = blendpd(auVar6,auVar11,2);
    auVar23._0_8_ = dVar27 * auVar6._0_8_ - auVar6._8_8_ * auVar19._0_8_;
    auVar23._8_8_ = auVar6._8_8_ * 0.0 - dVar1 * dVar27;
    auVar6 = blendpd(auVar19,ZEXT816(0),2);
    auVar7._0_8_ = auVar6._0_8_ * dVar1 - auVar10._0_8_ * 0.0;
    auVar7._8_8_ = auVar6._8_8_ * dVar4 - auVar10._8_8_ * 0.0;
    auVar6 = *(undefined1 (*) [16])(this->Rotation).XY.m128d_f64;
    dVar2 = auVar23._8_8_ + auVar23._8_8_;
    dVar3 = auVar7._0_8_ + auVar7._0_8_;
    uVar21 = (undefined4)((ulonglong)dVar3 >> 0x20);
    auVar10 = blendpd(auVar23,auVar7,2);
    auVar24._0_8_ = auVar10._0_8_ + auVar10._0_8_;
    auVar24._8_8_ = auVar10._8_8_ + auVar10._8_8_;
    auVar16._8_4_ = SUB84(dVar3,0);
    auVar16._0_8_ = dVar2;
    auVar16._12_4_ = uVar21;
    auVar13._8_4_ = SUB84(dVar3,0);
    auVar13._0_8_ = dVar2;
    auVar13._12_4_ = uVar21;
    dVar15 = auVar16._8_8_ * auVar6._0_8_;
    dVar20 = auVar24._0_8_ * auVar6._8_8_;
    dVar5 = auVar6._8_8_ * dVar2;
    auVar11 = blendpd(auVar6,auVar11,2);
    auVar6 = blendpd(auVar13,auVar24,2);
    dVar9 = auVar11._0_8_ * auVar24._0_8_;
    dVar12 = auVar11._8_8_ * auVar24._8_8_;
    dVar2 = dVar2 * dVar4 + auVar19._0_8_;
    dVar27 = dVar3 * dVar4 + dVar27;
    dVar22 = auVar24._0_8_ * dVar4;
  }
  else {
    auVar19 = *(undefined1 (*) [16])(this->Rotation).XY.m128d_f64;
    auVar10 = blendpd(auVar19,auVar11,2);
    auVar25._0_8_ = auVar19._0_8_ * 0.0 - auVar19._8_8_ * 0.0;
    auVar25._8_8_ = __real_3ff0000000000000 * auVar19._8_8_ - dVar1 * 0.0;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = __real_3ff0000000000000;
    auVar19 = blendpd(ZEXT816(0),auVar19,2);
    auVar6._0_8_ = auVar19._0_8_ * dVar1 - auVar10._0_8_ * __real_3ff0000000000000;
    auVar6._8_8_ = auVar19._8_8_ * dVar4 - auVar10._8_8_ * 0.0;
    auVar19 = *(undefined1 (*) [16])(this->Rotation).XY.m128d_f64;
    auVar10 = blendpd(auVar25,auVar6,2);
    auVar26._0_8_ = auVar10._0_8_ + auVar10._0_8_;
    auVar26._8_8_ = auVar10._8_8_ + auVar10._8_8_;
    dVar2 = auVar25._8_8_ + auVar25._8_8_;
    dVar3 = auVar6._0_8_ + auVar6._0_8_;
    uVar21 = (undefined4)((ulonglong)dVar3 >> 0x20);
    auVar17._8_4_ = SUB84(dVar3,0);
    auVar17._0_8_ = dVar2;
    auVar17._12_4_ = uVar21;
    auVar10._8_4_ = SUB84(dVar3,0);
    auVar10._0_8_ = dVar2;
    auVar10._12_4_ = uVar21;
    dVar15 = auVar17._8_8_ * auVar19._0_8_;
    dVar20 = auVar26._0_8_ * auVar19._8_8_;
    auVar6 = blendpd(auVar10,auVar26,2);
    auVar11 = blendpd(auVar19,auVar11,2);
    dVar9 = auVar11._0_8_ * auVar26._0_8_;
    dVar12 = auVar11._8_8_ * auVar26._8_8_;
    dVar5 = auVar19._8_8_ * dVar2;
    dVar22 = auVar26._0_8_ * dVar4 + __real_3ff0000000000000;
    dVar2 = dVar2 * dVar4;
    dVar27 = dVar3 * dVar4;
  }
  auVar18._0_8_ = dVar15 - dVar5;
  auVar18._8_8_ = dVar20 - dVar1 * dVar3;
  auVar8._8_4_ = SUB84(auVar18._8_8_,0);
  auVar8._0_8_ = auVar18._0_8_;
  auVar8._12_4_ = (int)((ulonglong)auVar18._8_8_ >> 0x20);
  auVar14._0_8_ = auVar6._0_8_ * dVar1 - dVar9;
  auVar14._8_8_ = auVar6._8_8_ * dVar4 - dVar12;
  auVar19 = blendpd(auVar18,auVar14,2);
  auVar11._8_4_ = SUB84(dVar27 + auVar14._0_8_,0);
  auVar11._0_8_ = dVar2 + auVar8._8_8_;
  auVar11._12_4_ = (int)((ulonglong)(dVar27 + auVar14._0_8_) >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar11;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar22 + auVar19._0_8_;
  return __return_storage_ptr__;
}

// Identical @ 1417d9cb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Math::TTransform<float>::Identical
          (TTransform<float> *this,TTransform<float> *param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 in_EAX;
  int iVar5;
  
  auVar1._4_4_ = -(uint)(0.0 < (float)((uint)((this->Translation).m128_f32[1] -
                                             (param_1->Translation).m128_f32[1]) & _UNK_15061cc74));
  auVar1._0_4_ = -(uint)(0.0 < (float)((uint)((this->Translation).m128_f32[0] -
                                             (param_1->Translation).m128_f32[0]) &
                                      __xmm_7fffffff7fffffff7fffffff7fffffff));
  auVar1._8_4_ = -(uint)(0.0 < (float)((uint)((this->Translation).m128_f32[2] -
                                             (param_1->Translation).m128_f32[2]) & _UNK_15061cc78));
  auVar1._12_4_ =
       -(uint)(0.0 < (float)((uint)((this->Translation).m128_f32[3] -
                                   (param_1->Translation).m128_f32[3]) & _UNK_15061cc7c));
  iVar5 = movmskps(in_EAX,auVar1);
  if (iVar5 == 0) {
    auVar2._4_4_ = -(uint)(0.0 < (float)((uint)((this->Rotation).m128_f32[1] -
                                               (param_1->Rotation).m128_f32[1]) & _UNK_15061cc74));
    auVar2._0_4_ = -(uint)(0.0 < (float)((uint)((this->Rotation).m128_f32[0] -
                                               (param_1->Rotation).m128_f32[0]) &
                                        __xmm_7fffffff7fffffff7fffffff7fffffff));
    auVar2._8_4_ = -(uint)(0.0 < (float)((uint)((this->Rotation).m128_f32[2] -
                                               (param_1->Rotation).m128_f32[2]) & _UNK_15061cc78));
    auVar2._12_4_ =
         -(uint)(0.0 < (float)((uint)((this->Rotation).m128_f32[3] - (param_1->Rotation).m128_f32[3]
                                     ) & _UNK_15061cc7c));
    iVar5 = movmskps(0,auVar2);
    if (((iVar5 == 0) ||
        (auVar3._4_4_ = -(uint)(0.0 < (float)((uint)((this->Rotation).m128_f32[1] +
                                                    (param_1->Rotation).m128_f32[1]) &
                                             _UNK_15061cc74)),
        auVar3._0_4_ = -(uint)(0.0 < (float)((uint)((this->Rotation).m128_f32[0] +
                                                   (param_1->Rotation).m128_f32[0]) &
                                            __xmm_7fffffff7fffffff7fffffff7fffffff)),
        auVar3._8_4_ = -(uint)(0.0 < (float)((uint)((this->Rotation).m128_f32[2] +
                                                   (param_1->Rotation).m128_f32[2]) & _UNK_15061cc78
                                            )),
        auVar3._12_4_ =
             -(uint)(0.0 < (float)((uint)((this->Rotation).m128_f32[3] +
                                         (param_1->Rotation).m128_f32[3]) & _UNK_15061cc7c)),
        iVar5 = movmskps(iVar5,auVar3), iVar5 == 0)) &&
       (auVar4._4_4_ = -(uint)(0.0 < (float)((uint)((this->Scale3D).m128_f32[1] -
                                                   (param_1->Scale3D).m128_f32[1]) & _UNK_15061cc74)
                              ),
       auVar4._0_4_ = -(uint)(0.0 < (float)((uint)((this->Scale3D).m128_f32[0] -
                                                  (param_1->Scale3D).m128_f32[0]) &
                                           __xmm_7fffffff7fffffff7fffffff7fffffff)),
       auVar4._8_4_ = -(uint)(0.0 < (float)((uint)((this->Scale3D).m128_f32[2] -
                                                  (param_1->Scale3D).m128_f32[2]) & _UNK_15061cc78))
       , auVar4._12_4_ =
              -(uint)(0.0 < (float)((uint)((this->Scale3D).m128_f32[3] -
                                          (param_1->Scale3D).m128_f32[3]) & _UNK_15061cc7c)),
       iVar5 = movmskps(0,auVar4), iVar5 == 0)) {
      return true;
    }
  }
  return false;
}

// Identical @ 1417d9d30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Math::TTransform<double>::Identical
          (TTransform<double> *this,TTransform<double> *param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 in_EAX;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  dVar14 = (this->Translation).ZW.m128d_f64[0] - (param_1->Translation).ZW.m128d_f64[0];
  dVar16 = (this->Translation).ZW.m128d_f64[1] - (param_1->Translation).ZW.m128d_f64[1];
  dVar18 = (this->Translation).XY.m128d_f64[0] - (param_1->Translation).XY.m128d_f64[0];
  dVar20 = (this->Translation).XY.m128d_f64[1] - (param_1->Translation).XY.m128d_f64[1];
  lVar13 = -(ulonglong)
            (0.0 < (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & _UNK_15061cc8c,
                                    SUB84(dVar16,0) & _UNK_15061cc88));
  auVar1._8_4_ = (int)lVar13;
  auVar1._0_8_ = -(ulonglong)
                  (0.0 < (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                          SUB84(dVar14,0) &
                                          (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar1._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
  uVar10 = movmskpd((int)this,auVar1);
  lVar13 = -(ulonglong)
            (0.0 < (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & _UNK_15061cc8c,
                                    SUB84(dVar20,0) & _UNK_15061cc88));
  auVar6._8_4_ = (int)lVar13;
  auVar6._0_8_ = -(ulonglong)
                  (0.0 < (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                          SUB84(dVar18,0) &
                                          (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar6._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
  iVar9 = movmskpd(in_EAX,auVar6);
  if ((uVar10 & 0x3fffffff) == 0 && iVar9 == 0) {
    dVar18 = (this->Rotation).ZW.m128d_f64[0];
    dVar20 = (this->Rotation).ZW.m128d_f64[1];
    dVar14 = (this->Rotation).XY.m128d_f64[0];
    dVar16 = (this->Rotation).XY.m128d_f64[1];
    dVar15 = dVar18 - (param_1->Rotation).ZW.m128d_f64[0];
    dVar17 = dVar20 - (param_1->Rotation).ZW.m128d_f64[1];
    dVar18 = dVar18 + (param_1->Rotation).ZW.m128d_f64[0];
    dVar20 = dVar20 + (param_1->Rotation).ZW.m128d_f64[1];
    dVar19 = dVar14 - (param_1->Rotation).XY.m128d_f64[0];
    dVar21 = dVar16 - (param_1->Rotation).XY.m128d_f64[1];
    dVar14 = dVar14 + (param_1->Rotation).XY.m128d_f64[0];
    dVar16 = dVar16 + (param_1->Rotation).XY.m128d_f64[1];
    lVar13 = -(ulonglong)
              (0.0 < (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & _UNK_15061cc8c,
                                      SUB84(dVar17,0) & _UNK_15061cc88));
    auVar2._8_4_ = (int)lVar13;
    auVar2._0_8_ = -(ulonglong)
                    (0.0 < (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                            SUB84(dVar15,0) &
                                            (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar2._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    iVar11 = movmskpd(0,auVar2);
    lVar13 = -(ulonglong)
              (0.0 < (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                                      SUB84(dVar21,0) & _UNK_15061cc88));
    auVar3._8_4_ = (int)lVar13;
    auVar3._0_8_ = -(ulonglong)
                    (0.0 < (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                            SUB84(dVar19,0) &
                                            (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar3._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    uVar10 = movmskpd(iVar9,auVar3);
    uVar12 = iVar11 << 2 | uVar10;
    if (uVar12 != 0) {
      lVar13 = -(ulonglong)
                (0.0 < (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & _UNK_15061cc8c,
                                        SUB84(dVar20,0) & _UNK_15061cc88));
      auVar4._8_4_ = (int)lVar13;
      auVar4._0_8_ = -(ulonglong)
                      (0.0 < (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                              SUB84(dVar18,0) &
                                              (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar4._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
      uVar12 = movmskpd(uVar12,auVar4);
      lVar13 = -(ulonglong)
                (0.0 < (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & _UNK_15061cc8c,
                                        SUB84(dVar16,0) & _UNK_15061cc88));
      auVar7._8_4_ = (int)lVar13;
      auVar7._0_8_ = -(ulonglong)
                      (0.0 < (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                              SUB84(dVar14,0) &
                                              (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar7._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
      uVar10 = movmskpd(uVar10,auVar7);
      if ((uVar12 & 0x3fffffff) != 0 || uVar10 != 0) {
        return false;
      }
    }
    dVar14 = (this->Scale3D).ZW.m128d_f64[0] - (param_1->Scale3D).ZW.m128d_f64[0];
    dVar16 = (this->Scale3D).ZW.m128d_f64[1] - (param_1->Scale3D).ZW.m128d_f64[1];
    dVar18 = (this->Scale3D).XY.m128d_f64[0] - (param_1->Scale3D).XY.m128d_f64[0];
    dVar20 = (this->Scale3D).XY.m128d_f64[1] - (param_1->Scale3D).XY.m128d_f64[1];
    lVar13 = -(ulonglong)
              (0.0 < (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & _UNK_15061cc8c,
                                      SUB84(dVar16,0) & _UNK_15061cc88));
    auVar5._8_4_ = (int)lVar13;
    auVar5._0_8_ = -(ulonglong)
                    (0.0 < (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                            SUB84(dVar14,0) &
                                            (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar5._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    uVar12 = movmskpd(0,auVar5);
    lVar13 = -(ulonglong)
              (0.0 < (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & _UNK_15061cc8c,
                                      SUB84(dVar20,0) & _UNK_15061cc88));
    auVar8._8_4_ = (int)lVar13;
    auVar8._0_8_ = -(ulonglong)
                    (0.0 < (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                            SUB84(dVar18,0) &
                                            (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar8._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    iVar9 = movmskpd(uVar10,auVar8);
    if ((uVar12 & 0x3fffffff) == 0 && iVar9 == 0) {
      return true;
    }
  }
  return false;
}

// InitFromString @ 1417da5d0

bool __thiscall
UE::Math::TTransform<float>::InitFromString(TTransform<float> *this,FString *param_1)

{
  code *pcVar1;
  __m128 _Var2;
  __m128 _Var3;
  ulong64 uVar4;
  ulong64 uVar5;
  bool bVar6;
  undefined1 uVar7;
  TQuat<float> *pTVar8;
  TVector<float>_u_0 local_58;
  TVector<float>_u_0 local_48;
  TRotator<float> local_38;
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  TQuat<float> local_18;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  ::FString::ParseIntoArray(param_1,&local_28,L"|",true);
  if (local_28.ArrayNum == 3) {
    local_58._0_8_ = TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_58._s_0.Z = TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    bVar6 = FDefaultValueHelper::ParseVector
                      ((FString *)local_28.AllocatorInstance.Data,(TVector<float> *)&local_58._s_0);
    if (bVar6) {
      local_38.Roll = TRotator<float>::ZeroRotator.Roll;
      local_38.Pitch = TRotator<float>::ZeroRotator.Pitch;
      local_38.Yaw = TRotator<float>::ZeroRotator.Yaw;
      if (local_28.ArrayNum < 2) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar1 = (code *)swi(3);
          uVar7 = (*pcVar1)();
          return (bool)uVar7;
        }
      }
      bVar6 = FDefaultValueHelper::ParseRotator
                        ((FString *)(local_28.AllocatorInstance.Data + 0x10),&local_38);
      if (bVar6) {
        local_48._s_0.Z = TVector<float>::OneVector.field0_0x0._s_0.Z;
        local_48._0_8_ = TVector<float>::OneVector.field0_0x0._0_8_;
        if (local_28.ArrayNum < 3) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar1 = (code *)swi(3);
            uVar7 = (*pcVar1)();
            return (bool)uVar7;
          }
        }
        bVar6 = FDefaultValueHelper::ParseVector
                          ((FString *)(local_28.AllocatorInstance.Data + 0x20),
                           (TVector<float> *)&local_48._s_0);
        if (bVar6) {
          pTVar8 = TRotator<float>::Quaternion(&local_38,&local_18);
          _Var2.m128_f32[2] = local_58._s_0.Z;
          _Var2.m128_u64[0] = local_58._0_8_;
          uVar4 = *(ulong64 *)pTVar8;
          uVar5 = *(ulong64 *)&pTVar8->Z;
          _Var2.m128_f32[3] = 0.0;
          this->Translation = _Var2;
          _Var3.m128_f32[2] = local_48._s_0.Z;
          _Var3.m128_u64[0] = local_48._0_8_;
          _Var3.m128_f32[3] = 0.0;
          this->Scale3D = _Var3;
          (this->Rotation).m128_u64[0] = uVar4;
          (this->Rotation).m128_u64[1] = uVar5;
          bVar6 = true;
          goto LAB_1417da74a;
        }
      }
    }
  }
  bVar6 = false;
LAB_1417da74a:
  DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return bVar6;
}

// InitFromString @ 1417da780

bool __thiscall
UE::Math::TTransform<double>::InitFromString(TTransform<double> *this,FString *param_1)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  undefined1 uVar4;
  TQuat<double> *pTVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> local_a8;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_80;
  TRotator<double> local_68 [2];
  double local_38;
  double dStack_30;
  TQuat<double> local_28;
  
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  ::FString::ParseIntoArray(param_1,&local_a8,L"|",true);
  if (local_a8.ArrayNum == 3) {
    local_98._s_0.X = TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_98._s_0.Y = TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_98._s_0.Z = TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    bVar3 = FDefaultValueHelper::ParseVector
                      ((FString *)local_a8.AllocatorInstance.Data,(TVector<double> *)&local_98._s_0)
    ;
    if (bVar3) {
      local_68[0].Roll = TRotator<double>::ZeroRotator.Roll;
      local_68[0].Pitch = TRotator<double>::ZeroRotator.Pitch;
      local_68[0].Yaw = TRotator<double>::ZeroRotator.Yaw;
      if (local_a8.ArrayNum < 2) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
      }
      bVar3 = FDefaultValueHelper::ParseRotator
                        ((FString *)(local_a8.AllocatorInstance.Data + 0x10),local_68);
      if (bVar3) {
        local_80._s_0.Z = TVector<double>::OneVector.field0_0x0._s_0.Z;
        local_80._s_0.X = TVector<double>::OneVector.field0_0x0._s_0.X;
        local_80._s_0.Y = TVector<double>::OneVector.field0_0x0._s_0.Y;
        if (local_a8.ArrayNum < 3) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return (bool)uVar4;
          }
        }
        bVar3 = FDefaultValueHelper::ParseVector
                          ((FString *)(local_a8.AllocatorInstance.Data + 0x20),
                           (TVector<double> *)&local_80._s_0);
        if (bVar3) {
          pTVar5 = TRotator<double>::Quaternion(local_68,&local_28);
          local_38 = pTVar5->Z;
          dStack_30 = pTVar5->W;
          dVar2 = pTVar5->Y;
          (this->Rotation).XY.m128d_f64[0] = pTVar5->X;
          (this->Rotation).XY.m128d_f64[1] = dVar2;
          (this->Rotation).ZW.m128d_f64[0] = local_38;
          (this->Rotation).ZW.m128d_f64[1] = dStack_30;
          (this->Translation).XY.m128d_f64[0] = local_98._s_0.X;
          (this->Translation).XY.m128d_f64[1] = local_98._s_0.Y;
          (this->Translation).ZW.m128d_f64[0] = local_98._s_0.Z;
          (this->Translation).ZW.m128d_f64[1] = 0.0;
          (this->Scale3D).XY.m128d_f64[0] = local_80._s_0.X;
          (this->Scale3D).XY.m128d_f64[1] = local_80._s_0.Y;
          (this->Scale3D).ZW.m128d_f64[0] = local_80._s_0.Z;
          (this->Scale3D).ZW.m128d_f64[1] = 0.0;
          bVar3 = true;
          goto LAB_1417da912;
        }
      }
    }
  }
  bVar3 = false;
LAB_1417da912:
  DestructItems<FString,int>((FString *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return bVar3;
}

// Inverse @ 1417dc9c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<float> * __thiscall
UE::Math::TTransform<float>::Inverse
          (TTransform<float> *this,TTransform<float> *__return_storage_ptr__)

{
  undefined4 in_EAX;
  int iVar1;
  undefined1 auVar2 [16];
  __m128 _Var3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  
  auVar2 = *(undefined1 (*) [16])(this->Scale3D).m128_f32;
  auVar4._4_4_ = -(uint)(GlobalVectorConstants::SmallNumber.m128_f32[1] <
                        (float)(auVar2._4_4_ & _UNK_15061cc74));
  auVar4._0_4_ = -(uint)(GlobalVectorConstants::SmallNumber.m128_f32[0] <
                        (float)(auVar2._0_4_ & __xmm_7fffffff7fffffff7fffffff7fffffff));
  auVar4._8_4_ = -(uint)(GlobalVectorConstants::SmallNumber.m128_f32[2] <
                        (float)(auVar2._8_4_ & _UNK_15061cc78));
  auVar4._12_4_ =
       -(uint)(GlobalVectorConstants::SmallNumber.m128_f32[3] <
              (float)(auVar2._12_4_ & _UNK_15061cc7c));
  iVar1 = movmskps(in_EAX,auVar4);
  if (iVar1 != 0) {
    fVar13 = (this->Rotation).m128_f32[0] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
    fVar14 = (this->Rotation).m128_f32[1] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
    fVar15 = (this->Rotation).m128_f32[2] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
    fVar16 = (this->Rotation).m128_f32[3] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
    auVar4 = blendps(auVar2,(undefined1  [16])GlobalVectorConstants::FloatOne,8);
    auVar2 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar4);
    fVar9 = (this->Translation).m128_f32[0];
    fVar10 = (this->Translation).m128_f32[1];
    fVar11 = (this->Translation).m128_f32[2];
    fVar12 = (this->Translation).m128_f32[3];
    auVar17._0_4_ =
         ~-(uint)((float)(auVar4._0_4_ & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
                 GlobalVectorConstants::SmallNumber.m128_f32[0]) & auVar2._0_4_;
    auVar17._4_4_ =
         ~-(uint)((float)(auVar4._4_4_ & _UNK_15061cc74) <=
                 GlobalVectorConstants::SmallNumber.m128_f32[1]) & auVar2._4_4_;
    auVar17._8_4_ =
         ~-(uint)((float)(auVar4._8_4_ & _UNK_15061cc78) <=
                 GlobalVectorConstants::SmallNumber.m128_f32[2]) & auVar2._8_4_;
    auVar17._12_4_ =
         ~-(uint)((float)(auVar4._12_4_ & _UNK_15061cc7c) <=
                 GlobalVectorConstants::SmallNumber.m128_f32[3]) & auVar2._12_4_;
    (__return_storage_ptr__->Rotation).m128_f32[0] = fVar13;
    (__return_storage_ptr__->Rotation).m128_f32[1] = fVar14;
    (__return_storage_ptr__->Rotation).m128_f32[2] = fVar15;
    (__return_storage_ptr__->Rotation).m128_f32[3] = fVar16;
    auVar2 = insertps(auVar17,auVar17,8);
    fVar9 = fVar9 * auVar2._0_4_;
    fVar10 = fVar10 * auVar2._4_4_;
    fVar11 = fVar11 * auVar2._8_4_;
    fVar12 = fVar12 * auVar2._12_4_;
    *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).m128_f32 = auVar2;
    fVar5 = fVar10 * fVar13 - fVar14 * fVar9;
    fVar6 = fVar11 * fVar14 - fVar15 * fVar10;
    fVar7 = fVar9 * fVar15 - fVar13 * fVar11;
    fVar8 = fVar12 * fVar16 - fVar16 * fVar12;
    fVar6 = fVar6 + fVar6;
    fVar7 = fVar7 + fVar7;
    fVar5 = fVar5 + fVar5;
    fVar8 = fVar8 + fVar8;
    auVar2._0_4_ = 0.0 - (fVar16 * fVar6 + fVar9 + (fVar5 * fVar14 - fVar7 * fVar15));
    auVar2._4_4_ = 0.0 - (fVar16 * fVar7 + fVar10 + (fVar6 * fVar15 - fVar5 * fVar13));
    auVar2._8_4_ = 0.0 - (fVar16 * fVar5 + fVar11 + (fVar7 * fVar13 - fVar6 * fVar14));
    auVar2._12_4_ = 0.0 - (fVar16 * fVar8 + fVar12 + (fVar8 * fVar16 - fVar8 * fVar16));
    _Var3 = (__m128)insertps(auVar2,auVar2,8);
    __return_storage_ptr__->Translation = _Var3;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Rotation = Identity.Rotation;
  __return_storage_ptr__->Translation = Identity.Translation;
  __return_storage_ptr__->Scale3D = Identity.Scale3D;
  return __return_storage_ptr__;
}

// Inverse @ 1417dcac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __thiscall
UE::Math::TTransform<double>::Inverse
          (TTransform<double> *this,TTransform<double> *__return_storage_ptr__)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  
  auVar6._0_8_ = (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                  *(uint *)((longlong)(this->Scale3D).XY.m128d_f64 + 4),
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                  *(uint *)(this->Scale3D).XY.m128d_f64);
  auVar6._8_4_ = _UNK_15061cc88 & *(uint *)((this->Scale3D).XY.m128d_f64 + 1);
  auVar6._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(this->Scale3D).XY.m128d_f64 + 0xc);
  lVar5 = -(ulonglong)
           ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
           (double)CONCAT44(_UNK_15061cc8c & *(uint *)((longlong)(this->Scale3D).ZW.m128d_f64 + 0xc)
                            ,_UNK_15061cc88 & *(uint *)((this->Scale3D).ZW.m128d_f64 + 1)));
  auVar2._8_4_ = (int)lVar5;
  auVar2._0_8_ = -(ulonglong)
                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                  (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                   *(uint *)((longlong)(this->Scale3D).ZW.m128d_f64 + 4),
                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                   *(uint *)(this->Scale3D).ZW.m128d_f64));
  auVar2._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
  uVar4 = movmskpd((int)this,auVar2);
  lVar5 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar6._8_8_);
  auVar1._8_4_ = (int)lVar5;
  auVar1._0_8_ = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar6._0_8_)
  ;
  auVar1._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
  iVar3 = movmskpd(in_EAX,auVar1);
  if ((uVar4 & 0x3fffffff) != 0 || iVar3 != 0) {
    InverseFast(this,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 = Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 = Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 = Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 = Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 = Identity.Scale3D.XY.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = Identity.Scale3D.ZW.m128d_f64;
  return __return_storage_ptr__;
}

// InverseFast @ 1417dce00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<float> * __thiscall
UE::Math::TTransform<float>::InverseFast
          (TTransform<float> *this,TTransform<float> *__return_storage_ptr__)

{
  undefined1 auVar1 [16];
  __m128 _Var2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  
  fVar12 = (this->Rotation).m128_f32[0] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
  fVar13 = (this->Rotation).m128_f32[1] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
  fVar14 = (this->Rotation).m128_f32[2] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
  fVar15 = (this->Rotation).m128_f32[3] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
  fVar8 = (this->Translation).m128_f32[0];
  fVar9 = (this->Translation).m128_f32[1];
  fVar10 = (this->Translation).m128_f32[2];
  fVar11 = (this->Translation).m128_f32[3];
  auVar1 = blendps((undefined1  [16])this->Scale3D,(undefined1  [16])GlobalVectorConstants::FloatOne
                   ,8);
  auVar3 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar1);
  auVar16._0_4_ =
       ~-(uint)((float)(__xmm_7fffffff7fffffff7fffffff7fffffff & auVar1._0_4_) <=
               GlobalVectorConstants::SmallNumber.m128_f32[0]) & auVar3._0_4_;
  auVar16._4_4_ =
       ~-(uint)((float)(_UNK_15061cc74 & auVar1._4_4_) <=
               GlobalVectorConstants::SmallNumber.m128_f32[1]) & auVar3._4_4_;
  auVar16._8_4_ =
       ~-(uint)((float)(_UNK_15061cc78 & auVar1._8_4_) <=
               GlobalVectorConstants::SmallNumber.m128_f32[2]) & auVar3._8_4_;
  auVar16._12_4_ =
       ~-(uint)((float)(_UNK_15061cc7c & auVar1._12_4_) <=
               GlobalVectorConstants::SmallNumber.m128_f32[3]) & auVar3._12_4_;
  (__return_storage_ptr__->Rotation).m128_f32[0] = fVar12;
  (__return_storage_ptr__->Rotation).m128_f32[1] = fVar13;
  (__return_storage_ptr__->Rotation).m128_f32[2] = fVar14;
  (__return_storage_ptr__->Rotation).m128_f32[3] = fVar15;
  auVar1 = insertps(auVar16,auVar16,8);
  fVar8 = fVar8 * auVar1._0_4_;
  fVar9 = fVar9 * auVar1._4_4_;
  fVar10 = fVar10 * auVar1._8_4_;
  fVar11 = fVar11 * auVar1._12_4_;
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).m128_f32 = auVar1;
  fVar4 = fVar9 * fVar12 - fVar13 * fVar8;
  fVar5 = fVar10 * fVar13 - fVar14 * fVar9;
  fVar6 = fVar8 * fVar14 - fVar12 * fVar10;
  fVar7 = fVar11 * fVar15 - fVar15 * fVar11;
  fVar5 = fVar5 + fVar5;
  fVar6 = fVar6 + fVar6;
  fVar4 = fVar4 + fVar4;
  fVar7 = fVar7 + fVar7;
  auVar1._0_4_ = 0.0 - (fVar15 * fVar5 + fVar8 + (fVar4 * fVar13 - fVar6 * fVar14));
  auVar1._4_4_ = 0.0 - (fVar15 * fVar6 + fVar9 + (fVar5 * fVar14 - fVar4 * fVar12));
  auVar1._8_4_ = 0.0 - (fVar15 * fVar4 + fVar10 + (fVar6 * fVar12 - fVar5 * fVar13));
  auVar1._12_4_ = 0.0 - (fVar15 * fVar7 + fVar11 + (fVar7 * fVar15 - fVar7 * fVar15));
  _Var2 = (__m128)insertps(auVar1,auVar1,8);
  __return_storage_ptr__->Translation = _Var2;
  return __return_storage_ptr__;
}

// InverseFast @ 1417dcec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __thiscall
UE::Math::TTransform<double>::InverseFast
          (TTransform<double> *this,TTransform<double> *__return_storage_ptr__)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar23;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined4 uVar27;
  double dVar28;
  undefined4 uVar29;
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  
  auVar12 = *(undefined1 (*) [16])(this->Scale3D).ZW.m128d_f64;
  dVar4 = (this->Rotation).ZW.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar5 = (this->Rotation).ZW.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  uVar37 = (undefined4)((ulonglong)dVar5 >> 0x20);
  lVar9 = -(ulonglong)
           ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar12._4_4_,
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar12._0_4_) <=
           (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar17 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                  *(undefined1 (*) [16])(this->Scale3D).XY.m128d_f64);
  dVar7 = (this->Rotation).XY.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar8 = (this->Rotation).XY.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  uVar38 = SUB84(dVar8,0);
  uVar39 = (undefined4)((ulonglong)dVar8 >> 0x20);
  auVar20._8_4_ = uVar38;
  auVar20._0_8_ = dVar7;
  auVar20._12_4_ = uVar39;
  lVar10 = -(ulonglong)
            ((double)CONCAT44(*(uint *)((longlong)(this->Scale3D).XY.m128d_f64 + 4) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              *(uint *)(this->Scale3D).XY.m128d_f64 &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar11 = -(ulonglong)
            ((double)CONCAT44(*(uint *)((longlong)(this->Scale3D).XY.m128d_f64 + 0xc) &
                              _UNK_15061cc8c,
                              *(uint *)((this->Scale3D).XY.m128d_f64 + 1) & _UNK_15061cc88) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  uVar40 = ~(uint)lVar10 & auVar17._0_4_;
  uVar41 = ~(uint)((ulonglong)lVar10 >> 0x20) & auVar17._4_4_;
  uVar42 = ~(uint)lVar11 & auVar17._8_4_;
  uVar43 = ~(uint)((ulonglong)lVar11 >> 0x20) & auVar17._12_4_;
  auVar17._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar17._0_8_ = auVar12._0_8_;
  auVar17._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar12 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar17);
  dVar23 = auVar20._8_8_;
  auVar30._8_4_ = uVar38;
  auVar30._0_8_ = dVar7;
  auVar30._12_4_ = uVar39;
  auVar2._8_4_ = SUB84(dVar5,0);
  auVar2._0_8_ = dVar4;
  auVar2._12_4_ = uVar37;
  auVar17 = blendpd(auVar30,auVar2,2);
  dVar31 = (double)CONCAT44(~(uint)((ulonglong)lVar9 >> 0x20) & auVar12._4_4_,
                            ~(uint)lVar9 & auVar12._0_4_);
  auVar13._8_4_ = SUB84(dVar4,0);
  auVar13._0_8_ = dVar23;
  auVar13._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  dVar32 = (this->Translation).XY.m128d_f64[0] * (double)CONCAT44(uVar41,uVar40);
  dVar33 = (this->Translation).XY.m128d_f64[1] * (double)CONCAT44(uVar43,uVar42);
  dVar1 = (this->Translation).ZW.m128d_f64[0] * dVar31;
  dVar26 = (this->Translation).ZW.m128d_f64[1] * 0.0;
  auVar34._8_4_ = SUB84(dVar33,0);
  auVar34._0_8_ = dVar32;
  uVar27 = (undefined4)((ulonglong)dVar33 >> 0x20);
  auVar34._12_4_ = uVar27;
  auVar18._8_4_ = SUB84(dVar33,0);
  auVar18._0_8_ = dVar32;
  auVar18._12_4_ = uVar27;
  auVar12._8_4_ = SUB84(dVar26,0);
  auVar12._0_8_ = dVar1;
  auVar12._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
  auVar12 = blendpd(auVar18,auVar12,2);
  auVar35._0_8_ = auVar34._8_8_ * dVar7 - dVar23 * dVar32;
  auVar35._8_8_ = dVar1 * dVar8 - auVar13._8_8_ * dVar33;
  auVar19._0_8_ = auVar12._0_8_ * dVar4 - auVar17._0_8_ * dVar1;
  auVar19._8_8_ = auVar12._8_8_ * dVar5 - auVar17._8_8_ * dVar26;
  dVar26 = auVar35._8_8_ + auVar35._8_8_;
  dVar28 = auVar19._0_8_ + auVar19._0_8_;
  auVar12 = blendpd(auVar35,auVar19,2);
  auVar36._0_8_ = auVar12._0_8_ + auVar12._0_8_;
  auVar36._8_8_ = auVar12._8_8_ + auVar12._8_8_;
  uVar27 = SUB84(dVar28,0);
  auVar24._8_4_ = uVar27;
  auVar24._0_8_ = dVar26;
  uVar29 = (undefined4)((ulonglong)dVar28 >> 0x20);
  auVar24._12_4_ = uVar29;
  auVar14._8_4_ = uVar27;
  auVar14._0_8_ = dVar26;
  auVar14._12_4_ = uVar29;
  auVar21._8_4_ = uVar27;
  auVar21._0_8_ = dVar26;
  auVar21._12_4_ = uVar29;
  auVar12 = blendpd(auVar21,auVar36,2);
  auVar25._0_8_ = auVar24._8_8_ * dVar7 - dVar26 * dVar23;
  auVar25._8_8_ = auVar36._0_8_ * dVar8 - auVar14._8_8_ * dVar4;
  auVar15._8_4_ = SUB84(auVar36._8_8_,0);
  auVar15._0_8_ = auVar36._0_8_;
  auVar15._12_4_ = (int)((ulonglong)auVar36._8_8_ >> 0x20);
  auVar22._0_8_ = auVar12._0_8_ * dVar4 - auVar36._0_8_ * auVar17._0_8_;
  auVar22._8_8_ = auVar12._8_8_ * dVar5 - auVar15._8_8_ * auVar17._8_8_;
  auVar6._8_4_ = uVar38;
  auVar6._0_8_ = dVar7;
  auVar6._12_4_ = uVar39;
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar6;
  auVar3._8_4_ = SUB84(dVar5,0);
  auVar3._0_8_ = dVar4;
  auVar3._12_4_ = uVar37;
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar3;
  auVar16._8_4_ = SUB84(auVar25._8_8_,0);
  auVar16._0_8_ = auVar25._0_8_;
  auVar16._12_4_ = (int)((ulonglong)auVar25._8_8_ >> 0x20);
  *(uint *)(__return_storage_ptr__->Scale3D).XY.m128d_f64 = uVar40;
  *(uint *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 4) = uVar41;
  *(uint *)((__return_storage_ptr__->Scale3D).XY.m128d_f64 + 1) = uVar42;
  *(uint *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 0xc) = uVar43;
  auVar12 = blendpd(auVar25,auVar22,2);
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
       0.0 - (dVar26 * dVar5 + dVar32 + auVar16._8_8_);
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] =
       0.0 - (dVar28 * dVar5 + dVar33 + auVar22._0_8_);
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] =
       0.0 - (auVar36._0_8_ * dVar5 + dVar1 + auVar12._0_8_);
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar31;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
  return __return_storage_ptr__;
}

// InverseTransformPosition @ 1417dd290

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<float> * __thiscall
UE::Math::TTransform<float>::InverseTransformPosition
          (TTransform<float> *this,TVector<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  undefined1 auVar12 [16];
  
  fVar7 = (this->Rotation).m128_f32[0] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
  fVar8 = (this->Rotation).m128_f32[1] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
  fVar9 = (this->Rotation).m128_f32[2] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
  fVar10 = (this->Rotation).m128_f32[3] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
  auVar12._0_4_ = (float)*(undefined8 *)&param_1->field0_0x0 - (this->Translation).m128_f32[0];
  auVar12._4_4_ =
       (float)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20) -
       (this->Translation).m128_f32[1];
  auVar12._8_4_ = (param_1->field0_0x0)._s_0.Z - (this->Translation).m128_f32[2];
  auVar12._12_4_ = 0.0 - (this->Translation).m128_f32[3];
  auVar12 = insertps(auVar12,auVar12,8);
  fVar11 = auVar12._0_4_;
  fVar13 = auVar12._4_4_;
  fVar14 = auVar12._8_4_;
  fVar4 = fVar13 * fVar7 - fVar8 * fVar11;
  fVar5 = fVar14 * fVar8 - fVar9 * fVar13;
  fVar6 = fVar11 * fVar9 - fVar7 * fVar14;
  fVar5 = fVar5 + fVar5;
  fVar6 = fVar6 + fVar6;
  fVar4 = fVar4 + fVar4;
  auVar12 = blendps((undefined1  [16])this->Scale3D,
                    (undefined1  [16])GlobalVectorConstants::FloatOne,8);
  fVar3 = (float)(_UNK_15061cc78 & auVar12._8_4_);
  fVar1 = GlobalVectorConstants::SmallNumber.m128_f32[2];
  auVar2 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar12);
  *(ulonglong *)&__return_storage_ptr__->field0_0x0 =
       CONCAT44((float)(~-(uint)((float)(_UNK_15061cc74 & auVar12._4_4_) <=
                                GlobalVectorConstants::SmallNumber.m128_f32[1]) & auVar2._4_4_) *
                (fVar10 * fVar6 + fVar13 + (fVar5 * fVar9 - fVar4 * fVar7)),
                (float)(~-(uint)((float)(__xmm_7fffffff7fffffff7fffffff7fffffff & auVar12._0_4_) <=
                                GlobalVectorConstants::SmallNumber.m128_f32[0]) & auVar2._0_4_) *
                (fVar10 * fVar5 + fVar11 + (fVar4 * fVar8 - fVar6 * fVar9)));
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (float)(~-(uint)(fVar3 <= fVar1) & auVar2._8_4_) *
       (fVar10 * fVar4 + fVar14 + (fVar6 * fVar7 - fVar5 * fVar8));
  return __return_storage_ptr__;
}

// InverseTransformPosition @ 1417dd350

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
UE::Math::TTransform<double>::InverseTransformPosition
          (TTransform<double> *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1
          )

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [12];
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar12;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  undefined4 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  dVar25 = (this->Rotation).XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar26 = (this->Rotation).XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar28._0_8_ =
       (this->Rotation).ZW.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  auVar28._8_8_ =
       (this->Rotation).ZW.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar17._8_4_ = SUB84(dVar26,0);
  auVar17._0_8_ = dVar25;
  uVar27 = (undefined4)((ulonglong)dVar26 >> 0x20);
  auVar17._12_4_ = uVar27;
  dVar9 = (param_1->field0_0x0)._s_0.Z - (this->Translation).ZW.m128d_f64[0];
  dVar20 = auVar17._8_8_;
  auVar21._8_4_ = SUB84(dVar26,0);
  auVar21._0_8_ = dVar25;
  auVar21._12_4_ = uVar27;
  auVar22 = blendpd(auVar21,auVar28,2);
  auVar11._8_4_ = SUB84(auVar28._0_8_,0);
  auVar11._0_8_ = dVar20;
  auVar11._12_4_ = (int)((ulonglong)auVar28._0_8_ >> 0x20);
  dVar3 = (param_1->field0_0x0)._s_0.X - (this->Translation).XY.m128d_f64[0];
  dVar4 = (param_1->field0_0x0)._s_0.Y - (this->Translation).XY.m128d_f64[1];
  uVar27 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar31._8_4_ = SUB84(dVar4,0);
  auVar31._0_8_ = dVar3;
  auVar31._12_4_ = uVar27;
  auVar13._8_4_ = SUB84(dVar4,0);
  auVar13._0_8_ = dVar3;
  auVar13._12_4_ = uVar27;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = dVar9;
  auVar14 = blendpd(auVar13,auVar14,2);
  auVar32._0_8_ = auVar31._8_8_ * dVar25 - dVar20 * dVar3;
  auVar32._8_8_ = dVar9 * dVar26 - auVar11._8_8_ * dVar4;
  dVar12 = auVar22._8_8_;
  auVar15._0_8_ = auVar14._0_8_ * auVar28._0_8_ - auVar22._0_8_ * dVar9;
  auVar15._8_8_ = auVar14._8_8_ * auVar28._8_8_ - dVar12 * 0.0;
  auVar14 = blendpd(auVar32,auVar15,2);
  auVar33._0_8_ = auVar14._0_8_ + auVar14._0_8_;
  auVar33._8_8_ = auVar14._8_8_ + auVar14._8_8_;
  dVar1 = auVar32._8_8_ + auVar32._8_8_;
  dVar2 = auVar15._0_8_ + auVar15._0_8_;
  uVar27 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar16._8_4_ = SUB84(dVar2,0);
  auVar16._0_8_ = dVar1;
  auVar16._12_4_ = uVar27;
  auVar29._8_4_ = SUB84(dVar2,0);
  auVar29._0_8_ = dVar1;
  auVar29._12_4_ = uVar27;
  auVar14 = blendpd(auVar29,auVar33,2);
  dVar26 = auVar33._0_8_ * dVar26 - auVar16._8_8_ * auVar28._0_8_;
  auVar10._8_4_ = SUB84(auVar33._8_8_,0);
  auVar10._0_8_ = auVar33._0_8_;
  auVar10._12_4_ = (int)((ulonglong)auVar33._8_8_ >> 0x20);
  auVar5._4_8_ = dVar12;
  auVar5._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
  auVar23._0_8_ = auVar5._0_8_ << 0x20;
  auVar23._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar23._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar30._0_8_ = auVar14._0_8_ * auVar28._0_8_ - auVar33._0_8_ * auVar22._0_8_;
  auVar30._8_8_ = auVar14._8_8_ * auVar28._8_8_ - auVar10._8_8_ * dVar12;
  auVar14 = *(undefined1 (*) [16])(this->Scale3D).ZW.m128d_f64;
  auVar24._8_8_ = auVar23._8_8_;
  auVar24._0_8_ = auVar14._0_8_;
  auVar11 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar24);
  lVar6 = -(ulonglong)
           ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar14._4_4_,
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar14._0_4_) <=
           (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar22._8_4_ = SUB84(dVar26,0);
  auVar22._0_8_ = dVar2 * dVar25 - dVar1 * dVar20;
  auVar22._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
  auVar18._0_8_ =
       (double)CONCAT44(*(uint *)((longlong)(this->Scale3D).XY.m128d_f64 + 4) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        *(uint *)(this->Scale3D).XY.m128d_f64 &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar18._8_4_ = *(uint *)((this->Scale3D).XY.m128d_f64 + 1) & _UNK_15061cc88;
  auVar18._12_4_ = *(uint *)((longlong)(this->Scale3D).XY.m128d_f64 + 0xc) & _UNK_15061cc8c;
  auVar14 = blendpd(auVar22,auVar30,2);
  auVar16 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                  *(undefined1 (*) [16])(this->Scale3D).XY.m128d_f64);
  lVar7 = -(ulonglong)(auVar18._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar8 = -(ulonglong)(auVar18._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar19._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar7 >> 0x20) & auVar16._4_4_,
                        ~(uint)lVar7 & auVar16._0_4_);
  auVar19._8_4_ = ~(uint)lVar8 & auVar16._8_4_;
  auVar19._12_4_ = ~(uint)((ulonglong)lVar8 >> 0x20) & auVar16._12_4_;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       auVar19._0_8_ * (dVar1 * auVar28._8_8_ + dVar3 + dVar26);
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       auVar19._8_8_ * (dVar2 * auVar28._8_8_ + dVar4 + auVar30._0_8_);
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (double)CONCAT44(~(uint)((ulonglong)lVar6 >> 0x20) & auVar11._4_4_,
                        ~(uint)lVar6 & auVar11._0_4_) *
       (auVar33._0_8_ * auVar28._8_8_ + dVar9 + auVar14._0_8_);
  return __return_storage_ptr__;
}

// InverseTransformPositionNoScale @ 1417dd550

TVector<float> * __thiscall
UE::Math::TTransform<float>::InverseTransformPositionNoScale
          (TTransform<float> *this,TVector<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  TVector<float>_u_0_s_0 TVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar7;
  float fVar8;
  undefined1 auVar6 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  TVar1 = (param_1->field0_0x0)._s_0;
  fVar9 = (this->Rotation).m128_f32[0] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
  fVar10 = (this->Rotation).m128_f32[1] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
  fVar11 = (this->Rotation).m128_f32[2] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
  fVar12 = (this->Rotation).m128_f32[3] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
  auVar6._0_4_ = TVar1.X - (this->Translation).m128_f32[0];
  auVar6._4_4_ = TVar1.Y - (this->Translation).m128_f32[1];
  auVar6._8_4_ = TVar1.Z - (this->Translation).m128_f32[2];
  auVar6._12_4_ = 0.0 - (this->Translation).m128_f32[3];
  auVar6 = insertps(auVar6,auVar6,8);
  fVar5 = auVar6._0_4_;
  fVar7 = auVar6._4_4_;
  fVar8 = auVar6._8_4_;
  fVar2 = fVar7 * fVar9 - fVar10 * fVar5;
  fVar3 = fVar8 * fVar10 - fVar11 * fVar7;
  fVar4 = fVar5 * fVar11 - fVar9 * fVar8;
  fVar3 = fVar3 + fVar3;
  fVar4 = fVar4 + fVar4;
  fVar2 = fVar2 + fVar2;
  *(ulonglong *)&__return_storage_ptr__->field0_0x0 =
       CONCAT44(fVar12 * fVar4 + fVar7 + (fVar3 * fVar11 - fVar2 * fVar9),
                fVar12 * fVar3 + fVar5 + (fVar2 * fVar10 - fVar4 * fVar11));
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       fVar12 * fVar2 + fVar8 + (fVar4 * fVar9 - fVar3 * fVar10);
  return __return_storage_ptr__;
}

// InverseTransformPositionNoScale @ 1417dd5d0

TVector<double> * __thiscall
UE::Math::TTransform<double>::InverseTransformPositionNoScale
          (TTransform<double> *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1
          )

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
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
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 uVar25;
  
  dVar20 = (this->Rotation).XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar21 = (this->Rotation).XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar6 = (param_1->field0_0x0)._s_0.Z - (this->Translation).ZW.m128d_f64[0];
  auVar14._8_4_ = SUB84(dVar21,0);
  auVar14._0_8_ = dVar20;
  uVar9 = (undefined4)((ulonglong)dVar21 >> 0x20);
  auVar14._12_4_ = uVar9;
  auVar19._8_4_ = SUB84(dVar21,0);
  auVar19._0_8_ = dVar20;
  auVar19._12_4_ = uVar9;
  dVar1 = (this->Rotation).ZW.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar2 = (this->Rotation).ZW.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  uVar9 = (undefined4)((ulonglong)dVar2 >> 0x20);
  dVar3 = (param_1->field0_0x0)._s_0.X - (this->Translation).XY.m128d_f64[0];
  dVar4 = (param_1->field0_0x0)._s_0.Y - (this->Translation).XY.m128d_f64[1];
  uVar25 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar11._8_4_ = SUB84(dVar2,0);
  auVar11._0_8_ = dVar1;
  auVar11._12_4_ = uVar9;
  auVar19 = blendpd(auVar19,auVar11,2);
  auVar22._8_4_ = SUB84(dVar4,0);
  auVar22._0_8_ = dVar3;
  auVar22._12_4_ = uVar25;
  auVar10._8_4_ = SUB84(dVar4,0);
  auVar10._0_8_ = dVar3;
  auVar10._12_4_ = uVar25;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar6;
  auVar11 = blendpd(auVar10,auVar5,2);
  auVar23._0_8_ = auVar22._8_8_ * dVar20 - auVar14._8_8_ * dVar3;
  auVar23._8_8_ = dVar6 * dVar21 - dVar1 * dVar4;
  auVar12._0_8_ = auVar11._0_8_ * dVar1 - auVar19._0_8_ * dVar6;
  auVar12._8_8_ = auVar11._8_8_ * dVar2 - auVar19._8_8_ * 0.0;
  dVar7 = auVar23._8_8_ + auVar23._8_8_;
  dVar8 = auVar12._0_8_ + auVar12._0_8_;
  auVar11 = blendpd(auVar23,auVar12,2);
  auVar24._0_8_ = auVar11._0_8_ + auVar11._0_8_;
  auVar24._8_8_ = auVar11._8_8_ + auVar11._8_8_;
  auVar13._8_4_ = SUB84(dVar2,0);
  auVar13._0_8_ = dVar2;
  auVar13._12_4_ = uVar9;
  auVar17._8_4_ = SUB84(dVar8,0);
  auVar17._0_8_ = dVar7;
  uVar9 = (undefined4)((ulonglong)dVar8 >> 0x20);
  auVar17._12_4_ = uVar9;
  auVar18._0_8_ = auVar17._8_8_ * dVar20 - auVar14._8_8_ * dVar7;
  auVar18._8_8_ = auVar24._0_8_ * dVar21 - dVar1 * dVar8;
  auVar15._8_4_ = SUB84(dVar8,0);
  auVar15._0_8_ = dVar7;
  auVar15._12_4_ = uVar9;
  auVar11 = blendpd(auVar15,auVar24,2);
  auVar16._0_8_ = auVar11._0_8_ * dVar1 - auVar19._0_8_ * auVar24._0_8_;
  auVar16._8_8_ = auVar11._8_8_ * dVar2 - auVar19._8_8_ * auVar24._8_8_;
  auVar11 = blendpd(auVar18,auVar16,2);
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2 * dVar7 + dVar3 + auVar18._8_8_;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = auVar13._8_8_ * dVar8 + dVar4 + auVar16._0_8_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2 * auVar24._0_8_ + dVar6 + auVar11._0_8_;
  return __return_storage_ptr__;
}

// InverseTransformRotation @ 1417dd720

TQuat<float> * __thiscall
UE::Math::TTransform<float>::InverseTransformRotation
          (TTransform<float> *this,TQuat<float> *__return_storage_ptr__,TQuat<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar10 = param_1->X;
  fVar11 = param_1->Y;
  fVar12 = param_1->Z;
  fVar13 = param_1->W;
  fVar14 = (this->Rotation).m128_f32[0] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
  fVar15 = (this->Rotation).m128_f32[1] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
  fVar16 = (this->Rotation).m128_f32[2] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
  fVar17 = (this->Rotation).m128_f32[3] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
  fVar1 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1];
  fVar4 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2];
  fVar7 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3];
  fVar2 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1];
  fVar5 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2];
  fVar8 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3];
  fVar3 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
  fVar6 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
  fVar9 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
  __return_storage_ptr__->X =
       fVar14 * fVar13 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] + fVar17 * fVar10 +
       fVar15 * fVar12 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
       fVar16 * fVar11 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
  __return_storage_ptr__->Y =
       fVar14 * fVar12 * fVar1 + fVar17 * fVar11 + fVar15 * fVar13 * fVar2 + fVar16 * fVar10 * fVar3
  ;
  __return_storage_ptr__->Z =
       fVar14 * fVar11 * fVar4 + fVar17 * fVar12 + fVar15 * fVar10 * fVar5 + fVar16 * fVar13 * fVar6
  ;
  __return_storage_ptr__->W =
       fVar14 * fVar10 * fVar7 + fVar17 * fVar13 + fVar15 * fVar11 * fVar8 + fVar16 * fVar12 * fVar9
  ;
  return __return_storage_ptr__;
}

// InverseTransformRotation @ 1417dd790

TQuat<double> * __thiscall
UE::Math::TTransform<double>::InverseTransformRotation
          (TTransform<double> *this,TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1)

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
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar10 = param_1->Z;
  dVar11 = param_1->W;
  dVar12 = param_1->X;
  dVar13 = param_1->Y;
  dVar6 = (this->Rotation).XY.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar7 = (this->Rotation).XY.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar8 = (this->Rotation).ZW.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar9 = (this->Rotation).ZW.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar4 = dVar6 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          dVar9 * dVar10 +
          dVar7 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          dVar8 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar5 = dVar6 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar9 * dVar11 +
          dVar7 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar8 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar2 = dVar6 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          dVar9 * dVar12 +
          dVar7 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          dVar8 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar6 = dVar6 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar9 * dVar13 +
          dVar7 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar8 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar1._8_4_ = SUB84(dVar6,0);
  auVar1._0_8_ = dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  __return_storage_ptr__->X = dVar2;
  __return_storage_ptr__->Y = (double)auVar1._8_8_;
  auVar3._8_4_ = SUB84(dVar5,0);
  auVar3._0_8_ = dVar4;
  auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  __return_storage_ptr__->Z = dVar4;
  __return_storage_ptr__->W = (double)auVar3._8_8_;
  return __return_storage_ptr__;
}

// InverseTransformVector @ 1417dda60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<float> * __thiscall
UE::Math::TTransform<float>::InverseTransformVector
          (TTransform<float> *this,TVector<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar1 = (param_1->field0_0x0)._s_0.Z;
  fVar9 = (float)*(undefined8 *)&param_1->field0_0x0;
  fVar10 = (float)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20);
  fVar11 = (this->Rotation).m128_f32[0] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
  fVar12 = (this->Rotation).m128_f32[1] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
  fVar13 = (this->Rotation).m128_f32[2] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
  fVar14 = (this->Rotation).m128_f32[3] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
  fVar6 = fVar10 * fVar11 - fVar12 * fVar9;
  fVar7 = fVar1 * fVar12 - fVar13 * fVar10;
  fVar8 = fVar9 * fVar13 - fVar11 * fVar1;
  fVar7 = fVar7 + fVar7;
  fVar8 = fVar8 + fVar8;
  fVar6 = fVar6 + fVar6;
  auVar3 = blendps((undefined1  [16])this->Scale3D,(undefined1  [16])GlobalVectorConstants::FloatOne
                   ,8);
  fVar5 = (float)(_UNK_15061cc78 & auVar3._8_4_);
  fVar2 = GlobalVectorConstants::SmallNumber.m128_f32[2];
  auVar4 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar3);
  *(ulonglong *)&__return_storage_ptr__->field0_0x0 =
       CONCAT44((float)(~-(uint)((float)(_UNK_15061cc74 & auVar3._4_4_) <=
                                GlobalVectorConstants::SmallNumber.m128_f32[1]) & auVar4._4_4_) *
                (fVar14 * fVar8 + fVar10 + (fVar7 * fVar13 - fVar6 * fVar11)),
                (float)(~-(uint)((float)(__xmm_7fffffff7fffffff7fffffff7fffffff & auVar3._0_4_) <=
                                GlobalVectorConstants::SmallNumber.m128_f32[0]) & auVar4._0_4_) *
                (fVar14 * fVar7 + fVar9 + (fVar6 * fVar12 - fVar8 * fVar13)));
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (float)(~-(uint)(fVar5 <= fVar2) & auVar4._8_4_) *
       (fVar14 * fVar6 + fVar1 + (fVar8 * fVar11 - fVar7 * fVar12));
  return __return_storage_ptr__;
}

// InverseTransformVector @ 1417ddb10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
UE::Math::TTransform<double>::InverseTransformVector
          (TTransform<double> *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1
          )

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [12];
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar11;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  undefined4 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  dVar23 = (this->Rotation).XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar24 = (this->Rotation).XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar26._0_8_ =
       (this->Rotation).ZW.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  auVar26._8_8_ =
       (this->Rotation).ZW.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar15._8_4_ = SUB84(dVar24,0);
  auVar15._0_8_ = dVar23;
  uVar25 = (undefined4)((ulonglong)dVar24 >> 0x20);
  auVar15._12_4_ = uVar25;
  auVar19._8_4_ = SUB84(dVar24,0);
  auVar19._0_8_ = dVar23;
  auVar19._12_4_ = uVar25;
  dVar18 = auVar15._8_8_;
  auVar10._8_4_ = SUB84(auVar26._0_8_,0);
  auVar10._0_8_ = dVar18;
  auVar10._12_4_ = (int)((ulonglong)auVar26._0_8_ >> 0x20);
  auVar20 = blendpd(auVar19,auVar26,2);
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  auVar15 = *(undefined1 (*) [16])&param_1->field0_0x0;
  dVar4 = auVar15._8_8_;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = dVar1;
  auVar12 = blendpd(auVar15,auVar12,2);
  auVar29._0_8_ = dVar4 * dVar23 - dVar18 * auVar15._0_8_;
  auVar29._8_8_ = dVar1 * dVar24 - auVar10._8_8_ * dVar4;
  dVar11 = auVar20._8_8_;
  auVar13._0_8_ = auVar12._0_8_ * auVar26._0_8_ - auVar20._0_8_ * dVar1;
  auVar13._8_8_ = auVar12._8_8_ * auVar26._8_8_ - dVar11 * 0.0;
  auVar12 = blendpd(auVar29,auVar13,2);
  auVar30._0_8_ = auVar12._0_8_ + auVar12._0_8_;
  auVar30._8_8_ = auVar12._8_8_ + auVar12._8_8_;
  dVar2 = auVar29._8_8_ + auVar29._8_8_;
  dVar3 = auVar13._0_8_ + auVar13._0_8_;
  uVar25 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar14._8_4_ = SUB84(dVar3,0);
  auVar14._0_8_ = dVar2;
  auVar14._12_4_ = uVar25;
  auVar27._8_4_ = SUB84(dVar3,0);
  auVar27._0_8_ = dVar2;
  auVar27._12_4_ = uVar25;
  auVar12 = blendpd(auVar27,auVar30,2);
  dVar24 = auVar30._0_8_ * dVar24 - auVar14._8_8_ * auVar26._0_8_;
  auVar9._8_4_ = SUB84(auVar30._8_8_,0);
  auVar9._0_8_ = auVar30._0_8_;
  auVar9._12_4_ = (int)((ulonglong)auVar30._8_8_ >> 0x20);
  auVar5._4_8_ = dVar11;
  auVar5._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
  auVar21._0_8_ = auVar5._0_8_ << 0x20;
  auVar21._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar21._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar28._0_8_ = auVar12._0_8_ * auVar26._0_8_ - auVar30._0_8_ * auVar20._0_8_;
  auVar28._8_8_ = auVar12._8_8_ * auVar26._8_8_ - auVar9._8_8_ * dVar11;
  auVar12 = *(undefined1 (*) [16])(this->Scale3D).ZW.m128d_f64;
  auVar22._8_8_ = auVar21._8_8_;
  auVar22._0_8_ = auVar12._0_8_;
  lVar6 = -(ulonglong)
           ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar12._4_4_,
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar12._0_4_) <=
           (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar14 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                  *(undefined1 (*) [16])(this->Scale3D).XY.m128d_f64);
  auVar12 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar22);
  auVar20._8_4_ = SUB84(dVar24,0);
  auVar20._0_8_ = dVar3 * dVar23 - dVar2 * dVar18;
  auVar20._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  auVar16._0_8_ =
       (double)CONCAT44(*(uint *)((longlong)(this->Scale3D).XY.m128d_f64 + 4) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        *(uint *)(this->Scale3D).XY.m128d_f64 &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar16._8_4_ = *(uint *)((this->Scale3D).XY.m128d_f64 + 1) & _UNK_15061cc88;
  auVar16._12_4_ = *(uint *)((longlong)(this->Scale3D).XY.m128d_f64 + 0xc) & _UNK_15061cc8c;
  auVar10 = blendpd(auVar20,auVar28,2);
  lVar7 = -(ulonglong)(auVar16._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar8 = -(ulonglong)(auVar16._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar17._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar7 >> 0x20) & auVar14._4_4_,
                        ~(uint)lVar7 & auVar14._0_4_);
  auVar17._8_4_ = ~(uint)lVar8 & auVar14._8_4_;
  auVar17._12_4_ = ~(uint)((ulonglong)lVar8 >> 0x20) & auVar14._12_4_;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       auVar17._0_8_ * (dVar2 * auVar26._8_8_ + auVar15._0_8_ + dVar24);
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       auVar17._8_8_ * (dVar3 * auVar26._8_8_ + dVar4 + auVar28._0_8_);
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (double)CONCAT44(~(uint)((ulonglong)lVar6 >> 0x20) & auVar12._4_4_,
                        ~(uint)lVar6 & auVar12._0_4_) *
       (auVar30._0_8_ * auVar26._8_8_ + dVar1 + auVar10._0_8_);
  return __return_storage_ptr__;
}

// InverseTransformVectorNoScale @ 1417ddd00

TVector<float> * __thiscall
UE::Math::TTransform<float>::InverseTransformVectorNoScale
          (TTransform<float> *this,TVector<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = (param_1->field0_0x0)._s_0.Z;
  fVar7 = (this->Rotation).m128_f32[0] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
  fVar8 = (this->Rotation).m128_f32[1] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
  fVar9 = (this->Rotation).m128_f32[2] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
  fVar10 = (this->Rotation).m128_f32[3] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
  fVar5 = (float)*(undefined8 *)&param_1->field0_0x0;
  fVar6 = (float)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20);
  fVar2 = fVar6 * fVar7 - fVar8 * fVar5;
  fVar3 = fVar1 * fVar8 - fVar9 * fVar6;
  fVar4 = fVar5 * fVar9 - fVar7 * fVar1;
  fVar3 = fVar3 + fVar3;
  fVar4 = fVar4 + fVar4;
  fVar2 = fVar2 + fVar2;
  *(ulonglong *)&__return_storage_ptr__->field0_0x0 =
       CONCAT44(fVar10 * fVar4 + fVar6 + (fVar3 * fVar9 - fVar2 * fVar7),
                fVar10 * fVar3 + fVar5 + (fVar2 * fVar8 - fVar4 * fVar9));
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       fVar10 * fVar2 + fVar1 + (fVar4 * fVar7 - fVar3 * fVar8);
  return __return_storage_ptr__;
}

// InverseTransformVectorNoScale @ 1417ddd80

TVector<double> * __thiscall
UE::Math::TTransform<double>::InverseTransformVectorNoScale
          (TTransform<double> *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1
          )

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar21;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  dVar5 = (this->Rotation).XY.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar6 = (this->Rotation).XY.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar7 = (this->Rotation).ZW.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar8 = (this->Rotation).ZW.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar17._8_4_ = SUB84(dVar6,0);
  auVar17._0_8_ = dVar5;
  auVar17._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar2 = *(undefined1 (*) [16])&param_1->field0_0x0;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar21 = auVar2._8_8_;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar1;
  auVar10 = blendpd(auVar2,auVar9,2);
  auVar18._8_4_ = SUB84(dVar8,0);
  auVar18._0_8_ = dVar7;
  auVar18._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar18 = blendpd(auVar17,auVar18,2);
  auVar19._0_8_ = dVar21 * dVar5 - dVar6 * auVar2._0_8_;
  auVar19._8_8_ = dVar1 * dVar6 - dVar7 * dVar21;
  auVar11._0_8_ = auVar10._0_8_ * dVar7 - auVar18._0_8_ * dVar1;
  auVar11._8_8_ = auVar10._8_8_ * dVar8 - auVar18._8_8_ * 0.0;
  auVar10 = blendpd(auVar19,auVar11,2);
  auVar20._0_8_ = auVar10._0_8_ + auVar10._0_8_;
  auVar20._8_8_ = auVar10._8_8_ + auVar10._8_8_;
  dVar3 = auVar19._8_8_ + auVar19._8_8_;
  dVar4 = auVar11._0_8_ + auVar11._0_8_;
  uVar16 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar14._8_4_ = SUB84(dVar4,0);
  auVar14._0_8_ = dVar3;
  auVar14._12_4_ = uVar16;
  auVar12._8_4_ = SUB84(dVar4,0);
  auVar12._0_8_ = dVar3;
  auVar12._12_4_ = uVar16;
  auVar10 = blendpd(auVar12,auVar20,2);
  auVar15._0_8_ = auVar14._8_8_ * dVar5 - dVar3 * dVar6;
  auVar15._8_8_ = auVar20._0_8_ * dVar6 - dVar4 * dVar7;
  auVar13._0_8_ = auVar10._0_8_ * dVar7 - auVar20._0_8_ * auVar18._0_8_;
  auVar13._8_8_ = auVar10._8_8_ * dVar8 - auVar20._8_8_ * auVar18._8_8_;
  auVar18 = blendpd(auVar15,auVar13,2);
  dVar4 = dVar4 * dVar8 + dVar21 + auVar13._0_8_;
  auVar10._8_4_ = SUB84(dVar4,0);
  auVar10._0_8_ = dVar3 * dVar8 + auVar2._0_8_ + auVar15._8_8_;
  auVar10._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar10;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar20._0_8_ * dVar8 + dVar1 + auVar18._0_8_;
  return __return_storage_ptr__;
}

// IsRotationNormalized @ 1417de550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall UE::Math::TTransform<float>::IsRotationNormalized(TTransform<float> *this)

{
  undefined1 auVar1 [16];
  undefined4 in_EAX;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar3 = (this->Rotation).m128_f32[0] * (this->Rotation).m128_f32[0];
  fVar4 = (this->Rotation).m128_f32[1] * (this->Rotation).m128_f32[1];
  fVar5 = (this->Rotation).m128_f32[2] * (this->Rotation).m128_f32[2];
  fVar6 = (this->Rotation).m128_f32[3] * (this->Rotation).m128_f32[3];
  fVar7 = fVar4 + fVar3;
  fVar3 = fVar3 + fVar4;
  fVar4 = fVar6 + fVar5;
  fVar5 = fVar5 + fVar6;
  auVar1._4_4_ = -(uint)(GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] <
                        (float)((uint)(GlobalVectorConstants::FloatOne.m128_f32[1] - (fVar5 + fVar3)
                                      ) & _UNK_15061cc74));
  auVar1._0_4_ = -(uint)(GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] <
                        (float)((uint)(GlobalVectorConstants::FloatOne.m128_f32[0] - (fVar4 + fVar7)
                                      ) & __xmm_7fffffff7fffffff7fffffff7fffffff));
  auVar1._8_4_ = -(uint)(GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] <
                        (float)((uint)(GlobalVectorConstants::FloatOne.m128_f32[2] - (fVar7 + fVar4)
                                      ) & _UNK_15061cc78));
  auVar1._12_4_ =
       -(uint)(GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] <
              (float)((uint)(GlobalVectorConstants::FloatOne.m128_f32[3] - (fVar3 + fVar5)) &
                     _UNK_15061cc7c));
  iVar2 = movmskps(in_EAX,auVar1);
  return iVar2 == 0;
}

// IsRotationNormalized @ 1417de5a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall UE::Math::TTransform<double>::IsRotationNormalized(TTransform<double> *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar10 = (this->Rotation).XY.m128d_f64[0];
  dVar7 = (this->Rotation).XY.m128d_f64[1];
  dVar8 = (this->Rotation).ZW.m128d_f64[0];
  dVar9 = (this->Rotation).ZW.m128d_f64[1];
  dVar10 = dVar8 * dVar8 + dVar10 * dVar10;
  dVar7 = dVar9 * dVar9 + dVar7 * dVar7;
  dVar8 = dVar7 + dVar10;
  dVar10 = dVar10 + dVar7;
  dVar7 = (double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar8;
  dVar9 = (double)GlobalVectorConstants::FloatOne.m128_f32[3] - dVar10;
  lVar5 = -(ulonglong)
           ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] <
           (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & _UNK_15061cc8c,
                            SUB84(dVar9,0) & _UNK_15061cc88));
  dVar8 = (double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar8;
  dVar10 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - dVar10;
  lVar6 = -(ulonglong)
           ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] <
           (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & _UNK_15061cc8c,
                            SUB84(dVar10,0) & _UNK_15061cc88));
  auVar1._8_4_ = (int)lVar6;
  auVar1._0_8_ = -(ulonglong)
                  ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] <
                  (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar1._12_4_ = (int)((ulonglong)lVar6 >> 0x20);
  iVar3 = movmskpd(in_EAX,auVar1);
  auVar2._8_4_ = (int)lVar5;
  auVar2._0_8_ = -(ulonglong)
                  ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] <
                  (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar2._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
  uVar4 = movmskpd((int)this,auVar2);
  return (uVar4 & 0x3fffffff) == 0 && iVar3 == 0;
}

// IsValid @ 1417de8a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall UE::Math::TTransform<float>::IsValid(TTransform<float> *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  undefined4 in_EAX;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar8 = (this->Rotation).m128_f32[0];
  fVar9 = (this->Rotation).m128_f32[1];
  fVar10 = (this->Rotation).m128_f32[2];
  fVar5 = (this->Rotation).m128_f32[3];
  auVar1._4_4_ = -(uint)((float)((uint)fVar9 & (uint)_UNK_1506896e4) == _UNK_1506896e4);
  auVar1._0_4_ = -(uint)((float)((uint)fVar8 & (uint)__xmm_7f8000007f8000007f8000007f800000) ==
                        __xmm_7f8000007f8000007f8000007f800000);
  auVar1._8_4_ = -(uint)((float)((uint)fVar10 & (uint)_UNK_1506896e8) == _UNK_1506896e8);
  auVar1._12_4_ = -(uint)((float)((uint)fVar5 & (uint)_UNK_1506896ec) == _UNK_1506896ec);
  iVar6 = movmskps(in_EAX,auVar1);
  if (((iVar6 == 0) &&
      (auVar2._4_4_ = -(uint)((float)((uint)_UNK_1506896e4 & (this->Translation).m128_u32[1]) ==
                             _UNK_1506896e4),
      auVar2._0_4_ = -(uint)((float)((uint)__xmm_7f8000007f8000007f8000007f800000 &
                                    (this->Translation).m128_u32[0]) ==
                            __xmm_7f8000007f8000007f8000007f800000),
      auVar2._8_4_ = -(uint)((float)((uint)_UNK_1506896e8 & (this->Translation).m128_u32[2]) ==
                            _UNK_1506896e8),
      auVar2._12_4_ =
           -(uint)((float)((uint)_UNK_1506896ec & (this->Translation).m128_u32[3]) == _UNK_1506896ec
                  ), iVar6 = movmskps(0,auVar2), iVar6 == 0)) &&
     (auVar3._4_4_ = -(uint)((float)((uint)_UNK_1506896e4 & (this->Scale3D).m128_u32[1]) ==
                            _UNK_1506896e4),
     auVar3._0_4_ = -(uint)((float)((uint)__xmm_7f8000007f8000007f8000007f800000 &
                                   (this->Scale3D).m128_u32[0]) ==
                           __xmm_7f8000007f8000007f8000007f800000),
     auVar3._8_4_ = -(uint)((float)((uint)_UNK_1506896e8 & (this->Scale3D).m128_u32[2]) ==
                           _UNK_1506896e8),
     auVar3._12_4_ =
          -(uint)((float)((uint)_UNK_1506896ec & (this->Scale3D).m128_u32[3]) == _UNK_1506896ec),
     iVar6 = movmskps(0,auVar3), iVar6 == 0)) {
    fVar7 = fVar9 * fVar9 + fVar8 * fVar8;
    fVar8 = fVar8 * fVar8 + fVar9 * fVar9;
    fVar9 = fVar5 * fVar5 + fVar10 * fVar10;
    fVar10 = fVar10 * fVar10 + fVar5 * fVar5;
    auVar4._4_4_ = -(uint)(GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] <
                          (float)((uint)(GlobalVectorConstants::FloatOne.m128_f32[1] -
                                        (fVar10 + fVar8)) & _UNK_15061cc74));
    auVar4._0_4_ = -(uint)(GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] <
                          (float)((uint)(GlobalVectorConstants::FloatOne.m128_f32[0] -
                                        (fVar9 + fVar7)) & __xmm_7fffffff7fffffff7fffffff7fffffff));
    auVar4._8_4_ = -(uint)(GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] <
                          (float)((uint)(GlobalVectorConstants::FloatOne.m128_f32[2] -
                                        (fVar7 + fVar9)) & _UNK_15061cc78));
    auVar4._12_4_ =
         -(uint)(GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] <
                (float)((uint)(GlobalVectorConstants::FloatOne.m128_f32[3] - (fVar8 + fVar10)) &
                       _UNK_15061cc7c));
    iVar6 = movmskps(0,auVar4);
    return iVar6 == 0;
  }
  return false;
}

// IsValid @ 1417de930

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall UE::Math::TTransform<double>::IsValid(TTransform<double> *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 in_EAX;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar18;
  double dVar14;
  double dVar15;
  uint uVar19;
  uint uVar22;
  double dVar20;
  undefined1 auVar16 [16];
  double dVar21;
  undefined1 auVar17 [16];
  
  uVar13 = (uint)__xmm_7ff00000000000007ff0000000000000;
  uVar18 = __xmm_7ff00000000000007ff0000000000000._4_4_;
  uVar19 = __xmm_7ff00000000000007ff0000000000000._8_4_;
  uVar22 = __xmm_7ff00000000000007ff0000000000000._12_4_;
  dVar21 = (double)__xmm_7ff00000000000007ff0000000000000;
  dVar14 = __xmm_7ff00000000000007ff0000000000000._8_8_;
  lVar11 = -(ulonglong)
            ((double)CONCAT44(uVar22 & *(uint *)((longlong)(this->Rotation).ZW.m128d_f64 + 0xc),
                              uVar19 & *(uint *)((this->Rotation).ZW.m128d_f64 + 1)) == dVar14);
  auVar1._8_4_ = (int)lVar11;
  auVar1._0_8_ = -(ulonglong)
                  ((double)CONCAT44(uVar18 & *(uint *)((longlong)(this->Rotation).ZW.m128d_f64 + 4),
                                    uVar13 & *(uint *)(this->Rotation).ZW.m128d_f64) == dVar21);
  auVar1._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
  uVar10 = movmskpd((int)this,auVar1);
  lVar11 = -(ulonglong)
            ((double)CONCAT44(uVar22 & *(uint *)((longlong)(this->Rotation).XY.m128d_f64 + 0xc),
                              uVar19 & *(uint *)((this->Rotation).XY.m128d_f64 + 1)) == dVar14);
  auVar5._8_4_ = (int)lVar11;
  auVar5._0_8_ = -(ulonglong)
                  ((double)CONCAT44(uVar18 & *(uint *)((longlong)(this->Rotation).XY.m128d_f64 + 4),
                                    uVar13 & *(uint *)(this->Rotation).XY.m128d_f64) == dVar21);
  auVar5._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
  iVar9 = movmskpd(in_EAX,auVar5);
  if ((uVar10 & 0x3fffffff) == 0 && iVar9 == 0) {
    lVar11 = -(ulonglong)
              ((double)CONCAT44(uVar22 & *(uint *)((longlong)(this->Translation).ZW.m128d_f64 + 0xc)
                                ,uVar19 & *(uint *)((this->Translation).ZW.m128d_f64 + 1)) == dVar14
              );
    auVar2._8_4_ = (int)lVar11;
    auVar2._0_8_ = -(ulonglong)
                    ((double)CONCAT44(uVar18 & *(uint *)((longlong)(this->Translation).ZW.m128d_f64
                                                        + 4),
                                      uVar13 & *(uint *)(this->Translation).ZW.m128d_f64) == dVar21)
    ;
    auVar2._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
    uVar10 = movmskpd(0,auVar2);
    lVar11 = -(ulonglong)
              ((double)CONCAT44(uVar22 & *(uint *)((longlong)(this->Translation).XY.m128d_f64 + 0xc)
                                ,uVar19 & *(uint *)((this->Translation).XY.m128d_f64 + 1)) == dVar14
              );
    auVar6._8_4_ = (int)lVar11;
    auVar6._0_8_ = -(ulonglong)
                    ((double)CONCAT44(uVar18 & *(uint *)((longlong)(this->Translation).XY.m128d_f64
                                                        + 4),
                                      uVar13 & *(uint *)(this->Translation).XY.m128d_f64) == dVar21)
    ;
    auVar6._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
    iVar9 = movmskpd(iVar9,auVar6);
    if ((uVar10 & 0x3fffffff) == 0 && iVar9 == 0) {
      lVar11 = -(ulonglong)
                ((double)CONCAT44(uVar22 & *(uint *)((longlong)(this->Scale3D).ZW.m128d_f64 + 0xc),
                                  uVar19 & *(uint *)((this->Scale3D).ZW.m128d_f64 + 1)) == dVar14);
      auVar3._8_4_ = (int)lVar11;
      auVar3._0_8_ = -(ulonglong)
                      ((double)CONCAT44(uVar18 & *(uint *)((longlong)(this->Scale3D).ZW.m128d_f64 +
                                                          4),
                                        uVar13 & *(uint *)(this->Scale3D).ZW.m128d_f64) == dVar21);
      auVar3._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
      uVar10 = movmskpd(0,auVar3);
      lVar11 = -(ulonglong)
                ((double)CONCAT44(uVar22 & *(uint *)((longlong)(this->Scale3D).XY.m128d_f64 + 0xc),
                                  uVar19 & *(uint *)((this->Scale3D).XY.m128d_f64 + 1)) == dVar14);
      auVar7._8_4_ = (int)lVar11;
      auVar7._0_8_ = -(ulonglong)
                      ((double)CONCAT44(uVar18 & *(uint *)((longlong)(this->Scale3D).XY.m128d_f64 +
                                                          4),
                                        uVar13 & *(uint *)(this->Scale3D).XY.m128d_f64) == dVar21);
      auVar7._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
      iVar9 = movmskpd(iVar9,auVar7);
      if ((uVar10 & 0x3fffffff) == 0 && iVar9 == 0) {
        dVar21 = (this->Rotation).XY.m128d_f64[0];
        dVar14 = (this->Rotation).XY.m128d_f64[1];
        dVar15 = (this->Rotation).ZW.m128d_f64[0];
        dVar20 = (this->Rotation).ZW.m128d_f64[1];
        dVar21 = dVar15 * dVar15 + dVar21 * dVar21;
        dVar14 = dVar20 * dVar20 + dVar14 * dVar14;
        dVar15 = dVar14 + dVar21;
        dVar21 = dVar21 + dVar14;
        dVar14 = (double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar15;
        dVar20 = (double)GlobalVectorConstants::FloatOne.m128_f32[3] - dVar21;
        auVar16._0_8_ =
             (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        auVar16._8_4_ = SUB84(dVar20,0) & _UNK_15061cc88;
        auVar16._12_4_ = (uint)((ulonglong)dVar20 >> 0x20) & _UNK_15061cc8c;
        lVar11 = -(ulonglong)
                  ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] < auVar16._8_8_);
        dVar15 = (double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar15;
        dVar21 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - dVar21;
        auVar17._0_8_ =
             (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        auVar17._8_4_ = SUB84(dVar21,0) & _UNK_15061cc88;
        auVar17._12_4_ = (uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c;
        lVar12 = -(ulonglong)
                  ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] < auVar17._8_8_);
        auVar4._8_4_ = (int)lVar12;
        auVar4._0_8_ = -(ulonglong)
                        ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] <
                        auVar17._0_8_);
        auVar4._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
        iVar9 = movmskpd(iVar9,auVar4);
        auVar8._8_4_ = (int)lVar11;
        auVar8._0_8_ = -(ulonglong)
                        ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] <
                        auVar16._0_8_);
        auVar8._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
        uVar10 = movmskpd(0,auVar8);
        return (uVar10 & 0x3fffffff) == 0 && iVar9 == 0;
      }
    }
  }
  return false;
}

// LerpTranslationScale3D @ 1417dfb00

void __thiscall
UE::Math::TTransform<float>::LerpTranslationScale3D
          (TTransform<float> *this,TTransform<float> *param_1,TTransform<float> *param_2,
          ScalarRegister *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar4 = (param_3->Value).m128_f32[0];
  fVar5 = (param_3->Value).m128_f32[1];
  fVar6 = (param_3->Value).m128_f32[2];
  fVar7 = (param_3->Value).m128_f32[3];
  fVar1 = GlobalVectorConstants::FloatOne.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatOne.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatOne.m128_f32[3];
  fVar8 = (param_2->Translation).m128_f32[1];
  fVar9 = (param_2->Translation).m128_f32[2];
  fVar10 = (param_2->Translation).m128_f32[3];
  fVar11 = (param_1->Translation).m128_f32[1];
  fVar12 = (param_1->Translation).m128_f32[2];
  fVar13 = (param_1->Translation).m128_f32[3];
  (this->Translation).m128_f32[0] =
       (GlobalVectorConstants::FloatOne.m128_f32[0] - fVar4) * (param_1->Translation).m128_f32[0] +
       fVar4 * (param_2->Translation).m128_f32[0];
  (this->Translation).m128_f32[1] = (fVar1 - fVar5) * fVar11 + fVar5 * fVar8;
  (this->Translation).m128_f32[2] = (fVar2 - fVar6) * fVar12 + fVar6 * fVar9;
  (this->Translation).m128_f32[3] = (fVar3 - fVar7) * fVar13 + fVar7 * fVar10;
  fVar1 = GlobalVectorConstants::FloatOne.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatOne.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatOne.m128_f32[3];
  fVar8 = (param_2->Scale3D).m128_f32[1];
  fVar9 = (param_2->Scale3D).m128_f32[2];
  fVar10 = (param_2->Scale3D).m128_f32[3];
  fVar11 = (param_1->Scale3D).m128_f32[1];
  fVar12 = (param_1->Scale3D).m128_f32[2];
  fVar13 = (param_1->Scale3D).m128_f32[3];
  (this->Scale3D).m128_f32[0] =
       (GlobalVectorConstants::FloatOne.m128_f32[0] - fVar4) * (param_1->Scale3D).m128_f32[0] +
       fVar4 * (param_2->Scale3D).m128_f32[0];
  (this->Scale3D).m128_f32[1] = (fVar1 - fVar5) * fVar11 + fVar5 * fVar8;
  (this->Scale3D).m128_f32[2] = (fVar2 - fVar6) * fVar12 + fVar6 * fVar9;
  (this->Scale3D).m128_f32[3] = (fVar3 - fVar7) * fVar13 + fVar7 * fVar10;
  return;
}

// LerpTranslationScale3D @ 1417dfb50

void __thiscall
UE::Math::TTransform<double>::LerpTranslationScale3D
          (TTransform<double> *this,TTransform<double> *param_1,TTransform<double> *param_2,
          ScalarRegister *param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar12 = (double)(param_3->Value).m128_f32[0];
  dVar13 = (double)(param_3->Value).m128_f32[1];
  dVar10 = (double)(param_3->Value).m128_f32[2];
  dVar11 = (double)(param_3->Value).m128_f32[3];
  dVar2 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0];
  dVar8 = (param_1->Translation).ZW.m128d_f64[0];
  dVar9 = (param_2->Translation).ZW.m128d_f64[0];
  dVar7 = (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1] - dVar11) *
          (param_1->Translation).ZW.m128d_f64[1] + dVar11 * (param_2->Translation).ZW.m128d_f64[1];
  dVar5 = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - dVar13) *
          (param_1->Translation).XY.m128d_f64[1] + dVar13 * (param_2->Translation).XY.m128d_f64[1];
  auVar3._8_4_ = SUB84(dVar5,0);
  auVar3._0_8_ = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - dVar12) *
                 (param_1->Translation).XY.m128d_f64[0] +
                 dVar12 * (param_2->Translation).XY.m128d_f64[0];
  auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])(this->Translation).XY.m128d_f64 = auVar3;
  auVar6._8_4_ = SUB84(dVar7,0);
  auVar6._0_8_ = (dVar2 - dVar10) * dVar8 + dVar10 * dVar9;
  auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])(this->Translation).ZW.m128d_f64 = auVar6;
  dVar2 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0];
  dVar8 = (param_2->Scale3D).ZW.m128d_f64[0];
  dVar9 = (param_1->Scale3D).ZW.m128d_f64[0];
  dVar5 = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - dVar13) *
          (param_1->Scale3D).XY.m128d_f64[1] + dVar13 * (param_2->Scale3D).XY.m128d_f64[1];
  dVar7 = (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1] - dVar11) *
          (param_1->Scale3D).ZW.m128d_f64[1] + dVar11 * (param_2->Scale3D).ZW.m128d_f64[1];
  auVar1._8_4_ = SUB84(dVar5,0);
  auVar1._0_8_ = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - dVar12) *
                 (param_1->Scale3D).XY.m128d_f64[0] + dVar12 * (param_2->Scale3D).XY.m128d_f64[0];
  auVar1._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])(this->Scale3D).XY.m128d_f64 = auVar1;
  auVar4._8_4_ = SUB84(dVar7,0);
  auVar4._0_8_ = (dVar2 - dVar10) * dVar9 + dVar10 * dVar8;
  auVar4._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])(this->Scale3D).ZW.m128d_f64 = auVar4;
  return;
}

// Mirror @ 1417e48d0

void __thiscall
UE::Math::TTransform<float>::Mirror(TTransform<float> *this,Type param_1,Type param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  undefined1 auVar10 [16];
  float fVar12;
  undefined1 local_58 [56];
  float fStack_20;
  float fStack_1c;
  
  fVar1 = (this->Rotation).m128_f32[0];
  fVar2 = (this->Rotation).m128_f32[1];
  fVar3 = (this->Rotation).m128_f32[2];
  fVar4 = (this->Rotation).m128_f32[3];
  fVar8 = fVar2 + fVar2;
  fVar9 = fVar3 + fVar3;
  fVar12 = (fVar1 + fVar1) * fVar1;
  fVar11 = fVar4 * (fVar1 + fVar1);
  fVar5 = (this->Scale3D).m128_f32[0];
  fVar6 = (this->Scale3D).m128_f32[1];
  fVar7 = (this->Scale3D).m128_f32[2];
  local_58._4_4_ = (fVar4 * fVar9 + fVar8 * fVar1) * fVar5;
  local_58._24_4_ = (fVar11 + fVar9 * fVar2) * fVar6;
  local_58._32_4_ = (fVar4 * fVar8 + fVar9 * fVar1) * fVar7;
  local_58._16_4_ = fVar6 * (fVar8 * fVar1 - fVar4 * fVar9);
  local_58._36_4_ = fVar7 * (fVar9 * fVar2 - fVar11);
  local_58._8_4_ = fVar5 * (fVar9 * fVar1 - fVar4 * fVar8);
  auVar10._0_4_ =
       (GlobalVectorConstants::FloatOne.m128_f32[0] - (fVar9 * fVar3 + fVar8 * fVar2)) * fVar5;
  auVar10._4_4_ = (GlobalVectorConstants::FloatOne.m128_f32[1] - (fVar9 * fVar3 + fVar12)) * fVar6;
  auVar10._8_4_ = (GlobalVectorConstants::FloatOne.m128_f32[2] - (fVar8 * fVar2 + fVar12)) * fVar7;
  auVar10._12_4_ =
       (GlobalVectorConstants::FloatOne.m128_f32[3] - (fVar12 + fVar12)) *
       (this->Scale3D).m128_f32[3];
  auVar10 = insertps(auVar10,auVar10,8);
  local_58._0_4_ = auVar10._0_4_;
  local_58._20_4_ = auVar10._4_4_;
  local_58._40_4_ = auVar10._8_4_;
  local_58._12_4_ = auVar10._12_4_;
  register0x00001200 =
       (float  [4])blendps(this->Translation,GlobalVectorConstants::FloatOne.m128_f32,8);
  if (param_1 == X) {
    local_58._0_4_ = local_58._0_4_ ^ __xmm_80000000800000008000000080000000;
    local_58._16_4_ = local_58._16_4_ ^ __xmm_80000000800000008000000080000000;
    local_58._32_4_ = local_58._32_4_ ^ __xmm_80000000800000008000000080000000;
    local_58._48_4_ = local_58._48_4_ ^ __xmm_80000000800000008000000080000000;
  }
  else if (param_1 == Y) {
    local_58._4_4_ = local_58._4_4_ ^ __xmm_80000000800000008000000080000000;
    local_58._20_4_ = local_58._20_4_ ^ __xmm_80000000800000008000000080000000;
    local_58._36_4_ = local_58._36_4_ ^ __xmm_80000000800000008000000080000000;
    local_58._52_4_ = local_58._52_4_ ^ __xmm_80000000800000008000000080000000;
  }
  else if (param_1 == Z) {
    local_58._8_4_ = local_58._8_4_ ^ __xmm_80000000800000008000000080000000;
    local_58._24_4_ = local_58._24_4_ ^ __xmm_80000000800000008000000080000000;
    local_58._40_4_ = local_58._40_4_ ^ __xmm_80000000800000008000000080000000;
    fStack_20 = (float)((uint)fStack_20 ^ __xmm_80000000800000008000000080000000);
  }
  if (param_2 == X) {
    local_58._0_4_ = local_58._0_4_ ^ __xmm_80000000800000008000000080000000;
    local_58._4_4_ = local_58._4_4_ ^ __xmm_80000000800000008000000080000000;
    local_58._8_4_ = local_58._8_4_ ^ __xmm_80000000800000008000000080000000;
  }
  else if (param_2 == Y) {
    local_58._16_4_ = local_58._16_4_ ^ __xmm_80000000800000008000000080000000;
    local_58._20_4_ = local_58._20_4_ ^ __xmm_80000000800000008000000080000000;
    local_58._24_4_ = local_58._24_4_ ^ __xmm_80000000800000008000000080000000;
  }
  else if (param_2 == Z) {
    local_58._32_4_ = local_58._32_4_ ^ __xmm_80000000800000008000000080000000;
    local_58._36_4_ = local_58._36_4_ ^ __xmm_80000000800000008000000080000000;
    local_58._40_4_ = local_58._40_4_ ^ __xmm_80000000800000008000000080000000;
  }
  local_58._28_4_ = local_58._12_4_;
  local_58._44_4_ = local_58._12_4_;
  SetFromMatrix(this,(TMatrix<float> *)local_58);
  return;
}

// Mirror @ 1417e4af0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Math::TTransform<double>::Mirror(TTransform<double> *this,Type param_1,Type param_2)

{
  TMatrix<double> local_88;
  
  ToMatrixWithScale(this,&local_88);
  if (param_1 == X) {
    local_88.M[1][0] =
         (double)CONCAT44((uint)((ulonglong)local_88.M[1][0] >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(local_88.M[1][0],0) ^ (uint)__xmm_80000000000000008000000000000000);
    local_88.M[0][0] =
         (double)CONCAT44((uint)((ulonglong)local_88.M[0][0] >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(local_88.M[0][0],0) ^ (uint)__xmm_80000000000000008000000000000000);
    local_88.M[3][0] =
         (double)CONCAT44((uint)((ulonglong)local_88.M[3][0] >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(local_88.M[3][0],0) ^ (uint)__xmm_80000000000000008000000000000000);
    local_88.M[2][0] =
         (double)CONCAT44((uint)((ulonglong)local_88.M[2][0] >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(local_88.M[2][0],0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  else if (param_1 == Y) {
    local_88.M[1][1] =
         (double)CONCAT44((uint)((ulonglong)local_88.M[1][1] >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(local_88.M[1][1],0) ^ (uint)__xmm_80000000000000008000000000000000);
    local_88.M[0][1] =
         (double)CONCAT44((uint)((ulonglong)local_88.M[0][1] >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(local_88.M[0][1],0) ^ (uint)__xmm_80000000000000008000000000000000);
    local_88.M[3][1] =
         (double)CONCAT44((uint)((ulonglong)local_88.M[3][1] >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(local_88.M[3][1],0) ^ (uint)__xmm_80000000000000008000000000000000);
    local_88.M[2][1] =
         (double)CONCAT44((uint)((ulonglong)local_88.M[2][1] >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(local_88.M[2][1],0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  else if (param_1 == Z) {
    local_88.M[1][2] =
         (double)CONCAT44((uint)((ulonglong)local_88.M[1][2] >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(local_88.M[1][2],0) ^ (uint)__xmm_80000000000000008000000000000000);
    local_88.M[0][2] =
         (double)CONCAT44((uint)((ulonglong)local_88.M[0][2] >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(local_88.M[0][2],0) ^ (uint)__xmm_80000000000000008000000000000000);
    local_88.M[3][2] =
         (double)CONCAT44((uint)((ulonglong)local_88.M[3][2] >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(local_88.M[3][2],0) ^ (uint)__xmm_80000000000000008000000000000000);
    local_88.M[2][2] =
         (double)CONCAT44((uint)((ulonglong)local_88.M[2][2] >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(local_88.M[2][2],0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  if (param_2 == X) {
    local_88.M[0][0] =
         (double)CONCAT44(local_88.M[0][0]._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_,
                          local_88.M[0][0]._0_4_ ^ (uint)__xmm_80000000000000008000000000000000);
    local_88.M[0][1] =
         (double)CONCAT44(local_88.M[0][1]._4_4_ ^ _UNK_15066df7c,
                          local_88.M[0][1]._0_4_ ^ _UNK_15066df78);
    local_88.M[0][2] =
         (double)CONCAT44((uint)((ulonglong)local_88.M[0][2] >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(local_88.M[0][2],0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  else if (param_2 == Y) {
    local_88.M[1][0] =
         (double)CONCAT44(local_88.M[1][0]._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_,
                          local_88.M[1][0]._0_4_ ^ (uint)__xmm_80000000000000008000000000000000);
    local_88.M[1][1] =
         (double)CONCAT44(local_88.M[1][1]._4_4_ ^ _UNK_15066df7c,
                          local_88.M[1][1]._0_4_ ^ _UNK_15066df78);
    local_88.M[1][2] =
         (double)CONCAT44((uint)((ulonglong)local_88.M[1][2] >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(local_88.M[1][2],0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  else if (param_2 == Z) {
    local_88.M[2][0] =
         (double)CONCAT44(local_88.M[2][0]._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_,
                          local_88.M[2][0]._0_4_ ^ (uint)__xmm_80000000000000008000000000000000);
    local_88.M[2][1] =
         (double)CONCAT44(local_88.M[2][1]._4_4_ ^ _UNK_15066df7c,
                          local_88.M[2][1]._0_4_ ^ _UNK_15066df78);
    local_88.M[2][2] =
         (double)CONCAT44((uint)((ulonglong)local_88.M[2][2] >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(local_88.M[2][2],0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  SetFromMatrix(this,&local_88);
  return;
}

// Multiply @ 1417e5280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Math::TTransform<float>::Multiply
          (TTransform<float> *param_1,TTransform<float> *param_2,TTransform<float> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar33;
  float fVar34;
  undefined1 auVar32 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auStack_108 [32];
  __m128 local_e8;
  TMatrix<float> local_d8;
  TMatrix<float> local_98;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_108;
  auVar26 = *(undefined1 (*) [16])(param_2->Scale3D).m128_f32;
  fVar31 = auVar26._0_4_;
  fVar34 = auVar26._4_4_;
  fVar1 = auVar26._8_4_;
  fVar3 = auVar26._12_4_;
  auVar27 = *(undefined1 (*) [16])(param_3->Scale3D).m128_f32;
  fVar33 = auVar27._0_4_;
  fVar35 = auVar27._4_4_;
  fVar2 = auVar27._8_4_;
  fVar4 = auVar27._12_4_;
  fVar13 = (param_3->Rotation).m128_f32[0];
  fVar14 = (param_3->Rotation).m128_f32[1];
  fVar15 = (param_3->Rotation).m128_f32[2];
  fVar16 = (param_3->Rotation).m128_f32[3];
  auVar26 = minps(auVar26,auVar27);
  auVar27._4_4_ = -(uint)(auVar26._4_4_ < GlobalVectorConstants::FloatZero.m128_f32[1]);
  auVar27._0_4_ = -(uint)(auVar26._0_4_ < GlobalVectorConstants::FloatZero.m128_f32[0]);
  auVar27._8_4_ = -(uint)(auVar26._8_4_ < GlobalVectorConstants::FloatZero.m128_f32[2]);
  auVar27._12_4_ = -(uint)(auVar26._12_4_ < GlobalVectorConstants::FloatZero.m128_f32[3]);
  iVar25 = movmskps((int)local_58,auVar27);
  if (iVar25 == 0) {
    fVar17 = (param_2->Rotation).m128_f32[0];
    fVar18 = (param_2->Rotation).m128_f32[1];
    fVar19 = (param_2->Rotation).m128_f32[2];
    fVar20 = (param_2->Rotation).m128_f32[3];
    fVar21 = (param_3->Translation).m128_f32[0];
    fVar22 = (param_3->Translation).m128_f32[1];
    fVar23 = (param_3->Translation).m128_f32[2];
    fVar24 = (param_3->Translation).m128_f32[3];
    fVar36 = (param_2->Translation).m128_f32[0] * fVar33;
    fVar37 = (param_2->Translation).m128_f32[1] * fVar35;
    fVar38 = (param_2->Translation).m128_f32[2] * fVar2;
    fVar39 = (param_2->Translation).m128_f32[3] * fVar4;
    fVar28 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0];
    fVar40 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1];
    fVar7 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2];
    fVar10 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3];
    fVar29 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0];
    fVar5 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1];
    fVar8 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2];
    fVar11 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3];
    fVar30 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
    fVar6 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
    fVar9 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
    fVar12 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
    (param_1->Scale3D).m128_f32[0] = fVar33 * fVar31;
    (param_1->Scale3D).m128_f32[1] = fVar35 * fVar34;
    (param_1->Scale3D).m128_f32[2] = fVar2 * fVar1;
    (param_1->Scale3D).m128_f32[3] = fVar4 * fVar3;
    (param_1->Rotation).m128_f32[0] =
         fVar20 * fVar13 * fVar28 + fVar16 * fVar17 + fVar19 * fVar14 * fVar29 +
         fVar18 * fVar15 * fVar30;
    (param_1->Rotation).m128_f32[1] =
         fVar19 * fVar13 * fVar40 + fVar16 * fVar18 + fVar20 * fVar14 * fVar5 +
         fVar17 * fVar15 * fVar6;
    (param_1->Rotation).m128_f32[2] =
         fVar18 * fVar13 * fVar7 + fVar16 * fVar19 + fVar17 * fVar14 * fVar8 +
         fVar20 * fVar15 * fVar9;
    (param_1->Rotation).m128_f32[3] =
         fVar17 * fVar13 * fVar10 + fVar16 * fVar20 + fVar18 * fVar14 * fVar11 +
         fVar19 * fVar15 * fVar12;
    fVar31 = fVar37 * fVar13 - fVar14 * fVar36;
    fVar33 = fVar38 * fVar14 - fVar15 * fVar37;
    fVar34 = fVar36 * fVar15 - fVar13 * fVar38;
    fVar35 = fVar39 * fVar16 - fVar16 * fVar39;
    fVar33 = fVar33 + fVar33;
    fVar34 = fVar34 + fVar34;
    fVar31 = fVar31 + fVar31;
    fVar35 = fVar35 + fVar35;
    (param_1->Translation).m128_f32[0] =
         fVar16 * fVar33 + fVar36 + (fVar31 * fVar14 - fVar34 * fVar15) + fVar21;
    (param_1->Translation).m128_f32[1] =
         fVar16 * fVar34 + fVar37 + (fVar33 * fVar15 - fVar31 * fVar13) + fVar22;
    (param_1->Translation).m128_f32[2] =
         fVar16 * fVar31 + fVar38 + (fVar34 * fVar13 - fVar33 * fVar14) + fVar23;
    (param_1->Translation).m128_f32[3] =
         fVar16 * fVar35 + fVar39 + (fVar35 * fVar16 - fVar35 * fVar16) + fVar24;
  }
  else {
    fVar28 = fVar14 + fVar14;
    fVar29 = fVar15 + fVar15;
    fVar30 = (fVar13 + fVar13) * fVar13;
    fVar40 = fVar16 * (fVar13 + fVar13);
    local_d8.M[0][1] = (fVar16 * fVar29 + fVar13 * fVar28) * fVar33;
    local_d8.M[1][2] = (fVar40 + fVar14 * fVar29) * fVar35;
    local_d8.M[2][0] = (fVar16 * fVar28 + fVar13 * fVar29) * fVar2;
    local_d8.M[1][0] = fVar35 * (fVar13 * fVar28 - fVar16 * fVar29);
    local_d8.M[2][1] = fVar2 * (fVar14 * fVar29 - fVar40);
    local_d8.M[0][2] = fVar33 * (fVar13 * fVar29 - fVar16 * fVar28);
    auVar26._0_4_ =
         (GlobalVectorConstants::FloatOne.m128_f32[0] - (fVar29 * fVar15 + fVar28 * fVar14)) *
         fVar33;
    auVar26._4_4_ =
         (GlobalVectorConstants::FloatOne.m128_f32[1] - (fVar29 * fVar15 + fVar30)) * fVar35;
    auVar26._8_4_ =
         (GlobalVectorConstants::FloatOne.m128_f32[2] - (fVar28 * fVar14 + fVar30)) * fVar2;
    auVar26._12_4_ = (GlobalVectorConstants::FloatOne.m128_f32[3] - (fVar30 + fVar30)) * fVar4;
    auVar26 = insertps(auVar26,auVar26,8);
    local_d8.M[0][0] = auVar26._0_4_;
    local_d8.M[1][1] = auVar26._4_4_;
    local_d8.M[2][2] = auVar26._8_4_;
    local_d8.M[0][3] = auVar26._12_4_;
    local_d8.M[3] =
         (float  [4])blendps(param_3->Translation,GlobalVectorConstants::FloatOne.m128_f32,8);
    fVar13 = (param_2->Rotation).m128_f32[0];
    fVar14 = (param_2->Rotation).m128_f32[1];
    fVar15 = (param_2->Rotation).m128_f32[2];
    fVar16 = (param_2->Rotation).m128_f32[3];
    fVar28 = fVar14 + fVar14;
    fVar29 = fVar15 + fVar15;
    fVar40 = (fVar13 + fVar13) * fVar13;
    fVar30 = fVar16 * (fVar13 + fVar13);
    local_98.M[0][1] = (fVar16 * fVar29 + fVar28 * fVar13) * fVar31;
    local_98.M[1][2] = (fVar30 + fVar29 * fVar14) * fVar34;
    local_98.M[2][0] = (fVar16 * fVar28 + fVar29 * fVar13) * fVar1;
    local_98.M[1][0] = fVar34 * (fVar28 * fVar13 - fVar16 * fVar29);
    local_98.M[2][1] = fVar1 * (fVar29 * fVar14 - fVar30);
    local_98.M[0][2] = fVar31 * (fVar29 * fVar13 - fVar16 * fVar28);
    auVar32._0_4_ =
         (GlobalVectorConstants::FloatOne.m128_f32[0] - (fVar29 * fVar15 + fVar28 * fVar14)) *
         fVar31;
    auVar32._4_4_ =
         (GlobalVectorConstants::FloatOne.m128_f32[1] - (fVar29 * fVar15 + fVar40)) * fVar34;
    auVar32._8_4_ =
         (GlobalVectorConstants::FloatOne.m128_f32[2] - (fVar28 * fVar14 + fVar40)) * fVar1;
    auVar32._12_4_ = (GlobalVectorConstants::FloatOne.m128_f32[3] - (fVar40 + fVar40)) * fVar3;
    auVar26 = insertps(auVar32,auVar32,8);
    local_98.M[0][0] = auVar26._0_4_;
    local_98.M[1][1] = auVar26._4_4_;
    local_98.M[2][2] = auVar26._8_4_;
    local_98.M[0][3] = auVar26._12_4_;
    local_e8.m128_f32[0] = fVar33 * fVar31;
    local_e8.m128_f32[1] = fVar35 * fVar34;
    local_e8.m128_f32[2] = fVar2 * fVar1;
    local_e8.m128_f32[3] = fVar4 * fVar3;
    local_98.M[3] =
         (float  [4])blendps(param_2->Translation,GlobalVectorConstants::FloatOne.m128_f32,8);
    local_d8.M[1][3] = local_d8.M[0][3];
    local_d8.M[2][3] = local_d8.M[0][3];
    local_98.M[1][3] = local_98.M[0][3];
    local_98.M[2][3] = local_98.M[0][3];
    ConstructTransformFromMatrixWithDesiredScale(&local_98,&local_d8,&local_e8,param_1);
  }
  return;
}

// Multiply @ 1417e5560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Math::TTransform<double>::Multiply
          (TTransform<double> *param_1,TTransform<double> *param_2,TTransform<double> *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  int iVar32;
  TMatrix<double> *pTVar33;
  TMatrix<double> *pTVar34;
  uint uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  undefined4 uVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auStack_298 [64];
  VectorRegister4Double local_258 [4];
  TMatrix<double> local_1c8;
  TMatrix<double> local_148;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_298;
  auVar43 = minpd(*(undefined1 (*) [16])(param_2->Scale3D).ZW.m128d_f64,
                  *(undefined1 (*) [16])(param_3->Scale3D).ZW.m128d_f64);
  auVar48 = minpd(*(undefined1 (*) [16])(param_2->Scale3D).XY.m128d_f64,
                  *(undefined1 (*) [16])(param_3->Scale3D).XY.m128d_f64);
  auVar44._8_8_ = -(ulonglong)(auVar43._8_8_ < (double)GlobalVectorConstants::FloatZero.m128_f32[3])
  ;
  auVar44._0_8_ = -(ulonglong)(auVar43._0_8_ < (double)GlobalVectorConstants::FloatZero.m128_f32[2])
  ;
  uVar35 = movmskpd((int)param_1,auVar44);
  auVar43._8_8_ = -(ulonglong)(auVar48._8_8_ < (double)GlobalVectorConstants::FloatZero.m128_f32[1])
  ;
  auVar43._0_8_ = -(ulonglong)(auVar48._0_8_ < (double)GlobalVectorConstants::FloatZero.m128_f32[0])
  ;
  iVar32 = movmskpd((int)local_c8,auVar43);
  if ((uVar35 & 0x3fffffff) == 0 && iVar32 == 0) {
    dVar19 = (param_2->Rotation).ZW.m128d_f64[0];
    dVar20 = (param_2->Rotation).ZW.m128d_f64[1];
    dVar9 = (param_2->Translation).XY.m128d_f64[0];
    dVar10 = (param_2->Translation).XY.m128d_f64[1];
    dVar12 = (param_2->Translation).ZW.m128d_f64[0];
    dVar13 = (param_2->Translation).ZW.m128d_f64[1];
    dVar23 = (param_3->Translation).XY.m128d_f64[0];
    dVar24 = (param_3->Translation).XY.m128d_f64[1];
    dVar21 = (param_2->Rotation).XY.m128d_f64[0];
    dVar22 = (param_2->Rotation).XY.m128d_f64[1];
    dVar25 = (param_3->Translation).ZW.m128d_f64[0];
    dVar7 = (param_3->Translation).ZW.m128d_f64[1];
    dVar26 = (param_2->Scale3D).XY.m128d_f64[0];
    dVar3 = (param_2->Scale3D).XY.m128d_f64[1];
    dVar27 = (param_2->Scale3D).ZW.m128d_f64[0];
    dVar4 = (param_2->Scale3D).ZW.m128d_f64[1];
    dVar28 = (param_3->Scale3D).XY.m128d_f64[0];
    dVar29 = (param_3->Scale3D).XY.m128d_f64[1];
    dVar30 = (param_3->Scale3D).ZW.m128d_f64[0];
    dVar31 = (param_3->Scale3D).ZW.m128d_f64[1];
    auVar43 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
    dVar5 = auVar43._0_8_;
    dVar42 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
    dVar8 = auVar43._8_8_;
    auVar36._8_4_ = auVar43._8_4_;
    auVar36._0_8_ = dVar8;
    auVar36._12_4_ = auVar43._12_4_;
    auVar44 = *(undefined1 (*) [16])(param_3->Rotation).ZW.m128d_f64;
    dVar46 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
    dVar51 = auVar44._0_8_;
    dVar1 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar14 = auVar44._8_8_;
    dVar16 = dVar19 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             dVar14 * dVar22 +
             dVar8 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             dVar21 * dVar51 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar18 = dVar21 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             dVar14 * dVar20 +
             auVar36._8_8_ * dVar22 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             dVar19 * dVar51 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    auVar15._8_4_ = SUB84(dVar16,0);
    auVar15._0_8_ =
         dVar20 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
         dVar14 * dVar21 +
         dVar8 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         dVar22 * dVar51 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    auVar15._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar15;
    auVar17._8_4_ = SUB84(dVar18,0);
    auVar17._0_8_ =
         dVar22 * dVar5 * dVar42 + dVar14 * dVar19 + dVar8 * dVar21 * dVar46 +
         dVar20 * dVar51 * dVar1;
    auVar17._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64 = auVar17;
    dVar9 = dVar9 * dVar28;
    dVar10 = dVar10 * dVar29;
    uVar47 = (undefined4)((ulonglong)dVar10 >> 0x20);
    dVar12 = dVar12 * dVar30;
    dVar13 = dVar13 * dVar31;
    auVar52._8_4_ = SUB84(dVar10,0);
    auVar52._0_8_ = dVar9;
    auVar52._12_4_ = uVar47;
    auVar48 = blendpd(auVar43,auVar44,2);
    auVar37._8_4_ = SUB84(dVar10,0);
    auVar37._0_8_ = dVar9;
    auVar37._12_4_ = uVar47;
    auVar11._8_4_ = SUB84(dVar13,0);
    auVar11._0_8_ = dVar12;
    auVar11._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    auVar43 = blendpd(auVar37,auVar11,2);
    auVar53._0_8_ = auVar52._8_8_ * dVar5 - dVar9 * dVar8;
    auVar53._8_8_ = dVar12 * dVar8 - dVar10 * dVar51;
    auVar45._8_4_ = SUB84(auVar53._8_8_,0);
    auVar45._0_8_ = auVar53._0_8_;
    auVar45._12_4_ = (int)((ulonglong)auVar53._8_8_ >> 0x20);
    auVar38._0_8_ = auVar43._0_8_ * dVar51 - dVar12 * auVar48._0_8_;
    auVar38._8_8_ = auVar43._8_8_ * dVar14 - dVar13 * auVar48._8_8_;
    auVar43 = blendpd(auVar53,auVar38,2);
    auVar39._8_4_ = auVar44._8_4_;
    auVar39._0_8_ = dVar14;
    auVar39._12_4_ = auVar44._12_4_;
    dVar42 = auVar45._8_8_ + auVar45._8_8_;
    dVar46 = auVar38._0_8_ + auVar38._0_8_;
    auVar54._0_8_ = auVar43._0_8_ + auVar43._0_8_;
    auVar54._8_8_ = auVar43._8_8_ + auVar43._8_8_;
    auVar49._8_4_ = SUB84(dVar46,0);
    auVar49._0_8_ = dVar42;
    uVar47 = (undefined4)((ulonglong)dVar46 >> 0x20);
    auVar49._12_4_ = uVar47;
    auVar40._8_4_ = SUB84(dVar46,0);
    auVar40._0_8_ = dVar42;
    auVar40._12_4_ = uVar47;
    auVar43 = blendpd(auVar40,auVar54,2);
    auVar50._0_8_ = auVar49._8_8_ * dVar5 - dVar42 * dVar8;
    auVar50._8_8_ = auVar54._0_8_ * dVar8 - dVar46 * dVar51;
    auVar41._0_8_ = auVar43._0_8_ * dVar51 - auVar54._0_8_ * auVar48._0_8_;
    auVar41._8_8_ = auVar43._8_8_ * dVar14 - auVar54._8_8_ * auVar48._8_8_;
    auVar43 = blendpd(auVar50,auVar41,2);
    (param_1->Translation).XY.m128d_f64[0] = dVar14 * dVar42 + dVar9 + auVar50._8_8_ + dVar23;
    (param_1->Translation).XY.m128d_f64[1] =
         auVar39._8_8_ * dVar46 + dVar10 + auVar41._0_8_ + dVar24;
    dVar7 = dVar14 * auVar54._8_8_ + dVar13 + auVar43._8_8_ + dVar7;
    auVar6._8_4_ = SUB84(dVar7,0);
    auVar6._0_8_ = dVar14 * auVar54._0_8_ + dVar12 + auVar43._0_8_ + dVar25;
    auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    *(undefined1 (*) [16])(param_1->Translation).ZW.m128d_f64 = auVar6;
    dVar3 = dVar3 * dVar29;
    auVar48._8_4_ = SUB84(dVar3,0);
    auVar48._0_8_ = dVar26 * dVar28;
    auVar48._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    *(undefined1 (*) [16])(param_1->Scale3D).XY.m128d_f64 = auVar48;
    dVar4 = dVar4 * dVar31;
    auVar2._8_4_ = SUB84(dVar4,0);
    auVar2._0_8_ = dVar27 * dVar30;
    auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *(undefined1 (*) [16])(param_1->Scale3D).ZW.m128d_f64 = auVar2;
  }
  else {
    dVar46 = (param_2->Scale3D).XY.m128d_f64[0];
    dVar1 = (param_2->Scale3D).XY.m128d_f64[1];
    dVar3 = (param_2->Scale3D).ZW.m128d_f64[0];
    dVar42 = (param_2->Scale3D).ZW.m128d_f64[1];
    dVar4 = (param_3->Scale3D).XY.m128d_f64[0];
    dVar5 = (param_3->Scale3D).XY.m128d_f64[1];
    dVar7 = (param_3->Scale3D).ZW.m128d_f64[0];
    dVar8 = (param_3->Scale3D).ZW.m128d_f64[1];
    pTVar33 = ToMatrixWithScale(param_3,&local_1c8);
    pTVar34 = ToMatrixWithScale(param_2,&local_148);
    local_258[0].XY.m128d_f64[0] = dVar46 * dVar4;
    local_258[0].XY.m128d_f64[1] = dVar1 * dVar5;
    dVar42 = dVar42 * dVar8;
    local_258[0].ZW.m128d_f64[1]._0_4_ = SUB84(dVar42,0);
    local_258[0].ZW.m128d_f64[0] = dVar3 * dVar7;
    local_258[0].ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar42 >> 0x20);
    ConstructTransformFromMatrixWithDesiredScale(pTVar34,pTVar33,local_258,param_1);
  }
  return;
}

// MultiplyScale3D @ 1417e5960

void __thiscall
UE::Math::TTransform<float>::MultiplyScale3D(TTransform<float> *this,TVector<float> *param_1)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = (param_1->field0_0x0)._s_0.Z;
  uVar2 = *(undefined8 *)&param_1->field0_0x0;
  fVar3 = (this->Scale3D).m128_f32[1];
  fVar4 = (this->Scale3D).m128_f32[2];
  fVar5 = (this->Scale3D).m128_f32[3];
  (this->Scale3D).m128_f32[0] = (float)uVar2 * (this->Scale3D).m128_f32[0];
  (this->Scale3D).m128_f32[1] = (float)((ulonglong)uVar2 >> 0x20) * fVar3;
  (this->Scale3D).m128_f32[2] = fVar1 * fVar4;
  (this->Scale3D).m128_f32[3] = fVar5 * 0.0;
  return;
}

// MultiplyScale3D @ 1417e5980

void __thiscall
UE::Math::TTransform<double>::MultiplyScale3D(TTransform<double> *this,TVector<double> *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar3 = (param_1->field0_0x0)._s_0.Y * (this->Scale3D).XY.m128d_f64[1];
  dVar4 = (this->Scale3D).ZW.m128d_f64[1];
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = (param_1->field0_0x0)._s_0.X * (this->Scale3D).XY.m128d_f64[0];
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Scale3D).XY.m128d_f64 = auVar2;
  (this->Scale3D).ZW.m128d_f64[0] = dVar1 * (this->Scale3D).ZW.m128d_f64[0];
  (this->Scale3D).ZW.m128d_f64[1] = dVar4 * 0.0;
  return;
}

// MultiplyUsingMatrixWithScale @ 1417e59b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Math::TTransform<float>::MultiplyUsingMatrixWithScale
          (TTransform<float> *param_1,TTransform<float> *param_2,TTransform<float> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar15;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar16;
  undefined1 auStack_108 [32];
  __m128 local_e8;
  TMatrix<float> local_d8;
  TMatrix<float> local_98;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_108;
  fVar1 = (param_3->Rotation).m128_f32[0];
  fVar2 = (param_3->Rotation).m128_f32[1];
  fVar3 = (param_3->Rotation).m128_f32[2];
  fVar4 = (param_3->Rotation).m128_f32[3];
  fVar5 = (param_3->Scale3D).m128_f32[0];
  fVar6 = (param_3->Scale3D).m128_f32[1];
  fVar7 = (param_3->Scale3D).m128_f32[2];
  fVar11 = fVar2 + fVar2;
  fVar12 = fVar3 + fVar3;
  fVar8 = (param_2->Scale3D).m128_f32[0];
  fVar9 = (param_2->Scale3D).m128_f32[1];
  fVar10 = (param_2->Scale3D).m128_f32[2];
  fVar16 = (fVar1 + fVar1) * fVar1;
  fVar15 = fVar4 * (fVar1 + fVar1);
  local_d8.M[0][1] = (fVar4 * fVar12 + fVar11 * fVar1) * fVar5;
  local_d8.M[1][2] = (fVar15 + fVar12 * fVar2) * fVar6;
  local_d8.M[2][0] = (fVar4 * fVar11 + fVar12 * fVar1) * fVar7;
  local_d8.M[1][0] = fVar6 * (fVar11 * fVar1 - fVar4 * fVar12);
  local_d8.M[2][1] = fVar7 * (fVar12 * fVar2 - fVar15);
  local_d8.M[0][2] = fVar5 * (fVar12 * fVar1 - fVar4 * fVar11);
  auVar13._0_4_ =
       (GlobalVectorConstants::FloatOne.m128_f32[0] - (fVar12 * fVar3 + fVar11 * fVar2)) * fVar5;
  auVar13._4_4_ = (GlobalVectorConstants::FloatOne.m128_f32[1] - (fVar12 * fVar3 + fVar16)) * fVar6;
  auVar13._8_4_ = (GlobalVectorConstants::FloatOne.m128_f32[2] - (fVar11 * fVar2 + fVar16)) * fVar7;
  auVar13._12_4_ =
       (GlobalVectorConstants::FloatOne.m128_f32[3] - (fVar16 + fVar16)) *
       (param_3->Scale3D).m128_f32[3];
  auVar13 = insertps(auVar13,auVar13,8);
  local_d8.M[0][0] = auVar13._0_4_;
  local_d8.M[1][1] = auVar13._4_4_;
  local_d8.M[2][2] = auVar13._8_4_;
  local_d8.M[0][3] = auVar13._12_4_;
  local_d8.M[3] =
       (float  [4])blendps(param_3->Translation,GlobalVectorConstants::FloatOne.m128_f32,8);
  fVar1 = (param_2->Rotation).m128_f32[0];
  fVar2 = (param_2->Rotation).m128_f32[1];
  fVar3 = (param_2->Rotation).m128_f32[2];
  fVar4 = (param_2->Rotation).m128_f32[3];
  fVar11 = fVar2 + fVar2;
  fVar12 = fVar3 + fVar3;
  fVar16 = (fVar1 + fVar1) * fVar1;
  fVar15 = fVar4 * (fVar1 + fVar1);
  local_98.M[0][1] = (fVar4 * fVar12 + fVar11 * fVar1) * fVar8;
  local_98.M[1][2] = (fVar15 + fVar12 * fVar2) * fVar9;
  local_98.M[2][0] = (fVar4 * fVar11 + fVar12 * fVar1) * fVar10;
  auVar14._0_4_ =
       (GlobalVectorConstants::FloatOne.m128_f32[0] - (fVar12 * fVar3 + fVar11 * fVar2)) * fVar8;
  auVar14._4_4_ = (GlobalVectorConstants::FloatOne.m128_f32[1] - (fVar12 * fVar3 + fVar16)) * fVar9;
  auVar14._8_4_ = (GlobalVectorConstants::FloatOne.m128_f32[2] - (fVar11 * fVar2 + fVar16)) * fVar10
  ;
  auVar14._12_4_ =
       (GlobalVectorConstants::FloatOne.m128_f32[3] - (fVar16 + fVar16)) *
       (param_2->Scale3D).m128_f32[3];
  local_98.M[1][0] = fVar9 * (fVar11 * fVar1 - fVar4 * fVar12);
  local_98.M[2][1] = fVar10 * (fVar12 * fVar2 - fVar15);
  local_98.M[0][2] = fVar8 * (fVar12 * fVar1 - fVar4 * fVar11);
  auVar13 = insertps(auVar14,auVar14,8);
  local_98.M[0][0] = auVar13._0_4_;
  local_98.M[1][1] = auVar13._4_4_;
  local_98.M[2][2] = auVar13._8_4_;
  local_98.M[0][3] = auVar13._12_4_;
  local_e8.m128_f32[0] = fVar8 * fVar5;
  local_e8.m128_f32[1] = fVar9 * fVar6;
  local_e8.m128_f32[2] = fVar10 * fVar7;
  local_e8.m128_f32[3] = (param_2->Scale3D).m128_f32[3] * (param_3->Scale3D).m128_f32[3];
  local_98.M[3] =
       (float  [4])blendps(param_2->Translation,GlobalVectorConstants::FloatOne.m128_f32,8);
  local_d8.M[1][3] = local_d8.M[0][3];
  local_d8.M[2][3] = local_d8.M[0][3];
  local_98.M[1][3] = local_98.M[0][3];
  local_98.M[2][3] = local_98.M[0][3];
  ConstructTransformFromMatrixWithDesiredScale(&local_98,&local_d8,&local_e8,param_1);
  return;
}

// MultiplyUsingMatrixWithScale @ 1417e5bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Math::TTransform<double>::MultiplyUsingMatrixWithScale
          (TTransform<double> *param_1,TTransform<double> *param_2,TTransform<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  TMatrix<double> *pTVar9;
  TMatrix<double> *pTVar10;
  undefined1 auStack_1a8 [32];
  VectorRegister4Double local_188;
  TMatrix<double> local_168;
  TMatrix<double> local_e8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  dVar3 = (param_2->Scale3D).XY.m128d_f64[0];
  dVar1 = (param_2->Scale3D).XY.m128d_f64[1];
  dVar4 = (param_2->Scale3D).ZW.m128d_f64[0];
  dVar2 = (param_2->Scale3D).ZW.m128d_f64[1];
  dVar5 = (param_3->Scale3D).XY.m128d_f64[0];
  dVar6 = (param_3->Scale3D).XY.m128d_f64[1];
  dVar7 = (param_3->Scale3D).ZW.m128d_f64[0];
  dVar8 = (param_3->Scale3D).ZW.m128d_f64[1];
  pTVar9 = ToMatrixWithScale(param_3,&local_168);
  pTVar10 = ToMatrixWithScale(param_2,&local_e8);
  dVar1 = dVar1 * dVar6;
  dVar2 = dVar2 * dVar8;
  local_188.XY.m128d_f64[1]._0_4_ = SUB84(dVar1,0);
  local_188.XY.m128d_f64[0] = dVar3 * dVar5;
  local_188.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_188.ZW.m128d_f64[1]._0_4_ = SUB84(dVar2,0);
  local_188.ZW.m128d_f64[0] = dVar4 * dVar7;
  local_188.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar2 >> 0x20);
  ConstructTransformFromMatrixWithDesiredScale(pTVar10,pTVar9,&local_188,param_1);
  return;
}

// NormalizeRotation @ 1417e77b0

void __thiscall UE::Math::TTransform<float>::NormalizeRotation(TTransform<float> *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar4 = (this->Rotation).m128_f32[0];
  fVar5 = (this->Rotation).m128_f32[1];
  fVar6 = (this->Rotation).m128_f32[2];
  fVar7 = (this->Rotation).m128_f32[3];
  fVar13 = fVar5 * fVar5 + fVar4 * fVar4;
  fVar14 = fVar4 * fVar4 + fVar5 * fVar5;
  fVar15 = fVar7 * fVar7 + fVar6 * fVar6;
  fVar16 = fVar6 * fVar6 + fVar7 * fVar7;
  auVar12._0_4_ = fVar15 + fVar13;
  auVar12._4_4_ = fVar16 + fVar14;
  auVar12._8_4_ = fVar13 + fVar15;
  auVar12._12_4_ = fVar14 + fVar16;
  uVar8 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar12._0_4_);
  uVar9 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar12._4_4_);
  uVar10 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar12._8_4_);
  uVar11 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <= auVar12._12_4_);
  auVar12 = sqrtps(auVar12,auVar12);
  auVar12 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar12);
  uVar1 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar2 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar3 = GlobalVectorConstants::Float0001.m128_u32[3];
  (this->Rotation).m128_u32[0] =
       (uint)(auVar12._0_4_ * fVar4) & uVar8 | ~uVar8 & GlobalVectorConstants::Float0001.m128_u32[0]
  ;
  (this->Rotation).m128_u32[1] = (uint)(auVar12._4_4_ * fVar5) & uVar9 | ~uVar9 & uVar1;
  (this->Rotation).m128_u32[2] = (uint)(auVar12._8_4_ * fVar6) & uVar10 | ~uVar10 & uVar2;
  (this->Rotation).m128_u32[3] = (uint)(auVar12._12_4_ * fVar7) & uVar11 | ~uVar11 & uVar3;
  return;
}

// NormalizeRotation @ 1417e7800

void __thiscall UE::Math::TTransform<double>::NormalizeRotation(TTransform<double> *this)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  dVar1 = (this->Rotation).XY.m128d_f64[0];
  dVar2 = (this->Rotation).XY.m128d_f64[1];
  dVar4 = (this->Rotation).ZW.m128d_f64[0];
  dVar5 = (this->Rotation).ZW.m128d_f64[1];
  dVar1 = dVar4 * dVar4 + dVar1 * dVar1;
  dVar2 = dVar5 * dVar5 + dVar2 * dVar2;
  auVar10._8_4_ = SUB84(dVar2,0);
  auVar10._0_8_ = dVar1;
  auVar10._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar11._0_8_ = auVar10._8_8_ + dVar1;
  auVar11._8_8_ = dVar1 + dVar2;
  auVar14 = sqrtpd(in_XMM2,auVar11);
  uVar6 = -(ulonglong)
           (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar11._0_8_);
  uVar8 = -(ulonglong)
           (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar11._8_8_);
  uVar7 = -(ulonglong)
           (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar11._0_8_);
  uVar9 = -(ulonglong)
           (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar11._8_8_);
  auVar12 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar14);
  auVar14 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar14);
  auVar13._0_8_ = uVar7 & (ulonglong)(auVar12._0_8_ * (this->Rotation).XY.m128d_f64[0]);
  uVar3 = uVar9 & (ulonglong)(auVar12._8_8_ * (this->Rotation).XY.m128d_f64[1]);
  auVar13._8_4_ = (undefined4)uVar3;
  auVar13._12_4_ = (undefined4)(uVar3 >> 0x20);
  auVar15._0_8_ = uVar6 & (ulonglong)(auVar14._0_8_ * (this->Rotation).ZW.m128d_f64[0]);
  uVar3 = uVar8 & (ulonglong)(auVar14._8_8_ * (this->Rotation).ZW.m128d_f64[1]);
  auVar15._8_4_ = (undefined4)uVar3;
  auVar15._12_4_ = (undefined4)(uVar3 >> 0x20);
  auVar14._4_4_ = ~(uint)(uVar7 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
  auVar14._0_4_ = ~(uint)uVar7 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
  auVar14._8_4_ = ~(uint)uVar9 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
  auVar14._12_4_ = ~(uint)(uVar9 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
  auVar12._4_4_ = ~(uint)(uVar6 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
  auVar12._0_4_ = ~(uint)uVar6 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
  auVar12._8_4_ = ~(uint)uVar8 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
  auVar12._12_4_ = ~(uint)(uVar8 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
  *(undefined1 (*) [16])(this->Rotation).XY.m128d_f64 = auVar13 | auVar14;
  *(undefined1 (*) [16])(this->Rotation).ZW.m128d_f64 = auVar15 | auVar12;
  return;
}

// Private_AnyHasNegativeScale @ 1417eb2c0

bool __cdecl
UE::Math::TTransform<float>::Private_AnyHasNegativeScale(__m128 *param_1,__m128 *param_2)

{
  undefined4 in_EAX;
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2 = minps((undefined1  [16])*param_1,(undefined1  [16])*param_2);
  auVar3._4_4_ = -(uint)(auVar2._4_4_ < GlobalVectorConstants::FloatZero.m128_f32[1]);
  auVar3._0_4_ = -(uint)(auVar2._0_4_ < GlobalVectorConstants::FloatZero.m128_f32[0]);
  auVar3._8_4_ = -(uint)(auVar2._8_4_ < GlobalVectorConstants::FloatZero.m128_f32[2]);
  auVar3._12_4_ = -(uint)(auVar2._12_4_ < GlobalVectorConstants::FloatZero.m128_f32[3]);
  iVar1 = movmskps(in_EAX,auVar3);
  return iVar1 != 0;
}

// Private_AnyHasNegativeScale @ 1417eb2e0

bool __cdecl
UE::Math::TTransform<double>::Private_AnyHasNegativeScale
          (VectorRegister4Double *param_1,VectorRegister4Double *param_2)

{
  undefined4 in_EAX;
  int iVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar3 = minpd(*(undefined1 (*) [16])(param_1->ZW).m128d_f64,
                 *(undefined1 (*) [16])(param_2->ZW).m128d_f64);
  auVar5 = minpd(*(undefined1 (*) [16])(param_1->XY).m128d_f64,
                 *(undefined1 (*) [16])(param_2->XY).m128d_f64);
  auVar4._8_8_ = -(ulonglong)(auVar3._8_8_ < (double)GlobalVectorConstants::FloatZero.m128_f32[3]);
  auVar4._0_8_ = -(ulonglong)(auVar3._0_8_ < (double)GlobalVectorConstants::FloatZero.m128_f32[2]);
  uVar2 = movmskpd((int)param_1,auVar4);
  auVar3._8_8_ = -(ulonglong)(auVar5._8_8_ < (double)GlobalVectorConstants::FloatZero.m128_f32[1]);
  auVar3._0_8_ = -(ulonglong)(auVar5._0_8_ < (double)GlobalVectorConstants::FloatZero.m128_f32[0]);
  iVar1 = movmskpd(in_EAX,auVar3);
  return (uVar2 & 0x3fffffff) != 0 || iVar1 != 0;
}

// Private_RotationEquals @ 1417eb330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Math::TTransform<float>::Private_RotationEquals
          (TTransform<float> *this,__m128 *param_1,float param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  int iVar3;
  
  auVar1._4_4_ = -(uint)(param_2 <
                        (float)((uint)((this->Rotation).m128_f32[1] - param_1->m128_f32[1]) &
                               _UNK_15061cc74));
  auVar1._0_4_ = -(uint)(param_2 <
                        (float)((uint)((this->Rotation).m128_f32[0] - param_1->m128_f32[0]) &
                               __xmm_7fffffff7fffffff7fffffff7fffffff));
  auVar1._8_4_ = -(uint)(param_2 <
                        (float)((uint)((this->Rotation).m128_f32[2] - param_1->m128_f32[2]) &
                               _UNK_15061cc78));
  auVar1._12_4_ =
       -(uint)(param_2 <
              (float)((uint)((this->Rotation).m128_f32[3] - param_1->m128_f32[3]) & _UNK_15061cc7c))
  ;
  iVar3 = movmskps(in_EAX,auVar1);
  if ((iVar3 != 0) &&
     (auVar2._4_4_ = -(uint)(param_2 <
                            (float)((uint)(param_1->m128_f32[1] + (this->Rotation).m128_f32[1]) &
                                   _UNK_15061cc74)),
     auVar2._0_4_ = -(uint)(param_2 <
                           (float)((uint)(param_1->m128_f32[0] + (this->Rotation).m128_f32[0]) &
                                  __xmm_7fffffff7fffffff7fffffff7fffffff)),
     auVar2._8_4_ = -(uint)(param_2 <
                           (float)((uint)(param_1->m128_f32[2] + (this->Rotation).m128_f32[2]) &
                                  _UNK_15061cc78)),
     auVar2._12_4_ =
          -(uint)(param_2 <
                 (float)((uint)(param_1->m128_f32[3] + (this->Rotation).m128_f32[3]) &
                        _UNK_15061cc7c)), iVar3 = movmskps(iVar3,auVar2), iVar3 != 0)) {
    return false;
  }
  return true;
}

// Private_RotationEquals @ 1417eb380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Math::TTransform<double>::Private_RotationEquals
          (TTransform<double> *this,VectorRegister4Double *param_1,double param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined4 in_EAX;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  dVar5 = (this->Rotation).ZW.m128d_f64[0];
  dVar6 = (this->Rotation).ZW.m128d_f64[1];
  dVar15 = (this->Rotation).XY.m128d_f64[0];
  dVar16 = (this->Rotation).XY.m128d_f64[1];
  dVar11 = dVar5 - (param_1->ZW).m128d_f64[0];
  dVar12 = dVar6 - (param_1->ZW).m128d_f64[1];
  dVar5 = dVar5 + (param_1->ZW).m128d_f64[0];
  dVar6 = dVar6 + (param_1->ZW).m128d_f64[1];
  dVar13 = dVar15 - (param_1->XY).m128d_f64[0];
  dVar14 = dVar16 - (param_1->XY).m128d_f64[1];
  dVar15 = dVar15 + (param_1->XY).m128d_f64[0];
  dVar16 = dVar16 + (param_1->XY).m128d_f64[1];
  lVar10 = -(ulonglong)
            (param_2 <
            (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar12,0) & _UNK_15061cc88));
  auVar1._8_4_ = (int)lVar10;
  auVar1._0_8_ = -(ulonglong)
                  (param_2 <
                  (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar1._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
  iVar8 = movmskpd((int)this,auVar1);
  lVar10 = -(ulonglong)
            (param_2 <
            (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar14,0) & _UNK_15061cc88));
  auVar2._8_4_ = (int)lVar10;
  auVar2._0_8_ = -(ulonglong)
                  (param_2 <
                  (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar2._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
  uVar7 = movmskpd(in_EAX,auVar2);
  uVar9 = iVar8 << 2 | uVar7;
  if (uVar9 != 0) {
    lVar10 = -(ulonglong)
              (param_2 <
              (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar6,0) & _UNK_15061cc88));
    auVar3._8_4_ = (int)lVar10;
    auVar3._0_8_ = -(ulonglong)
                    (param_2 <
                    (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
    ;
    auVar3._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
    uVar9 = movmskpd(uVar9,auVar3);
    lVar10 = -(ulonglong)
              (param_2 <
              (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar16,0) & _UNK_15061cc88));
    auVar4._8_4_ = (int)lVar10;
    auVar4._0_8_ = -(ulonglong)
                    (param_2 <
                    (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar4._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
    iVar8 = movmskpd(uVar7,auVar4);
    if ((uVar9 & 0x3fffffff) != 0 || iVar8 != 0) {
      return false;
    }
  }
  return true;
}

// Private_Scale3DEquals @ 1417eb420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Math::TTransform<float>::Private_Scale3DEquals
          (TTransform<float> *this,__m128 *param_1,float param_2)

{
  undefined1 auVar1 [16];
  undefined4 in_EAX;
  int iVar2;
  
  auVar1._4_4_ = -(uint)(param_2 <
                        (float)((uint)((this->Scale3D).m128_f32[1] - param_1->m128_f32[1]) &
                               _UNK_15061cc74));
  auVar1._0_4_ = -(uint)(param_2 <
                        (float)((uint)((this->Scale3D).m128_f32[0] - param_1->m128_f32[0]) &
                               __xmm_7fffffff7fffffff7fffffff7fffffff));
  auVar1._8_4_ = -(uint)(param_2 <
                        (float)((uint)((this->Scale3D).m128_f32[2] - param_1->m128_f32[2]) &
                               _UNK_15061cc78));
  auVar1._12_4_ =
       -(uint)(param_2 <
              (float)((uint)((this->Scale3D).m128_f32[3] - param_1->m128_f32[3]) & _UNK_15061cc7c));
  iVar2 = movmskps(in_EAX,auVar1);
  return iVar2 == 0;
}

// Private_Scale3DEquals @ 1417eb450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Math::TTransform<double>::Private_Scale3DEquals
          (TTransform<double> *this,VectorRegister4Double *param_1,double param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar6 = (this->Scale3D).ZW.m128d_f64[0] - (param_1->ZW).m128d_f64[0];
  dVar7 = (this->Scale3D).ZW.m128d_f64[1] - (param_1->ZW).m128d_f64[1];
  dVar8 = (this->Scale3D).XY.m128d_f64[0] - (param_1->XY).m128d_f64[0];
  dVar9 = (this->Scale3D).XY.m128d_f64[1] - (param_1->XY).m128d_f64[1];
  lVar5 = -(ulonglong)
           (param_2 <
           (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & _UNK_15061cc8c,
                            SUB84(dVar7,0) & _UNK_15061cc88));
  auVar1._8_4_ = (int)lVar5;
  auVar1._0_8_ = -(ulonglong)
                  (param_2 <
                  (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar1._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
  uVar4 = movmskpd((int)this,auVar1);
  lVar5 = -(ulonglong)
           (param_2 <
           (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & _UNK_15061cc8c,
                            SUB84(dVar9,0) & _UNK_15061cc88));
  auVar2._8_4_ = (int)lVar5;
  auVar2._0_8_ = -(ulonglong)
                  (param_2 <
                  (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar2._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
  iVar3 = movmskpd(in_EAX,auVar2);
  return (uVar4 & 0x3fffffff) == 0 && iVar3 == 0;
}

// Private_TranslationEquals @ 1417eb4a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Math::TTransform<float>::Private_TranslationEquals
          (TTransform<float> *this,__m128 *param_1,float param_2)

{
  undefined1 auVar1 [16];
  undefined4 in_EAX;
  int iVar2;
  
  auVar1._4_4_ = -(uint)(param_2 <
                        (float)((uint)((this->Translation).m128_f32[1] - param_1->m128_f32[1]) &
                               _UNK_15061cc74));
  auVar1._0_4_ = -(uint)(param_2 <
                        (float)((uint)((this->Translation).m128_f32[0] - param_1->m128_f32[0]) &
                               __xmm_7fffffff7fffffff7fffffff7fffffff));
  auVar1._8_4_ = -(uint)(param_2 <
                        (float)((uint)((this->Translation).m128_f32[2] - param_1->m128_f32[2]) &
                               _UNK_15061cc78));
  auVar1._12_4_ =
       -(uint)(param_2 <
              (float)((uint)((this->Translation).m128_f32[3] - param_1->m128_f32[3]) &
                     _UNK_15061cc7c));
  iVar2 = movmskps(in_EAX,auVar1);
  return iVar2 == 0;
}

// Private_TranslationEquals @ 1417eb4d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Math::TTransform<double>::Private_TranslationEquals
          (TTransform<double> *this,VectorRegister4Double *param_1,double param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar6 = (this->Translation).ZW.m128d_f64[0] - (param_1->ZW).m128d_f64[0];
  dVar7 = (this->Translation).ZW.m128d_f64[1] - (param_1->ZW).m128d_f64[1];
  dVar8 = (this->Translation).XY.m128d_f64[0] - (param_1->XY).m128d_f64[0];
  dVar9 = (this->Translation).XY.m128d_f64[1] - (param_1->XY).m128d_f64[1];
  lVar5 = -(ulonglong)
           (param_2 <
           (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & _UNK_15061cc8c,
                            SUB84(dVar7,0) & _UNK_15061cc88));
  auVar1._8_4_ = (int)lVar5;
  auVar1._0_8_ = -(ulonglong)
                  (param_2 <
                  (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar1._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
  uVar4 = movmskpd((int)this,auVar1);
  lVar5 = -(ulonglong)
           (param_2 <
           (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & _UNK_15061cc8c,
                            SUB84(dVar9,0) & _UNK_15061cc88));
  auVar2._8_4_ = (int)lVar5;
  auVar2._0_8_ = -(ulonglong)
                  (param_2 <
                  (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar2._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
  iVar3 = movmskpd(in_EAX,auVar2);
  return (uVar4 & 0x3fffffff) == 0 && iVar3 == 0;
}

// RemoveScaling @ 1417f5780

void __thiscall UE::Math::TTransform<float>::RemoveScaling(TTransform<float> *this,float param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  fVar4 = (this->Rotation).m128_f32[0];
  fVar5 = (this->Rotation).m128_f32[1];
  fVar6 = (this->Rotation).m128_f32[2];
  fVar7 = (this->Rotation).m128_f32[3];
  this->Scale3D = GlobalVectorConstants::Float1110;
  auVar12._0_4_ = fVar5 * fVar5 + fVar4 * fVar4;
  auVar12._4_4_ = fVar4 * fVar4 + fVar5 * fVar5;
  auVar12._8_4_ = fVar7 * fVar7 + fVar6 * fVar6;
  auVar12._12_4_ = fVar6 * fVar6 + fVar7 * fVar7;
  auVar13._4_4_ = auVar12._12_4_ + auVar12._4_4_;
  auVar13._0_4_ = auVar12._8_4_ + auVar12._0_4_;
  auVar13._8_4_ = auVar12._0_4_ + auVar12._8_4_;
  auVar13._12_4_ = auVar12._4_4_ + auVar12._12_4_;
  auVar13 = sqrtps(auVar12,auVar13);
  uVar8 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <=
                 auVar12._8_4_ + auVar12._0_4_);
  uVar9 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <=
                 auVar12._12_4_ + auVar12._4_4_);
  uVar10 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <=
                  auVar12._0_4_ + auVar12._8_4_);
  uVar11 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <=
                  auVar12._4_4_ + auVar12._12_4_);
  auVar13 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar13);
  uVar1 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar2 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar3 = GlobalVectorConstants::Float0001.m128_u32[3];
  (this->Rotation).m128_u32[0] =
       (uint)(auVar13._0_4_ * fVar4) & uVar8 | ~uVar8 & GlobalVectorConstants::Float0001.m128_u32[0]
  ;
  (this->Rotation).m128_u32[1] = (uint)(auVar13._4_4_ * fVar5) & uVar9 | ~uVar9 & uVar1;
  (this->Rotation).m128_u32[2] = (uint)(auVar13._8_4_ * fVar6) & uVar10 | ~uVar10 & uVar2;
  (this->Rotation).m128_u32[3] = (uint)(auVar13._12_4_ * fVar7) & uVar11 | ~uVar11 & uVar3;
  return;
}

// RemoveScaling @ 1417f57e0

void __thiscall UE::Math::TTransform<double>::RemoveScaling(TTransform<double> *this,double param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Scale3D).XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Scale3D).XY.m128d_f64[1] = (double)fVar5;
  (this->Scale3D).ZW.m128d_f64[0] = (double)fVar6;
  (this->Scale3D).ZW.m128d_f64[1] = (double)fVar7;
  dVar11 = (this->Rotation).XY.m128d_f64[0];
  dVar12 = (this->Rotation).XY.m128d_f64[1];
  dVar13 = (this->Rotation).ZW.m128d_f64[0];
  dVar14 = (this->Rotation).ZW.m128d_f64[1];
  dVar8 = dVar13 * dVar13 + dVar11 * dVar11;
  dVar9 = dVar14 * dVar14 + dVar12 * dVar12;
  auVar19._8_4_ = SUB84(dVar9,0);
  auVar19._0_8_ = dVar8;
  auVar19._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  auVar20._0_8_ = auVar19._8_8_ + dVar8;
  auVar20._8_8_ = dVar8 + dVar9;
  auVar23 = sqrtpd(in_XMM2,auVar20);
  uVar15 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar20._0_8_);
  uVar17 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar20._8_8_);
  uVar16 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar20._0_8_);
  uVar18 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar20._8_8_);
  auVar21 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar23);
  auVar23 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar23);
  auVar22._0_8_ = uVar16 & (ulonglong)(auVar21._0_8_ * dVar11);
  uVar10 = uVar18 & (ulonglong)(auVar21._8_8_ * dVar12);
  auVar22._8_4_ = (undefined4)uVar10;
  auVar22._12_4_ = (undefined4)(uVar10 >> 0x20);
  auVar24._0_8_ = uVar15 & (ulonglong)(auVar23._0_8_ * dVar13);
  uVar10 = uVar17 & (ulonglong)(auVar23._8_8_ * dVar14);
  auVar24._8_4_ = (undefined4)uVar10;
  auVar24._12_4_ = (undefined4)(uVar10 >> 0x20);
  auVar23._4_4_ = ~(uint)(uVar16 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
  auVar23._0_4_ = ~(uint)uVar16 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
  auVar23._8_4_ = ~(uint)uVar18 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
  auVar23._12_4_ = ~(uint)(uVar18 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_
  ;
  uVar1 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
  uVar2 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
  uVar3 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
  uVar4 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
  *(undefined1 (*) [16])(this->Rotation).XY.m128d_f64 = auVar22 | auVar23;
  auVar21._4_4_ = ~(uint)(uVar15 >> 0x20) & uVar2;
  auVar21._0_4_ = ~(uint)uVar15 & uVar1;
  auVar21._8_4_ = ~(uint)uVar17 & uVar3;
  auVar21._12_4_ = ~(uint)(uVar17 >> 0x20) & uVar4;
  *(undefined1 (*) [16])(this->Rotation).ZW.m128d_f64 = auVar24 | auVar21;
  return;
}

// RotationEquals @ 1417f7250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Math::TTransform<float>::RotationEquals
          (TTransform<float> *this,TTransform<float> *param_1,float param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  int iVar3;
  
  auVar1._4_4_ = -(uint)(param_2 <
                        (float)((uint)((this->Rotation).m128_f32[1] -
                                      (param_1->Rotation).m128_f32[1]) & _UNK_15061cc74));
  auVar1._0_4_ = -(uint)(param_2 <
                        (float)((uint)((this->Rotation).m128_f32[0] -
                                      (param_1->Rotation).m128_f32[0]) &
                               __xmm_7fffffff7fffffff7fffffff7fffffff));
  auVar1._8_4_ = -(uint)(param_2 <
                        (float)((uint)((this->Rotation).m128_f32[2] -
                                      (param_1->Rotation).m128_f32[2]) & _UNK_15061cc78));
  auVar1._12_4_ =
       -(uint)(param_2 <
              (float)((uint)((this->Rotation).m128_f32[3] - (param_1->Rotation).m128_f32[3]) &
                     _UNK_15061cc7c));
  iVar3 = movmskps(in_EAX,auVar1);
  if ((iVar3 != 0) &&
     (auVar2._4_4_ = -(uint)(param_2 <
                            (float)((uint)((this->Rotation).m128_f32[1] +
                                          (param_1->Rotation).m128_f32[1]) & _UNK_15061cc74)),
     auVar2._0_4_ = -(uint)(param_2 <
                           (float)((uint)((this->Rotation).m128_f32[0] +
                                         (param_1->Rotation).m128_f32[0]) &
                                  __xmm_7fffffff7fffffff7fffffff7fffffff)),
     auVar2._8_4_ = -(uint)(param_2 <
                           (float)((uint)((this->Rotation).m128_f32[2] +
                                         (param_1->Rotation).m128_f32[2]) & _UNK_15061cc78)),
     auVar2._12_4_ =
          -(uint)(param_2 <
                 (float)((uint)((this->Rotation).m128_f32[3] + (param_1->Rotation).m128_f32[3]) &
                        _UNK_15061cc7c)), iVar3 = movmskps(iVar3,auVar2), iVar3 != 0)) {
    return false;
  }
  return true;
}

// RotationEquals @ 1417f72a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Math::TTransform<double>::RotationEquals
          (TTransform<double> *this,TTransform<double> *param_1,double param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined4 in_EAX;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  dVar5 = (this->Rotation).ZW.m128d_f64[0];
  dVar6 = (this->Rotation).ZW.m128d_f64[1];
  dVar15 = (this->Rotation).XY.m128d_f64[0];
  dVar16 = (this->Rotation).XY.m128d_f64[1];
  dVar11 = dVar5 - (param_1->Rotation).ZW.m128d_f64[0];
  dVar12 = dVar6 - (param_1->Rotation).ZW.m128d_f64[1];
  dVar5 = dVar5 + (param_1->Rotation).ZW.m128d_f64[0];
  dVar6 = dVar6 + (param_1->Rotation).ZW.m128d_f64[1];
  dVar13 = dVar15 - (param_1->Rotation).XY.m128d_f64[0];
  dVar14 = dVar16 - (param_1->Rotation).XY.m128d_f64[1];
  dVar15 = dVar15 + (param_1->Rotation).XY.m128d_f64[0];
  dVar16 = dVar16 + (param_1->Rotation).XY.m128d_f64[1];
  lVar10 = -(ulonglong)
            (param_2 <
            (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar12,0) & _UNK_15061cc88));
  auVar1._8_4_ = (int)lVar10;
  auVar1._0_8_ = -(ulonglong)
                  (param_2 <
                  (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar1._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
  iVar8 = movmskpd((int)this,auVar1);
  lVar10 = -(ulonglong)
            (param_2 <
            (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar14,0) & _UNK_15061cc88));
  auVar2._8_4_ = (int)lVar10;
  auVar2._0_8_ = -(ulonglong)
                  (param_2 <
                  (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar2._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
  uVar7 = movmskpd(in_EAX,auVar2);
  uVar9 = iVar8 << 2 | uVar7;
  if (uVar9 != 0) {
    lVar10 = -(ulonglong)
              (param_2 <
              (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar6,0) & _UNK_15061cc88));
    auVar3._8_4_ = (int)lVar10;
    auVar3._0_8_ = -(ulonglong)
                    (param_2 <
                    (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
    ;
    auVar3._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
    uVar9 = movmskpd(uVar9,auVar3);
    lVar10 = -(ulonglong)
              (param_2 <
              (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar16,0) & _UNK_15061cc88));
    auVar4._8_4_ = (int)lVar10;
    auVar4._0_8_ = -(ulonglong)
                    (param_2 <
                    (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar4._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
    iVar8 = movmskpd(uVar7,auVar4);
    if ((uVar9 & 0x3fffffff) != 0 || iVar8 != 0) {
      return false;
    }
  }
  return true;
}

// Rotator @ 1417f7ad0

TRotator<float> * __thiscall
UE::Math::TTransform<float>::Rotator
          (TTransform<float> *this,TRotator<float> *__return_storage_ptr__)

{
  TQuat<float> local_18;
  
  local_18._0_8_ = (this->Rotation).m128_u64[0];
  local_18._8_8_ = (this->Rotation).m128_u64[1];
  TQuat<float>::Rotator(&local_18,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Rotator @ 1417f7b00

TRotator<double> * __thiscall
UE::Math::TTransform<double>::Rotator
          (TTransform<double> *this,TRotator<double> *__return_storage_ptr__)

{
  TQuat<double> local_28;
  
  local_28.X = (this->Rotation).XY.m128d_f64[0];
  local_28.Y = (this->Rotation).XY.m128d_f64[1];
  local_28.Z = (this->Rotation).ZW.m128d_f64[0];
  local_28.W = (this->Rotation).ZW.m128d_f64[1];
  TQuat<double>::Rotator(&local_28,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Scale3DEquals @ 1417f83a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Math::TTransform<float>::Scale3DEquals
          (TTransform<float> *this,TTransform<float> *param_1,float param_2)

{
  undefined1 auVar1 [16];
  undefined4 in_EAX;
  int iVar2;
  
  auVar1._4_4_ = -(uint)(param_2 <
                        (float)((uint)((this->Scale3D).m128_f32[1] - (param_1->Scale3D).m128_f32[1])
                               & _UNK_15061cc74));
  auVar1._0_4_ = -(uint)(param_2 <
                        (float)((uint)((this->Scale3D).m128_f32[0] - (param_1->Scale3D).m128_f32[0])
                               & __xmm_7fffffff7fffffff7fffffff7fffffff));
  auVar1._8_4_ = -(uint)(param_2 <
                        (float)((uint)((this->Scale3D).m128_f32[2] - (param_1->Scale3D).m128_f32[2])
                               & _UNK_15061cc78));
  auVar1._12_4_ =
       -(uint)(param_2 <
              (float)((uint)((this->Scale3D).m128_f32[3] - (param_1->Scale3D).m128_f32[3]) &
                     _UNK_15061cc7c));
  iVar2 = movmskps(in_EAX,auVar1);
  return iVar2 == 0;
}

// Scale3DEquals @ 1417f83d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Math::TTransform<double>::Scale3DEquals
          (TTransform<double> *this,TTransform<double> *param_1,double param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar6 = (this->Scale3D).ZW.m128d_f64[0] - (param_1->Scale3D).ZW.m128d_f64[0];
  dVar7 = (this->Scale3D).ZW.m128d_f64[1] - (param_1->Scale3D).ZW.m128d_f64[1];
  dVar8 = (this->Scale3D).XY.m128d_f64[0] - (param_1->Scale3D).XY.m128d_f64[0];
  dVar9 = (this->Scale3D).XY.m128d_f64[1] - (param_1->Scale3D).XY.m128d_f64[1];
  lVar5 = -(ulonglong)
           (param_2 <
           (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & _UNK_15061cc8c,
                            SUB84(dVar7,0) & _UNK_15061cc88));
  auVar1._8_4_ = (int)lVar5;
  auVar1._0_8_ = -(ulonglong)
                  (param_2 <
                  (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar1._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
  uVar4 = movmskpd((int)this,auVar1);
  lVar5 = -(ulonglong)
           (param_2 <
           (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & _UNK_15061cc8c,
                            SUB84(dVar9,0) & _UNK_15061cc88));
  auVar2._8_4_ = (int)lVar5;
  auVar2._0_8_ = -(ulonglong)
                  (param_2 <
                  (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar2._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
  iVar3 = movmskpd(in_EAX,auVar2);
  return (uVar4 & 0x3fffffff) == 0 && iVar3 == 0;
}

// ScaleTranslation @ 1417f84a0

void __thiscall
UE::Math::TTransform<float>::ScaleTranslation(TTransform<float> *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_1;
  fVar2 = (this->Translation).m128_f32[1];
  fVar3 = (this->Translation).m128_f32[2];
  fVar4 = (this->Translation).m128_f32[3];
  (this->Translation).m128_f32[0] = fVar1 * (this->Translation).m128_f32[0];
  (this->Translation).m128_f32[1] = fVar1 * fVar2;
  (this->Translation).m128_f32[2] = fVar1 * fVar3;
  (this->Translation).m128_f32[3] = fVar4 * 0.0;
  return;
}

// ScaleTranslation @ 1417f84c0

void __thiscall
UE::Math::TTransform<float>::ScaleTranslation(TTransform<float> *this,TVector<float> *param_1)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = (param_1->field0_0x0)._s_0.Z;
  uVar2 = *(undefined8 *)&param_1->field0_0x0;
  fVar3 = (this->Translation).m128_f32[1];
  fVar4 = (this->Translation).m128_f32[2];
  fVar5 = (this->Translation).m128_f32[3];
  (this->Translation).m128_f32[0] = (float)uVar2 * (this->Translation).m128_f32[0];
  (this->Translation).m128_f32[1] = (float)((ulonglong)uVar2 >> 0x20) * fVar3;
  (this->Translation).m128_f32[2] = fVar1 * fVar4;
  (this->Translation).m128_f32[3] = fVar5 * 0.0;
  return;
}

// ScaleTranslation @ 1417f84e0

void __thiscall
UE::Math::TTransform<double>::ScaleTranslation(TTransform<double> *this,double *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  
  dVar1 = *param_1;
  dVar5 = (this->Translation).ZW.m128d_f64[1] * 0.0;
  dVar3 = dVar1 * (this->Translation).XY.m128d_f64[1];
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = dVar1 * (this->Translation).XY.m128d_f64[0];
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Translation).XY.m128d_f64 = auVar2;
  auVar4._8_4_ = SUB84(dVar5,0);
  auVar4._0_8_ = dVar1 * (this->Translation).ZW.m128d_f64[0];
  auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])(this->Translation).ZW.m128d_f64 = auVar4;
  return;
}

// ScaleTranslation @ 1417f8510

void __thiscall
UE::Math::TTransform<double>::ScaleTranslation(TTransform<double> *this,TVector<double> *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar3 = (param_1->field0_0x0)._s_0.Y * (this->Translation).XY.m128d_f64[1];
  dVar4 = (this->Translation).ZW.m128d_f64[1];
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = (param_1->field0_0x0)._s_0.X * (this->Translation).XY.m128d_f64[0];
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Translation).XY.m128d_f64 = auVar2;
  (this->Translation).ZW.m128d_f64[0] = dVar1 * (this->Translation).ZW.m128d_f64[0];
  (this->Translation).ZW.m128d_f64[1] = dVar4 * 0.0;
  return;
}

// Serialize @ 1417f8ed0

bool __thiscall UE::Math::TTransform<float>::Serialize(TTransform<float> *this,FArchive *param_1)

{
  __m128 _Var1;
  __m128 _Var2;
  
  Math::operator<<(param_1,(TQuat<float> *)this);
  Math::operator<<(param_1,(TVector<float> *)&this->Translation);
  Math::operator<<(param_1,(TVector<float> *)&this->Scale3D);
  if ((param_1->field_0x28 & 1) != 0) {
    _Var1.m128_f32 = (float  [4])insertps(this->Translation,this->Translation,8);
    _Var2.m128_f32 = (float  [4])insertps(this->Scale3D,this->Scale3D,8);
    this->Translation = _Var1;
    this->Scale3D = _Var2;
  }
  return true;
}

// Serialize @ 1417f8f50

bool __thiscall UE::Math::TTransform<double>::Serialize(TTransform<double> *this,FArchive *param_1)

{
  double dVar1;
  double dVar2;
  
  Math::operator<<(param_1,(TQuat<double> *)this);
  Math::operator<<(param_1,(TVector<double> *)&this->Translation);
  Math::operator<<(param_1,(TVector<double> *)&this->Scale3D);
  if ((param_1->field_0x28 & 1) != 0) {
    dVar1 = (this->Translation).ZW.m128d_f64[0];
    dVar2 = (this->Translation).XY.m128d_f64[1];
    (this->Translation).XY.m128d_f64[0] = (this->Translation).XY.m128d_f64[0];
    (this->Translation).XY.m128d_f64[1] = dVar2;
    (this->Translation).ZW.m128d_f64[0] = dVar1;
    (this->Translation).ZW.m128d_f64[1] = 0.0;
    dVar1 = (this->Scale3D).ZW.m128d_f64[0];
    dVar2 = (this->Scale3D).XY.m128d_f64[1];
    (this->Scale3D).XY.m128d_f64[0] = (this->Scale3D).XY.m128d_f64[0];
    (this->Scale3D).XY.m128d_f64[1] = dVar2;
    (this->Scale3D).ZW.m128d_f64[0] = dVar1;
    (this->Scale3D).ZW.m128d_f64[1] = 0.0;
  }
  return true;
}

// SerializeFromMismatchedTag @ 1417fa9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Math::TTransform<float>::SerializeFromMismatchedTag
          (TTransform<float> *this,FName param_1,FArchive *param_2)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  bool bVar4;
  FNameEntryId FVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  FName FVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_b8 [32];
  uint local_98 [2];
  FNameEntryId local_90;
  uint uStack_8c;
  FNameEntryId local_88;
  uint uStack_84;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [24];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FVar5 = FNameEntryId::FromValidEName((EName)local_98);
  FVar6.Number = 0;
  FVar6.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar5.Value);
  if (param_1 != FVar6) {
    FVar5 = FNameEntryId::FromValidEName((EName)local_98);
    uStack_84 = 0;
    local_88.Value = *(uint *)CONCAT44(extraout_var_00,FVar5.Value);
    FVar5 = FNameEntryId::FromValidEName((EName)local_98);
    uStack_8c = 0;
    local_90.Value = *(uint *)CONCAT44(extraout_var_01,FVar5.Value);
    FVar5 = FNameEntryId::FromValidEName((EName)local_98);
    local_98[0] = *(uint *)CONCAT44(extraout_var_02,FVar5.Value);
    local_98[1] = 0;
    FVar2.Number = uStack_8c;
    FVar2.ComparisonIndex.Value = local_90.Value;
    if ((param_1 == FVar2) ||
       ((FVar1.Number = 0, FVar1.ComparisonIndex.Value = local_98[0], param_1 == FVar1 &&
        ((int)((ulonglong)*(undefined8 *)&param_2->field_0x40 >> 0x20) < 0x3ec)))) {
      bVar4 = Serialize(this,param_2);
      return bVar4;
    }
    FVar3.Number = uStack_84;
    FVar3.ComparisonIndex.Value = local_88.Value;
    if ((param_1 == FVar3) || (param_1 == FVar1)) {
      local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_78._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_78._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_68._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_68._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_68._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_58._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_58._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_58._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      uStack_40 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_58._16_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      uStack_3c = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_38._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_38._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_38._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      uStack_20 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_38._16_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      uStack_1c = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      Math::operator<<(param_2,(TQuat<double> *)local_78);
      Math::operator<<(param_2,(TVector<double> *)local_58);
      Math::operator<<(param_2,(TVector<double> *)local_38);
      if ((param_2->field_0x28 & 1) == 0) {
        uVar7 = uStack_20;
        uVar8 = uStack_1c;
        uVar9 = uStack_40;
        uVar10 = uStack_3c;
      }
      else {
        uVar7 = 0;
        uVar8 = 0;
        uVar9 = 0;
        uVar10 = 0;
      }
      (this->Rotation).m128_f32[0] = (float)(double)local_78._0_8_;
      (this->Rotation).m128_f32[1] = (float)(double)local_78._8_8_;
      (this->Rotation).m128_f32[2] = (float)(double)local_68._0_8_;
      (this->Rotation).m128_f32[3] = (float)(double)local_68._8_8_;
      (this->Translation).m128_f32[0] = (float)(double)local_58._0_8_;
      (this->Translation).m128_f32[1] = (float)(double)local_58._8_8_;
      (this->Translation).m128_f32[2] = (float)local_58._16_8_;
      (this->Translation).m128_f32[3] = (float)(double)CONCAT44(uVar10,uVar9);
      (this->Scale3D).m128_f32[0] = (float)(double)local_38._0_8_;
      (this->Scale3D).m128_f32[1] = (float)(double)local_38._8_8_;
      (this->Scale3D).m128_f32[2] = (float)local_38._16_8_;
      (this->Scale3D).m128_f32[3] = (float)(double)CONCAT44(uVar8,uVar7);
      return true;
    }
  }
  return false;
}

// SerializeFromMismatchedTag @ 1417fabb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Math::TTransform<double>::SerializeFromMismatchedTag
          (TTransform<double> *this,FName param_1,FArchive *param_2)

{
  undefined1 auVar1 [16];
  FName FVar2;
  FName FVar3;
  FName FVar4;
  bool bVar5;
  FNameEntryId FVar6;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  FName FVar7;
  undefined1 auStack_98 [32];
  uint local_78 [2];
  FNameEntryId local_70;
  uint uStack_6c;
  FNameEntryId local_68;
  uint uStack_64;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  __m128 local_48;
  __m128 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  FVar6 = FNameEntryId::FromValidEName((EName)local_78);
  FVar7.Number = 0;
  FVar7.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar6.Value);
  if (param_1 != FVar7) {
    FVar6 = FNameEntryId::FromValidEName((EName)local_78);
    uStack_64 = 0;
    local_68.Value = *(uint *)CONCAT44(extraout_var_00,FVar6.Value);
    FVar6 = FNameEntryId::FromValidEName((EName)local_78);
    uStack_6c = 0;
    local_70.Value = *(uint *)CONCAT44(extraout_var_01,FVar6.Value);
    FVar6 = FNameEntryId::FromValidEName((EName)local_78);
    local_78[0] = *(uint *)CONCAT44(extraout_var_02,FVar6.Value);
    local_78[1] = 0;
    FVar3.Number = uStack_6c;
    FVar3.ComparisonIndex.Value = local_70.Value;
    if ((param_1 == FVar3) ||
       (FVar2.Number = 0, FVar2.ComparisonIndex.Value = local_78[0], param_1 == FVar2)) {
      bVar5 = Serialize(this,param_2);
      return bVar5;
    }
    FVar4.Number = uStack_64;
    FVar4.ComparisonIndex.Value = local_68.Value;
    if (param_1 == FVar4) {
      _local_58 = GlobalVectorConstants::Float0001;
      local_38 = GlobalVectorConstants::Float1110;
      local_48 = GlobalVectorConstants::FloatZero;
      Math::operator<<(param_2,(TQuat<float> *)local_58);
      Math::operator<<(param_2,(TVector<float> *)&local_48);
      Math::operator<<(param_2,(TVector<float> *)&local_38);
      if ((param_2->field_0x28 & 1) != 0) {
        local_48.m128_f32 = (float  [4])insertps(local_48.m128_f32,local_48.m128_f32,8);
        local_38.m128_f32 = (float  [4])insertps(local_38.m128_f32,local_38.m128_f32,8);
      }
      (this->Rotation).XY.m128d_f64[0] = (double)(float)local_58._0_4_;
      (this->Rotation).XY.m128d_f64[1] = (double)(float)local_58._4_4_;
      (this->Rotation).ZW.m128d_f64[0] = (double)fStack_50;
      (this->Rotation).ZW.m128d_f64[1] = (double)fStack_4c;
      (this->Translation).XY.m128d_f64[0] = (double)local_48.m128_f32[0];
      (this->Translation).XY.m128d_f64[1] = (double)local_48.m128_f32[1];
      (this->Translation).ZW.m128d_f64[0] = (double)local_48.m128_f32[2];
      (this->Translation).ZW.m128d_f64[1] = (double)local_48.m128_f32[3];
      auVar1._8_4_ = SUB84((double)local_38.m128_f32[1],0);
      auVar1._0_8_ = (double)local_38.m128_f32[0];
      auVar1._12_4_ = (int)((ulonglong)(double)local_38.m128_f32[1] >> 0x20);
      *(undefined1 (*) [16])(this->Scale3D).XY.m128d_f64 = auVar1;
      (this->Scale3D).ZW.m128d_f64[0] = (double)local_38.m128_f32[2];
      (this->Scale3D).ZW.m128d_f64[1] = (double)local_38.m128_f32[3];
      return true;
    }
  }
  return false;
}

// SetComponents @ 1417fc5d0

void __thiscall
UE::Math::TTransform<float>::SetComponents
          (TTransform<float> *this,TQuat<float> *param_1,TVector<float> *param_2,
          TVector<float> *param_3)

{
  __m128 _Var1;
  __m128 _Var2;
  ulong64 uVar3;
  
  uVar3 = *(ulong64 *)&param_1->Z;
  (this->Rotation).m128_u64[0] = *(ulong64 *)param_1;
  (this->Rotation).m128_u64[1] = uVar3;
  _Var1.m128_f32[3] = 0.0;
  _Var1._0_12_ = (undefined1  [12])param_2->field0_0x0;
  this->Translation = _Var1;
  _Var2.m128_f32[3] = 0.0;
  _Var2._0_12_ = (undefined1  [12])param_3->field0_0x0;
  this->Scale3D = _Var2;
  return;
}

// SetComponents @ 1417fc610

void __thiscall
UE::Math::TTransform<double>::SetComponents
          (TTransform<double> *this,TQuat<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = param_1->Y;
  dVar2 = param_1->Z;
  dVar3 = param_1->W;
  (this->Rotation).XY.m128d_f64[0] = param_1->X;
  (this->Rotation).XY.m128d_f64[1] = dVar1;
  (this->Rotation).ZW.m128d_f64[0] = dVar2;
  (this->Rotation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  (this->Translation).XY.m128d_f64[0] = (param_2->field0_0x0)._s_0.X;
  (this->Translation).XY.m128d_f64[1] = dVar2;
  (this->Translation).ZW.m128d_f64[0] = dVar1;
  (this->Translation).ZW.m128d_f64[1] = 0.0;
  dVar2 = (param_3->field0_0x0)._s_0.Y;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  (this->Scale3D).XY.m128d_f64[0] = (param_3->field0_0x0)._s_0.X;
  (this->Scale3D).XY.m128d_f64[1] = dVar2;
  (this->Scale3D).ZW.m128d_f64[0] = dVar1;
  (this->Scale3D).ZW.m128d_f64[1] = 0.0;
  return;
}

// SetFromMatrix @ 1417fcdd0

void __thiscall
UE::Math::TTransform<float>::SetFromMatrix(TTransform<float> *this,TMatrix<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  __m128 _Var11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  TMatrix<float> local_108;
  TQuat<float> local_c8;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  local_108.M[1][0] = param_1->M[1][0];
  local_108.M[1][1] = param_1->M[1][1];
  local_108.M[1][2] = param_1->M[1][2];
  local_108.M[1][3] = param_1->M[1][3];
  local_108.M[2][0] = param_1->M[2][0];
  local_108.M[2][1] = param_1->M[2][1];
  local_108.M[2][2] = param_1->M[2][2];
  local_108.M[2][3] = param_1->M[2][3];
  local_108.M[3]._0_8_ = *(undefined8 *)param_1->M[3];
  local_108.M[3]._8_8_ = *(undefined8 *)(param_1->M[3] + 2);
  local_108.M[0][0] = param_1->M[0][0];
  local_108.M[0][1] = param_1->M[0][1];
  fStack_b4 = param_1->M[0][2];
  local_108.M[0][3] = param_1->M[0][3];
  local_c8.X = local_108.M[0][0] * local_108.M[0][0] + local_108.M[0][1] * local_108.M[0][1] +
               fStack_b4 * fStack_b4;
  local_c8.Y = local_108.M[1][0] * local_108.M[1][0] + local_108.M[1][1] * local_108.M[1][1] +
               local_108.M[1][2] * local_108.M[1][2];
  fVar20 = local_108.M[2][0] * local_108.M[2][0] + local_108.M[2][1] * local_108.M[2][1] +
           local_108.M[2][2] * local_108.M[2][2];
  if (local_c8.X <= 0.0) {
    local_c8.X = 0.0;
    local_b8 = fStack_b4;
  }
  else {
    local_c8.X = SQRT(local_c8.X);
    fVar16 = __real_3f800000 / local_c8.X;
    local_108.M[0][0] = local_108.M[0][0] * fVar16;
    local_108.M[0][1] = local_108.M[0][1] * fVar16;
    local_b8 = fStack_b4 * fVar16;
  }
  if (local_c8.Y <= 0.0) {
    local_c8.Y = 0.0;
  }
  else {
    local_c8.Y = SQRT(local_c8.Y);
    fVar16 = __real_3f800000 / local_c8.Y;
    local_108.M[1][0] = local_108.M[1][0] * fVar16;
    local_108.M[1][1] = local_108.M[1][1] * fVar16;
    local_108.M[1][2] = local_108.M[1][2] * fVar16;
  }
  local_c8.Z = 0.0;
  if (0.0 < fVar20) {
    local_c8.Z = SQRT(fVar20);
    fVar20 = __real_3f800000 / local_c8.Z;
    local_108.M[2][0] = local_108.M[2][0] * fVar20;
    local_108.M[2][1] = local_108.M[2][1] * fVar20;
    local_108.M[2][2] = local_108.M[2][2] * fVar20;
  }
  local_c8.W = 0.0;
  (this->Scale3D).m128_f32[0] = local_c8.X;
  (this->Scale3D).m128_f32[1] = local_c8.Y;
  (this->Scale3D).m128_f32[2] = local_c8.Z;
  (this->Scale3D).m128_f32[3] = 0.0;
  fVar20 = param_1->M[0][2];
  fVar16 = param_1->M[1][3];
  fVar18 = param_1->M[1][2];
  fVar19 = param_1->M[2][3];
  fVar1 = param_1->M[2][2];
  fVar2 = param_1->M[3][3];
  fVar3 = param_1->M[3][2];
  fVar4 = param_1->M[3][1];
  fVar21 = param_1->M[0][3];
  fVar5 = param_1->M[2][1];
  fVar24 = fVar20 * fVar16 - fVar21 * fVar18;
  fVar22 = fVar19 * fVar20 - fVar1 * fVar21;
  fVar6 = param_1->M[1][1];
  fVar23 = fVar19 * fVar18 - fVar1 * fVar16;
  fVar7 = param_1->M[0][1];
  fVar21 = fVar2 * fVar20 - fVar3 * fVar21;
  fVar20 = fVar2 * fVar1 - fVar3 * fVar19;
  fVar16 = fVar2 * fVar18 - fVar3 * fVar16;
  local_108.M[0][2] = local_b8;
  if (((((fVar20 * fVar6 - fVar16 * fVar5) + fVar23 * fVar4) * param_1->M[0][0] -
       ((fVar20 * fVar7 - fVar21 * fVar5) + fVar22 * fVar4) * param_1->M[1][0]) +
      ((fVar16 * fVar7 - fVar21 * fVar6) + fVar24 * fVar4) * param_1->M[2][0]) -
      ((fVar23 * fVar7 - fVar22 * fVar6) + fVar24 * fVar5) * param_1->M[3][0] < 0.0) {
    fVar20 = GlobalVectorConstants::FloatMinus1_111.m128_f32[1];
    fVar16 = GlobalVectorConstants::FloatMinus1_111.m128_f32[2];
    fVar18 = GlobalVectorConstants::FloatMinus1_111.m128_f32[3];
    (this->Scale3D).m128_f32[0] = local_c8.X * GlobalVectorConstants::FloatMinus1_111.m128_f32[0];
    (this->Scale3D).m128_f32[1] = local_c8.Y * fVar20;
    (this->Scale3D).m128_f32[2] = local_c8.Z * fVar16;
    (this->Scale3D).m128_f32[3] = fVar18 * 0.0;
    local_108.M[0][0] = (float)((uint)local_108.M[0][0] ^ __xmm_80000000800000008000000080000000);
    local_108.M[0][1] = (float)((uint)local_108.M[0][1] ^ __xmm_80000000800000008000000080000000);
    local_108.M[0][2] = (float)((uint)local_b8 ^ __xmm_80000000800000008000000080000000);
  }
  fStack_b0 = fStack_b4;
  fStack_ac = fStack_b4;
  TQuat<float>::TQuat<float>(&local_c8,&local_108);
  (this->Rotation).m128_f32[0] = local_c8.X;
  (this->Rotation).m128_f32[1] = local_c8.Y;
  (this->Rotation).m128_f32[2] = local_c8.Z;
  (this->Rotation).m128_f32[3] = local_c8.W;
  fVar20 = local_c8.Y * local_c8.Y + local_c8.X * local_c8.X;
  fVar16 = local_c8.X * local_c8.X + local_c8.Y * local_c8.Y;
  fVar18 = local_c8.W * local_c8.W + local_c8.Z * local_c8.Z;
  fVar19 = local_c8.Z * local_c8.Z + local_c8.W * local_c8.W;
  _Var11.m128_f32[3] = 0.0;
  _Var11._0_12_ = *(undefined1 (*) [12])param_1->M[3];
  this->Translation = _Var11;
  auVar17._0_4_ = fVar18 + fVar20;
  auVar17._4_4_ = fVar19 + fVar16;
  auVar17._8_4_ = fVar20 + fVar18;
  auVar17._12_4_ = fVar16 + fVar19;
  uVar12 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar17._0_4_);
  uVar13 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar17._4_4_);
  uVar14 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar17._8_4_);
  uVar15 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <= auVar17._12_4_);
  auVar17 = sqrtps(auVar17,auVar17);
  auVar17 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar17);
  uVar8 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar9 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar10 = GlobalVectorConstants::Float0001.m128_u32[3];
  (this->Rotation).m128_u32[0] =
       (uint)(auVar17._0_4_ * local_c8.X) & uVar12 |
       ~uVar12 & GlobalVectorConstants::Float0001.m128_u32[0];
  (this->Rotation).m128_u32[1] = (uint)(auVar17._4_4_ * local_c8.Y) & uVar13 | ~uVar13 & uVar8;
  (this->Rotation).m128_u32[2] = (uint)(auVar17._8_4_ * local_c8.Z) & uVar14 | ~uVar14 & uVar9;
  (this->Rotation).m128_u32[3] = (uint)(auVar17._12_4_ * local_c8.W) & uVar15 | ~uVar15 & uVar10;
  return;
}

// SetFromMatrix @ 1417fd200

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Math::TTransform<double>::SetFromMatrix(TTransform<double> *this,TMatrix<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double local_178;
  double dStack_170;
  double local_168;
  TMatrix<double> local_158;
  TQuat<double> local_d8 [6];
  
  local_158.M[0][0] = param_1->M[0][0];
  local_158.M[0][1] = param_1->M[0][1];
  local_158.M[1][0] = param_1->M[1][0];
  local_158.M[1][1] = param_1->M[1][1];
  local_158.M[2][0] = param_1->M[2][0];
  local_158.M[2][1] = param_1->M[2][1];
  local_158.M[3][0] = param_1->M[3][0];
  local_158.M[3][1] = param_1->M[3][1];
  local_158.M[3][2] = param_1->M[3][2];
  local_158.M[3][3] = param_1->M[3][3];
  local_158.M[0][2] = param_1->M[0][2];
  local_158.M[0][3] = param_1->M[0][3];
  local_158.M[1][2] = param_1->M[1][2];
  local_158.M[1][3] = param_1->M[1][3];
  local_158.M[2][2] = param_1->M[2][2];
  local_158.M[2][3] = param_1->M[2][3];
  local_178 = local_158.M[0][0] * local_158.M[0][0] + local_158.M[0][1] * local_158.M[0][1] +
              local_158.M[0][2] * local_158.M[0][2];
  dStack_170 = local_158.M[1][0] * local_158.M[1][0] + local_158.M[1][1] * local_158.M[1][1] +
               local_158.M[1][2] * local_158.M[1][2];
  local_168 = local_158.M[2][0] * local_158.M[2][0] + local_158.M[2][1] * local_158.M[2][1] +
              local_158.M[2][2] * local_158.M[2][2];
  if (local_178 <= 0.0) {
    local_178 = 0.0;
  }
  else {
    local_178 = SQRT(local_178);
    dVar32 = __real_3ff0000000000000 / local_178;
    local_158.M[0][0] = local_158.M[0][0] * dVar32;
    local_158.M[0][1] = local_158.M[0][1] * dVar32;
    local_158.M[0][2] = local_158.M[0][2] * dVar32;
  }
  if (dStack_170 <= 0.0) {
    dStack_170 = 0.0;
  }
  else {
    dStack_170 = SQRT(dStack_170);
    dVar32 = __real_3ff0000000000000 / dStack_170;
    local_158.M[1][0] = local_158.M[1][0] * dVar32;
    local_158.M[1][1] = local_158.M[1][1] * dVar32;
    local_158.M[1][2] = local_158.M[1][2] * dVar32;
  }
  if (local_168 <= 0.0) {
    local_168 = 0.0;
  }
  else {
    local_168 = SQRT(local_168);
    dVar32 = __real_3ff0000000000000 / local_168;
    local_158.M[2][0] = local_158.M[2][0] * dVar32;
    local_158.M[2][1] = local_158.M[2][1] * dVar32;
    local_158.M[2][2] = local_158.M[2][2] * dVar32;
  }
  (this->Scale3D).XY.m128d_f64[0] = local_178;
  (this->Scale3D).XY.m128d_f64[1] = dStack_170;
  (this->Scale3D).ZW.m128d_f64[0] = local_168;
  (this->Scale3D).ZW.m128d_f64[1] = 0.0;
  dVar32 = param_1->M[0][2];
  dVar1 = param_1->M[0][3];
  dVar2 = param_1->M[1][2];
  dVar3 = param_1->M[2][3];
  dVar4 = param_1->M[2][2];
  dVar5 = param_1->M[3][3];
  dVar6 = param_1->M[3][2];
  dVar7 = param_1->M[1][3];
  dVar8 = param_1->M[2][1];
  dVar9 = param_1->M[3][1];
  auVar30._8_8_ = 0;
  auVar30._0_8_ = dVar9;
  dVar22 = dVar32 * dVar7 - dVar1 * dVar2;
  dVar20 = dVar3 * dVar32 - dVar4 * dVar1;
  dVar10 = param_1->M[1][1];
  dVar21 = dVar3 * dVar2 - dVar4 * dVar7;
  dVar11 = param_1->M[0][1];
  dVar1 = dVar5 * dVar32 - dVar6 * dVar1;
  dVar32 = dVar5 * dVar4 - dVar6 * dVar3;
  dVar2 = dVar5 * dVar2 - dVar6 * dVar7;
  if (((((dVar32 * dVar10 - dVar2 * dVar8) + dVar21 * dVar9) * param_1->M[0][0] -
       ((dVar32 * dVar11 - dVar1 * dVar8) + dVar20 * dVar9) * param_1->M[1][0]) +
      ((dVar2 * dVar11 - dVar1 * dVar10) + dVar22 * dVar9) * param_1->M[2][0]) -
      ((dVar21 * dVar11 - dVar20 * dVar10) + dVar22 * dVar8) * param_1->M[3][0] < 0.0) {
    fVar16 = GlobalVectorConstants::FloatMinus1_111.m128_f32[1];
    fVar17 = GlobalVectorConstants::FloatMinus1_111.m128_f32[2];
    fVar18 = GlobalVectorConstants::FloatMinus1_111.m128_f32[3];
    dVar32 = (this->Scale3D).ZW.m128d_f64[0];
    dVar1 = (this->Scale3D).ZW.m128d_f64[1];
    dVar2 = (this->Scale3D).XY.m128d_f64[1];
    (this->Scale3D).XY.m128d_f64[0] =
         (double)GlobalVectorConstants::FloatMinus1_111.m128_f32[0] *
         (this->Scale3D).XY.m128d_f64[0];
    (this->Scale3D).XY.m128d_f64[1] = (double)fVar16 * dVar2;
    (this->Scale3D).ZW.m128d_f64[0] = (double)fVar17 * dVar32;
    (this->Scale3D).ZW.m128d_f64[1] = (double)fVar18 * dVar1;
    local_158.M[0][0] =
         (double)CONCAT44(local_158.M[0][0]._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_,
                          local_158.M[0][0]._0_4_ ^ (uint)__xmm_80000000000000008000000000000000);
    local_158.M[0][1] =
         (double)CONCAT44(local_158.M[0][1]._4_4_ ^ __xmm_80000000000000008000000000000000._12_4_,
                          local_158.M[0][1]._0_4_ ^ __xmm_80000000000000008000000000000000._8_4_);
    local_158.M[0][2] =
         (double)CONCAT44((uint)((ulonglong)local_158.M[0][2] >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(local_158.M[0][2],0) ^ (uint)__xmm_80000000000000008000000000000000)
    ;
    auVar30 = ___xmm_80000000000000008000000000000000;
  }
  TQuat<double>::TQuat<double>(local_d8,&local_158);
  (this->Rotation).XY.m128d_f64[0] = local_d8[0].X;
  (this->Rotation).XY.m128d_f64[1] = local_d8[0].Y;
  (this->Rotation).ZW.m128d_f64[0] = local_d8[0].Z;
  (this->Rotation).ZW.m128d_f64[1] = local_d8[0].W;
  dVar1 = param_1->M[3][1];
  dVar32 = param_1->M[3][2];
  (this->Translation).XY.m128d_f64[0] = param_1->M[3][0];
  (this->Translation).XY.m128d_f64[1] = dVar1;
  (this->Translation).ZW.m128d_f64[0] = dVar32;
  (this->Translation).ZW.m128d_f64[1] = 0.0;
  dVar2 = (this->Rotation).XY.m128d_f64[0];
  dVar3 = (this->Rotation).XY.m128d_f64[1];
  dVar4 = (this->Rotation).ZW.m128d_f64[0];
  dVar5 = (this->Rotation).ZW.m128d_f64[1];
  dVar32 = dVar4 * dVar4 + dVar2 * dVar2;
  dVar1 = dVar5 * dVar5 + dVar3 * dVar3;
  auVar28._8_4_ = SUB84(dVar1,0);
  auVar28._0_8_ = dVar32;
  auVar28._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  auVar29._0_8_ = auVar28._8_8_ + dVar32;
  auVar29._8_8_ = dVar32 + dVar1;
  auVar33 = sqrtpd(auVar30,auVar29);
  uVar24 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar29._0_8_);
  uVar26 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar29._8_8_);
  uVar25 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar29._0_8_);
  uVar27 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar29._8_8_);
  auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar33);
  auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar33);
  auVar31._0_8_ = uVar25 & (ulonglong)(auVar30._0_8_ * dVar2);
  uVar23 = uVar27 & (ulonglong)(auVar30._8_8_ * dVar3);
  auVar31._8_4_ = (undefined4)uVar23;
  auVar31._12_4_ = (undefined4)(uVar23 >> 0x20);
  auVar34._0_8_ = uVar24 & (ulonglong)(auVar33._0_8_ * dVar4);
  uVar23 = uVar26 & (ulonglong)(auVar33._8_8_ * dVar5);
  auVar34._8_4_ = (undefined4)uVar23;
  auVar34._12_4_ = (undefined4)(uVar23 >> 0x20);
  auVar19._4_4_ = ~(uint)(uVar25 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
  auVar19._0_4_ = ~(uint)uVar25 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
  auVar19._8_4_ = ~(uint)uVar27 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
  auVar19._12_4_ = ~(uint)(uVar27 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_
  ;
  uVar12 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
  uVar13 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
  uVar14 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
  uVar15 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
  *(undefined1 (*) [16])(this->Rotation).XY.m128d_f64 = auVar31 | auVar19;
  auVar33._4_4_ = ~(uint)(uVar24 >> 0x20) & uVar13;
  auVar33._0_4_ = ~(uint)uVar24 & uVar12;
  auVar33._8_4_ = ~(uint)uVar26 & uVar14;
  auVar33._12_4_ = ~(uint)(uVar26 >> 0x20) & uVar15;
  *(undefined1 (*) [16])(this->Rotation).ZW.m128d_f64 = auVar34 | auVar33;
  return;
}

// SetIdentity @ 1417fd750

void __thiscall UE::Math::TTransform<float>::SetIdentity(TTransform<float> *this)

{
  this->Rotation = GlobalVectorConstants::Float0001;
  this->Translation = GlobalVectorConstants::FloatZero;
  this->Scale3D = GlobalVectorConstants::Float1110;
  return;
}

// SetIdentity @ 1417fd780

void __thiscall UE::Math::TTransform<double>::SetIdentity(TTransform<double> *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->Rotation).XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Rotation).XY.m128d_f64[1] = (double)fVar1;
  (this->Rotation).ZW.m128d_f64[0] = (double)fVar2;
  (this->Rotation).ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Translation).XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Translation).XY.m128d_f64[1] = (double)fVar1;
  (this->Translation).ZW.m128d_f64[0] = (double)fVar2;
  (this->Translation).ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Scale3D).XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Scale3D).XY.m128d_f64[1] = (double)fVar1;
  (this->Scale3D).ZW.m128d_f64[0] = (double)fVar2;
  (this->Scale3D).ZW.m128d_f64[1] = (double)fVar3;
  return;
}

// SetIdentityZeroScale @ 1417fd7d0

void __thiscall UE::Math::TTransform<float>::SetIdentityZeroScale(TTransform<float> *this)

{
  this->Rotation = GlobalVectorConstants::Float0001;
  this->Translation = GlobalVectorConstants::FloatZero;
  this->Scale3D = GlobalVectorConstants::FloatZero;
  return;
}

// SetIdentityZeroScale @ 1417fd800

void __thiscall UE::Math::TTransform<double>::SetIdentityZeroScale(TTransform<double> *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->Rotation).XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Rotation).XY.m128d_f64[1] = (double)fVar1;
  (this->Rotation).ZW.m128d_f64[0] = (double)fVar2;
  (this->Rotation).ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Translation).XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Translation).XY.m128d_f64[1] = (double)fVar1;
  (this->Translation).ZW.m128d_f64[0] = (double)fVar2;
  (this->Translation).ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Scale3D).XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Scale3D).XY.m128d_f64[1] = (double)fVar1;
  (this->Scale3D).ZW.m128d_f64[0] = (double)fVar2;
  (this->Scale3D).ZW.m128d_f64[1] = (double)fVar3;
  return;
}

// SetLocation @ 1417fd850

void __thiscall
UE::Math::TTransform<float>::SetLocation(TTransform<float> *this,TVector<float> *param_1)

{
  __m128 _Var1;
  
  _Var1.m128_f32[3] = 0.0;
  _Var1._0_12_ = (undefined1  [12])param_1->field0_0x0;
  this->Translation = _Var1;
  return;
}

// SetLocation @ 1417fd870

void __thiscall
UE::Math::TTransform<double>::SetLocation(TTransform<double> *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (this->Translation).XY.m128d_f64[0] = (param_1->field0_0x0)._s_0.X;
  (this->Translation).XY.m128d_f64[1] = dVar2;
  (this->Translation).ZW.m128d_f64[0] = dVar1;
  (this->Translation).ZW.m128d_f64[1] = 0.0;
  return;
}

// SetRotation @ 1417fdb90

void __thiscall
UE::Math::TTransform<float>::SetRotation(TTransform<float> *this,TQuat<float> *param_1)

{
  ulong64 uVar1;
  
  uVar1 = *(ulong64 *)&param_1->Z;
  (this->Rotation).m128_u64[0] = *(ulong64 *)param_1;
  (this->Rotation).m128_u64[1] = uVar1;
  return;
}

// SetRotation @ 1417fdba0

void __thiscall
UE::Math::TTransform<double>::SetRotation(TTransform<double> *this,TQuat<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = param_1->Y;
  dVar2 = param_1->Z;
  dVar3 = param_1->W;
  (this->Rotation).XY.m128d_f64[0] = param_1->X;
  (this->Rotation).XY.m128d_f64[1] = dVar1;
  (this->Rotation).ZW.m128d_f64[0] = dVar2;
  (this->Rotation).ZW.m128d_f64[1] = dVar3;
  return;
}

// SetRotationRegister @ 1417fdbc0

void __thiscall
UE::Math::TTransform<float>::SetRotationRegister(TTransform<float> *this,__m128 *param_1)

{
  ulong64 uVar1;
  
  uVar1 = param_1->m128_u64[1];
  (this->Rotation).m128_u64[0] = param_1->m128_u64[0];
  (this->Rotation).m128_u64[1] = uVar1;
  return;
}

// SetRotationRegister @ 1417fdbd0

void __thiscall
UE::Math::TTransform<double>::SetRotationRegister
          (TTransform<double> *this,VectorRegister4Double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (param_1->XY).m128d_f64[1];
  dVar2 = (param_1->ZW).m128d_f64[0];
  dVar3 = (param_1->ZW).m128d_f64[1];
  (this->Rotation).XY.m128d_f64[0] = (param_1->XY).m128d_f64[0];
  (this->Rotation).XY.m128d_f64[1] = dVar1;
  (this->Rotation).ZW.m128d_f64[0] = dVar2;
  (this->Rotation).ZW.m128d_f64[1] = dVar3;
  return;
}

// SetScale3D @ 1417fdbf0

void __thiscall
UE::Math::TTransform<float>::SetScale3D(TTransform<float> *this,TVector<float> *param_1)

{
  __m128 _Var1;
  
  _Var1.m128_f32[3] = 0.0;
  _Var1._0_12_ = (undefined1  [12])param_1->field0_0x0;
  this->Scale3D = _Var1;
  return;
}

// SetScale3D @ 1417fdc10

void __thiscall
UE::Math::TTransform<double>::SetScale3D(TTransform<double> *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (this->Scale3D).XY.m128d_f64[0] = (param_1->field0_0x0)._s_0.X;
  (this->Scale3D).XY.m128d_f64[1] = dVar2;
  (this->Scale3D).ZW.m128d_f64[0] = dVar1;
  (this->Scale3D).ZW.m128d_f64[1] = 0.0;
  return;
}

// SetToRelativeTransform @ 1417fdda0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Math::TTransform<float>::SetToRelativeTransform
          (TTransform<float> *this,TTransform<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  auVar6 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,
                 (undefined1  [16])param_1->Scale3D);
  fVar7 = (this->Translation).m128_f32[0];
  fVar8 = (this->Translation).m128_f32[1];
  fVar9 = (this->Translation).m128_f32[2];
  fVar10 = (this->Translation).m128_f32[3];
  auVar15._0_4_ =
       ~-(uint)((float)(__xmm_7fffffff7fffffff7fffffff7fffffff & (param_1->Scale3D).m128_u32[0]) <=
               ___xmm_322bcc77322bcc77322bcc77322bcc77) & auVar6._0_4_;
  auVar15._4_4_ =
       ~-(uint)((float)(_UNK_15061cc74 & (param_1->Scale3D).m128_u32[1]) <= _UNK_1506895d4) &
       auVar6._4_4_;
  auVar15._8_4_ =
       ~-(uint)((float)(_UNK_15061cc78 & (param_1->Scale3D).m128_u32[2]) <= _UNK_1506895d8) &
       auVar6._8_4_;
  auVar15._12_4_ =
       ~-(uint)((float)(_UNK_15061cc7c & (param_1->Scale3D).m128_u32[3]) <= _UNK_1506895dc) &
       auVar6._12_4_;
  auVar15 = insertps(auVar15,auVar15,8);
  fVar11 = (this->Scale3D).m128_f32[1];
  fVar12 = (this->Scale3D).m128_f32[2];
  fVar13 = (this->Scale3D).m128_f32[3];
  (this->Scale3D).m128_f32[0] = auVar15._0_4_ * (this->Scale3D).m128_f32[0];
  (this->Scale3D).m128_f32[1] = auVar15._4_4_ * fVar11;
  (this->Scale3D).m128_f32[2] = auVar15._8_4_ * fVar12;
  (this->Scale3D).m128_f32[3] = auVar15._12_4_ * fVar13;
  auVar6._0_4_ = fVar7 - (param_1->Translation).m128_f32[0];
  auVar6._4_4_ = fVar8 - (param_1->Translation).m128_f32[1];
  auVar6._8_4_ = fVar9 - (param_1->Translation).m128_f32[2];
  auVar6._12_4_ = fVar10 - (param_1->Translation).m128_f32[3];
  fVar16 = (param_1->Rotation).m128_f32[0] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
  fVar17 = (param_1->Rotation).m128_f32[1] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
  fVar18 = (param_1->Rotation).m128_f32[2] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
  fVar19 = (param_1->Rotation).m128_f32[3] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
  auVar6 = insertps(auVar6,auVar6,8);
  fVar11 = auVar6._0_4_;
  fVar12 = auVar6._4_4_;
  fVar13 = auVar6._8_4_;
  fVar14 = auVar6._12_4_;
  fVar7 = fVar12 * fVar16 - fVar17 * fVar11;
  fVar8 = fVar13 * fVar17 - fVar18 * fVar12;
  fVar9 = fVar11 * fVar18 - fVar16 * fVar13;
  fVar10 = fVar14 * fVar19 - fVar19 * fVar14;
  fVar8 = fVar8 + fVar8;
  fVar9 = fVar9 + fVar9;
  fVar7 = fVar7 + fVar7;
  fVar10 = fVar10 + fVar10;
  fVar2 = (this->Rotation).m128_f32[0];
  fVar3 = (this->Rotation).m128_f32[1];
  fVar4 = (this->Rotation).m128_f32[2];
  fVar5 = (this->Rotation).m128_f32[3];
  (this->Translation).m128_f32[0] =
       (fVar19 * fVar8 + fVar11 + (fVar7 * fVar17 - fVar9 * fVar18)) * auVar15._0_4_;
  (this->Translation).m128_f32[1] =
       (fVar19 * fVar9 + fVar12 + (fVar8 * fVar18 - fVar7 * fVar16)) * auVar15._4_4_;
  (this->Translation).m128_f32[2] =
       (fVar19 * fVar7 + fVar13 + (fVar9 * fVar16 - fVar8 * fVar17)) * auVar15._8_4_;
  (this->Translation).m128_f32[3] =
       (fVar19 * fVar10 + fVar14 + (fVar10 * fVar19 - fVar10 * fVar19)) * auVar15._12_4_;
  fVar7 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1];
  fVar10 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2];
  fVar13 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3];
  fVar8 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
  fVar11 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
  fVar14 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
  fVar9 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1];
  fVar12 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2];
  fVar1 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3];
  (this->Rotation).m128_f32[0] =
       fVar5 * fVar16 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] + fVar2 * fVar19 +
       fVar4 * fVar17 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
       fVar3 * fVar18 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
  (this->Rotation).m128_f32[1] =
       fVar4 * fVar16 * fVar7 + fVar3 * fVar19 + fVar5 * fVar17 * fVar9 + fVar2 * fVar18 * fVar8;
  (this->Rotation).m128_f32[2] =
       fVar3 * fVar16 * fVar10 + fVar4 * fVar19 + fVar2 * fVar17 * fVar12 + fVar5 * fVar18 * fVar11;
  (this->Rotation).m128_f32[3] =
       fVar2 * fVar16 * fVar13 + fVar5 * fVar19 + fVar3 * fVar17 * fVar1 + fVar4 * fVar18 * fVar14;
  return;
}

// SetToRelativeTransform @ 1417fdeb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Math::TTransform<double>::SetToRelativeTransform
          (TTransform<double> *this,TTransform<double> *param_1)

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
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  longlong lVar17;
  longlong lVar18;
  double dVar19;
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
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined4 uVar43;
  
  auVar41._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                        *(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 4),
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                        *(uint *)(param_1->Scale3D).XY.m128d_f64);
  auVar41._8_4_ = _UNK_15061cc88 & *(uint *)((param_1->Scale3D).XY.m128d_f64 + 1);
  auVar41._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 0xc);
  lVar18 = -(ulonglong)(auVar41._8_8_ <= _UNK_150689618);
  lVar17 = -(ulonglong)
            ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                              *(uint *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 4),
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                              *(uint *)(param_1->Scale3D).ZW.m128d_f64) <= (double)_UNK_1506895d8);
  auVar20 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                  *(undefined1 (*) [16])(param_1->Scale3D).XY.m128d_f64);
  auVar42._0_8_ =
       (double)CONCAT44(~(uint)(-(ulonglong)
                                 (auVar41._0_8_ <= ___xmm_3e45798ee00000003e45798ee0000000) >> 0x20)
                        & auVar20._4_4_,
                        ~(uint)-(ulonglong)
                                (auVar41._0_8_ <= ___xmm_3e45798ee00000003e45798ee0000000) &
                        auVar20._0_4_);
  auVar42._8_4_ = ~(uint)lVar18 & auVar20._8_4_;
  auVar42._12_4_ = ~(uint)((ulonglong)lVar18 >> 0x20) & auVar20._12_4_;
  auVar20 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                  *(undefined1 (*) [16])(param_1->Scale3D).ZW.m128d_f64);
  dVar31 = (double)CONCAT44(~(uint)((ulonglong)lVar17 >> 0x20) & auVar20._4_4_,
                            ~(uint)lVar17 & auVar20._0_4_);
  auVar21._8_4_ = auVar42._8_4_;
  auVar21._0_8_ = auVar42._0_8_;
  auVar21._12_4_ = auVar42._12_4_;
  dVar1 = (this->Scale3D).XY.m128d_f64[1];
  (this->Scale3D).XY.m128d_f64[0] = auVar42._0_8_ * (this->Scale3D).XY.m128d_f64[0];
  (this->Scale3D).XY.m128d_f64[1] = auVar21._8_8_ * dVar1;
  dVar1 = (this->Scale3D).ZW.m128d_f64[1];
  (this->Scale3D).ZW.m128d_f64[0] = dVar31 * (this->Scale3D).ZW.m128d_f64[0];
  (this->Scale3D).ZW.m128d_f64[1] = dVar1 * 0.0;
  dVar7 = (param_1->Rotation).XY.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar8 = (param_1->Rotation).XY.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  uVar43 = (undefined4)((ulonglong)dVar8 >> 0x20);
  dVar10 = (param_1->Rotation).ZW.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar11 = (param_1->Rotation).ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar3 = (this->Translation).XY.m128d_f64[0] - (param_1->Translation).XY.m128d_f64[0];
  dVar4 = (this->Translation).XY.m128d_f64[1] - (param_1->Translation).XY.m128d_f64[1];
  uVar34 = SUB84(dVar4,0);
  uVar35 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar36._8_4_ = SUB84(dVar8,0);
  auVar36._0_8_ = dVar7;
  auVar36._12_4_ = uVar43;
  dVar19 = (this->Translation).ZW.m128d_f64[0] - (param_1->Translation).ZW.m128d_f64[0];
  auVar38._8_4_ = uVar34;
  auVar38._0_8_ = dVar3;
  auVar38._12_4_ = uVar35;
  auVar27._8_4_ = uVar34;
  auVar27._0_8_ = dVar3;
  auVar27._12_4_ = uVar35;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar19;
  auVar20 = blendpd(auVar27,auVar6,2);
  auVar22._8_4_ = uVar34;
  auVar22._0_8_ = dVar3;
  auVar22._12_4_ = uVar35;
  auVar9._8_4_ = SUB84(dVar11,0);
  auVar9._0_8_ = dVar10;
  auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar37 = blendpd(auVar36,auVar9,2);
  auVar39._0_8_ = auVar38._8_8_ * dVar7 - dVar3 * dVar8;
  auVar39._8_8_ = dVar19 * dVar8 - auVar22._8_8_ * dVar10;
  auVar28._0_8_ = auVar20._0_8_ * dVar10 - dVar19 * auVar37._0_8_;
  auVar28._8_8_ = auVar20._8_8_ * dVar11 - auVar37._8_8_ * 0.0;
  auVar20 = blendpd(auVar39,auVar28,2);
  dVar1 = auVar39._8_8_ + auVar39._8_8_;
  dVar2 = auVar28._0_8_ + auVar28._0_8_;
  uVar34 = SUB84(dVar2,0);
  uVar35 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar40._0_8_ = auVar20._0_8_ + auVar20._0_8_;
  auVar40._8_8_ = auVar20._8_8_ + auVar20._8_8_;
  auVar32._8_4_ = uVar34;
  auVar32._0_8_ = dVar1;
  auVar32._12_4_ = uVar35;
  auVar23._8_4_ = uVar34;
  auVar23._0_8_ = dVar1;
  auVar23._12_4_ = uVar35;
  auVar29._8_4_ = uVar34;
  auVar29._0_8_ = dVar1;
  auVar29._12_4_ = uVar35;
  auVar20 = blendpd(auVar29,auVar40,2);
  auVar33._0_8_ = auVar32._8_8_ * dVar7 - dVar1 * dVar8;
  auVar33._8_8_ = auVar40._0_8_ * dVar8 - auVar23._8_8_ * dVar10;
  auVar24._8_4_ = SUB84(auVar40._8_8_,0);
  auVar24._0_8_ = auVar40._0_8_;
  auVar24._12_4_ = (int)((ulonglong)auVar40._8_8_ >> 0x20);
  auVar30._0_8_ = auVar20._0_8_ * dVar10 - auVar40._0_8_ * auVar37._0_8_;
  auVar30._8_8_ = auVar20._8_8_ * dVar11 - auVar24._8_8_ * auVar37._8_8_;
  auVar25._8_4_ = SUB84(auVar33._8_8_,0);
  auVar25._0_8_ = auVar33._0_8_;
  auVar25._12_4_ = (int)((ulonglong)auVar33._8_8_ >> 0x20);
  auVar37 = blendpd(auVar33,auVar30,2);
  dVar2 = (dVar2 * dVar11 + dVar4 + auVar30._0_8_) * auVar42._8_8_;
  auVar20._8_4_ = SUB84(dVar2,0);
  auVar20._0_8_ = (dVar1 * dVar11 + dVar3 + auVar25._8_8_) * auVar42._0_8_;
  auVar20._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Translation).XY.m128d_f64 = auVar20;
  (this->Translation).ZW.m128d_f64[0] = (auVar40._0_8_ * dVar11 + dVar19 + auVar37._0_8_) * dVar31;
  (this->Translation).ZW.m128d_f64[1] = (auVar40._8_8_ * dVar11 + 0.0 + auVar37._8_8_) * 0.0;
  dVar12 = (this->Rotation).XY.m128d_f64[0];
  dVar13 = (this->Rotation).XY.m128d_f64[1];
  dVar14 = (this->Rotation).ZW.m128d_f64[0];
  dVar15 = (this->Rotation).ZW.m128d_f64[1];
  dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
  dVar1 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  auVar26._8_4_ = SUB84(dVar8,0);
  auVar26._0_8_ = dVar8;
  auVar26._12_4_ = uVar43;
  dVar16 = (this->Rotation).ZW.m128d_f64[1];
  dVar19 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
  dVar2 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar31 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar5 = dVar12 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar15 * dVar11 +
          auVar26._8_8_ * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar14 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  (this->Rotation).XY.m128d_f64[0] =
       dVar15 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar12 * dVar11 +
       dVar8 * (this->Rotation).ZW.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar13 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  (this->Rotation).XY.m128d_f64[1] =
       dVar14 * dVar7 * dVar4 + dVar13 * dVar11 + dVar8 * dVar16 * dVar19 + dVar12 * dVar10 * dVar31
  ;
  auVar37._8_4_ = SUB84(dVar5,0);
  auVar37._0_8_ =
       dVar13 * dVar7 * dVar1 + dVar14 * dVar11 + dVar8 * dVar12 * dVar2 + dVar15 * dVar10 * dVar3;
  auVar37._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])(this->Rotation).ZW.m128d_f64 = auVar37;
  return;
}

// SetTranslation @ 1417fe160

void __thiscall
UE::Math::TTransform<float>::SetTranslation(TTransform<float> *this,TVector<float> *param_1)

{
  __m128 _Var1;
  
  _Var1.m128_f32[3] = 0.0;
  _Var1._0_12_ = (undefined1  [12])param_1->field0_0x0;
  this->Translation = _Var1;
  return;
}

// SetTranslation @ 1417fe180

void __thiscall
UE::Math::TTransform<double>::SetTranslation(TTransform<double> *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (this->Translation).XY.m128d_f64[0] = (param_1->field0_0x0)._s_0.X;
  (this->Translation).XY.m128d_f64[1] = dVar2;
  (this->Translation).ZW.m128d_f64[0] = dVar1;
  (this->Translation).ZW.m128d_f64[1] = 0.0;
  return;
}

// SetTranslationAndScale3D @ 1417fe1a0

void __thiscall
UE::Math::TTransform<float>::SetTranslationAndScale3D
          (TTransform<float> *this,TVector<float> *param_1,TVector<float> *param_2)

{
  __m128 _Var1;
  __m128 _Var2;
  
  _Var1.m128_f32[3] = 0.0;
  _Var1._0_12_ = (undefined1  [12])param_1->field0_0x0;
  this->Translation = _Var1;
  _Var2.m128_f32[3] = 0.0;
  _Var2._0_12_ = (undefined1  [12])param_2->field0_0x0;
  this->Scale3D = _Var2;
  return;
}

// SetTranslationAndScale3D @ 1417fe1d0

void __thiscall
UE::Math::TTransform<double>::SetTranslationAndScale3D
          (TTransform<double> *this,TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (this->Translation).XY.m128d_f64[0] = (param_1->field0_0x0)._s_0.X;
  (this->Translation).XY.m128d_f64[1] = dVar2;
  (this->Translation).ZW.m128d_f64[0] = dVar1;
  (this->Translation).ZW.m128d_f64[1] = 0.0;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  (this->Scale3D).XY.m128d_f64[0] = (param_2->field0_0x0)._s_0.X;
  (this->Scale3D).XY.m128d_f64[1] = dVar2;
  (this->Scale3D).ZW.m128d_f64[0] = dVar1;
  (this->Scale3D).ZW.m128d_f64[1] = 0.0;
  return;
}

// SetTranslationRegister @ 1417fe200

void __thiscall
UE::Math::TTransform<float>::SetTranslationRegister(TTransform<float> *this,__m128 *param_1)

{
  ulong64 uVar1;
  
  uVar1 = param_1->m128_u64[1];
  (this->Translation).m128_u64[0] = param_1->m128_u64[0];
  (this->Translation).m128_u64[1] = uVar1;
  return;
}

// SetTranslationRegister @ 1417fe210

void __thiscall
UE::Math::TTransform<double>::SetTranslationRegister
          (TTransform<double> *this,VectorRegister4Double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (param_1->XY).m128d_f64[1];
  dVar2 = (param_1->ZW).m128d_f64[0];
  dVar3 = (param_1->ZW).m128d_f64[1];
  (this->Translation).XY.m128d_f64[0] = (param_1->XY).m128d_f64[0];
  (this->Translation).XY.m128d_f64[1] = dVar1;
  (this->Translation).ZW.m128d_f64[0] = dVar2;
  (this->Translation).ZW.m128d_f64[1] = dVar3;
  return;
}

// SubtractTranslations @ 141801c50

TVector<float> * __cdecl
UE::Math::TTransform<float>::SubtractTranslations
          (TVector<float> *__return_storage_ptr__,TTransform<float> *param_1,
          TTransform<float> *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (param_1->Translation).m128_f32[2];
  fVar2 = (param_2->Translation).m128_f32[2];
  *(ulonglong *)&__return_storage_ptr__->field0_0x0 =
       CONCAT44((param_1->Translation).m128_f32[1] - (param_2->Translation).m128_f32[1],
                (param_1->Translation).m128_f32[0] - (param_2->Translation).m128_f32[0]);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1 - fVar2;
  return __return_storage_ptr__;
}

// SubtractTranslations @ 141801c70

TVector<double> * __cdecl
UE::Math::TTransform<double>::SubtractTranslations
          (TVector<double> *__return_storage_ptr__,TTransform<double> *param_1,
          TTransform<double> *param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = (param_2->Translation).ZW.m128d_f64[0];
  dVar4 = (param_1->Translation).ZW.m128d_f64[0];
  dVar2 = (param_1->Translation).XY.m128d_f64[1] - (param_2->Translation).XY.m128d_f64[1];
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = (param_1->Translation).XY.m128d_f64[0] - (param_2->Translation).XY.m128d_f64[0];
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar4 - dVar3;
  return __return_storage_ptr__;
}

// ToHumanReadableString @ 1418044d0

FString * __thiscall
UE::Math::TTransform<float>::ToHumanReadableString
          (TTransform<float> *this,FString *__return_storage_ptr__)

{
  TRotator<float> *pTVar1;
  int iVar2;
  TQuat<float> local_48;
  FString local_38 [3];
  
  local_48._0_8_ = (this->Rotation).m128_u64[0];
  local_48._8_8_ = (this->Rotation).m128_u64[1];
  pTVar1 = TQuat<float>::Rotator(&local_48,(TRotator<float> *)local_38);
  local_48._0_8_ = (this->Scale3D).m128_u64[0];
  local_38[0].Data.AllocatorInstance.Data = *(FScriptContainerElement **)pTVar1;
  ::FString::PrintfImpl(__return_storage_ptr__,L"Rotation: Pitch %f Yaw %f Roll %f\r\n");
  ::FString::PrintfImpl(local_38,L"Translation: %f %f %f\r\n");
  iVar2 = local_38[0].Data.ArrayNum + -1;
  if ((float)local_38[0].Data.ArrayNum == 0.0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_38[0].Data.AllocatorInstance.Data,iVar2);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(local_38,L"Scale3D: %f %f %f\r\n");
  iVar2 = local_38[0].Data.ArrayNum + -1;
  if ((float)local_38[0].Data.ArrayNum == 0.0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_38[0].Data.AllocatorInstance.Data,iVar2);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToHumanReadableString @ 141804650

FString * __thiscall
UE::Math::TTransform<double>::ToHumanReadableString
          (TTransform<double> *this,FString *__return_storage_ptr__)

{
  double dVar1;
  TRotator<double> *pTVar2;
  int iVar3;
  TQuat<double> local_78;
  TRotator<double> local_58 [3];
  
  local_78.X = (this->Rotation).XY.m128d_f64[0];
  local_78.Y = (this->Rotation).XY.m128d_f64[1];
  local_78.Z = (this->Rotation).ZW.m128d_f64[0];
  local_78.W = (this->Rotation).ZW.m128d_f64[1];
  pTVar2 = TQuat<double>::Rotator(&local_78,local_58);
  local_58[0].Roll = (this->Scale3D).ZW.m128d_f64[0];
  dVar1 = (this->Translation).ZW.m128d_f64[0];
  local_78.Z = pTVar2->Roll;
  ::FString::PrintfImpl(__return_storage_ptr__,L"Rotation: Pitch %f Yaw %f Roll %f\r\n");
  local_78.Z = dVar1;
  ::FString::PrintfImpl((FString *)&local_78,L"Translation: %f %f %f\r\n");
  iVar3 = SUB84(local_78.Y,0) + -1;
  if (SUB84(local_78.Y,0) == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars(__return_storage_ptr__,(wchar_t *)local_78.X,iVar3);
  if ((wchar_t *)local_78.X != (wchar_t *)0x0) {
    FMemory::Free((void *)local_78.X);
  }
  ::FString::PrintfImpl((FString *)&local_78,L"Scale3D: %f %f %f\r\n");
  iVar3 = SUB84(local_78.Y,0) + -1;
  if (SUB84(local_78.Y,0) == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars(__return_storage_ptr__,(wchar_t *)local_78.X,iVar3);
  if ((wchar_t *)local_78.X != (wchar_t *)0x0) {
    FMemory::Free((void *)local_78.X);
  }
  return __return_storage_ptr__;
}

// ToInverseMatrixWithScale @ 1418047c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMatrix<float> * __thiscall
UE::Math::TTransform<float>::ToInverseMatrixWithScale
          (TTransform<float> *this,TMatrix<float> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  undefined1 auVar10 [16];
  float fVar12;
  undefined1 auStack_88 [32];
  TMatrix<float> local_68;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  fVar1 = (this->Rotation).m128_f32[0];
  fVar2 = (this->Rotation).m128_f32[1];
  fVar3 = (this->Rotation).m128_f32[2];
  fVar4 = (this->Rotation).m128_f32[3];
  fVar8 = fVar2 + fVar2;
  fVar9 = fVar3 + fVar3;
  fVar12 = (fVar1 + fVar1) * fVar1;
  fVar11 = fVar4 * (fVar1 + fVar1);
  fVar5 = (this->Scale3D).m128_f32[0];
  fVar6 = (this->Scale3D).m128_f32[1];
  fVar7 = (this->Scale3D).m128_f32[2];
  local_68.M[0][1] = (fVar4 * fVar9 + fVar8 * fVar1) * fVar5;
  local_68.M[1][2] = (fVar11 + fVar9 * fVar2) * fVar6;
  local_68.M[2][0] = (fVar4 * fVar8 + fVar9 * fVar1) * fVar7;
  local_68.M[1][0] = fVar6 * (fVar8 * fVar1 - fVar4 * fVar9);
  local_68.M[2][1] = fVar7 * (fVar9 * fVar2 - fVar11);
  local_68.M[0][2] = fVar5 * (fVar9 * fVar1 - fVar4 * fVar8);
  auVar10._0_4_ =
       (GlobalVectorConstants::FloatOne.m128_f32[0] - (fVar9 * fVar3 + fVar8 * fVar2)) * fVar5;
  auVar10._4_4_ = (GlobalVectorConstants::FloatOne.m128_f32[1] - (fVar9 * fVar3 + fVar12)) * fVar6;
  auVar10._8_4_ = (GlobalVectorConstants::FloatOne.m128_f32[2] - (fVar8 * fVar2 + fVar12)) * fVar7;
  auVar10._12_4_ =
       (GlobalVectorConstants::FloatOne.m128_f32[3] - (fVar12 + fVar12)) *
       (this->Scale3D).m128_f32[3];
  auVar10 = insertps(auVar10,auVar10,8);
  local_68.M[0][0] = auVar10._0_4_;
  local_68.M[1][1] = auVar10._4_4_;
  local_68.M[2][2] = auVar10._8_4_;
  local_68.M[0][3] = auVar10._12_4_;
  local_68.M[3] = (float  [4])blendps(this->Translation,GlobalVectorConstants::FloatOne.m128_f32,8);
  local_68.M[1][3] = local_68.M[0][3];
  local_68.M[2][3] = local_68.M[0][3];
  TMatrix<float>::Inverse(&local_68,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ToInverseMatrixWithScale @ 1418048d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMatrix<double> * __thiscall
UE::Math::TTransform<double>::ToInverseMatrixWithScale
          (TTransform<double> *this,TMatrix<double> *__return_storage_ptr__)

{
  TMatrix<double> *this_00;
  undefined1 auStack_b8 [32];
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this_00 = ToMatrixWithScale(this,&local_98);
  TMatrix<double>::Inverse(this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ToMatrixInternal @ 141805160

void __thiscall
UE::Math::TTransform<float>::ToMatrixInternal
          (TTransform<float> *this,__m128 *param_1,__m128 *param_2,__m128 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar4 = (this->Rotation).m128_f32[0];
  fVar5 = (this->Rotation).m128_f32[1];
  fVar6 = (this->Rotation).m128_f32[2];
  fVar7 = (this->Rotation).m128_f32[3];
  fVar12 = fVar4 + fVar4;
  fVar13 = fVar5 + fVar5;
  fVar14 = fVar6 + fVar6;
  fVar11 = fVar12 * fVar4;
  fVar1 = GlobalVectorConstants::FloatOne.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatOne.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatOne.m128_f32[3];
  fVar8 = (this->Scale3D).m128_f32[1];
  fVar9 = (this->Scale3D).m128_f32[2];
  fVar10 = (this->Scale3D).m128_f32[3];
  param_1->m128_f32[0] =
       (GlobalVectorConstants::FloatOne.m128_f32[0] - (fVar14 * fVar6 + fVar13 * fVar5)) *
       (this->Scale3D).m128_f32[0];
  param_1->m128_f32[1] = (fVar1 - (fVar14 * fVar6 + fVar11)) * fVar8;
  param_1->m128_f32[2] = (fVar2 - (fVar13 * fVar5 + fVar11)) * fVar9;
  param_1->m128_f32[3] = (fVar3 - (fVar11 + fVar11)) * fVar10;
  fVar1 = (this->Scale3D).m128_f32[1];
  fVar2 = (this->Scale3D).m128_f32[2];
  fVar3 = (this->Scale3D).m128_f32[3];
  param_2->m128_f32[0] = (fVar7 * fVar14 + fVar13 * fVar4) * (this->Scale3D).m128_f32[0];
  param_2->m128_f32[1] = (fVar7 * fVar12 + fVar14 * fVar5) * fVar1;
  param_2->m128_f32[2] = (fVar7 * fVar13 + fVar14 * fVar4) * fVar2;
  param_2->m128_f32[3] = (fVar7 * fVar12 + fVar12 * fVar4) * fVar3;
  fVar1 = (this->Scale3D).m128_f32[0];
  fVar2 = (this->Scale3D).m128_f32[2];
  fVar3 = (this->Scale3D).m128_f32[3];
  param_3->m128_f32[0] = (this->Scale3D).m128_f32[1] * (fVar13 * fVar4 - fVar7 * fVar14);
  param_3->m128_f32[1] = fVar2 * (fVar14 * fVar5 - fVar7 * fVar12);
  param_3->m128_f32[2] = fVar1 * (fVar14 * fVar4 - fVar7 * fVar13);
  param_3->m128_f32[3] = fVar3 * (fVar12 * fVar4 - fVar7 * fVar12);
  return;
}

// ToMatrixInternal @ 1418051e0

void __thiscall
UE::Math::TTransform<double>::ToMatrixInternal
          (TTransform<double> *this,VectorRegister4Double *param_1,VectorRegister4Double *param_2,
          VectorRegister4Double *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar18;
  undefined1 auVar17 [16];
  double dVar19;
  
  dVar10 = (this->Rotation).ZW.m128d_f64[0];
  dVar11 = (this->Rotation).ZW.m128d_f64[1];
  dVar12 = (this->Rotation).XY.m128d_f64[0];
  dVar13 = (this->Rotation).XY.m128d_f64[1];
  dVar19 = dVar10 + dVar10;
  dVar8 = dVar12 + dVar12;
  dVar9 = dVar13 + dVar13;
  auVar16._8_4_ = SUB84(dVar9,0);
  auVar16._0_8_ = dVar8;
  auVar16._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  dVar15 = dVar8 * dVar12;
  dVar18 = auVar16._8_8_ * dVar13;
  dVar7 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0];
  dVar14 = (this->Scale3D).ZW.m128d_f64[0];
  dVar6 = (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1] - (dVar15 + dVar15)) *
          (this->Scale3D).ZW.m128d_f64[1];
  dVar4 = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - (dVar19 * dVar10 + dVar15)) *
          (this->Scale3D).XY.m128d_f64[1];
  auVar1._8_4_ = SUB84(dVar4,0);
  auVar1._0_8_ = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - (dVar19 * dVar10 + dVar18)) *
                 (this->Scale3D).XY.m128d_f64[0];
  auVar1._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])(param_1->XY).m128d_f64 = auVar1;
  auVar17._8_4_ = SUB84(dVar6,0);
  auVar17._0_8_ = (dVar7 - (dVar15 + dVar18)) * dVar14;
  auVar17._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(param_1->ZW).m128d_f64 = auVar17;
  dVar6 = (this->Scale3D).ZW.m128d_f64[0];
  dVar7 = (this->Scale3D).ZW.m128d_f64[1];
  dVar4 = (dVar11 * dVar8 + dVar19 * dVar13) * (this->Scale3D).XY.m128d_f64[1];
  auVar2._8_4_ = SUB84(dVar4,0);
  auVar2._0_8_ = (dVar11 * dVar19 + dVar9 * dVar12) * (this->Scale3D).XY.m128d_f64[0];
  auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])(param_2->XY).m128d_f64 = auVar2;
  dVar7 = (dVar8 * dVar11 + dVar12 * dVar8) * dVar7;
  auVar5._8_4_ = SUB84(dVar7,0);
  auVar5._0_8_ = (dVar9 * dVar11 + dVar12 * dVar19) * dVar6;
  auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])(param_2->ZW).m128d_f64 = auVar5;
  auVar1 = *(undefined1 (*) [16])(this->Scale3D).XY.m128d_f64;
  auVar2 = *(undefined1 (*) [16])(this->Scale3D).ZW.m128d_f64;
  auVar17 = blendpd(auVar1,auVar2,2);
  dVar4 = auVar2._0_8_ * (dVar19 * dVar13 - dVar11 * dVar8);
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = auVar1._8_8_ * (dVar9 * dVar12 - dVar11 * dVar19);
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])(param_3->XY).m128d_f64 = auVar3;
  (param_3->ZW).m128d_f64[0] = auVar17._0_8_ * (dVar12 * dVar19 - dVar9 * dVar11);
  (param_3->ZW).m128d_f64[1] = auVar17._8_8_ * (dVar12 * dVar8 - dVar8 * dVar11);
  return;
}

// ToMatrixInternalNoScale @ 141805300

void __thiscall
UE::Math::TTransform<float>::ToMatrixInternalNoScale
          (TTransform<float> *this,__m128 *param_1,__m128 *param_2,__m128 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar4 = (this->Rotation).m128_f32[0];
  fVar5 = (this->Rotation).m128_f32[1];
  fVar6 = (this->Rotation).m128_f32[2];
  fVar7 = (this->Rotation).m128_f32[3];
  fVar9 = fVar4 + fVar4;
  fVar10 = fVar5 + fVar5;
  fVar11 = fVar6 + fVar6;
  fVar8 = fVar9 * fVar4;
  fVar1 = GlobalVectorConstants::FloatOne.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatOne.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatOne.m128_f32[3];
  param_1->m128_f32[0] =
       GlobalVectorConstants::FloatOne.m128_f32[0] - (fVar11 * fVar6 + fVar10 * fVar5);
  param_1->m128_f32[1] = fVar1 - (fVar11 * fVar6 + fVar8);
  param_1->m128_f32[2] = fVar2 - (fVar10 * fVar5 + fVar8);
  param_1->m128_f32[3] = fVar3 - (fVar8 + fVar8);
  param_2->m128_f32[0] = fVar7 * fVar11 + fVar10 * fVar4;
  param_2->m128_f32[1] = fVar7 * fVar9 + fVar11 * fVar5;
  param_2->m128_f32[2] = fVar7 * fVar10 + fVar11 * fVar4;
  param_2->m128_f32[3] = fVar7 * fVar9 + fVar9 * fVar4;
  param_3->m128_f32[0] = fVar10 * fVar4 - fVar7 * fVar11;
  param_3->m128_f32[1] = fVar11 * fVar5 - fVar7 * fVar9;
  param_3->m128_f32[2] = fVar11 * fVar4 - fVar7 * fVar10;
  param_3->m128_f32[3] = fVar9 * fVar4 - fVar7 * fVar9;
  return;
}

// ToMatrixInternalNoScale @ 141805360

void __thiscall
UE::Math::TTransform<double>::ToMatrixInternalNoScale
          (TTransform<double> *this,VectorRegister4Double *param_1,VectorRegister4Double *param_2,
          VectorRegister4Double *param_3)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  fVar1 = GlobalVectorConstants::FloatOne.m128_f32[2];
  dVar13 = (this->Rotation).ZW.m128d_f64[0];
  dVar14 = (this->Rotation).ZW.m128d_f64[1];
  dVar15 = (this->Rotation).XY.m128d_f64[0];
  dVar16 = (this->Rotation).XY.m128d_f64[1];
  dVar9 = dVar13 + dVar13;
  dVar10 = dVar15 + dVar15;
  dVar11 = dVar16 + dVar16;
  dVar17 = dVar10 * dVar15;
  dVar4 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - (dVar9 * dVar13 + dVar17);
  dVar7 = (double)GlobalVectorConstants::FloatOne.m128_f32[3] - (dVar17 + dVar17);
  auVar2._8_4_ = SUB84(dVar4,0);
  auVar2._0_8_ = (double)GlobalVectorConstants::FloatOne.m128_f32[0] -
                 (dVar9 * dVar13 + dVar11 * dVar16);
  auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])(param_1->XY).m128d_f64 = auVar2;
  auVar6._8_4_ = SUB84(dVar7,0);
  auVar6._0_8_ = (double)fVar1 - (dVar17 + dVar11 * dVar16);
  auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])(param_1->ZW).m128d_f64 = auVar6;
  dVar7 = dVar10 * dVar14 + dVar15 * dVar10;
  dVar13 = dVar15 * dVar10 - dVar10 * dVar14;
  dVar4 = dVar14 * dVar10 + dVar9 * dVar16;
  dVar10 = dVar9 * dVar16 - dVar14 * dVar10;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = dVar14 * dVar9 + dVar11 * dVar15;
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])(param_2->XY).m128d_f64 = auVar3;
  auVar5._8_4_ = SUB84(dVar7,0);
  auVar5._0_8_ = dVar11 * dVar14 + dVar15 * dVar9;
  auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])(param_2->ZW).m128d_f64 = auVar5;
  auVar8._8_4_ = SUB84(dVar10,0);
  auVar8._0_8_ = dVar11 * dVar15 - dVar14 * dVar9;
  auVar8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])(param_3->XY).m128d_f64 = auVar8;
  auVar12._8_4_ = SUB84(dVar13,0);
  auVar12._0_8_ = dVar15 * dVar9 - dVar11 * dVar14;
  auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])(param_3->ZW).m128d_f64 = auVar12;
  return;
}

// ToMatrixNoScale @ 141805470

TMatrix<float> * __thiscall
UE::Math::TTransform<float>::ToMatrixNoScale
          (TTransform<float> *this,TMatrix<float> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float afVar4 [4];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  
  fVar1 = (this->Rotation).m128_f32[0];
  fVar2 = (this->Rotation).m128_f32[1];
  fVar10 = (this->Rotation).m128_f32[2];
  fVar3 = (this->Rotation).m128_f32[3];
  fVar5 = fVar2 + fVar2;
  fVar6 = fVar10 + fVar10;
  fVar8 = (fVar1 + fVar1) * fVar1;
  fVar7 = fVar3 * (fVar1 + fVar1);
  auVar9._0_4_ = GlobalVectorConstants::FloatOne.m128_f32[0] - (fVar6 * fVar10 + fVar5 * fVar2);
  auVar9._4_4_ = GlobalVectorConstants::FloatOne.m128_f32[1] - (fVar6 * fVar10 + fVar8);
  auVar9._8_4_ = GlobalVectorConstants::FloatOne.m128_f32[2] - (fVar5 * fVar2 + fVar8);
  auVar9._12_4_ = GlobalVectorConstants::FloatOne.m128_f32[3] - (fVar8 + fVar8);
  auVar9 = insertps(auVar9,auVar9,8);
  fVar10 = auVar9._12_4_;
  afVar4 = (float  [4])blendps(this->Translation,GlobalVectorConstants::FloatOne.m128_f32,8);
  __return_storage_ptr__->M[3] = afVar4;
  __return_storage_ptr__->M[0][0] = auVar9._0_4_;
  __return_storage_ptr__->M[0][1] = fVar3 * fVar6 + fVar5 * fVar1;
  __return_storage_ptr__->M[0][2] = fVar6 * fVar1 - fVar3 * fVar5;
  __return_storage_ptr__->M[0][3] = fVar10;
  __return_storage_ptr__->M[1][0] = fVar5 * fVar1 - fVar3 * fVar6;
  __return_storage_ptr__->M[1][1] = auVar9._4_4_;
  __return_storage_ptr__->M[1][2] = fVar7 + fVar6 * fVar2;
  __return_storage_ptr__->M[1][3] = fVar10;
  __return_storage_ptr__->M[2][0] = fVar3 * fVar5 + fVar6 * fVar1;
  __return_storage_ptr__->M[2][1] = fVar6 * fVar2 - fVar7;
  __return_storage_ptr__->M[2][2] = auVar9._8_4_;
  __return_storage_ptr__->M[2][3] = fVar10;
  return __return_storage_ptr__;
}

// ToMatrixNoScale @ 141805530

TMatrix<double> * __thiscall
UE::Math::TTransform<double>::ToMatrixNoScale
          (TTransform<double> *this,TMatrix<double> *__return_storage_ptr__)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  double dVar21;
  
  dVar16 = (this->Rotation).ZW.m128d_f64[0];
  dVar17 = (this->Rotation).ZW.m128d_f64[1];
  fVar1 = GlobalVectorConstants::FloatOne.m128_f32[2];
  dVar7 = dVar16 + dVar16;
  dVar14 = (this->Rotation).XY.m128d_f64[0];
  dVar8 = (this->Rotation).XY.m128d_f64[0];
  dVar18 = (this->Rotation).XY.m128d_f64[1];
  dVar15 = dVar18 + dVar18;
  dVar9 = dVar8 * (dVar8 + dVar8);
  dVar10 = dVar15 * dVar14;
  dVar11 = dVar7 * (this->Rotation).XY.m128d_f64[1];
  dVar14 = dVar14 * dVar7;
  dVar13 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - (dVar16 * dVar7 + dVar9);
  dVar21 = dVar17 * (dVar8 + dVar8);
  dVar8 = dVar17 * dVar7 + dVar10;
  dVar12 = dVar11 - dVar21;
  auVar5._8_4_ = SUB84(dVar8,0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatOne.m128_f32[0] -
                 (dVar16 * dVar7 + dVar18 * dVar15);
  auVar5._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__->M[0] = auVar5;
  __return_storage_ptr__->M[0][2] = dVar14 - dVar15 * dVar17;
  __return_storage_ptr__->M[0][3] = 0.0;
  auVar6._8_4_ = SUB84(dVar13,0);
  auVar6._0_8_ = dVar10 - dVar17 * dVar7;
  auVar6._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__->M[1] = auVar6;
  __return_storage_ptr__->M[1][2] = dVar21 + dVar11;
  __return_storage_ptr__->M[1][3] = 0.0;
  auVar4._8_4_ = SUB84(dVar12,0);
  auVar4._0_8_ = dVar15 * dVar17 + dVar14;
  auVar4._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__->M[2] = auVar4;
  __return_storage_ptr__->M[2][2] = (double)fVar1 - (dVar9 + dVar18 * dVar15);
  __return_storage_ptr__->M[2][3] = 0.0;
  uVar19 = *(undefined4 *)(this->Translation).ZW.m128d_f64;
  uVar20 = *(undefined4 *)((longlong)(this->Translation).ZW.m128d_f64 + 4);
  uVar2 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  uVar3 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  dVar7 = (this->Translation).XY.m128d_f64[1];
  __return_storage_ptr__->M[3][0] = (this->Translation).XY.m128d_f64[0];
  __return_storage_ptr__->M[3][1] = dVar7;
  *(undefined4 *)(__return_storage_ptr__->M[3] + 2) = uVar19;
  *(undefined4 *)((longlong)__return_storage_ptr__->M[3] + 0x14) = uVar20;
  *(undefined4 *)(__return_storage_ptr__->M[3] + 3) = uVar2;
  *(undefined4 *)((longlong)__return_storage_ptr__->M[3] + 0x1c) = uVar3;
  return __return_storage_ptr__;
}

// ToMatrixWithScale @ 1418056f0

TMatrix<float> * __thiscall
UE::Math::TTransform<float>::ToMatrixWithScale
          (TTransform<float> *this,TMatrix<float> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float afVar7 [4];
  float fVar8;
  float fVar9;
  float fVar11;
  undefined1 auVar10 [16];
  float fVar12;
  float fVar13;
  
  fVar1 = (this->Rotation).m128_f32[0];
  fVar2 = (this->Rotation).m128_f32[1];
  fVar12 = (this->Rotation).m128_f32[2];
  fVar3 = (this->Rotation).m128_f32[3];
  fVar8 = fVar2 + fVar2;
  fVar9 = fVar12 + fVar12;
  fVar13 = (fVar1 + fVar1) * fVar1;
  fVar11 = fVar3 * (fVar1 + fVar1);
  fVar4 = (this->Scale3D).m128_f32[0];
  fVar5 = (this->Scale3D).m128_f32[1];
  fVar6 = (this->Scale3D).m128_f32[2];
  auVar10._0_4_ =
       (GlobalVectorConstants::FloatOne.m128_f32[0] - (fVar9 * fVar12 + fVar8 * fVar2)) * fVar4;
  auVar10._4_4_ = (GlobalVectorConstants::FloatOne.m128_f32[1] - (fVar9 * fVar12 + fVar13)) * fVar5;
  auVar10._8_4_ = (GlobalVectorConstants::FloatOne.m128_f32[2] - (fVar8 * fVar2 + fVar13)) * fVar6;
  auVar10._12_4_ =
       (GlobalVectorConstants::FloatOne.m128_f32[3] - (fVar13 + fVar13)) *
       (this->Scale3D).m128_f32[3];
  auVar10 = insertps(auVar10,auVar10,8);
  fVar12 = auVar10._12_4_;
  afVar7 = (float  [4])blendps(this->Translation,GlobalVectorConstants::FloatOne.m128_f32,8);
  __return_storage_ptr__->M[2][0] = (fVar3 * fVar8 + fVar9 * fVar1) * fVar6;
  __return_storage_ptr__->M[2][1] = fVar6 * (fVar9 * fVar2 - fVar11);
  __return_storage_ptr__->M[2][2] = auVar10._8_4_;
  __return_storage_ptr__->M[2][3] = fVar12;
  __return_storage_ptr__->M[3] = afVar7;
  __return_storage_ptr__->M[0][0] = auVar10._0_4_;
  __return_storage_ptr__->M[0][1] = (fVar3 * fVar9 + fVar8 * fVar1) * fVar4;
  __return_storage_ptr__->M[0][2] = fVar4 * (fVar9 * fVar1 - fVar3 * fVar8);
  __return_storage_ptr__->M[0][3] = fVar12;
  __return_storage_ptr__->M[1][0] = fVar5 * (fVar8 * fVar1 - fVar3 * fVar9);
  __return_storage_ptr__->M[1][1] = auVar10._4_4_;
  __return_storage_ptr__->M[1][2] = (fVar11 + fVar9 * fVar2) * fVar5;
  __return_storage_ptr__->M[1][3] = fVar12;
  return __return_storage_ptr__;
}

// ToMatrixWithScale @ 1418057c0

TMatrix<double> * __thiscall
UE::Math::TTransform<double>::ToMatrixWithScale
          (TTransform<double> *this,TMatrix<double> *__return_storage_ptr__)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  
  dVar14 = (this->Rotation).ZW.m128d_f64[0];
  dVar15 = (this->Rotation).ZW.m128d_f64[1];
  auVar1 = *(undefined1 (*) [16])(this->Scale3D).XY.m128d_f64;
  dVar5 = dVar14 + dVar14;
  auVar25 = blendpd(auVar1,*(undefined1 (*) [16])(this->Scale3D).ZW.m128d_f64,2);
  dVar12 = (this->Rotation).XY.m128d_f64[0];
  dVar8 = (this->Rotation).XY.m128d_f64[0];
  dVar16 = (this->Rotation).XY.m128d_f64[1];
  dVar13 = dVar16 + dVar16;
  dVar6 = dVar13 * dVar12;
  dVar7 = dVar5 * (this->Rotation).XY.m128d_f64[1];
  dVar9 = dVar8 * (dVar8 + dVar8);
  dVar12 = dVar12 * dVar5;
  dVar10 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[0];
  dVar17 = (this->Scale3D).XY.m128d_f64[0];
  dVar11 = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - (dVar14 * dVar5 + dVar9)) *
           (this->Scale3D).XY.m128d_f64[1];
  dVar23 = dVar15 * (dVar8 + dVar8);
  dVar18 = (this->Scale3D).ZW.m128d_f64[0];
  dVar19 = (this->Scale3D).XY.m128d_f64[1];
  dVar8 = (dVar15 * dVar5 + dVar6) * (this->Scale3D).XY.m128d_f64[0];
  dVar22 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0];
  dVar24 = (this->Scale3D).ZW.m128d_f64[0] * (dVar7 - dVar23);
  dVar20 = (this->Scale3D).ZW.m128d_f64[0];
  __return_storage_ptr__->M[0][2] = auVar25._0_8_ * (dVar12 - dVar13 * dVar15);
  __return_storage_ptr__->M[0][3] = 0.0;
  auVar25._8_4_ = SUB84(dVar8,0);
  auVar25._0_8_ = (dVar10 - (dVar14 * dVar5 + dVar16 * dVar13)) * dVar17;
  auVar25._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__->M[0] = auVar25;
  auVar4._8_4_ = SUB84(dVar11,0);
  auVar4._0_8_ = auVar1._8_8_ * (dVar6 - dVar15 * dVar5);
  auVar4._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__->M[1] = auVar4;
  __return_storage_ptr__->M[1][2] = (dVar23 + dVar7) * dVar19;
  __return_storage_ptr__->M[1][3] = 0.0;
  auVar1._8_4_ = SUB84(dVar24,0);
  auVar1._0_8_ = (dVar13 * dVar15 + dVar12) * dVar18;
  auVar1._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__->M[2] = auVar1;
  __return_storage_ptr__->M[2][2] = (dVar22 - (dVar9 + dVar16 * dVar13)) * dVar20;
  __return_storage_ptr__->M[2][3] = 0.0;
  uVar21 = *(undefined4 *)((longlong)(this->Translation).ZW.m128d_f64 + 4);
  uVar2 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  uVar3 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  dVar5 = (this->Translation).XY.m128d_f64[0];
  dVar6 = (this->Translation).XY.m128d_f64[1];
  *(undefined4 *)(__return_storage_ptr__->M[3] + 2) =
       *(undefined4 *)(this->Translation).ZW.m128d_f64;
  *(undefined4 *)((longlong)__return_storage_ptr__->M[3] + 0x14) = uVar21;
  *(undefined4 *)(__return_storage_ptr__->M[3] + 3) = uVar2;
  *(undefined4 *)((longlong)__return_storage_ptr__->M[3] + 0x1c) = uVar3;
  __return_storage_ptr__->M[3][0] = dVar5;
  __return_storage_ptr__->M[3][1] = dVar6;
  return __return_storage_ptr__;
}

// ToString @ 141806c70

FString * __thiscall
UE::Math::TTransform<float>::ToString(TTransform<float> *this,FString *__return_storage_ptr__)

{
  TRotator<float> local_68;
  float local_58;
  float fStack_54;
  TQuat<float> local_48 [4];
  
  local_48[0]._0_8_ = (this->Rotation).m128_u64[0];
  local_48[0]._8_8_ = (this->Rotation).m128_u64[1];
  TQuat<float>::Rotator(local_48,&local_68);
  local_58 = (this->Scale3D).m128_f32[0];
  fStack_54 = (this->Scale3D).m128_f32[1];
  local_48[0]._0_8_ = (this->Translation).m128_u64[0];
  ::FString::PrintfImpl(__return_storage_ptr__,L"%f,%f,%f|%f,%f,%f|%f,%f,%f");
  return __return_storage_ptr__;
}

// ToString @ 141806d90

FString * __thiscall
UE::Math::TTransform<double>::ToString(TTransform<double> *this,FString *__return_storage_ptr__)

{
  TRotator<double> local_48;
  TQuat<double> local_28;
  
  local_28.X = (this->Rotation).XY.m128d_f64[0];
  local_28.Y = (this->Rotation).XY.m128d_f64[1];
  local_28.Z = (this->Rotation).ZW.m128d_f64[0];
  local_28.W = (this->Rotation).ZW.m128d_f64[1];
  TQuat<double>::Rotator(&local_28,&local_48);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%f,%f,%f|%f,%f,%f|%f,%f,%f");
  return __return_storage_ptr__;
}

// TransformFVector4 @ 141808590

TVector4<float> * __thiscall
UE::Math::TTransform<float>::TransformFVector4
          (TTransform<float> *this,TVector4<float> *__return_storage_ptr__,TVector4<float> *param_1)

{
  TVector4<float>_u_0_s_0 TVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  undefined1 auVar12 [16];
  float fVar15;
  
  fVar3 = (this->Rotation).m128_f32[0];
  fVar4 = (this->Rotation).m128_f32[1];
  fVar5 = (this->Rotation).m128_f32[2];
  fVar6 = (this->Rotation).m128_f32[3];
  TVar1 = (param_1->field0_0x0)._s_0;
  fVar2 = TVar1.W;
  auVar12 = insertps((undefined1  [16])TVar1,(undefined1  [16])TVar1,8);
  fVar11 = auVar12._0_4_ * (this->Scale3D).m128_f32[0];
  fVar13 = auVar12._4_4_ * (this->Scale3D).m128_f32[1];
  fVar14 = auVar12._8_4_ * (this->Scale3D).m128_f32[2];
  fVar15 = auVar12._12_4_ * (this->Scale3D).m128_f32[3];
  fVar7 = fVar13 * fVar3 - fVar4 * fVar11;
  fVar8 = fVar14 * fVar4 - fVar5 * fVar13;
  fVar9 = fVar11 * fVar5 - fVar3 * fVar14;
  fVar10 = fVar15 * fVar6 - fVar6 * fVar15;
  fVar8 = fVar8 + fVar8;
  fVar9 = fVar9 + fVar9;
  fVar7 = fVar7 + fVar7;
  fVar10 = fVar10 + fVar10;
  auVar12 = blendps((undefined1  [16])this->Translation,
                    (undefined1  [16])GlobalVectorConstants::FloatOne,8);
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       fVar6 * fVar8 + fVar11 + (fVar7 * fVar4 - fVar9 * fVar5) + auVar12._0_4_ * fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       fVar6 * fVar9 + fVar13 + (fVar8 * fVar5 - fVar7 * fVar3) + auVar12._4_4_ * fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       fVar6 * fVar7 + fVar14 + (fVar9 * fVar3 - fVar8 * fVar4) + auVar12._8_4_ * fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.W =
       fVar6 * fVar10 + fVar15 + (fVar10 * fVar6 - fVar10 * fVar6) + auVar12._12_4_ * fVar2;
  return __return_storage_ptr__;
}

// TransformFVector4 @ 141808620

TVector4<double> * __thiscall
UE::Math::TTransform<double>::TransformFVector4
          (TTransform<double> *this,TVector4<double> *__return_storage_ptr__,
          TVector4<double> *param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [12];
  double dVar10;
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
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  auVar1 = *(undefined1 (*) [16])(this->Rotation).ZW.m128d_f64;
  auVar13 = *(undefined1 (*) [16])(this->Rotation).XY.m128d_f64;
  dVar10 = (this->Rotation).ZW.m128d_f64[1];
  dVar5 = (this->Scale3D).XY.m128d_f64[0] * (param_1->field0_0x0)._s_0.X;
  dVar6 = (this->Scale3D).XY.m128d_f64[1] * (param_1->field0_0x0)._s_0.Y;
  uVar21 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar22._8_4_ = SUB84(dVar6,0);
  auVar22._0_8_ = dVar5;
  auVar22._12_4_ = uVar21;
  dVar11 = (param_1->field0_0x0)._s_0.W;
  auVar15 = blendpd(auVar13,auVar1,2);
  dVar7 = (param_1->field0_0x0)._s_0.Z * (this->Scale3D).ZW.m128d_f64[0];
  dVar8 = (this->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar4 = auVar1._0_8_;
  auVar23._0_8_ = auVar22._8_8_ * auVar13._0_8_ - auVar13._8_8_ * dVar5;
  auVar23._8_8_ = dVar7 * auVar13._8_8_ - dVar4 * dVar6;
  auVar24._8_4_ = SUB84(dVar6,0);
  auVar24._0_8_ = dVar5;
  auVar24._12_4_ = uVar21;
  auVar13._8_4_ = SUB84(dVar8,0);
  auVar13._0_8_ = dVar7;
  auVar13._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar13 = blendpd(auVar24,auVar13,2);
  auVar17._0_8_ = auVar13._0_8_ * dVar4 - auVar15._0_8_ * dVar7;
  auVar17._8_8_ = auVar13._8_8_ * auVar1._8_8_ - auVar15._8_8_ * dVar8;
  auVar13 = *(undefined1 (*) [16])(this->Rotation).XY.m128d_f64;
  auVar24 = blendpd(auVar23,auVar17,2);
  auVar25._0_8_ = auVar24._0_8_ + auVar24._0_8_;
  auVar25._8_8_ = auVar24._8_8_ + auVar24._8_8_;
  dVar2 = auVar23._8_8_ + auVar23._8_8_;
  dVar3 = auVar17._0_8_ + auVar17._0_8_;
  uVar21 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar19._8_4_ = SUB84(dVar3,0);
  auVar19._0_8_ = dVar2;
  auVar19._12_4_ = uVar21;
  auVar16._8_4_ = SUB84(dVar3,0);
  auVar16._0_8_ = dVar2;
  auVar16._12_4_ = uVar21;
  auVar17 = blendpd(auVar16,auVar25,2);
  auVar24 = blendpd(auVar13,auVar1,2);
  auVar20._0_8_ = auVar19._8_8_ * auVar13._0_8_ - auVar13._8_8_ * dVar2;
  auVar20._8_8_ = auVar25._0_8_ * auVar13._8_8_ - dVar4 * dVar3;
  auVar15._8_4_ = SUB84(auVar20._8_8_,0);
  auVar15._0_8_ = auVar20._0_8_;
  auVar15._12_4_ = (int)((ulonglong)auVar20._8_8_ >> 0x20);
  auVar18._0_8_ = auVar17._0_8_ * dVar4 - auVar24._0_8_ * auVar25._0_8_;
  auVar18._8_8_ = auVar17._8_8_ * auVar1._8_8_ - auVar24._8_8_ * auVar25._8_8_;
  dVar12 = (this->Translation).ZW.m128d_f64[0];
  auVar9._4_8_ = auVar18._0_8_;
  auVar9._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
  auVar14._0_8_ = auVar9._0_8_ << 0x20;
  auVar14._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar14._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar13 = blendpd(auVar20,auVar18,2);
  dVar4 = dVar3 * dVar10 + dVar6 + auVar18._0_8_ + (this->Translation).XY.m128d_f64[1] * dVar11;
  auVar1._8_4_ = SUB84(dVar4,0);
  auVar1._0_8_ = dVar2 * dVar10 + dVar5 + auVar15._8_8_ +
                 (this->Translation).XY.m128d_f64[0] * dVar11;
  auVar1._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       auVar25._0_8_ * dVar10 + dVar7 + auVar13._0_8_ + dVar12 * dVar11;
  (__return_storage_ptr__->field0_0x0)._s_0.W =
       auVar25._8_8_ * dVar10 + dVar8 + auVar13._8_8_ + auVar14._8_8_ * dVar11;
  return __return_storage_ptr__;
}

// TransformFVector4NoScale @ 141808790

TVector4<float> * __thiscall
UE::Math::TTransform<float>::TransformFVector4NoScale
          (TTransform<float> *this,TVector4<float> *__return_storage_ptr__,TVector4<float> *param_1)

{
  TVector4<float>_u_0_s_0 TVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  undefined1 auVar12 [16];
  float fVar15;
  
  TVar1 = (param_1->field0_0x0)._s_0;
  fVar2 = TVar1.W;
  fVar3 = (this->Rotation).m128_f32[0];
  fVar4 = (this->Rotation).m128_f32[1];
  fVar5 = (this->Rotation).m128_f32[2];
  fVar6 = (this->Rotation).m128_f32[3];
  auVar12 = insertps((undefined1  [16])TVar1,(undefined1  [16])TVar1,8);
  fVar11 = auVar12._0_4_;
  fVar13 = auVar12._4_4_;
  fVar14 = auVar12._8_4_;
  fVar15 = auVar12._12_4_;
  fVar7 = fVar13 * fVar3 - fVar4 * fVar11;
  fVar8 = fVar14 * fVar4 - fVar5 * fVar13;
  fVar9 = fVar11 * fVar5 - fVar3 * fVar14;
  fVar10 = fVar15 * fVar6 - fVar6 * fVar15;
  fVar8 = fVar8 + fVar8;
  fVar9 = fVar9 + fVar9;
  fVar7 = fVar7 + fVar7;
  fVar10 = fVar10 + fVar10;
  auVar12 = blendps((undefined1  [16])this->Translation,
                    (undefined1  [16])GlobalVectorConstants::FloatOne,8);
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       fVar6 * fVar8 + fVar11 + (fVar7 * fVar4 - fVar9 * fVar5) + auVar12._0_4_ * fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       fVar6 * fVar9 + fVar13 + (fVar8 * fVar5 - fVar7 * fVar3) + auVar12._4_4_ * fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       fVar6 * fVar7 + fVar14 + (fVar9 * fVar3 - fVar8 * fVar4) + auVar12._8_4_ * fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.W =
       fVar6 * fVar10 + fVar15 + (fVar10 * fVar6 - fVar10 * fVar6) + auVar12._12_4_ * fVar2;
  return __return_storage_ptr__;
}

// TransformFVector4NoScale @ 141808820

TVector4<double> * __thiscall
UE::Math::TTransform<double>::TransformFVector4NoScale
          (TTransform<double> *this,TVector4<double> *__return_storage_ptr__,
          TVector4<double> *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [12];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined4 uVar19;
  double dVar22;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  auVar1 = *(undefined1 (*) [16])(this->Rotation).ZW.m128d_f64;
  auVar11 = *(undefined1 (*) [16])(this->Rotation).XY.m128d_f64;
  auVar2 = *(undefined1 (*) [16])&param_1->field0_0x0;
  dVar7 = (this->Rotation).ZW.m128d_f64[1];
  dVar8 = (param_1->field0_0x0)._s_0.Z;
  dVar9 = (param_1->field0_0x0)._s_0.W;
  dVar22 = auVar2._8_8_;
  dVar5 = auVar1._0_8_;
  auVar12 = blendpd(auVar11,auVar1,2);
  auVar20._0_8_ = dVar22 * auVar11._0_8_ - auVar11._8_8_ * auVar2._0_8_;
  auVar20._8_8_ = dVar8 * auVar11._8_8_ - dVar5 * dVar22;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = dVar8;
  auVar11 = blendpd(auVar2,auVar11,2);
  auVar13._0_8_ = auVar11._0_8_ * dVar5 - auVar12._0_8_ * dVar8;
  auVar13._8_8_ = auVar11._8_8_ * auVar1._8_8_ - auVar12._8_8_ * 0.0;
  auVar11 = *(undefined1 (*) [16])(this->Rotation).XY.m128d_f64;
  auVar12 = blendpd(auVar20,auVar13,2);
  auVar21._0_8_ = auVar12._0_8_ + auVar12._0_8_;
  auVar21._8_8_ = auVar12._8_8_ + auVar12._8_8_;
  dVar3 = auVar20._8_8_ + auVar20._8_8_;
  dVar4 = auVar13._0_8_ + auVar13._0_8_;
  uVar19 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar17._8_4_ = SUB84(dVar4,0);
  auVar17._0_8_ = dVar3;
  auVar17._12_4_ = uVar19;
  auVar14._8_4_ = SUB84(dVar4,0);
  auVar14._0_8_ = dVar3;
  auVar14._12_4_ = uVar19;
  auVar15 = blendpd(auVar14,auVar21,2);
  auVar13 = blendpd(auVar11,auVar1,2);
  auVar18._0_8_ = auVar17._8_8_ * auVar11._0_8_ - auVar11._8_8_ * dVar3;
  auVar18._8_8_ = auVar21._0_8_ * auVar11._8_8_ - dVar5 * dVar4;
  auVar12._8_4_ = SUB84(auVar18._8_8_,0);
  auVar12._0_8_ = auVar18._0_8_;
  auVar12._12_4_ = (int)((ulonglong)auVar18._8_8_ >> 0x20);
  auVar16._0_8_ = auVar15._0_8_ * dVar5 - auVar13._0_8_ * auVar21._0_8_;
  auVar16._8_8_ = auVar15._8_8_ * auVar1._8_8_ - auVar13._8_8_ * auVar21._8_8_;
  dVar10 = (this->Translation).ZW.m128d_f64[0];
  auVar6._4_8_ = auVar16._0_8_;
  auVar6._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
  auVar15._0_8_ = auVar6._0_8_ << 0x20;
  auVar15._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar15._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar11 = blendpd(auVar18,auVar16,2);
  dVar5 = dVar4 * dVar7 + dVar22 + auVar16._0_8_ + (this->Translation).XY.m128d_f64[1] * dVar9;
  auVar1._8_4_ = SUB84(dVar5,0);
  auVar1._0_8_ = dVar3 * dVar7 + auVar2._0_8_ + auVar12._8_8_ +
                 (this->Translation).XY.m128d_f64[0] * dVar9;
  auVar1._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       auVar21._0_8_ * dVar7 + dVar8 + auVar11._0_8_ + dVar10 * dVar9;
  (__return_storage_ptr__->field0_0x0)._s_0.W =
       auVar21._8_8_ * dVar7 + 0.0 + auVar11._8_8_ + auVar15._8_8_ * dVar9;
  return __return_storage_ptr__;
}

// TransformPosition @ 141808ac0

TVector<float> * __thiscall
UE::Math::TTransform<float>::TransformPosition
          (TTransform<float> *this,TVector<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar1 = (this->Rotation).m128_f32[0];
  fVar2 = (this->Rotation).m128_f32[1];
  fVar3 = (this->Rotation).m128_f32[2];
  fVar4 = (this->Rotation).m128_f32[3];
  fVar9 = (float)*(undefined8 *)&param_1->field0_0x0 * (this->Scale3D).m128_f32[0];
  fVar10 = (float)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20) *
           (this->Scale3D).m128_f32[1];
  fVar11 = (param_1->field0_0x0)._s_0.Z * (this->Scale3D).m128_f32[2];
  fVar6 = fVar10 * fVar1 - fVar2 * fVar9;
  fVar7 = fVar11 * fVar2 - fVar3 * fVar10;
  fVar8 = fVar9 * fVar3 - fVar1 * fVar11;
  fVar7 = fVar7 + fVar7;
  fVar8 = fVar8 + fVar8;
  fVar6 = fVar6 + fVar6;
  fVar5 = (this->Translation).m128_f32[2];
  *(ulonglong *)&__return_storage_ptr__->field0_0x0 =
       CONCAT44(fVar4 * fVar8 + fVar10 + (fVar7 * fVar3 - fVar6 * fVar1) +
                (this->Translation).m128_f32[1],
                fVar4 * fVar7 + fVar9 + (fVar6 * fVar2 - fVar8 * fVar3) +
                (this->Translation).m128_f32[0]);
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       fVar4 * fVar6 + fVar11 + (fVar8 * fVar1 - fVar7 * fVar2) + fVar5;
  return __return_storage_ptr__;
}

// TransformPosition @ 141808b40

TVector<double> * __thiscall
UE::Math::TTransform<double>::TransformPosition
          (TTransform<double> *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1
          )

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  auVar1 = *(undefined1 (*) [16])(this->Rotation).ZW.m128d_f64;
  auVar10 = *(undefined1 (*) [16])(this->Rotation).XY.m128d_f64;
  dVar8 = (this->Rotation).ZW.m128d_f64[1];
  dVar4 = (param_1->field0_0x0)._s_0.X * (this->Scale3D).XY.m128d_f64[0];
  dVar5 = (param_1->field0_0x0)._s_0.Y * (this->Scale3D).XY.m128d_f64[1];
  uVar17 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar18._8_4_ = SUB84(dVar5,0);
  auVar18._0_8_ = dVar4;
  auVar18._12_4_ = uVar17;
  dVar6 = (param_1->field0_0x0)._s_0.Z * (this->Scale3D).ZW.m128d_f64[0];
  dVar7 = (this->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar12 = blendpd(auVar10,auVar1,2);
  dVar3 = auVar1._0_8_;
  auVar19._0_8_ = auVar18._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar4;
  auVar19._8_8_ = dVar6 * auVar10._8_8_ - dVar3 * dVar5;
  auVar20._8_4_ = SUB84(dVar5,0);
  auVar20._0_8_ = dVar4;
  auVar20._12_4_ = uVar17;
  auVar10._8_4_ = SUB84(dVar7,0);
  auVar10._0_8_ = dVar6;
  auVar10._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar10 = blendpd(auVar20,auVar10,2);
  auVar11._0_8_ = auVar10._0_8_ * dVar3 - auVar12._0_8_ * dVar6;
  auVar11._8_8_ = auVar10._8_8_ * auVar1._8_8_ - auVar12._8_8_ * dVar7;
  auVar10 = *(undefined1 (*) [16])(this->Rotation).XY.m128d_f64;
  auVar20 = blendpd(auVar19,auVar11,2);
  auVar21._0_8_ = auVar20._0_8_ + auVar20._0_8_;
  auVar21._8_8_ = auVar20._8_8_ + auVar20._8_8_;
  dVar7 = auVar19._8_8_ + auVar19._8_8_;
  dVar2 = auVar11._0_8_ + auVar11._0_8_;
  uVar17 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar15._8_4_ = SUB84(dVar2,0);
  auVar15._0_8_ = dVar7;
  auVar15._12_4_ = uVar17;
  auVar13._8_4_ = SUB84(dVar2,0);
  auVar13._0_8_ = dVar7;
  auVar13._12_4_ = uVar17;
  auVar20 = blendpd(auVar13,auVar21,2);
  auVar16._0_8_ = auVar15._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar7;
  auVar16._8_8_ = auVar21._0_8_ * auVar10._8_8_ - dVar3 * dVar2;
  auVar12._8_4_ = SUB84(auVar16._8_8_,0);
  auVar12._0_8_ = auVar16._0_8_;
  auVar12._12_4_ = (int)((ulonglong)auVar16._8_8_ >> 0x20);
  auVar10 = blendpd(auVar10,auVar1,2);
  dVar9 = (this->Translation).ZW.m128d_f64[0];
  auVar14._0_8_ = auVar20._0_8_ * dVar3 - auVar10._0_8_ * auVar21._0_8_;
  auVar14._8_8_ = auVar20._8_8_ * auVar1._8_8_ - auVar10._8_8_ * auVar21._8_8_;
  auVar10 = blendpd(auVar16,auVar14,2);
  dVar3 = dVar2 * dVar8 + dVar5 + auVar14._0_8_ + (this->Translation).XY.m128d_f64[1];
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar7 * dVar8 + dVar4 + auVar12._8_8_ + (this->Translation).XY.m128d_f64[0];
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       auVar21._0_8_ * dVar8 + dVar6 + auVar10._0_8_ + dVar9;
  return __return_storage_ptr__;
}

// TransformPositionNoScale @ 141808c80

TVector<float> * __thiscall
UE::Math::TTransform<float>::TransformPositionNoScale
          (TTransform<float> *this,TVector<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar2 = (this->Rotation).m128_f32[0];
  fVar3 = (this->Rotation).m128_f32[1];
  fVar4 = (this->Rotation).m128_f32[2];
  fVar5 = (this->Rotation).m128_f32[3];
  fVar1 = (param_1->field0_0x0)._s_0.Z;
  fVar10 = (float)*(undefined8 *)&param_1->field0_0x0;
  fVar11 = (float)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20);
  fVar7 = fVar11 * fVar2 - fVar3 * fVar10;
  fVar8 = fVar1 * fVar3 - fVar4 * fVar11;
  fVar9 = fVar10 * fVar4 - fVar2 * fVar1;
  fVar8 = fVar8 + fVar8;
  fVar9 = fVar9 + fVar9;
  fVar7 = fVar7 + fVar7;
  fVar6 = (this->Translation).m128_f32[2];
  *(ulonglong *)&__return_storage_ptr__->field0_0x0 =
       CONCAT44(fVar5 * fVar9 + fVar11 + (fVar8 * fVar4 - fVar7 * fVar2) +
                (this->Translation).m128_f32[1],
                fVar5 * fVar8 + fVar10 + (fVar7 * fVar3 - fVar9 * fVar4) +
                (this->Translation).m128_f32[0]);
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       fVar5 * fVar7 + fVar1 + (fVar9 * fVar2 - fVar8 * fVar3) + fVar6;
  return __return_storage_ptr__;
}

// TransformPositionNoScale @ 141808cf0

TVector<double> * __thiscall
UE::Math::TTransform<double>::TransformPositionNoScale
          (TTransform<double> *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1
          )

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar16;
  double dVar19;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  auVar2 = *(undefined1 (*) [16])(this->Rotation).ZW.m128d_f64;
  auVar9 = *(undefined1 (*) [16])(this->Rotation).XY.m128d_f64;
  auVar3 = *(undefined1 (*) [16])&param_1->field0_0x0;
  dVar7 = (this->Rotation).ZW.m128d_f64[1];
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar19 = auVar3._8_8_;
  dVar6 = auVar2._0_8_;
  auVar10 = blendpd(auVar9,auVar2,2);
  auVar17._0_8_ = dVar19 * auVar9._0_8_ - auVar9._8_8_ * auVar3._0_8_;
  auVar17._8_8_ = dVar1 * auVar9._8_8_ - dVar6 * dVar19;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar1;
  auVar9 = blendpd(auVar3,auVar9,2);
  auVar12._0_8_ = auVar9._0_8_ * dVar6 - auVar10._0_8_ * dVar1;
  auVar12._8_8_ = auVar9._8_8_ * auVar2._8_8_ - auVar10._8_8_ * 0.0;
  auVar9 = *(undefined1 (*) [16])(this->Rotation).XY.m128d_f64;
  auVar10 = blendpd(auVar17,auVar12,2);
  auVar18._0_8_ = auVar10._0_8_ + auVar10._0_8_;
  auVar18._8_8_ = auVar10._8_8_ + auVar10._8_8_;
  dVar4 = auVar17._8_8_ + auVar17._8_8_;
  dVar5 = auVar12._0_8_ + auVar12._0_8_;
  uVar16 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar14._8_4_ = SUB84(dVar5,0);
  auVar14._0_8_ = dVar4;
  auVar14._12_4_ = uVar16;
  auVar11._8_4_ = SUB84(dVar5,0);
  auVar11._0_8_ = dVar4;
  auVar11._12_4_ = uVar16;
  auVar12 = blendpd(auVar11,auVar18,2);
  auVar15._0_8_ = auVar14._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar4;
  auVar15._8_8_ = auVar18._0_8_ * auVar9._8_8_ - dVar6 * dVar5;
  auVar10._8_4_ = SUB84(auVar15._8_8_,0);
  auVar10._0_8_ = auVar15._0_8_;
  auVar10._12_4_ = (int)((ulonglong)auVar15._8_8_ >> 0x20);
  auVar9 = blendpd(auVar9,auVar2,2);
  dVar8 = (this->Translation).ZW.m128d_f64[0];
  auVar13._0_8_ = auVar12._0_8_ * dVar6 - auVar9._0_8_ * auVar18._0_8_;
  auVar13._8_8_ = auVar12._8_8_ * auVar2._8_8_ - auVar9._8_8_ * auVar18._8_8_;
  auVar9 = blendpd(auVar15,auVar13,2);
  dVar6 = dVar5 * dVar7 + dVar19 + auVar13._0_8_ + (this->Translation).XY.m128d_f64[1];
  auVar2._8_4_ = SUB84(dVar6,0);
  auVar2._0_8_ = dVar4 * dVar7 + auVar3._0_8_ + auVar10._8_8_ + (this->Translation).XY.m128d_f64[0];
  auVar2._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar18._0_8_ * dVar7 + dVar1 + auVar9._0_8_ + dVar8
  ;
  return __return_storage_ptr__;
}

// TransformRotation @ 141808e20

TQuat<float> * __thiscall
UE::Math::TTransform<float>::TransformRotation
          (TTransform<float> *this,TQuat<float> *__return_storage_ptr__,TQuat<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar10 = (this->Rotation).m128_f32[0];
  fVar11 = (this->Rotation).m128_f32[1];
  fVar12 = (this->Rotation).m128_f32[2];
  fVar13 = (this->Rotation).m128_f32[3];
  fVar14 = param_1->X;
  fVar15 = param_1->Y;
  fVar16 = param_1->Z;
  fVar17 = param_1->W;
  fVar1 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1];
  fVar4 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2];
  fVar7 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3];
  fVar2 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1];
  fVar5 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2];
  fVar8 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3];
  fVar3 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
  fVar6 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
  fVar9 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
  __return_storage_ptr__->X =
       fVar17 * fVar10 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] + fVar13 * fVar14 +
       fVar16 * fVar11 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
       fVar15 * fVar12 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
  __return_storage_ptr__->Y =
       fVar16 * fVar10 * fVar1 + fVar13 * fVar15 + fVar17 * fVar11 * fVar2 + fVar14 * fVar12 * fVar3
  ;
  __return_storage_ptr__->Z =
       fVar15 * fVar10 * fVar4 + fVar13 * fVar16 + fVar14 * fVar11 * fVar5 + fVar17 * fVar12 * fVar6
  ;
  __return_storage_ptr__->W =
       fVar14 * fVar10 * fVar7 + fVar13 * fVar17 + fVar15 * fVar11 * fVar8 + fVar16 * fVar12 * fVar9
  ;
  return __return_storage_ptr__;
}

// TransformRotation @ 141808e90

TQuat<double> * __thiscall
UE::Math::TTransform<double>::TransformRotation
          (TTransform<double> *this,TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar3 = param_1->Z;
  dVar7 = param_1->W;
  dVar8 = param_1->X;
  dVar9 = param_1->Y;
  dVar10 = (this->Rotation).XY.m128d_f64[0];
  dVar11 = (this->Rotation).XY.m128d_f64[1];
  dVar12 = (this->Rotation).ZW.m128d_f64[0];
  dVar13 = (this->Rotation).ZW.m128d_f64[1];
  dVar5 = dVar10 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          dVar13 * dVar3 +
          dVar11 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          dVar12 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar6 = dVar10 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar13 * dVar7 +
          dVar11 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar12 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar2 = dVar10 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          dVar13 * dVar8 +
          dVar11 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          dVar12 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar3 = dVar10 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar13 * dVar9 +
          dVar11 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar12 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  __return_storage_ptr__->X = dVar2;
  __return_storage_ptr__->Y = (double)auVar1._8_8_;
  auVar4._8_4_ = SUB84(dVar6,0);
  auVar4._0_8_ = dVar5;
  auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  __return_storage_ptr__->Z = dVar5;
  __return_storage_ptr__->W = (double)auVar4._8_8_;
  return __return_storage_ptr__;
}

// TransformVector @ 1418090e0

TVector<float> * __thiscall
UE::Math::TTransform<float>::TransformVector
          (TTransform<float> *this,TVector<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = (this->Rotation).m128_f32[0];
  fVar2 = (this->Rotation).m128_f32[1];
  fVar3 = (this->Rotation).m128_f32[2];
  fVar4 = (this->Rotation).m128_f32[3];
  fVar8 = (float)*(undefined8 *)&param_1->field0_0x0 * (this->Scale3D).m128_f32[0];
  fVar9 = (float)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20) *
          (this->Scale3D).m128_f32[1];
  fVar10 = (param_1->field0_0x0)._s_0.Z * (this->Scale3D).m128_f32[2];
  fVar5 = fVar9 * fVar1 - fVar2 * fVar8;
  fVar6 = fVar10 * fVar2 - fVar3 * fVar9;
  fVar7 = fVar8 * fVar3 - fVar1 * fVar10;
  fVar6 = fVar6 + fVar6;
  fVar7 = fVar7 + fVar7;
  fVar5 = fVar5 + fVar5;
  *(ulonglong *)&__return_storage_ptr__->field0_0x0 =
       CONCAT44(fVar4 * fVar7 + fVar9 + (fVar6 * fVar3 - fVar5 * fVar1),
                fVar4 * fVar6 + fVar8 + (fVar5 * fVar2 - fVar7 * fVar3));
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       fVar4 * fVar5 + fVar10 + (fVar7 * fVar1 - fVar6 * fVar2);
  return __return_storage_ptr__;
}

// TransformVector @ 141809150

TVector<double> * __thiscall
UE::Math::TTransform<double>::TransformVector
          (TTransform<double> *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1
          )

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  auVar1 = *(undefined1 (*) [16])(this->Rotation).ZW.m128d_f64;
  auVar9 = *(undefined1 (*) [16])(this->Rotation).XY.m128d_f64;
  dVar8 = (this->Rotation).ZW.m128d_f64[1];
  dVar4 = (param_1->field0_0x0)._s_0.X * (this->Scale3D).XY.m128d_f64[0];
  dVar5 = (param_1->field0_0x0)._s_0.Y * (this->Scale3D).XY.m128d_f64[1];
  uVar16 = (undefined4)((ulonglong)dVar5 >> 0x20);
  dVar6 = (param_1->field0_0x0)._s_0.Z * (this->Scale3D).ZW.m128d_f64[0];
  dVar7 = (this->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar11 = blendpd(auVar9,auVar1,2);
  auVar17._8_4_ = SUB84(dVar5,0);
  auVar17._0_8_ = dVar4;
  auVar17._12_4_ = uVar16;
  dVar3 = auVar1._0_8_;
  auVar18._0_8_ = auVar17._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar4;
  auVar18._8_8_ = dVar6 * auVar9._8_8_ - dVar3 * dVar5;
  auVar19._8_4_ = SUB84(dVar5,0);
  auVar19._0_8_ = dVar4;
  auVar19._12_4_ = uVar16;
  auVar9._8_4_ = SUB84(dVar7,0);
  auVar9._0_8_ = dVar6;
  auVar9._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar9 = blendpd(auVar19,auVar9,2);
  auVar10._0_8_ = auVar9._0_8_ * dVar3 - auVar11._0_8_ * dVar6;
  auVar10._8_8_ = auVar9._8_8_ * auVar1._8_8_ - auVar11._8_8_ * dVar7;
  auVar9 = *(undefined1 (*) [16])(this->Rotation).XY.m128d_f64;
  auVar19 = blendpd(auVar18,auVar10,2);
  auVar20._0_8_ = auVar19._0_8_ + auVar19._0_8_;
  auVar20._8_8_ = auVar19._8_8_ + auVar19._8_8_;
  dVar7 = auVar18._8_8_ + auVar18._8_8_;
  dVar2 = auVar10._0_8_ + auVar10._0_8_;
  uVar16 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar14._8_4_ = SUB84(dVar2,0);
  auVar14._0_8_ = dVar7;
  auVar14._12_4_ = uVar16;
  auVar12._8_4_ = SUB84(dVar2,0);
  auVar12._0_8_ = dVar7;
  auVar12._12_4_ = uVar16;
  auVar19 = blendpd(auVar12,auVar20,2);
  auVar15._0_8_ = auVar14._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar7;
  auVar15._8_8_ = auVar20._0_8_ * auVar9._8_8_ - dVar3 * dVar2;
  auVar11._8_4_ = SUB84(auVar15._8_8_,0);
  auVar11._0_8_ = auVar15._0_8_;
  auVar11._12_4_ = (int)((ulonglong)auVar15._8_8_ >> 0x20);
  auVar9 = blendpd(auVar9,auVar1,2);
  auVar13._0_8_ = auVar19._0_8_ * dVar3 - auVar9._0_8_ * auVar20._0_8_;
  auVar13._8_8_ = auVar19._8_8_ * auVar1._8_8_ - auVar9._8_8_ * auVar20._8_8_;
  auVar9 = blendpd(auVar15,auVar13,2);
  dVar3 = dVar2 * dVar8 + dVar5 + auVar13._0_8_;
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar7 * dVar8 + dVar4 + auVar11._8_8_;
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar20._0_8_ * dVar8 + dVar6 + auVar9._0_8_;
  return __return_storage_ptr__;
}

// TransformVectorNoScale @ 141809280

TVector<float> * __thiscall
UE::Math::TTransform<float>::TransformVectorNoScale
          (TTransform<float> *this,TVector<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar2 = (this->Rotation).m128_f32[0];
  fVar3 = (this->Rotation).m128_f32[1];
  fVar4 = (this->Rotation).m128_f32[2];
  fVar5 = (this->Rotation).m128_f32[3];
  fVar1 = (param_1->field0_0x0)._s_0.Z;
  fVar9 = (float)*(undefined8 *)&param_1->field0_0x0;
  fVar10 = (float)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20);
  fVar6 = fVar10 * fVar2 - fVar3 * fVar9;
  fVar7 = fVar1 * fVar3 - fVar4 * fVar10;
  fVar8 = fVar9 * fVar4 - fVar2 * fVar1;
  fVar7 = fVar7 + fVar7;
  fVar8 = fVar8 + fVar8;
  fVar6 = fVar6 + fVar6;
  *(ulonglong *)&__return_storage_ptr__->field0_0x0 =
       CONCAT44(fVar5 * fVar8 + fVar10 + (fVar7 * fVar4 - fVar6 * fVar2),
                fVar5 * fVar7 + fVar9 + (fVar6 * fVar3 - fVar8 * fVar4));
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       fVar5 * fVar6 + fVar1 + (fVar8 * fVar2 - fVar7 * fVar3);
  return __return_storage_ptr__;
}

// TransformVectorNoScale @ 1418092f0

TVector<double> * __thiscall
UE::Math::TTransform<double>::TransformVectorNoScale
          (TTransform<double> *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1
          )

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uVar15;
  double dVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  auVar2 = *(undefined1 (*) [16])(this->Rotation).ZW.m128d_f64;
  auVar8 = *(undefined1 (*) [16])(this->Rotation).XY.m128d_f64;
  auVar3 = *(undefined1 (*) [16])&param_1->field0_0x0;
  dVar7 = (this->Rotation).ZW.m128d_f64[1];
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar18 = auVar3._8_8_;
  dVar6 = auVar2._0_8_;
  auVar9 = blendpd(auVar8,auVar2,2);
  auVar16._0_8_ = dVar18 * auVar8._0_8_ - auVar8._8_8_ * auVar3._0_8_;
  auVar16._8_8_ = dVar1 * auVar8._8_8_ - dVar6 * dVar18;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar1;
  auVar8 = blendpd(auVar3,auVar8,2);
  auVar11._0_8_ = auVar8._0_8_ * dVar6 - auVar9._0_8_ * dVar1;
  auVar11._8_8_ = auVar8._8_8_ * auVar2._8_8_ - auVar9._8_8_ * 0.0;
  auVar8 = *(undefined1 (*) [16])(this->Rotation).XY.m128d_f64;
  auVar9 = blendpd(auVar16,auVar11,2);
  auVar17._0_8_ = auVar9._0_8_ + auVar9._0_8_;
  auVar17._8_8_ = auVar9._8_8_ + auVar9._8_8_;
  dVar4 = auVar16._8_8_ + auVar16._8_8_;
  dVar5 = auVar11._0_8_ + auVar11._0_8_;
  uVar15 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar13._8_4_ = SUB84(dVar5,0);
  auVar13._0_8_ = dVar4;
  auVar13._12_4_ = uVar15;
  auVar10._8_4_ = SUB84(dVar5,0);
  auVar10._0_8_ = dVar4;
  auVar10._12_4_ = uVar15;
  auVar11 = blendpd(auVar10,auVar17,2);
  auVar14._0_8_ = auVar13._8_8_ * auVar8._0_8_ - auVar8._8_8_ * dVar4;
  auVar14._8_8_ = auVar17._0_8_ * auVar8._8_8_ - dVar6 * dVar5;
  auVar9._8_4_ = SUB84(auVar14._8_8_,0);
  auVar9._0_8_ = auVar14._0_8_;
  auVar9._12_4_ = (int)((ulonglong)auVar14._8_8_ >> 0x20);
  auVar8 = blendpd(auVar8,auVar2,2);
  auVar12._0_8_ = auVar11._0_8_ * dVar6 - auVar8._0_8_ * auVar17._0_8_;
  auVar12._8_8_ = auVar11._8_8_ * auVar2._8_8_ - auVar8._8_8_ * auVar17._8_8_;
  auVar8 = blendpd(auVar14,auVar12,2);
  dVar6 = dVar5 * dVar7 + dVar18 + auVar12._0_8_;
  auVar2._8_4_ = SUB84(dVar6,0);
  auVar2._0_8_ = dVar4 * dVar7 + auVar3._0_8_ + auVar9._8_8_;
  auVar2._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar17._0_8_ * dVar7 + dVar1 + auVar8._0_8_;
  return __return_storage_ptr__;
}

// TranslationEquals @ 141809410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Math::TTransform<float>::TranslationEquals
          (TTransform<float> *this,TTransform<float> *param_1,float param_2)

{
  undefined1 auVar1 [16];
  undefined4 in_EAX;
  int iVar2;
  
  auVar1._4_4_ = -(uint)(param_2 <
                        (float)((uint)((this->Translation).m128_f32[1] -
                                      (param_1->Translation).m128_f32[1]) & _UNK_15061cc74));
  auVar1._0_4_ = -(uint)(param_2 <
                        (float)((uint)((this->Translation).m128_f32[0] -
                                      (param_1->Translation).m128_f32[0]) &
                               __xmm_7fffffff7fffffff7fffffff7fffffff));
  auVar1._8_4_ = -(uint)(param_2 <
                        (float)((uint)((this->Translation).m128_f32[2] -
                                      (param_1->Translation).m128_f32[2]) & _UNK_15061cc78));
  auVar1._12_4_ =
       -(uint)(param_2 <
              (float)((uint)((this->Translation).m128_f32[3] - (param_1->Translation).m128_f32[3]) &
                     _UNK_15061cc7c));
  iVar2 = movmskps(in_EAX,auVar1);
  return iVar2 == 0;
}

// TranslationEquals @ 141809440

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Math::TTransform<double>::TranslationEquals
          (TTransform<double> *this,TTransform<double> *param_1,double param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar6 = (this->Translation).ZW.m128d_f64[0] - (param_1->Translation).ZW.m128d_f64[0];
  dVar7 = (this->Translation).ZW.m128d_f64[1] - (param_1->Translation).ZW.m128d_f64[1];
  dVar8 = (this->Translation).XY.m128d_f64[0] - (param_1->Translation).XY.m128d_f64[0];
  dVar9 = (this->Translation).XY.m128d_f64[1] - (param_1->Translation).XY.m128d_f64[1];
  lVar5 = -(ulonglong)
           (param_2 <
           (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & _UNK_15061cc8c,
                            SUB84(dVar7,0) & _UNK_15061cc88));
  auVar1._8_4_ = (int)lVar5;
  auVar1._0_8_ = -(ulonglong)
                  (param_2 <
                  (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar1._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
  uVar4 = movmskpd((int)this,auVar1);
  lVar5 = -(ulonglong)
           (param_2 <
           (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & _UNK_15061cc8c,
                            SUB84(dVar9,0) & _UNK_15061cc88));
  auVar2._8_4_ = (int)lVar5;
  auVar2._0_8_ = -(ulonglong)
                  (param_2 <
                  (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar2._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
  iVar3 = movmskpd(in_EAX,auVar2);
  return (uVar4 & 0x3fffffff) == 0 && iVar3 == 0;
}

