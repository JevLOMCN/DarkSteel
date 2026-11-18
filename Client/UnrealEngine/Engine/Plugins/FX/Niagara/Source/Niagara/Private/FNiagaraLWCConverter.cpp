// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// FNiagaraLWCConverter @ 149426b90

FNiagaraLWCConverter * __thiscall
FNiagaraLWCConverter::FNiagaraLWCConverter(FNiagaraLWCConverter *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (this->SystemWorldPos).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->SystemWorldPos).field0_0x0._s_0.Y = dVar2;
  (this->SystemWorldPos).field0_0x0._s_0.Z = dVar1;
  return this;
}

// ConvertSimulationPositionToWorld @ 14943e6f0

TVector<double> * __thiscall
FNiagaraLWCConverter::ConvertSimulationPositionToWorld
          (FNiagaraLWCConverter *this,TVector<double> *__return_storage_ptr__,
          FNiagaraPosition *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)(float)uVar1 + (this->SystemWorldPos).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (double)(float)((ulonglong)uVar1 >> 0x20) + (this->SystemWorldPos).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (double)*(float *)&param_1->field_0x8 + (this->SystemWorldPos).field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// ConvertSimulationToWorldMatrix @ 14943e750

/* WARNING: Removing unreachable block (ram,0x00014943e7e6) */
/* WARNING: Removing unreachable block (ram,0x00014943e7f3) */
/* WARNING: Removing unreachable block (ram,0x00014943e804) */

