// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCore
// Functions: 2

// operator* @ 143624220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

PMatrix<float,4,4> * __thiscall
Chaos::TRigidTransform<float,3>::operator*
          (TRigidTransform<float,3> *this,PMatrix<float,4,4> *__return_storage_ptr__,
          PMatrix<float,4,4> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_108 [32];
  TMatrix<float> local_e8;
  TMatrix<float> local_a8;
  TMatrix<float> local_68;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  fVar1 = *(float *)this;
  fVar2 = *(float *)&this->field_0x4;
  fVar3 = *(float *)&this->field_0x8;
  fVar4 = *(float *)&this->field_0xc;
  fVar5 = fVar2 + fVar2;
  fVar6 = fVar3 + fVar3;
  fVar7 = (fVar1 + fVar1) * fVar1;
  local_a8.M[2][1] = fVar4 * (fVar1 + fVar1);
  local_a8.M[0][1] = fVar4 * fVar6 + fVar5 * fVar1;
  local_a8.M[1][2] = local_a8.M[2][1] + fVar6 * fVar2;
  local_a8.M[2][0] = fVar4 * fVar5 + fVar6 * fVar1;
  local_a8.M[1][0] = fVar5 * fVar1 - fVar4 * fVar6;
  local_a8.M[2][1] = fVar6 * fVar2 - local_a8.M[2][1];
  local_a8.M[0][2] = fVar6 * fVar1 - fVar4 * fVar5;
  auVar8._0_4_ = GlobalVectorConstants::FloatOne.m128_f32[0] - (fVar6 * fVar3 + fVar5 * fVar2);
  auVar8._4_4_ = GlobalVectorConstants::FloatOne.m128_f32[1] - (fVar6 * fVar3 + fVar7);
  auVar8._8_4_ = GlobalVectorConstants::FloatOne.m128_f32[2] - (fVar5 * fVar2 + fVar7);
  auVar8._12_4_ = GlobalVectorConstants::FloatOne.m128_f32[3] - (fVar7 + fVar7);
  auVar8 = insertps(auVar8,auVar8,8);
  local_a8.M[0][0] = auVar8._0_4_;
  local_a8.M[1][1] = auVar8._4_4_;
  local_a8.M[2][2] = auVar8._8_4_;
  local_a8.M[0][3] = auVar8._12_4_;
  local_e8.M[1][0] = *(float *)&param_1->field_0x10;
  local_e8.M[1][1] = *(float *)&param_1->field_0x14;
  local_e8.M[1][2] = *(float *)&param_1->field_0x18;
  local_e8.M[1][3] = *(float *)&param_1->field_0x1c;
  local_a8.M[3] =
       (float  [4])
       blendps(*(undefined1 (*) [16])&this->field_0x10,GlobalVectorConstants::FloatOne.m128_f32,8);
  local_e8.M[0][0] = *(float *)&param_1->field_0x0;
  local_e8.M[0][1] = *(float *)&param_1->field_0x4;
  local_e8.M[0][2] = *(float *)&param_1->field_0x8;
  local_e8.M[0][3] = *(float *)&param_1->field_0xc;
  local_e8.M[2][0] = *(float *)&param_1->field_0x20;
  local_e8.M[2][1] = *(float *)&param_1->field_0x24;
  local_e8.M[2][2] = *(float *)&param_1->field_0x28;
  local_e8.M[2][3] = *(float *)&param_1->field_0x2c;
  local_e8.M[3][0] = *(float *)&param_1->field_0x30;
  local_e8.M[3][1] = *(float *)&param_1->field_0x34;
  local_e8.M[3][2] = *(float *)&param_1->field_0x38;
  local_e8.M[3][3] = *(float *)&param_1->field_0x3c;
  local_a8.M[1][3] = local_a8.M[0][3];
  local_a8.M[2][3] = local_a8.M[0][3];
  VectorMatrixMultiply(&local_68,&local_a8,&local_e8);
  *(float *)&__return_storage_ptr__->field_0x0 = local_68.M[0][0];
  *(float *)&__return_storage_ptr__->field_0x4 = local_68.M[0][1];
  *(float *)&__return_storage_ptr__->field_0x8 = local_68.M[0][2];
  *(float *)&__return_storage_ptr__->field_0xc = local_68.M[0][3];
  *(float *)&__return_storage_ptr__->field_0x10 = local_68.M[1][0];
  *(float *)&__return_storage_ptr__->field_0x14 = local_68.M[1][1];
  *(float *)&__return_storage_ptr__->field_0x18 = local_68.M[1][2];
  *(float *)&__return_storage_ptr__->field_0x1c = local_68.M[1][3];
  *(float *)&__return_storage_ptr__->field_0x20 = local_68.M[2][0];
  *(float *)&__return_storage_ptr__->field_0x24 = local_68.M[2][1];
  *(float *)&__return_storage_ptr__->field_0x28 = local_68.M[2][2];
  *(float *)&__return_storage_ptr__->field_0x2c = local_68.M[2][3];
  *(float *)&__return_storage_ptr__->field_0x30 = local_68.M[3][0];
  *(float *)&__return_storage_ptr__->field_0x34 = local_68.M[3][1];
  *(float *)&__return_storage_ptr__->field_0x38 = local_68.M[3][2];
  *(float *)&__return_storage_ptr__->field_0x3c = local_68.M[3][3];
  return __return_storage_ptr__;
}

