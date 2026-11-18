// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// TransformByUsingAdjointT @ 144a07d40

TPlane<double> * __thiscall
UE::Math::TPlane<double>::TransformByUsingAdjointT
          (TPlane<double> *this,TPlane<double> *__return_storage_ptr__,TMatrix<double> *param_1,
          double param_2,TMatrix<double> *param_3)

{
  double dVar1;
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
  double dVar14;
  uint uVar15;
  uint uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  dVar1 = (double)this->_padding_;
  dVar19 = (double)this->_padding_;
  dVar2 = (double)this->_padding_;
  dVar4 = dVar2 * param_3->M[1][0] + dVar19 * param_3->M[0][0] + dVar1 * param_3->M[2][0] +
          param_3->M[3][0] * 0.0;
  dVar5 = dVar2 * param_3->M[1][1] + dVar19 * param_3->M[0][1] + dVar1 * param_3->M[2][1] +
          param_3->M[3][1] * 0.0;
  dVar1 = param_3->M[1][2] * dVar2 + param_3->M[0][2] * dVar19 + param_3->M[2][2] * dVar1 +
          param_3->M[3][2] * 0.0;
  dVar19 = dVar5 * dVar5 + dVar4 * dVar4 + dVar1 * dVar1;
  if (dVar19 <= __real_3e45798ee0000000) {
    dVar5 = 0.0;
    dVar1 = 0.0;
    dVar4 = 0.0;
  }
  else {
    dVar19 = __real_3ff0000000000000 / SQRT(dVar19);
    dVar5 = dVar5 * dVar19;
    dVar1 = dVar1 * dVar19;
    dVar4 = dVar4 * dVar19;
  }
  if (param_2 < 0.0) {
    uVar15 = (uint)__xmm_80000000000000008000000000000000;
    uVar16 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    dVar4 = (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) ^ uVar16,SUB84(dVar4,0) ^ uVar15);
    dVar1 = (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar16,SUB84(dVar1,0) ^ uVar15);
    dVar5 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) ^ uVar16,SUB84(dVar5,0) ^ uVar15);
  }
  dVar19 = this->W;
  dVar6 = param_1->M[0][0];
  dVar7 = param_1->M[0][1];
  dVar8 = param_1->M[1][2];
  dVar20 = dVar19 * (double)this->_padding_;
  dVar21 = dVar19 * (double)this->_padding_;
  dVar19 = dVar19 * dVar2;
  dVar9 = param_1->M[1][0];
  dVar10 = param_1->M[1][1];
  dVar11 = param_1->M[2][0];
  dVar12 = param_1->M[2][1];
  dVar17 = __real_3ff0000000000000 * param_1->M[3][0];
  dVar18 = __real_3ff0000000000000 * param_1->M[3][1];
  dVar13 = param_1->M[0][2];
  dVar14 = param_1->M[2][2];
  dVar2 = param_1->M[3][2] * __real_3ff0000000000000;
  auVar3._8_4_ = SUB84(dVar5,0);
  auVar3._0_8_ = dVar4;
  auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  __return_storage_ptr__->_padding_ = (longlong)dVar4;
  __return_storage_ptr__->_padding_ = auVar3._8_8_;
  __return_storage_ptr__->_padding_ = (longlong)dVar1;
  __return_storage_ptr__->W =
       (dVar19 * dVar10 + dVar21 * dVar7 + dVar12 * dVar20 + dVar18) * dVar5 +
       (dVar19 * dVar9 + dVar21 * dVar6 + dVar11 * dVar20 + dVar17) * dVar4 +
       (dVar8 * dVar19 + dVar13 * dVar21 + dVar14 * dVar20 + dVar2) * dVar1;
  return __return_storage_ptr__;
}

// TPlane<double> @ 144b95fc0