TMatrix<double> * __thiscall
FNiagaraLWCConverter::ConvertSimulationToWorldMatrix
          (FNiagaraLWCConverter *this,TMatrix<double> *__return_storage_ptr__,
          TMatrix<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((param_1->M[2] + 3 < __return_storage_ptr__) || (__return_storage_ptr__->M[2] + 3 < param_1))
  {
    dVar1 = param_1->M[0][1];
    dVar2 = param_1->M[0][2];
    dVar3 = param_1->M[0][3];
    __return_storage_ptr__->M[0][0] = param_1->M[0][0];
    __return_storage_ptr__->M[0][1] = dVar1;
    dVar1 = param_1->M[1][0];
    dVar4 = param_1->M[1][1];
    __return_storage_ptr__->M[0][2] = dVar2;
    __return_storage_ptr__->M[0][3] = dVar3;
    dVar2 = param_1->M[1][2];
    dVar3 = param_1->M[1][3];
    __return_storage_ptr__->M[1][0] = dVar1;
    __return_storage_ptr__->M[1][1] = dVar4;
    dVar1 = param_1->M[2][0];
    dVar4 = param_1->M[2][1];
    __return_storage_ptr__->M[1][2] = dVar2;
    __return_storage_ptr__->M[1][3] = dVar3;
    dVar2 = param_1->M[2][2];
    dVar3 = param_1->M[2][3];
    __return_storage_ptr__->M[2][0] = dVar1;
    __return_storage_ptr__->M[2][1] = dVar4;
    __return_storage_ptr__->M[2][2] = dVar2;
    __return_storage_ptr__->M[2][3] = dVar3;
  }
  else {
    pdVar5 = __return_storage_ptr__->M[0] + 1;
    lVar7 = (longlong)param_1 - (longlong)__return_storage_ptr__;
    lVar6 = 3;
    do {
      (*(double (*) [4])(pdVar5 + -1))[0] = *(double *)(lVar7 + -8 + (longlong)pdVar5);
      *pdVar5 = *(double *)(lVar7 + (longlong)pdVar5);
      pdVar5[1] = *(double *)(lVar7 + 8 + (longlong)pdVar5);
      pdVar5[2] = *(double *)(lVar7 + 0x10 + (longlong)pdVar5);
      pdVar5 = pdVar5 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  __return_storage_ptr__->M[3][0] = param_1->M[3][0] + (this->SystemWorldPos).field0_0x0._s_0.X;
  __return_storage_ptr__->M[3][1] = param_1->M[3][1] + (this->SystemWorldPos).field0_0x0._s_0.Y;
  __return_storage_ptr__->M[3][2] = param_1->M[3][2] + (this->SystemWorldPos).field0_0x0._s_0.Z;
  __return_storage_ptr__->M[3][3] = param_1->M[3][3];
  return __return_storage_ptr__;
}

// ConvertSimulationToWorldTransform @ 14943e880

TTransform<double> * __thiscall
FNiagaraLWCConverter::ConvertSimulationToWorldTransform
          (FNiagaraLWCConverter *this,TTransform<double> *__return_storage_ptr__,
          TTransform<float> *param_1)

{
  double dVar1;
  float fVar2;
  float fVar3;
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
  
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar9;
  fVar2 = (param_1->Translation).m128_f32[2];
  dVar11 = (double)(param_1->Translation).m128_f32[1] + (this->SystemWorldPos).field0_0x0._s_0.Y;
  dVar1 = (this->SystemWorldPos).field0_0x0._s_0.Z;
  auVar12._8_4_ = SUB84(dVar11,0);
  auVar12._0_8_ =
       (double)(param_1->Translation).m128_f32[0] + (this->SystemWorldPos).field0_0x0._s_0.X;
  auVar12._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar12;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)fVar2 + dVar1;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  fVar2 = (param_1->Rotation).m128_f32[2];
  fVar3 = (param_1->Rotation).m128_f32[3];
  auVar14._8_4_ = SUB84((double)(param_1->Rotation).m128_f32[1],0);
  auVar14._0_8_ = (double)(param_1->Rotation).m128_f32[0];
  auVar14._12_4_ = (int)((ulonglong)(double)(param_1->Rotation).m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar14;
  auVar13._8_4_ = SUB84((double)fVar3,0);
  auVar13._0_8_ = (double)fVar2;
  auVar13._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar13;
  fVar2 = (param_1->Scale3D).m128_f32[2];
  auVar10._8_4_ = SUB84((double)(param_1->Scale3D).m128_f32[1],0);
  auVar10._0_8_ = (double)(param_1->Scale3D).m128_f32[0];
  auVar10._12_4_ = (int)((ulonglong)(double)(param_1->Scale3D).m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar10;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
  return __return_storage_ptr__;
}

// ConvertSimulationVectorToWorld @ 14943e990

TVector<double> * __thiscall
FNiagaraLWCConverter::ConvertSimulationVectorToWorld
          (FNiagaraLWCConverter *this,TVector<double> *__return_storage_ptr__,
          TVector<float> *param_1)

{
  float fVar1;
  undefined8 uVar2;
  double dVar3;
  
  dVar3 = (this->SystemWorldPos).field0_0x0._s_0.Y;
  uVar2 = *(undefined8 *)&param_1->field0_0x0;
  fVar1 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)(float)uVar2 + (this->SystemWorldPos).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(float)((ulonglong)uVar2 >> 0x20) + dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (double)fVar1 + (this->SystemWorldPos).field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// ConvertWorldToSimulationMatrix @ 14943eaa0

/* WARNING: Removing unreachable block (ram,0x00014943eb36) */
/* WARNING: Removing unreachable block (ram,0x00014943eb43) */
/* WARNING: Removing unreachable block (ram,0x00014943eb54) */

TMatrix<double> * __thiscall
FNiagaraLWCConverter::ConvertWorldToSimulationMatrix
          (FNiagaraLWCConverter *this,TMatrix<double> *__return_storage_ptr__,
          TMatrix<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  longlong lVar9;
  longlong lVar10;
  
  dVar1 = (this->SystemWorldPos).field0_0x0._s_0.X;
  dVar2 = (this->SystemWorldPos).field0_0x0._s_0.Y;
  dVar3 = (this->SystemWorldPos).field0_0x0._s_0.Z;
  if ((param_1->M[2] + 3 < __return_storage_ptr__) || (__return_storage_ptr__->M[2] + 3 < param_1))
  {
    dVar4 = param_1->M[0][1];
    dVar5 = param_1->M[0][2];
    dVar6 = param_1->M[0][3];
    __return_storage_ptr__->M[0][0] = param_1->M[0][0];
    __return_storage_ptr__->M[0][1] = dVar4;
    dVar4 = param_1->M[1][0];
    dVar7 = param_1->M[1][1];
    __return_storage_ptr__->M[0][2] = dVar5;
    __return_storage_ptr__->M[0][3] = dVar6;
    dVar5 = param_1->M[1][2];
    dVar6 = param_1->M[1][3];
    __return_storage_ptr__->M[1][0] = dVar4;
    __return_storage_ptr__->M[1][1] = dVar7;
    dVar4 = param_1->M[2][0];
    dVar7 = param_1->M[2][1];
    __return_storage_ptr__->M[1][2] = dVar5;
    __return_storage_ptr__->M[1][3] = dVar6;
    dVar5 = param_1->M[2][2];
    dVar6 = param_1->M[2][3];
    __return_storage_ptr__->M[2][0] = dVar4;
    __return_storage_ptr__->M[2][1] = dVar7;
    __return_storage_ptr__->M[2][2] = dVar5;
    __return_storage_ptr__->M[2][3] = dVar6;
  }
  else {
    pdVar8 = __return_storage_ptr__->M[0] + 1;
    lVar10 = (longlong)param_1 - (longlong)__return_storage_ptr__;
    lVar9 = 3;
    do {
      (*(double (*) [4])(pdVar8 + -1))[0] = *(double *)(lVar10 + -8 + (longlong)pdVar8);
      *pdVar8 = *(double *)(lVar10 + (longlong)pdVar8);
      pdVar8[1] = *(double *)(lVar10 + 8 + (longlong)pdVar8);
      pdVar8[2] = *(double *)(lVar10 + 0x10 + (longlong)pdVar8);
      pdVar8 = pdVar8 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  __return_storage_ptr__->M[3][0] = param_1->M[3][0] - dVar1;
  __return_storage_ptr__->M[3][1] = param_1->M[3][1] - dVar2;
  __return_storage_ptr__->M[3][2] = param_1->M[3][2] - dVar3;
  __return_storage_ptr__->M[3][3] = param_1->M[3][3];
  return __return_storage_ptr__;
}

// ConvertWorldToSimulationPosition @ 14943ebd0

FNiagaraPosition * __thiscall
FNiagaraLWCConverter::ConvertWorldToSimulationPosition
          (FNiagaraLWCConverter *this,FNiagaraPosition *__return_storage_ptr__,
          TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar2 = (this->SystemWorldPos).field0_0x0._s_0.Z;
  dVar3 = (this->SystemWorldPos).field0_0x0._s_0.Y;
  *(float *)__return_storage_ptr__ =
       (float)((param_1->field0_0x0)._s_0.X - (this->SystemWorldPos).field0_0x0._s_0.X);
  *(float *)&__return_storage_ptr__->field_0x4 = (float)(dVar4 - dVar3);
  *(float *)&__return_storage_ptr__->field_0x8 = (float)(dVar1 - dVar2);
  return __return_storage_ptr__;
}

// ConvertWorldToSimulationTransform @ 14943ec30

TTransform<float> * __thiscall
FNiagaraLWCConverter::ConvertWorldToSimulationTransform
          (FNiagaraLWCConverter *this,TTransform<float> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  __m128 _Var1;
  __m128 _Var2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar3 = (param_1->Rotation).XY.m128d_f64[0];
  dVar4 = (param_1->Rotation).XY.m128d_f64[1];
  dVar5 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar6 = (param_1->Rotation).ZW.m128d_f64[1];
  _Var2.m128_f32[1] =
       (float)((param_1->Translation).XY.m128d_f64[1] - (this->SystemWorldPos).field0_0x0._s_0.Y);
  _Var2.m128_f32[0] =
       (float)((param_1->Translation).XY.m128d_f64[0] - (this->SystemWorldPos).field0_0x0._s_0.X);
  _Var2.m128_f32[2] =
       (float)((param_1->Translation).ZW.m128d_f64[0] - (this->SystemWorldPos).field0_0x0._s_0.Z);
  _Var2.m128_f32[3] = 0.0;
  __return_storage_ptr__->Translation = _Var2;
  _Var1.m128_f32[1] = (float)(param_1->Scale3D).XY.m128d_f64[1];
  _Var1.m128_f32[0] = (float)(param_1->Scale3D).XY.m128d_f64[0];
  _Var1.m128_f32[2] = (float)(param_1->Scale3D).ZW.m128d_f64[0];
  _Var1.m128_f32[3] = 0.0;
  __return_storage_ptr__->Scale3D = _Var1;
  (__return_storage_ptr__->Rotation).m128_f32[0] = (float)dVar3;
  (__return_storage_ptr__->Rotation).m128_f32[1] = (float)dVar4;
  (__return_storage_ptr__->Rotation).m128_f32[2] = (float)dVar5;
  (__return_storage_ptr__->Rotation).m128_f32[3] = (float)dVar6;
  return __return_storage_ptr__;
}

// ConvertWorldToSimulationVector @ 14943ed00

TVector<float> * __thiscall
FNiagaraLWCConverter::ConvertWorldToSimulationVector
          (FNiagaraLWCConverter *this,TVector<float> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar3 = (this->SystemWorldPos).field0_0x0._s_0.Y;
  dVar4 = (this->SystemWorldPos).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (float)((param_1->field0_0x0)._s_0.X - (this->SystemWorldPos).field0_0x0._s_0.X);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)(dVar1 - dVar3);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)(dVar2 - dVar4);
  return __return_storage_ptr__;
}