// operator* @ 143624380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

PMatrix<double,4,4> * __thiscall
Chaos::TRigidTransform<double,3>::operator*
          (TRigidTransform<double,3> *this,PMatrix<double,4,4> *__return_storage_ptr__,
          PMatrix<double,4,4> *param_1)

{
  TMatrix<double> *pTVar1;
  undefined1 auStack_1c8 [32];
  TMatrix<double> local_1a8;
  TMatrix<double> local_128;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  pTVar1 = UE::Math::TTransform<double>::ToMatrixNoScale((TTransform<double> *)this,&local_1a8);
  local_a8.M[0][0] = pTVar1->M[0][0];
  local_a8.M[0][1] = pTVar1->M[0][1];
  local_a8.M[0][2] = pTVar1->M[0][2];
  local_a8.M[0][3] = pTVar1->M[0][3];
  local_a8.M[1][0] = pTVar1->M[1][0];
  local_a8.M[1][1] = pTVar1->M[1][1];
  local_a8.M[1][2] = pTVar1->M[1][2];
  local_a8.M[1][3] = pTVar1->M[1][3];
  local_a8.M[2][0] = pTVar1->M[2][0];
  local_a8.M[2][1] = pTVar1->M[2][1];
  local_a8.M[2][2] = pTVar1->M[2][2];
  local_a8.M[2][3] = pTVar1->M[2][3];
  local_a8.M[3][0] = pTVar1->M[3][0];
  local_a8.M[3][1] = pTVar1->M[3][1];
  local_a8.M[3][2] = pTVar1->M[3][2];
  local_a8.M[3][3] = pTVar1->M[3][3];
  local_128.M[0][0] = *(double *)param_1;
  local_128.M[0][1] = *(double *)&param_1->field_0x8;
  local_128.M[0][2] = *(double *)&param_1->field_0x10;
  local_128.M[0][3] = *(double *)&param_1->field_0x18;
  local_128.M[1][2] = *(double *)&param_1->field_0x30;
  local_128.M[1][3] = *(double *)&param_1->field_0x38;
  local_128.M[1][0] = *(double *)&param_1->field_0x20;
  local_128.M[1][1] = *(double *)&param_1->field_0x28;
  local_128.M[2][2] = *(double *)&param_1->field_0x50;
  local_128.M[2][3] = *(double *)&param_1->field_0x58;
  local_128.M[2][0] = *(double *)&param_1->field_0x40;
  local_128.M[2][1] = *(double *)&param_1->field_0x48;
  local_128.M[3][2] = *(double *)&param_1->field_0x70;
  local_128.M[3][3] = *(double *)&param_1->field_0x78;
  local_128.M[3][0] = *(double *)&param_1->field_0x60;
  local_128.M[3][1] = *(double *)&param_1->field_0x68;
  VectorMatrixMultiply(&local_1a8,&local_a8,&local_128);
  *(double *)__return_storage_ptr__ = local_1a8.M[0][0];
  *(double *)&__return_storage_ptr__->field_0x8 = local_1a8.M[0][1];
  *(double *)&__return_storage_ptr__->field_0x10 = local_1a8.M[0][2];
  *(double *)&__return_storage_ptr__->field_0x18 = local_1a8.M[0][3];
  *(double *)&__return_storage_ptr__->field_0x20 = local_1a8.M[1][0];
  *(double *)&__return_storage_ptr__->field_0x28 = local_1a8.M[1][1];
  *(double *)&__return_storage_ptr__->field_0x30 = local_1a8.M[1][2];
  *(double *)&__return_storage_ptr__->field_0x38 = local_1a8.M[1][3];
  *(double *)&__return_storage_ptr__->field_0x40 = local_1a8.M[2][0];
  *(double *)&__return_storage_ptr__->field_0x48 = local_1a8.M[2][1];
  *(double *)&__return_storage_ptr__->field_0x50 = local_1a8.M[2][2];
  *(double *)&__return_storage_ptr__->field_0x58 = local_1a8.M[2][3];
  *(double *)&__return_storage_ptr__->field_0x60 = local_1a8.M[3][0];
  *(double *)&__return_storage_ptr__->field_0x68 = local_1a8.M[3][1];
  *(double *)&__return_storage_ptr__->field_0x70 = local_1a8.M[3][2];
  *(double *)&__return_storage_ptr__->field_0x78 = local_1a8.M[3][3];
  return __return_storage_ptr__;
}

