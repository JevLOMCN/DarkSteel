// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 3

// TVolPresQuadricError<double> @ 14c6dd330

TVolPresQuadricError<double> * __thiscall
UE::Geometry::TVolPresQuadricError<double>::TVolPresQuadricError<double>
          (TVolPresQuadricError<double> *this,TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  
  TQuadricError<double>::TQuadricError<double>((TQuadricError<double> *)this,param_1,param_2);
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->PlaneData).N.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->PlaneData).N.field0_0x0._s_0.Y = dVar1;
  (this->PlaneData).N.field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  dVar1 = (param_1->field0_0x0)._s_0.Y * (param_2->field0_0x0)._s_0.Y +
          (param_1->field0_0x0)._s_0.X * (param_2->field0_0x0)._s_0.X +
          (param_1->field0_0x0)._s_0.Z * (param_2->field0_0x0)._s_0.Z;
  (this->PlaneData).Dist =
       (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        SUB84(dVar1,0) ^ (uint)__xmm_80000000000000008000000000000000);
  return this;
}

// TVolPresQuadricError<double> @ 14c6dd3b0

TVolPresQuadricError<double> * __thiscall
UE::Geometry::TVolPresQuadricError<double>::TVolPresQuadricError<double>
          (TVolPresQuadricError<double> *this,TVolPresQuadricError<double> *param_1,
          TVolPresQuadricError<double> *param_2)

{
  double dVar1;
  
  this->_padding_ = (longlong)((double)param_1->_padding_ + (double)param_2->_padding_);
  this->_padding_ = (longlong)((double)param_1->_padding_ + (double)param_2->_padding_);
  this->_padding_ = (longlong)((double)param_1->_padding_ + (double)param_2->_padding_);
  this->_padding_ = (longlong)((double)param_1->_padding_ + (double)param_2->_padding_);
  this->_padding_ = (longlong)((double)param_1->_padding_ + (double)param_2->_padding_);
  this->_padding_ = (longlong)((double)param_1->_padding_ + (double)param_2->_padding_);
  this->_padding_ = (longlong)((double)param_1->_padding_ + (double)param_2->_padding_);
  this->_padding_ = (longlong)((double)param_1->_padding_ + (double)param_2->_padding_);
  this->_padding_ = (longlong)((double)param_1->_padding_ + (double)param_2->_padding_);
  this->_padding_ = (longlong)((double)param_1->_padding_ + (double)param_2->_padding_);
  dVar1 = (param_1->PlaneData).N.field0_0x0._s_0.Y;
  (this->PlaneData).N.field0_0x0._s_0.X = (param_1->PlaneData).N.field0_0x0._s_0.X;
  (this->PlaneData).N.field0_0x0._s_0.Y = dVar1;
  (this->PlaneData).N.field0_0x0._s_0.Z = (param_1->PlaneData).N.field0_0x0._s_0.Z;
  (this->PlaneData).Dist = (param_1->PlaneData).Dist;
  (this->PlaneData).N.field0_0x0._s_0.X =
       (param_2->PlaneData).N.field0_0x0._s_0.X + (this->PlaneData).N.field0_0x0._s_0.X;
  (this->PlaneData).N.field0_0x0._s_0.Y =
       (param_2->PlaneData).N.field0_0x0._s_0.Y + (this->PlaneData).N.field0_0x0._s_0.Y;
  (this->PlaneData).N.field0_0x0._s_0.Z =
       (param_2->PlaneData).N.field0_0x0._s_0.Z + (this->PlaneData).N.field0_0x0._s_0.Z;
  (this->PlaneData).Dist = (param_2->PlaneData).Dist + (this->PlaneData).Dist;
  return this;
}

// Add @ 14c6fd970

void __thiscall
UE::Geometry::TVolPresQuadricError<double>::Add
          (TVolPresQuadricError<double> *this,double param_1,TVolPresQuadricError<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  TQuadricError<double>::Add((TQuadricError<double> *)this,param_1,(TQuadricError<double> *)param_2)
  ;
  dVar1 = (param_2->PlaneData).N.field0_0x0._s_0.Z;
  dVar2 = (param_2->PlaneData).N.field0_0x0._s_0.X;
  dVar3 = (this->PlaneData).N.field0_0x0._s_0.Z;
  dVar4 = (this->PlaneData).N.field0_0x0._s_0.X;
  (this->PlaneData).N.field0_0x0._s_0.Y =
       param_1 * (param_2->PlaneData).N.field0_0x0._s_0.Y + (this->PlaneData).N.field0_0x0._s_0.Y;
  (this->PlaneData).N.field0_0x0._s_0.Z = param_1 * dVar1 + dVar3;
  (this->PlaneData).N.field0_0x0._s_0.X = param_1 * dVar2 + dVar4;
  (this->PlaneData).Dist = param_1 * (param_2->PlaneData).Dist + (this->PlaneData).Dist;
  return;
}

