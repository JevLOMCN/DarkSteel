// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothingSystemRuntimeCommon
// Functions: 1

// TPlane<float> @ 148c18d20

TPlane<float> * __thiscall
UE::Math::TPlane<float>::TPlane<float>
          (TPlane<float> *this,TVector<float> *param_1,TVector<float> *param_2,
          TVector<float> *param_3)

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
  
  fVar1 = (param_1->field0_0x0)._s_0.Y;
  fVar7 = (param_2->field0_0x0)._s_0.Y - fVar1;
  fVar9 = (param_3->field0_0x0)._s_0.Y - fVar1;
  fVar2 = (param_1->field0_0x0)._s_0.X;
  fVar6 = (param_3->field0_0x0)._s_0.X - fVar2;
  fVar3 = (param_1->field0_0x0)._s_0.Z;
  fVar8 = (param_2->field0_0x0)._s_0.X - fVar2;
  fVar5 = (param_2->field0_0x0)._s_0.Z - fVar3;
  fVar4 = (param_3->field0_0x0)._s_0.Z - fVar3;
  fVar11 = fVar6 * fVar5 - fVar4 * fVar8;
  fVar10 = fVar4 * fVar7 - fVar9 * fVar5;
  fVar5 = fVar9 * fVar8 - fVar6 * fVar7;
  fVar4 = fVar11 * fVar11 + fVar10 * fVar10 + fVar5 * fVar5;
  if (fVar4 == __real_3f800000) {
    this->_padding_ = CONCAT44(fVar11,fVar10);
  }
  else {
    if (fVar4 < __real_322bcc77) {
      this->_padding_ = TVector<float>::ZeroVector.field0_0x0._0_8_;
      this->_padding_ = (int)TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      goto LAB_148c18e50;
    }
    fVar4 = __real_3f800000 / SQRT(fVar4);
    *(float *)&this->_padding_ = fVar10 * fVar4;
    fVar5 = fVar5 * fVar4;
    *(float *)((longlong)&this->_padding_ + 4) = fVar11 * fVar4;
  }
  this->_padding_ = (int)fVar5;
LAB_148c18e50:
  this->W = fVar1 * (float)((ulonglong)this->_padding_ >> 0x20) + fVar2 * (float)this->_padding_ +
            fVar3 * (float)this->_padding_;
  return this;
}

