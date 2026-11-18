// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 44

// TLargeWorldRenderScalar<float> @ 1418ba060

TLargeWorldRenderScalar<float> * __thiscall
TLargeWorldRenderScalar<float>::TLargeWorldRenderScalar<float>
          (TLargeWorldRenderScalar<float> *this,float param_1,float param_2)

{
  this->Tile = param_1;
  this->Offset = param_2;
  return this;
}

// TLargeWorldRenderScalar<float> @ 1418ba080

TLargeWorldRenderScalar<float> * __thiscall
TLargeWorldRenderScalar<float>::TLargeWorldRenderScalar<float>
          (TLargeWorldRenderScalar<float> *this,double param_1)

{
  undefined1 auVar1 [16];
  float fVar2;
  double local_res8;
  double local_res10 [3];
  double *local_18;
  double *local_10;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1 * __real_3ea0000000000000 + __real_3fe0000000000000;
  auVar1 = roundpd(auVar1,auVar1,1);
  this->Tile = (float)auVar1._0_8_;
  local_res10[0] = (double)(float)auVar1._0_8_ * __real_4140000000000000;
  fVar2 = (float)(param_1 - local_res10[0]);
  this->Offset = fVar2;
  local_res10[0] = (double)fVar2 + local_res10[0];
  if (__real_3fc0000000000000 <
      (double)CONCAT44((uint)((ulonglong)(local_res10[0] - param_1) >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(local_res10[0] - param_1,0) &
                       (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    local_18 = &local_res8;
    local_10 = local_res10;
    local_res8 = param_1;
    `TLargeWorldRenderScalar<float>::Validate'::__l2::<lambda_1>::operator()(&local_18);
  }
  return this;
}

// TLargeWorldRenderScalar<float> @ 1418ba130

TLargeWorldRenderScalar<float> * __thiscall
TLargeWorldRenderScalar<float>::TLargeWorldRenderScalar<float>(TLargeWorldRenderScalar<float> *this)

{
  this->Tile = 0.0;
  this->Offset = 0.0;
  return this;
}

// TLargeWorldRenderScalar<double> @ 1418ba140

TLargeWorldRenderScalar<double> * __thiscall
TLargeWorldRenderScalar<double>::TLargeWorldRenderScalar<double>
          (TLargeWorldRenderScalar<double> *this,double param_1)

{
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar1._8_4_ = in_XMM1_Dc;
  auVar1._0_8_ = param_1;
  auVar1._12_4_ = in_XMM1_Dd;
  auVar2._8_8_ = auVar1._8_8_;
  auVar2._0_8_ = param_1 * __real_3ea0000000000000 + __real_3fe0000000000000;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = auVar2._0_8_;
  auVar3 = roundpd(auVar2,auVar3,1);
  this->Tile = auVar3._0_8_;
  this->Offset = param_1 - auVar3._0_8_ * __real_4140000000000000;
  return this;
}

// TLargeWorldRenderScalar<double> @ 1418ba180

TLargeWorldRenderScalar<double> * __thiscall
TLargeWorldRenderScalar<double>::TLargeWorldRenderScalar<double>
          (TLargeWorldRenderScalar<double> *this,double param_1,double param_2)

{
  this->Tile = param_1;
  this->Offset = param_2;
  return this;
}

// TLargeWorldRenderScalar<double> @ 1418ba1a0

TLargeWorldRenderScalar<double> * __thiscall
TLargeWorldRenderScalar<double>::TLargeWorldRenderScalar<double>
          (TLargeWorldRenderScalar<double> *this)

{
  this->Tile = 0.0;
  this->Offset = 0.0;
  return this;
}

// GetAbsolute @ 1418dc5a0

double __thiscall TLargeWorldRenderScalar<float>::GetAbsolute(TLargeWorldRenderScalar<float> *this)

{
  return (double)this->Tile * __real_4140000000000000 + (double)this->Offset;
}

// GetAbsolute @ 1418dc5d0

double __thiscall
TLargeWorldRenderScalar<double>::GetAbsolute(TLargeWorldRenderScalar<double> *this)

{
  return this->Tile * __real_4140000000000000 + this->Offset;
}

// GetOffsetAsDouble @ 1418e0300

double __thiscall
TLargeWorldRenderScalar<float>::GetOffsetAsDouble(TLargeWorldRenderScalar<float> *this)

{
  return (double)this->Offset;
}

// GetOffsetAsDouble @ 1418e0310

double __thiscall
TLargeWorldRenderScalar<double>::GetOffsetAsDouble(TLargeWorldRenderScalar<double> *this)

{
  return this->Offset;
}

// GetTileAsDouble @ 1418e19e0

double __thiscall
TLargeWorldRenderScalar<float>::GetTileAsDouble(TLargeWorldRenderScalar<float> *this)

{
  return (double)this->Tile;
}

// GetTileAsDouble @ 1418e19f0

double __thiscall
TLargeWorldRenderScalar<double>::GetTileAsDouble(TLargeWorldRenderScalar<double> *this)

{
  return this->Tile;
}

// GetTileFor @ 1418e1a00

TVector<float> * __cdecl
TLargeWorldRenderScalar<float>::GetTileFor
          (TVector<float> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  
  dVar2 = __real_3ea0000000000000;
  dVar1 = __real_3fe0000000000000;
  dVar4 = (param_1->field0_0x0)._s_0.Y * __real_3ea0000000000000 + __real_3fe0000000000000;
  auVar3 = ZEXT416((uint)(float)((param_1->field0_0x0)._s_0.X * __real_3ea0000000000000 +
                                __real_3fe0000000000000));
  auVar3 = roundps(auVar3,auVar3,1);
  (__return_storage_ptr__->field0_0x0)._s_0.X = auVar3._0_4_;
  auVar3 = ZEXT416((uint)(float)dVar4);
  dVar4 = (param_1->field0_0x0)._s_0.Z;
  auVar3 = roundps(auVar3,auVar3,1);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = auVar3._0_4_;
  auVar3 = ZEXT416((uint)(float)(dVar4 * dVar2 + dVar1));
  auVar3 = roundps(auVar3,auVar3,1);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar3._0_4_;
  return __return_storage_ptr__;
}

// GetTileFor @ 1418e1a70

TVector<float> * __cdecl
TLargeWorldRenderScalar<double>::GetTileFor
          (TVector<float> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  
  dVar2 = __real_3ea0000000000000;
  dVar1 = __real_3fe0000000000000;
  dVar4 = (param_1->field0_0x0)._s_0.Y * __real_3ea0000000000000 + __real_3fe0000000000000;
  auVar3 = ZEXT416((uint)(float)((param_1->field0_0x0)._s_0.X * __real_3ea0000000000000 +
                                __real_3fe0000000000000));
  auVar3 = roundps(auVar3,auVar3,1);
  (__return_storage_ptr__->field0_0x0)._s_0.X = auVar3._0_4_;
  auVar3 = ZEXT416((uint)(float)dVar4);
  dVar4 = (param_1->field0_0x0)._s_0.Z;
  auVar3 = roundps(auVar3,auVar3,1);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = auVar3._0_4_;
  auVar3 = ZEXT416((uint)(float)(dVar4 * dVar2 + dVar1));
  auVar3 = roundps(auVar3,auVar3,1);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar3._0_4_;
  return __return_storage_ptr__;
}

// GetTileOffset @ 1418e1ae0

double __thiscall
TLargeWorldRenderScalar<float>::GetTileOffset(TLargeWorldRenderScalar<float> *this)

{
  return (double)this->Tile * __real_4140000000000000;
}

// GetTileOffset @ 1418e1b00

double __thiscall
TLargeWorldRenderScalar<double>::GetTileOffset(TLargeWorldRenderScalar<double> *this)

{
  return this->Tile * __real_4140000000000000;
}

// GetTileSize @ 1418e1b20

float __cdecl TLargeWorldRenderScalar<float>::GetTileSize(void)

{
  return __real_4a000000;
}

// GetTileSize @ 1418e1b30

double __cdecl TLargeWorldRenderScalar<double>::GetTileSize(void)

{
  return __real_4140000000000000;
}

// MakeClampedToRelativeWorldMatrix @ 1418e7830

TMatrix<float> * __cdecl
TLargeWorldRenderScalar<float>::MakeClampedToRelativeWorldMatrix
          (TMatrix<float> *__return_storage_ptr__,TVector<double> *param_1,TMatrix<double> *param_2)

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
  
  dVar2 = param_2->M[1][2];
  dVar3 = param_2->M[1][3];
  dVar4 = param_2->M[1][0];
  dVar5 = param_2->M[1][1];
  dVar6 = param_2->M[2][2];
  dVar7 = param_2->M[2][3];
  dVar8 = param_2->M[2][0];
  dVar9 = param_2->M[2][1];
  dVar10 = param_2->M[3][3];
  dVar14 = param_2->M[3][2] - (param_1->field0_0x0)._s_0.Z;
  dVar1 = param_2->M[3][0] - (param_1->field0_0x0)._s_0.X;
  dVar15 = param_2->M[3][1] - (param_1->field0_0x0)._s_0.Y;
  if (__real_4130000000000000 <= dVar14) {
    dVar14 = __real_4130000000000000;
  }
  if (__real_4130000000000000 <= dVar1) {
    dVar1 = __real_4130000000000000;
  }
  if (__real_4130000000000000 <= dVar15) {
    dVar15 = __real_4130000000000000;
  }
  dVar11 = param_2->M[0][1];
  if (dVar1 <= __real_c130000000000000) {
    dVar1 = __real_c130000000000000;
  }
  if (dVar15 <= __real_c130000000000000) {
    dVar15 = __real_c130000000000000;
  }
  if (dVar14 <= __real_c130000000000000) {
    dVar14 = __real_c130000000000000;
  }
  dVar12 = param_2->M[0][2];
  dVar13 = param_2->M[0][3];
  __return_storage_ptr__->M[0][0] = (float)param_2->M[0][0];
  __return_storage_ptr__->M[0][1] = (float)dVar11;
  __return_storage_ptr__->M[0][2] = (float)dVar12;
  __return_storage_ptr__->M[0][3] = (float)dVar13;
  __return_storage_ptr__->M[1][0] = (float)dVar4;
  __return_storage_ptr__->M[1][1] = (float)dVar5;
  __return_storage_ptr__->M[1][2] = (float)dVar2;
  __return_storage_ptr__->M[1][3] = (float)dVar3;
  __return_storage_ptr__->M[3][0] = (float)dVar1;
  __return_storage_ptr__->M[3][1] = (float)dVar15;
  __return_storage_ptr__->M[3][2] = (float)dVar14;
  __return_storage_ptr__->M[3][3] = (float)dVar10;
  __return_storage_ptr__->M[2][0] = (float)dVar8;
  __return_storage_ptr__->M[2][1] = (float)dVar9;
  __return_storage_ptr__->M[2][2] = (float)dVar6;
  __return_storage_ptr__->M[2][3] = (float)dVar7;
  return __return_storage_ptr__;
}

// MakeClampedToRelativeWorldMatrix @ 1418e7940

TMatrix<float> * __cdecl
TLargeWorldRenderScalar<double>::MakeClampedToRelativeWorldMatrix
          (TMatrix<float> *__return_storage_ptr__,TVector<double> *param_1,TMatrix<double> *param_2)

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
  
  dVar2 = param_2->M[1][2];
  dVar3 = param_2->M[1][3];
  dVar4 = param_2->M[1][0];
  dVar5 = param_2->M[1][1];
  dVar6 = param_2->M[2][2];
  dVar7 = param_2->M[2][3];
  dVar8 = param_2->M[2][0];
  dVar9 = param_2->M[2][1];
  dVar10 = param_2->M[3][3];
  dVar14 = param_2->M[3][2] - (param_1->field0_0x0)._s_0.Z;
  dVar1 = param_2->M[3][0] - (param_1->field0_0x0)._s_0.X;
  dVar15 = param_2->M[3][1] - (param_1->field0_0x0)._s_0.Y;
  if (__real_4130000000000000 <= dVar14) {
    dVar14 = __real_4130000000000000;
  }
  if (__real_4130000000000000 <= dVar1) {
    dVar1 = __real_4130000000000000;
  }
  if (__real_4130000000000000 <= dVar15) {
    dVar15 = __real_4130000000000000;
  }
  dVar11 = param_2->M[0][1];
  if (dVar1 <= __real_c130000000000000) {
    dVar1 = __real_c130000000000000;
  }
  if (dVar15 <= __real_c130000000000000) {
    dVar15 = __real_c130000000000000;
  }
  if (dVar14 <= __real_c130000000000000) {
    dVar14 = __real_c130000000000000;
  }
  dVar12 = param_2->M[0][2];
  dVar13 = param_2->M[0][3];
  __return_storage_ptr__->M[0][0] = (float)param_2->M[0][0];
  __return_storage_ptr__->M[0][1] = (float)dVar11;
  __return_storage_ptr__->M[0][2] = (float)dVar12;
  __return_storage_ptr__->M[0][3] = (float)dVar13;
  __return_storage_ptr__->M[1][0] = (float)dVar4;
  __return_storage_ptr__->M[1][1] = (float)dVar5;
  __return_storage_ptr__->M[1][2] = (float)dVar2;
  __return_storage_ptr__->M[1][3] = (float)dVar3;
  __return_storage_ptr__->M[3][0] = (float)dVar1;
  __return_storage_ptr__->M[3][1] = (float)dVar15;
  __return_storage_ptr__->M[3][2] = (float)dVar14;
  __return_storage_ptr__->M[3][3] = (float)dVar10;
  __return_storage_ptr__->M[2][0] = (float)dVar8;
  __return_storage_ptr__->M[2][1] = (float)dVar9;
  __return_storage_ptr__->M[2][2] = (float)dVar6;
  __return_storage_ptr__->M[2][3] = (float)dVar7;
  return __return_storage_ptr__;
}

// MakeClampedToRelativeWorldMatrixDouble @ 1418e7a50

TMatrix<double> * __cdecl
TLargeWorldRenderScalar<float>::MakeClampedToRelativeWorldMatrixDouble
          (TMatrix<double> *__return_storage_ptr__,TVector<double> *param_1,TMatrix<double> *param_2
          )

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar6 = __real_c130000000000000;
  dVar5 = __real_4130000000000000;
  dVar1 = param_2->M[0][1];
  dVar2 = param_2->M[0][2];
  dVar3 = param_2->M[0][3];
  __return_storage_ptr__->M[0][0] = param_2->M[0][0];
  __return_storage_ptr__->M[0][1] = dVar1;
  dVar1 = param_2->M[1][0];
  dVar4 = param_2->M[1][1];
  __return_storage_ptr__->M[0][2] = dVar2;
  __return_storage_ptr__->M[0][3] = dVar3;
  dVar2 = param_2->M[1][2];
  dVar3 = param_2->M[1][3];
  __return_storage_ptr__->M[1][0] = dVar1;
  __return_storage_ptr__->M[1][1] = dVar4;
  dVar1 = param_2->M[2][0];
  dVar4 = param_2->M[2][1];
  __return_storage_ptr__->M[1][2] = dVar2;
  __return_storage_ptr__->M[1][3] = dVar3;
  dVar2 = param_2->M[2][2];
  dVar3 = param_2->M[2][3];
  __return_storage_ptr__->M[2][0] = dVar1;
  __return_storage_ptr__->M[2][1] = dVar4;
  dVar1 = param_2->M[3][0];
  dVar4 = param_2->M[3][1];
  __return_storage_ptr__->M[2][2] = dVar2;
  __return_storage_ptr__->M[2][3] = dVar3;
  dVar2 = param_2->M[3][2];
  dVar3 = param_2->M[3][3];
  __return_storage_ptr__->M[3][0] = dVar1;
  __return_storage_ptr__->M[3][1] = dVar4;
  dVar1 = param_2->M[3][0] - (param_1->field0_0x0)._s_0.X;
  __return_storage_ptr__->M[3][2] = dVar2;
  __return_storage_ptr__->M[3][3] = dVar3;
  dVar2 = param_2->M[3][2] - (param_1->field0_0x0)._s_0.Z;
  if (dVar5 <= dVar1) {
    dVar1 = dVar5;
  }
  if (dVar5 <= dVar2) {
    dVar2 = dVar5;
  }
  if (dVar1 <= dVar6) {
    dVar1 = dVar6;
  }
  if (dVar2 <= dVar6) {
    dVar2 = dVar6;
  }
  __return_storage_ptr__->M[3][0] = dVar1;
  dVar1 = param_2->M[3][1] - (param_1->field0_0x0)._s_0.Y;
  __return_storage_ptr__->M[3][2] = dVar2;
  if (dVar5 <= dVar1) {
    dVar1 = dVar5;
  }
  if (dVar1 <= dVar6) {
    dVar1 = dVar6;
  }
  __return_storage_ptr__->M[3][1] = dVar1;
  return __return_storage_ptr__;
}

// MakeClampedToRelativeWorldMatrixDouble @ 1418e7b00

TMatrix<double> * __cdecl
TLargeWorldRenderScalar<double>::MakeClampedToRelativeWorldMatrixDouble
          (TMatrix<double> *__return_storage_ptr__,TVector<double> *param_1,TMatrix<double> *param_2
          )

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar6 = __real_c130000000000000;
  dVar5 = __real_4130000000000000;
  dVar1 = param_2->M[0][1];
  dVar2 = param_2->M[0][2];
  dVar3 = param_2->M[0][3];
  __return_storage_ptr__->M[0][0] = param_2->M[0][0];
  __return_storage_ptr__->M[0][1] = dVar1;
  dVar1 = param_2->M[1][0];
  dVar4 = param_2->M[1][1];
  __return_storage_ptr__->M[0][2] = dVar2;
  __return_storage_ptr__->M[0][3] = dVar3;
  dVar2 = param_2->M[1][2];
  dVar3 = param_2->M[1][3];
  __return_storage_ptr__->M[1][0] = dVar1;
  __return_storage_ptr__->M[1][1] = dVar4;
  dVar1 = param_2->M[2][0];
  dVar4 = param_2->M[2][1];
  __return_storage_ptr__->M[1][2] = dVar2;
  __return_storage_ptr__->M[1][3] = dVar3;
  dVar2 = param_2->M[2][2];
  dVar3 = param_2->M[2][3];
  __return_storage_ptr__->M[2][0] = dVar1;
  __return_storage_ptr__->M[2][1] = dVar4;
  dVar1 = param_2->M[3][0];
  dVar4 = param_2->M[3][1];
  __return_storage_ptr__->M[2][2] = dVar2;
  __return_storage_ptr__->M[2][3] = dVar3;
  dVar2 = param_2->M[3][2];
  dVar3 = param_2->M[3][3];
  __return_storage_ptr__->M[3][0] = dVar1;
  __return_storage_ptr__->M[3][1] = dVar4;
  dVar1 = param_2->M[3][0] - (param_1->field0_0x0)._s_0.X;
  __return_storage_ptr__->M[3][2] = dVar2;
  __return_storage_ptr__->M[3][3] = dVar3;
  dVar2 = param_2->M[3][2] - (param_1->field0_0x0)._s_0.Z;
  if (dVar5 <= dVar1) {
    dVar1 = dVar5;
  }
  if (dVar5 <= dVar2) {
    dVar2 = dVar5;
  }
  if (dVar1 <= dVar6) {
    dVar1 = dVar6;
  }
  if (dVar2 <= dVar6) {
    dVar2 = dVar6;
  }
  __return_storage_ptr__->M[3][0] = dVar1;
  dVar1 = param_2->M[3][1] - (param_1->field0_0x0)._s_0.Y;
  __return_storage_ptr__->M[3][2] = dVar2;
  if (dVar5 <= dVar1) {
    dVar1 = dVar5;
  }
  if (dVar1 <= dVar6) {
    dVar1 = dVar6;
  }
  __return_storage_ptr__->M[3][1] = dVar1;
  return __return_storage_ptr__;
}

// MakeFromRelativeWorldMatrix @ 1418e8180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMatrix<float> * __cdecl
TLargeWorldRenderScalar<float>::MakeFromRelativeWorldMatrix
          (TMatrix<float> *__return_storage_ptr__,TVector<double> *param_1,TMatrix<double> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TMatrix<float> *pTVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStackY_168 [32];
  TMatrix<double> local_118;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_98.M[3][0] = (param_1->field0_0x0)._s_0.X;
  local_98.M[3][1] = (param_1->field0_0x0)._s_0.Y;
  local_98.M[3][2] = (param_1->field0_0x0)._s_0.Z;
  local_98.M[0][2] = 0.0;
  local_98.M[0][3] = 0.0;
  local_98.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_98.M[1][1] = _UNK_15061cbc8;
  local_98.M[1][2] = 0.0;
  local_98.M[1][3] = 0.0;
  local_98.M[3][3] = __real_3ff0000000000000;
  local_98.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  local_98.M[0][1] = _UNK_150689518;
  local_98.M[2][0] = 0.0;
  local_98.M[2][1] = 0.0;
  local_98.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_98.M[2][3] = _UNK_150689518;
  VectorMatrixMultiply(&local_118,&local_98,param_2);
  uVar4 = SUB84(local_118.M[3][0],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar5 = (uint)((ulonglong)local_118.M[3][0] >> 0x20) &
          __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((((__real_4130000000000000 <= (double)CONCAT44(uVar5,uVar4) &&
         (double)CONCAT44(uVar5,uVar4) != __real_4130000000000000) ||
       (uVar4 = SUB84(local_118.M[3][1],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar5 = (uint)((ulonglong)local_118.M[3][1] >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_4130000000000000 <= (double)CONCAT44(uVar5,uVar4) &&
       (double)CONCAT44(uVar5,uVar4) != __real_4130000000000000)) ||
      (uVar4 = SUB84(local_118.M[3][2],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar5 = (uint)((ulonglong)local_118.M[3][2] >> 0x20) &
              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_4130000000000000 <= (double)CONCAT44(uVar5,uVar4) &&
      (double)CONCAT44(uVar5,uVar4) != __real_4130000000000000)) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7153277781063761971>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\LargeWorldRenderPosition.cpp"
                         ,0x33,"false"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TMatrix<float> *)(*pcVar1)();
    return pTVar3;
  }
  *(ulonglong *)__return_storage_ptr__->M[0] =
       CONCAT44((float)local_118.M[0][1],(float)local_118.M[0][0]);
  *(ulonglong *)(__return_storage_ptr__->M[0] + 2) =
       CONCAT44((float)local_118.M[0][3],(float)local_118.M[0][2]);
  *(ulonglong *)__return_storage_ptr__->M[1] =
       CONCAT44((float)local_118.M[1][1],(float)local_118.M[1][0]);
  *(ulonglong *)(__return_storage_ptr__->M[1] + 2) =
       CONCAT44((float)local_118.M[1][3],(float)local_118.M[1][2]);
  *(ulonglong *)__return_storage_ptr__->M[3] =
       CONCAT44((float)local_118.M[3][1],(float)local_118.M[3][0]);
  *(ulonglong *)(__return_storage_ptr__->M[3] + 2) =
       CONCAT44((float)local_118.M[3][3],(float)local_118.M[3][2]);
  *(ulonglong *)__return_storage_ptr__->M[2] =
       CONCAT44((float)local_118.M[2][1],(float)local_118.M[2][0]);
  *(ulonglong *)(__return_storage_ptr__->M[2] + 2) =
       CONCAT44((float)local_118.M[2][3],(float)local_118.M[2][2]);
  return __return_storage_ptr__;
}

// MakeFromRelativeWorldMatrix @ 1418e82f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMatrix<float> * __cdecl
TLargeWorldRenderScalar<double>::MakeFromRelativeWorldMatrix
          (TMatrix<float> *__return_storage_ptr__,TVector<double> *param_1,TMatrix<double> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TMatrix<float> *pTVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStackY_168 [32];
  TMatrix<double> local_118;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_98.M[3][0] = (param_1->field0_0x0)._s_0.X;
  local_98.M[3][1] = (param_1->field0_0x0)._s_0.Y;
  local_98.M[3][2] = (param_1->field0_0x0)._s_0.Z;
  local_98.M[0][2] = 0.0;
  local_98.M[0][3] = 0.0;
  local_98.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_98.M[1][1] = _UNK_15061cbc8;
  local_98.M[1][2] = 0.0;
  local_98.M[1][3] = 0.0;
  local_98.M[3][3] = __real_3ff0000000000000;
  local_98.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  local_98.M[0][1] = _UNK_150689518;
  local_98.M[2][0] = 0.0;
  local_98.M[2][1] = 0.0;
  local_98.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_98.M[2][3] = _UNK_150689518;
  VectorMatrixMultiply(&local_118,&local_98,param_2);
  uVar4 = SUB84(local_118.M[3][0],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar5 = (uint)((ulonglong)local_118.M[3][0] >> 0x20) &
          __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((((__real_4130000000000000 <= (double)CONCAT44(uVar5,uVar4) &&
         (double)CONCAT44(uVar5,uVar4) != __real_4130000000000000) ||
       (uVar4 = SUB84(local_118.M[3][1],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar5 = (uint)((ulonglong)local_118.M[3][1] >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_4130000000000000 <= (double)CONCAT44(uVar5,uVar4) &&
       (double)CONCAT44(uVar5,uVar4) != __real_4130000000000000)) ||
      (uVar4 = SUB84(local_118.M[3][2],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar5 = (uint)((ulonglong)local_118.M[3][2] >> 0x20) &
              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_4130000000000000 <= (double)CONCAT44(uVar5,uVar4) &&
      (double)CONCAT44(uVar5,uVar4) != __real_4130000000000000)) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7153277781063761971>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\LargeWorldRenderPosition.cpp"
                         ,0x33,"false"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TMatrix<float> *)(*pcVar1)();
    return pTVar3;
  }
  *(ulonglong *)__return_storage_ptr__->M[0] =
       CONCAT44((float)local_118.M[0][1],(float)local_118.M[0][0]);
  *(ulonglong *)(__return_storage_ptr__->M[0] + 2) =
       CONCAT44((float)local_118.M[0][3],(float)local_118.M[0][2]);
  *(ulonglong *)__return_storage_ptr__->M[1] =
       CONCAT44((float)local_118.M[1][1],(float)local_118.M[1][0]);
  *(ulonglong *)(__return_storage_ptr__->M[1] + 2) =
       CONCAT44((float)local_118.M[1][3],(float)local_118.M[1][2]);
  *(ulonglong *)__return_storage_ptr__->M[3] =
       CONCAT44((float)local_118.M[3][1],(float)local_118.M[3][0]);
  *(ulonglong *)(__return_storage_ptr__->M[3] + 2) =
       CONCAT44((float)local_118.M[3][3],(float)local_118.M[3][2]);
  *(ulonglong *)__return_storage_ptr__->M[2] =
       CONCAT44((float)local_118.M[2][1],(float)local_118.M[2][0]);
  *(ulonglong *)(__return_storage_ptr__->M[2] + 2) =
       CONCAT44((float)local_118.M[2][3],(float)local_118.M[2][2]);
  return __return_storage_ptr__;
}

// MakeFromRelativeWorldMatrixDouble @ 1418e8460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMatrix<double> * __cdecl
TLargeWorldRenderScalar<float>::MakeFromRelativeWorldMatrixDouble
          (TMatrix<double> *__return_storage_ptr__,TVector<double> *param_1,TMatrix<double> *param_2
          )

{
  undefined1 auStack_138 [32];
  TMatrix<double> local_118;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_118.M[0][2] = 0.0;
  local_118.M[0][3] = 0.0;
  local_118.M[1][2] = 0.0;
  local_118.M[1][3] = 0.0;
  local_118.M[3][0] = (param_1->field0_0x0)._s_0.X;
  local_118.M[3][1] = (param_1->field0_0x0)._s_0.Y;
  local_118.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_118.M[1][1] = _UNK_15061cbc8;
  local_118.M[3][2] = (param_1->field0_0x0)._s_0.Z;
  local_118.M[2][0] = 0.0;
  local_118.M[2][1] = 0.0;
  local_118.M[3][3] = __real_3ff0000000000000;
  local_118.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  local_118.M[0][1] = _UNK_150689518;
  local_118.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_118.M[2][3] = _UNK_150689518;
  VectorMatrixMultiply(&local_98,&local_118,param_2);
  CheckMatrixInTileOffsetRange(__return_storage_ptr__,&local_98);
  return __return_storage_ptr__;
}

// MakeFromRelativeWorldMatrixDouble @ 1418e8520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMatrix<double> * __cdecl
TLargeWorldRenderScalar<double>::MakeFromRelativeWorldMatrixDouble
          (TMatrix<double> *__return_storage_ptr__,TVector<double> *param_1,TMatrix<double> *param_2
          )

{
  undefined1 auStack_138 [32];
  TMatrix<double> local_118;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_118.M[0][2] = 0.0;
  local_118.M[0][3] = 0.0;
  local_118.M[1][2] = 0.0;
  local_118.M[1][3] = 0.0;
  local_118.M[3][0] = (param_1->field0_0x0)._s_0.X;
  local_118.M[3][1] = (param_1->field0_0x0)._s_0.Y;
  local_118.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_118.M[1][1] = _UNK_15061cbc8;
  local_118.M[3][2] = (param_1->field0_0x0)._s_0.Z;
  local_118.M[2][0] = 0.0;
  local_118.M[2][1] = 0.0;
  local_118.M[3][3] = __real_3ff0000000000000;
  local_118.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  local_118.M[0][1] = _UNK_150689518;
  local_118.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_118.M[2][3] = _UNK_150689518;
  VectorMatrixMultiply(&local_98,&local_118,param_2);
  CheckMatrixInTileOffsetRange(__return_storage_ptr__,&local_98);
  return __return_storage_ptr__;
}

// MakeQuantizedTile @ 1418e85e0

TVector<float> * __cdecl
TLargeWorldRenderScalar<float>::MakeQuantizedTile
          (TVector<float> *__return_storage_ptr__,TVector<double> *param_1,double param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  
  dVar4 = __real_3ea0000000000000;
  dVar3 = __real_3fe0000000000000;
  dVar9 = __real_3ff0000000000000 / param_2;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (param_1->field0_0x0)._s_0.X * __real_3ea0000000000000 * param_2 +
                 __real_3fe0000000000000;
  auVar5 = roundpd(in_XMM0,auVar5,1);
  auVar6._0_4_ = (float)(auVar5._0_8_ * dVar9);
  auVar6._4_4_ = (float)auVar5._8_8_;
  auVar6._8_8_ = 0;
  dVar8 = (param_1->field0_0x0)._s_0.Y * __real_3ea0000000000000 * param_2 + __real_3fe0000000000000
  ;
  (__return_storage_ptr__->field0_0x0)._s_0.X = auVar6._0_4_;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = dVar8;
  auVar5 = roundpd(auVar6,auVar1,1);
  dVar8 = (param_1->field0_0x0)._s_0.Z;
  auVar7._0_4_ = (float)(auVar5._0_8_ * dVar9);
  auVar7._4_4_ = (float)auVar5._8_8_;
  auVar7._8_8_ = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = auVar7._0_4_;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = dVar8 * dVar4 * param_2 + dVar3;
  auVar5 = roundpd(auVar7,auVar2,1);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)(auVar5._0_8_ * dVar9);
  return __return_storage_ptr__;
}

// MakeQuantizedTile @ 1418e8670

float __cdecl TLargeWorldRenderScalar<float>::MakeQuantizedTile(double param_1,double param_2)

{
  undefined8 in_XMM0_Qb;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1._0_8_ = param_1 * __real_3ea0000000000000 * param_2 + __real_3fe0000000000000;
  auVar1._8_8_ = in_XMM0_Qb;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = auVar1._0_8_;
  auVar2 = roundpd(auVar1,auVar2,1);
  return (float)(auVar2._0_8_ / param_2);
}

// MakeQuantizedTile @ 1418e86a0

TVector<double> * __cdecl
TLargeWorldRenderScalar<double>::MakeQuantizedTile
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,double param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  
  dVar4 = __real_3ea0000000000000;
  dVar3 = __real_3fe0000000000000;
  dVar9 = __real_3ff0000000000000 / param_2;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (param_1->field0_0x0)._s_0.X * __real_3ea0000000000000 * param_2 +
                 __real_3fe0000000000000;
  auVar5 = roundpd(in_XMM0,auVar5,1);
  dVar8 = (param_1->field0_0x0)._s_0.Y * __real_3ea0000000000000;
  auVar6._8_8_ = auVar5._8_8_;
  auVar6._0_8_ = auVar5._0_8_ * dVar9;
  (__return_storage_ptr__->field0_0x0)._s_0.X = auVar6._0_8_;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = dVar8 * param_2 + dVar3;
  auVar5 = roundpd(auVar6,auVar1,1);
  dVar8 = (param_1->field0_0x0)._s_0.Z;
  auVar7._8_8_ = auVar5._8_8_;
  auVar7._0_8_ = auVar5._0_8_ * dVar9;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = auVar7._0_8_;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = dVar8 * dVar4 * param_2 + dVar3;
  auVar5 = roundpd(auVar7,auVar2,1);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar5._0_8_ * dVar9;
  return __return_storage_ptr__;
}

// MakeQuantizedTile @ 1418e8730

double __cdecl TLargeWorldRenderScalar<double>::MakeQuantizedTile(double param_1,double param_2)

{
  undefined8 in_XMM0_Qb;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1._0_8_ = param_1 * __real_3ea0000000000000 * param_2 + __real_3fe0000000000000;
  auVar1._8_8_ = in_XMM0_Qb;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = auVar1._0_8_;
  auVar2 = roundpd(auVar1,auVar2,1);
  return auVar2._0_8_ / param_2;
}

// MakeTile @ 1418e8760

TVector<float> * __cdecl
TLargeWorldRenderScalar<float>::MakeTile
          (TVector<float> *__return_storage_ptr__,TVector<double> *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  
  dVar4 = __real_3ea0000000000000;
  dVar3 = __real_3fe0000000000000;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (param_1->field0_0x0)._s_0.X * __real_3ea0000000000000 + __real_3fe0000000000000;
  auVar5 = roundpd(in_XMM0,auVar5,1);
  auVar6._0_4_ = (float)auVar5._0_8_;
  auVar6._4_4_ = (float)auVar5._8_8_;
  auVar6._8_8_ = 0;
  dVar8 = (param_1->field0_0x0)._s_0.Y * __real_3ea0000000000000 + __real_3fe0000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.X = auVar6._0_4_;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = dVar8;
  auVar5 = roundpd(auVar6,auVar1,1);
  dVar8 = (param_1->field0_0x0)._s_0.Z;
  auVar7._0_4_ = (float)auVar5._0_8_;
  auVar7._4_4_ = (float)auVar5._8_8_;
  auVar7._8_8_ = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = auVar7._0_4_;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = dVar8 * dVar4 + dVar3;
  auVar5 = roundpd(auVar7,auVar2,1);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)auVar5._0_8_;
  return __return_storage_ptr__;
}

// MakeTile @ 1418e87d0

float __cdecl TLargeWorldRenderScalar<float>::MakeTile(double param_1)

{
  undefined8 in_XMM0_Qb;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1._0_8_ = param_1 * __real_3ea0000000000000 + __real_3fe0000000000000;
  auVar1._8_8_ = in_XMM0_Qb;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = auVar1._0_8_;
  auVar2 = roundpd(auVar1,auVar2,1);
  return (float)auVar2._0_8_;
}

// MakeTile @ 1418e8800

TVector<double> * __cdecl
TLargeWorldRenderScalar<double>::MakeTile
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];
  double dVar6;
  
  dVar4 = __real_3ea0000000000000;
  dVar3 = __real_3fe0000000000000;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (param_1->field0_0x0)._s_0.X * __real_3ea0000000000000 + __real_3fe0000000000000;
  auVar5 = roundpd(in_XMM0,auVar5,1);
  dVar6 = (param_1->field0_0x0)._s_0.Y * __real_3ea0000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.X = auVar5._0_8_;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = dVar6 + dVar3;
  auVar5 = roundpd(auVar5,auVar1,1);
  dVar6 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = auVar5._0_8_;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = dVar6 * dVar4 + dVar3;
  auVar5 = roundpd(auVar5,auVar2,1);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar5._0_8_;
  return __return_storage_ptr__;
}

// MakeTile @ 1418e8860

double __cdecl TLargeWorldRenderScalar<double>::MakeTile(double param_1)

{
  undefined8 in_XMM0_Qb;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1._0_8_ = param_1 * __real_3ea0000000000000 + __real_3fe0000000000000;
  auVar1._8_8_ = in_XMM0_Qb;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = auVar1._0_8_;
  auVar2 = roundpd(auVar1,auVar2,1);
  return auVar2._0_8_;
}

// MakeToRelativeWorldMatrix @ 1418e8890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMatrix<float> * __cdecl
TLargeWorldRenderScalar<float>::MakeToRelativeWorldMatrix
          (TMatrix<float> *__return_storage_ptr__,TVector<double> *param_1,TMatrix<double> *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  TMatrix<float> *pTVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStackY_168 [32];
  TMatrix<double> local_118;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
  local_98.M[0][2] = 0.0;
  local_98.M[0][3] = 0.0;
  local_98.M[1][2] = 0.0;
  local_98.M[1][3] = 0.0;
  local_98.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_98.M[1][1] = _UNK_15061cbc8;
  local_98.M[2][0] = 0.0;
  local_98.M[2][1] = 0.0;
  uVar5 = (uint)__xmm_80000000000000008000000000000000;
  uVar6 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_98.M[3][0] =
       (double)CONCAT44(*(uint *)((longlong)&param_1->field0_0x0 + 4) ^ uVar6,
                        *(uint *)&param_1->field0_0x0 ^ uVar5);
  local_98.M[3][1] =
       (double)CONCAT44(*(uint *)((longlong)&param_1->field0_0x0 + 0xc) ^ uVar6,
                        *(uint *)((longlong)&param_1->field0_0x0 + 8) ^ uVar5);
  local_98.M[3][2] = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar6,(uint)uVar1 ^ uVar5);
  local_98.M[3][3] = __real_3ff0000000000000;
  local_98.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  local_98.M[0][1] = _UNK_150689518;
  local_98.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_98.M[2][3] = _UNK_150689518;
  VectorMatrixMultiply(&local_118,param_2,&local_98);
  uVar5 = SUB84(local_118.M[3][0],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar6 = (uint)((ulonglong)local_118.M[3][0] >> 0x20) &
          __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((((__real_4130000000000000 <= (double)CONCAT44(uVar6,uVar5) &&
         (double)CONCAT44(uVar6,uVar5) != __real_4130000000000000) ||
       (uVar5 = SUB84(local_118.M[3][1],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar6 = (uint)((ulonglong)local_118.M[3][1] >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_4130000000000000 <= (double)CONCAT44(uVar6,uVar5) &&
       (double)CONCAT44(uVar6,uVar5) != __real_4130000000000000)) ||
      (uVar5 = SUB84(local_118.M[3][2],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar6 = (uint)((ulonglong)local_118.M[3][2] >> 0x20) &
              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_4130000000000000 <= (double)CONCAT44(uVar6,uVar5) &&
      (double)CONCAT44(uVar6,uVar5) != __real_4130000000000000)) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7153277781063761971>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\LargeWorldRenderPosition.cpp"
                         ,0x33,"false"), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TMatrix<float> *)(*pcVar2)();
    return pTVar4;
  }
  *(ulonglong *)__return_storage_ptr__->M[0] =
       CONCAT44((float)local_118.M[0][1],(float)local_118.M[0][0]);
  *(ulonglong *)(__return_storage_ptr__->M[0] + 2) =
       CONCAT44((float)local_118.M[0][3],(float)local_118.M[0][2]);
  *(ulonglong *)__return_storage_ptr__->M[1] =
       CONCAT44((float)local_118.M[1][1],(float)local_118.M[1][0]);
  *(ulonglong *)(__return_storage_ptr__->M[1] + 2) =
       CONCAT44((float)local_118.M[1][3],(float)local_118.M[1][2]);
  *(ulonglong *)__return_storage_ptr__->M[3] =
       CONCAT44((float)local_118.M[3][1],(float)local_118.M[3][0]);
  *(ulonglong *)(__return_storage_ptr__->M[3] + 2) =
       CONCAT44((float)local_118.M[3][3],(float)local_118.M[3][2]);
  *(ulonglong *)__return_storage_ptr__->M[2] =
       CONCAT44((float)local_118.M[2][1],(float)local_118.M[2][0]);
  *(ulonglong *)(__return_storage_ptr__->M[2] + 2) =
       CONCAT44((float)local_118.M[2][3],(float)local_118.M[2][2]);
  return __return_storage_ptr__;
}

// MakeToRelativeWorldMatrix @ 1418e8a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMatrix<float> * __cdecl
TLargeWorldRenderScalar<double>::MakeToRelativeWorldMatrix
          (TMatrix<float> *__return_storage_ptr__,TVector<double> *param_1,TMatrix<double> *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  TMatrix<float> *pTVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStackY_168 [32];
  TMatrix<double> local_118;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
  local_98.M[0][2] = 0.0;
  local_98.M[0][3] = 0.0;
  local_98.M[1][2] = 0.0;
  local_98.M[1][3] = 0.0;
  local_98.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_98.M[1][1] = _UNK_15061cbc8;
  local_98.M[2][0] = 0.0;
  local_98.M[2][1] = 0.0;
  uVar5 = (uint)__xmm_80000000000000008000000000000000;
  uVar6 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_98.M[3][0] =
       (double)CONCAT44(*(uint *)((longlong)&param_1->field0_0x0 + 4) ^ uVar6,
                        *(uint *)&param_1->field0_0x0 ^ uVar5);
  local_98.M[3][1] =
       (double)CONCAT44(*(uint *)((longlong)&param_1->field0_0x0 + 0xc) ^ uVar6,
                        *(uint *)((longlong)&param_1->field0_0x0 + 8) ^ uVar5);
  local_98.M[3][2] = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar6,(uint)uVar1 ^ uVar5);
  local_98.M[3][3] = __real_3ff0000000000000;
  local_98.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  local_98.M[0][1] = _UNK_150689518;
  local_98.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_98.M[2][3] = _UNK_150689518;
  VectorMatrixMultiply(&local_118,param_2,&local_98);
  uVar5 = SUB84(local_118.M[3][0],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar6 = (uint)((ulonglong)local_118.M[3][0] >> 0x20) &
          __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((((__real_4130000000000000 <= (double)CONCAT44(uVar6,uVar5) &&
         (double)CONCAT44(uVar6,uVar5) != __real_4130000000000000) ||
       (uVar5 = SUB84(local_118.M[3][1],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar6 = (uint)((ulonglong)local_118.M[3][1] >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_4130000000000000 <= (double)CONCAT44(uVar6,uVar5) &&
       (double)CONCAT44(uVar6,uVar5) != __real_4130000000000000)) ||
      (uVar5 = SUB84(local_118.M[3][2],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar6 = (uint)((ulonglong)local_118.M[3][2] >> 0x20) &
              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_4130000000000000 <= (double)CONCAT44(uVar6,uVar5) &&
      (double)CONCAT44(uVar6,uVar5) != __real_4130000000000000)) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7153277781063761971>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\LargeWorldRenderPosition.cpp"
                         ,0x33,"false"), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TMatrix<float> *)(*pcVar2)();
    return pTVar4;
  }
  *(ulonglong *)__return_storage_ptr__->M[0] =
       CONCAT44((float)local_118.M[0][1],(float)local_118.M[0][0]);
  *(ulonglong *)(__return_storage_ptr__->M[0] + 2) =
       CONCAT44((float)local_118.M[0][3],(float)local_118.M[0][2]);
  *(ulonglong *)__return_storage_ptr__->M[1] =
       CONCAT44((float)local_118.M[1][1],(float)local_118.M[1][0]);
  *(ulonglong *)(__return_storage_ptr__->M[1] + 2) =
       CONCAT44((float)local_118.M[1][3],(float)local_118.M[1][2]);
  *(ulonglong *)__return_storage_ptr__->M[3] =
       CONCAT44((float)local_118.M[3][1],(float)local_118.M[3][0]);
  *(ulonglong *)(__return_storage_ptr__->M[3] + 2) =
       CONCAT44((float)local_118.M[3][3],(float)local_118.M[3][2]);
  *(ulonglong *)__return_storage_ptr__->M[2] =
       CONCAT44((float)local_118.M[2][1],(float)local_118.M[2][0]);
  *(ulonglong *)(__return_storage_ptr__->M[2] + 2) =
       CONCAT44((float)local_118.M[2][3],(float)local_118.M[2][2]);
  return __return_storage_ptr__;
}

// MakeToRelativeWorldMatrixDouble @ 1418e8bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMatrix<double> * __cdecl
TLargeWorldRenderScalar<float>::MakeToRelativeWorldMatrixDouble
          (TMatrix<double> *__return_storage_ptr__,TVector<double> *param_1,TMatrix<double> *param_2
          )

{
  undefined8 uVar1;
  undefined1 auStack_138 [32];
  TMatrix<double> local_118;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_118.M[0][2] = 0.0;
  local_118.M[0][3] = 0.0;
  local_118.M[1][2] = 0.0;
  local_118.M[1][3] = 0.0;
  local_118.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_118.M[1][1] = _UNK_15061cbc8;
  local_118.M[2][0] = 0.0;
  local_118.M[2][1] = 0.0;
  local_118.M[3][0]._0_4_ =
       *(uint *)&param_1->field0_0x0 ^ (uint)__xmm_80000000000000008000000000000000;
  local_118.M[3][0]._4_4_ =
       *(uint *)((longlong)&param_1->field0_0x0 + 4) ^ __xmm_80000000000000008000000000000000._4_4_;
  local_118.M[3][1]._0_4_ = *(uint *)((longlong)&param_1->field0_0x0 + 8) ^ _UNK_15066df78;
  local_118.M[3][1]._4_4_ = *(uint *)((longlong)&param_1->field0_0x0 + 0xc) ^ _UNK_15066df7c;
  local_118.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  local_118.M[0][1] = _UNK_150689518;
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
  local_118.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_118.M[2][3] = _UNK_150689518;
  local_118.M[3][2] =
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        (uint)uVar1 ^ (uint)__xmm_80000000000000008000000000000000);
  local_118.M[3][3] = __real_3ff0000000000000;
  VectorMatrixMultiply(&local_98,param_2,&local_118);
  CheckMatrixInTileOffsetRange(__return_storage_ptr__,&local_98);
  return __return_storage_ptr__;
}

// MakeToRelativeWorldMatrixDouble @ 1418e8c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMatrix<double> * __cdecl
TLargeWorldRenderScalar<double>::MakeToRelativeWorldMatrixDouble
          (TMatrix<double> *__return_storage_ptr__,TVector<double> *param_1,TMatrix<double> *param_2
          )

{
  undefined8 uVar1;
  undefined1 auStack_138 [32];
  TMatrix<double> local_118;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_118.M[0][2] = 0.0;
  local_118.M[0][3] = 0.0;
  local_118.M[1][2] = 0.0;
  local_118.M[1][3] = 0.0;
  local_118.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_118.M[1][1] = _UNK_15061cbc8;
  local_118.M[2][0] = 0.0;
  local_118.M[2][1] = 0.0;
  local_118.M[3][0]._0_4_ =
       *(uint *)&param_1->field0_0x0 ^ (uint)__xmm_80000000000000008000000000000000;
  local_118.M[3][0]._4_4_ =
       *(uint *)((longlong)&param_1->field0_0x0 + 4) ^ __xmm_80000000000000008000000000000000._4_4_;
  local_118.M[3][1]._0_4_ = *(uint *)((longlong)&param_1->field0_0x0 + 8) ^ _UNK_15066df78;
  local_118.M[3][1]._4_4_ = *(uint *)((longlong)&param_1->field0_0x0 + 0xc) ^ _UNK_15066df7c;
  local_118.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  local_118.M[0][1] = _UNK_150689518;
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
  local_118.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_118.M[2][3] = _UNK_150689518;
  local_118.M[3][2] =
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        (uint)uVar1 ^ (uint)__xmm_80000000000000008000000000000000);
  local_118.M[3][3] = __real_3ff0000000000000;
  VectorMatrixMultiply(&local_98,param_2,&local_118);
  CheckMatrixInTileOffsetRange(__return_storage_ptr__,&local_98);
  return __return_storage_ptr__;
}

// SafeCastMatrix @ 1418f3a60

TMatrix<float> * __cdecl
TLargeWorldRenderScalar<float>::SafeCastMatrix
          (TMatrix<float> *__return_storage_ptr__,TMatrix<double> *param_1)

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
  TMatrix<double> *pTVar16;
  TMatrix<double> local_c8;
  
  pTVar16 = CheckMatrixInTileOffsetRange(&local_c8,param_1);
  dVar1 = pTVar16->M[0][0];
  dVar2 = pTVar16->M[0][1];
  dVar3 = pTVar16->M[0][2];
  dVar4 = pTVar16->M[0][3];
  dVar5 = pTVar16->M[2][2];
  dVar6 = pTVar16->M[2][3];
  dVar7 = pTVar16->M[2][0];
  dVar8 = pTVar16->M[2][1];
  dVar9 = pTVar16->M[3][2];
  dVar10 = pTVar16->M[3][3];
  dVar11 = pTVar16->M[3][0];
  dVar12 = pTVar16->M[3][1];
  dVar13 = pTVar16->M[1][2];
  dVar14 = pTVar16->M[1][3];
  dVar15 = pTVar16->M[1][1];
  __return_storage_ptr__->M[1][0] = (float)pTVar16->M[1][0];
  __return_storage_ptr__->M[1][1] = (float)dVar15;
  __return_storage_ptr__->M[1][2] = (float)dVar13;
  __return_storage_ptr__->M[1][3] = (float)dVar14;
  __return_storage_ptr__->M[3][0] = (float)dVar11;
  __return_storage_ptr__->M[3][1] = (float)dVar12;
  __return_storage_ptr__->M[3][2] = (float)dVar9;
  __return_storage_ptr__->M[3][3] = (float)dVar10;
  __return_storage_ptr__->M[0][0] = (float)dVar1;
  __return_storage_ptr__->M[0][1] = (float)dVar2;
  __return_storage_ptr__->M[0][2] = (float)dVar3;
  __return_storage_ptr__->M[0][3] = (float)dVar4;
  __return_storage_ptr__->M[2][0] = (float)dVar7;
  __return_storage_ptr__->M[2][1] = (float)dVar8;
  __return_storage_ptr__->M[2][2] = (float)dVar5;
  __return_storage_ptr__->M[2][3] = (float)dVar6;
  return __return_storage_ptr__;
}

// SafeCastMatrix @ 1418f3b20

TMatrix<float> * __cdecl
TLargeWorldRenderScalar<double>::SafeCastMatrix
          (TMatrix<float> *__return_storage_ptr__,TMatrix<double> *param_1)

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
  TMatrix<double> *pTVar16;
  TMatrix<double> local_c8;
  
  pTVar16 = CheckMatrixInTileOffsetRange(&local_c8,param_1);
  dVar1 = pTVar16->M[0][0];
  dVar2 = pTVar16->M[0][1];
  dVar3 = pTVar16->M[0][2];
  dVar4 = pTVar16->M[0][3];
  dVar5 = pTVar16->M[2][2];
  dVar6 = pTVar16->M[2][3];
  dVar7 = pTVar16->M[2][0];
  dVar8 = pTVar16->M[2][1];
  dVar9 = pTVar16->M[3][2];
  dVar10 = pTVar16->M[3][3];
  dVar11 = pTVar16->M[3][0];
  dVar12 = pTVar16->M[3][1];
  dVar13 = pTVar16->M[1][2];
  dVar14 = pTVar16->M[1][3];
  dVar15 = pTVar16->M[1][1];
  __return_storage_ptr__->M[1][0] = (float)pTVar16->M[1][0];
  __return_storage_ptr__->M[1][1] = (float)dVar15;
  __return_storage_ptr__->M[1][2] = (float)dVar13;
  __return_storage_ptr__->M[1][3] = (float)dVar14;
  __return_storage_ptr__->M[3][0] = (float)dVar11;
  __return_storage_ptr__->M[3][1] = (float)dVar12;
  __return_storage_ptr__->M[3][2] = (float)dVar9;
  __return_storage_ptr__->M[3][3] = (float)dVar10;
  __return_storage_ptr__->M[0][0] = (float)dVar1;
  __return_storage_ptr__->M[0][1] = (float)dVar2;
  __return_storage_ptr__->M[0][2] = (float)dVar3;
  __return_storage_ptr__->M[0][3] = (float)dVar4;
  __return_storage_ptr__->M[2][0] = (float)dVar7;
  __return_storage_ptr__->M[2][1] = (float)dVar8;
  __return_storage_ptr__->M[2][2] = (float)dVar5;
  __return_storage_ptr__->M[2][3] = (float)dVar6;
  return __return_storage_ptr__;
}

// Validate @ 1418fed20

void __thiscall
TLargeWorldRenderScalar<float>::Validate(TLargeWorldRenderScalar<float> *this,double param_1)

{
  double local_res8;
  double local_res10 [3];
  double *local_18;
  double *local_10;
  
  local_res8 = (double)this->Tile * __real_4140000000000000 + (double)this->Offset;
  if (__real_3fc0000000000000 <
      (double)CONCAT44((uint)((ulonglong)(local_res8 - param_1) >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(local_res8 - param_1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
     ) {
    local_18 = local_res10;
    local_10 = &local_res8;
    local_res10[0] = param_1;
    `TLargeWorldRenderScalar<float>::Validate'::__l2::<lambda_1>::operator()(&local_18);
  }
  return;
}

// Validate @ 1418fed90

void __thiscall
TLargeWorldRenderScalar<double>::Validate(TLargeWorldRenderScalar<double> *this,double param_1)

{
  double local_res8;
  double local_res10 [3];
  double *local_18;
  double *local_10;
  
  local_res8 = this->Tile * __real_4140000000000000 + this->Offset;
  if (__real_3df0000000000000 <
      (double)CONCAT44((uint)((ulonglong)(local_res8 - param_1) >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(local_res8 - param_1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
     ) {
    local_18 = local_res10;
    local_10 = &local_res8;
    local_res10[0] = param_1;
    `TLargeWorldRenderScalar<double>::Validate'::__l2::<lambda_1>::operator()(&local_18);
  }
  return;
}

// operator() @ 15047e4a0

bool __thiscall `TLargeWorldRenderScalar<float>::Validate'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7153277781063762044>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7153277781063762044>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 15047e500

bool __thiscall
`TLargeWorldRenderScalar<double>::Validate'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7153277781063762056>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7153277781063762056>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

