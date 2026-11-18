// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 2

// TPlane<float> @ 14e400360

TPlane<float> * __thiscall
UE::Math::TPlane<float>::TPlane<float>
          (TPlane<float> *this,TVector<float> *param_1,TVector<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (param_1->field0_0x0)._s_0.Y;
  fVar2 = (param_1->field0_0x0)._s_0.Z;
  this->_padding_ = *(longlong *)&param_2->field0_0x0;
  fVar3 = (param_1->field0_0x0)._s_0.X;
  this->_padding_ = (int)(param_2->field0_0x0)._s_0.Z;
  this->W = fVar1 * (param_2->field0_0x0)._s_0.Y + fVar3 * (param_2->field0_0x0)._s_0.X +
            fVar2 * (param_2->field0_0x0)._s_0.Z;
  return this;
}

// TPlane<double> @ 14e4003b0

TPlane<double> * __thiscall
UE::Math::TPlane<double>::TPlane<double>
          (TPlane<double> *this,TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  this->_padding_ = (longlong)(param_2->field0_0x0)._s_0.X;
  this->_padding_ = (longlong)dVar2;
  dVar2 = (param_1->field0_0x0)._s_0.X;
  this->_padding_ = (longlong)(param_2->field0_0x0)._s_0.Z;
  this->W = dVar1 * (param_2->field0_0x0)._s_0.Y + dVar2 * (param_2->field0_0x0)._s_0.X +
            (param_1->field0_0x0)._s_0.Z * (param_2->field0_0x0)._s_0.Z;
  return this;
}