TPlane<double> * __thiscall
UE::Math::TPlane<double>::TPlane<double>
          (TPlane<double> *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  uVar6 = TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar10 = (param_2->field0_0x0)._s_0.Y - dVar1;
  dVar4 = (param_3->field0_0x0)._s_0.Y - dVar1;
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar9 = (param_3->field0_0x0)._s_0.X - dVar2;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  dVar11 = (param_2->field0_0x0)._s_0.X - dVar2;
  dVar8 = (param_2->field0_0x0)._s_0.Z - dVar3;
  dVar7 = (param_3->field0_0x0)._s_0.Z - dVar3;
  dVar5 = dVar9 * dVar8 - dVar7 * dVar11;
  dVar7 = dVar7 * dVar10 - dVar4 * dVar8;
  dVar4 = dVar4 * dVar11 - dVar9 * dVar10;
  dVar8 = dVar5 * dVar5 + dVar7 * dVar7 + dVar4 * dVar4;
  if (dVar8 != __real_3ff0000000000000) {
    if (dVar8 < __real_3e45798ee0000000) {
      this->_padding_ = (longlong)TVector<double>::ZeroVector.field0_0x0._s_0.X;
      this->_padding_ = uVar6;
      this->_padding_ = (longlong)TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      goto LAB_144b960e8;
    }
    dVar8 = __real_3ff0000000000000 / SQRT(dVar8);
    dVar7 = dVar7 * dVar8;
    dVar5 = dVar5 * dVar8;
    dVar4 = dVar4 * dVar8;
  }
  this->_padding_ = (longlong)dVar7;
  this->_padding_ = (longlong)dVar5;
  this->_padding_ = (longlong)dVar4;
LAB_144b960e8:
  this->W = dVar1 * (double)this->_padding_ + dVar2 * (double)this->_padding_ +
            dVar3 * (double)this->_padding_;
  return this;
}

// TransformBy @ 144be9d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TPlane<double> * __thiscall
UE::Math::TPlane<double>::TransformBy
          (TPlane<double> *this,TPlane<double> *__return_storage_ptr__,TMatrix<double> *param_1)

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
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStackY_168 [32];
  TMatrix<double> local_138;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_168;
  dVar1 = param_1->M[1][2];
  dVar2 = param_1->M[2][0];
  dVar16 = param_1->M[1][1];
  dVar3 = param_1->M[0][2];
  dVar4 = param_1->M[2][2];
  dVar5 = param_1->M[2][1];
  dVar6 = param_1->M[1][0];
  dVar7 = param_1->M[0][1];
  dVar8 = param_1->M[0][0];
  local_138.M[0][3] = 0.0;
  local_138.M[0][0] = dVar16 * dVar4 - dVar1 * dVar5;
  local_138.M[1][3] = 0.0;
  local_138.M[2][3] = 0.0;
  dVar9 = param_1->M[2][3];
  local_138.M[0][1] = dVar2 * dVar1 - dVar6 * dVar4;
  local_138.M[0][2] = dVar6 * dVar5 - dVar2 * dVar16;
  local_138.M[1][0] = dVar3 * dVar5 - dVar7 * dVar4;
  local_138.M[1][1] = dVar8 * dVar4 - dVar3 * dVar2;
  dVar10 = param_1->M[1][3];
  local_138.M[1][2] = dVar7 * dVar2 - dVar8 * dVar5;
  local_138.M[2][0] = dVar7 * dVar1 - dVar3 * dVar16;
  local_138.M[2][1] = dVar3 * dVar6 - dVar8 * dVar1;
  local_138.M[3][2] = ___xmm_3ff00000000000000000000000000000;
  local_138.M[3][3] = _UNK_15061cbc8;
  local_138.M[2][2] = dVar8 * dVar16 - dVar7 * dVar6;
  local_138.M[3][0] = 0.0;
  local_138.M[3][1] = 0.0;
  dVar2 = param_1->M[0][3];
  dVar15 = dVar10 * dVar3 - dVar2 * dVar1;
  dVar16 = param_1->M[3][2];
  dVar5 = param_1->M[3][3];
  dVar14 = dVar9 * dVar3 - dVar2 * dVar4;
  dVar11 = param_1->M[1][1];
  dVar12 = param_1->M[2][1];
  dVar13 = dVar9 * dVar1 - dVar10 * dVar4;
  dVar3 = dVar5 * dVar3 - dVar16 * dVar2;
  dVar2 = param_1->M[3][1];
  dVar1 = dVar5 * dVar1 - dVar16 * dVar10;
  dVar16 = dVar5 * dVar4 - dVar16 * dVar9;
  TransformByUsingAdjointT
            (this,__return_storage_ptr__,param_1,
             ((((dVar11 * dVar16 - dVar12 * dVar1) + dVar2 * dVar13) * dVar8 -
              ((dVar7 * dVar16 - dVar12 * dVar3) + dVar2 * dVar14) * dVar6) +
             ((dVar7 * dVar1 - dVar11 * dVar3) + dVar2 * dVar15) * param_1->M[2][0]) -
             ((dVar7 * dVar13 - dVar11 * dVar14) + dVar12 * dVar15) * param_1->M[3][0],&local_138);
  return __return_storage_ptr__;
}

