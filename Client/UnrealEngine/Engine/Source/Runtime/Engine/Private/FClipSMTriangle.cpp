// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ComputeGradientsAndNormal @ 147c3e2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FClipSMTriangle::ComputeGradientsAndNormal(FClipSMTriangle *this)

{
  double dVar1;
  double *pdVar2;
  int iVar3;
  TVector2<double> *pTVar4;
  undefined1 auStack_4c8 [32];
  TVector<double>_u_0 local_4a8;
  TVector<double>_u_0 local_488;
  TVector<double>_u_0 local_468;
  TMatrix<double> local_448;
  TMatrix<double> local_3c8;
  TMatrix<double> local_348;
  TMatrix<double> local_2c8;
  TMatrix<double> local_248;
  TMatrix<double> local_1c8;
  TMatrix<double> local_148;
  TMatrix<double> local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_4c8;
  local_4a8._s_0.X = (double)this->Vertices[2].Pos.field0_0x0._s_0.X;
  local_4a8._s_0.Y = (double)this->Vertices[2].Pos.field0_0x0._s_0.Y;
  local_4a8._s_0.Z = (double)this->Vertices[2].Pos.field0_0x0._s_0.Z;
  local_488._s_0.Y = (double)this->Vertices[1].Pos.field0_0x0._s_0.Y;
  local_488._s_0.X = (double)this->Vertices[1].Pos.field0_0x0._s_0.X;
  local_468._s_0.X = (double)this->Vertices[0].Pos.field0_0x0._s_0.X;
  local_488._s_0.Z = (double)this->Vertices[1].Pos.field0_0x0._s_0.Z;
  local_468._s_0.Z = (double)this->Vertices[0].Pos.field0_0x0._s_0.Z;
  local_468._s_0.Y = (double)this->Vertices[0].Pos.field0_0x0._s_0.Y;
  ComputeTriangleParameterToAttribute
            (&local_3c8,(TVector<double> *)&local_468._s_0,(TVector<double> *)&local_488._s_0,
             (TVector<double> *)&local_4a8._s_0);
  UE::Math::TMatrix<double>::Inverse(&local_3c8,&local_348);
  dVar1 = _UNK_150689518;
  local_3c8.M[2][1] = local_3c8.M[2][1] * ___xmm_00000000000000003ff0000000000000;
  local_3c8.M[2][2] = local_3c8.M[2][2] * ___xmm_00000000000000003ff0000000000000;
  local_3c8.M[3][1] = local_3c8.M[3][1] * _UNK_150689518;
  *(double *)&this->field_0x10 =
       local_3c8.M[1][0] * 0.0 + local_3c8.M[0][0] * 0.0 +
       local_3c8.M[2][0] * ___xmm_00000000000000003ff0000000000000 +
       local_3c8.M[3][0] * _UNK_150689518;
  *(double *)&this->field_0x18 =
       local_3c8.M[1][1] * 0.0 + local_3c8.M[0][1] * 0.0 + local_3c8.M[2][1] + local_3c8.M[3][1];
  *(double *)&this->field_0x20 =
       local_3c8.M[1][2] * 0.0 + local_3c8.M[0][2] * 0.0 + local_3c8.M[2][2] +
       local_3c8.M[3][2] * dVar1;
  local_468._s_0.X = (double)this->Vertices[2].TangentX.field0_0x0._s_0.X;
  local_468._s_0.Y = (double)this->Vertices[2].TangentX.field0_0x0._s_0.Y;
  local_468._s_0.Z = (double)this->Vertices[2].TangentX.field0_0x0._s_0.Z;
  local_488._s_0.Y = (double)this->Vertices[1].TangentX.field0_0x0._s_0.Y;
  local_488._s_0.X = (double)this->Vertices[1].TangentX.field0_0x0._s_0.X;
  local_4a8._s_0.X = (double)this->Vertices[0].TangentX.field0_0x0._s_0.X;
  local_488._s_0.Z = (double)this->Vertices[1].TangentX.field0_0x0._s_0.Z;
  local_4a8._s_0.Z = (double)this->Vertices[0].TangentX.field0_0x0._s_0.Z;
  local_4a8._s_0.Y = (double)this->Vertices[0].TangentX.field0_0x0._s_0.Y;
  ComputeTriangleParameterToAttribute
            (&local_2c8,(TVector<double> *)&local_4a8._s_0,(TVector<double> *)&local_488._s_0,
             (TVector<double> *)&local_468._s_0);
  local_468._s_0.X = (double)this->Vertices[2].TangentY.field0_0x0._s_0.X;
  local_468._s_0.Y = (double)this->Vertices[2].TangentY.field0_0x0._s_0.Y;
  local_468._s_0.Z = (double)this->Vertices[2].TangentY.field0_0x0._s_0.Z;
  local_488._s_0.Y = (double)this->Vertices[1].TangentY.field0_0x0._s_0.Y;
  local_488._s_0.X = (double)this->Vertices[1].TangentY.field0_0x0._s_0.X;
  local_4a8._s_0.X = (double)this->Vertices[0].TangentY.field0_0x0._s_0.X;
  local_488._s_0.Z = (double)this->Vertices[1].TangentY.field0_0x0._s_0.Z;
  local_4a8._s_0.Z = (double)this->Vertices[0].TangentY.field0_0x0._s_0.Z;
  local_4a8._s_0.Y = (double)this->Vertices[0].TangentY.field0_0x0._s_0.Y;
  ComputeTriangleParameterToAttribute
            (&local_248,(TVector<double> *)&local_4a8._s_0,(TVector<double> *)&local_488._s_0,
             (TVector<double> *)&local_468._s_0);
  local_468._s_0.X = (double)this->Vertices[2].TangentZ.field0_0x0._s_0.X;
  local_468._s_0.Y = (double)this->Vertices[2].TangentZ.field0_0x0._s_0.Y;
  local_468._s_0.Z = (double)this->Vertices[2].TangentZ.field0_0x0._s_0.Z;
  local_488._s_0.Y = (double)this->Vertices[1].TangentZ.field0_0x0._s_0.Y;
  local_488._s_0.X = (double)this->Vertices[1].TangentZ.field0_0x0._s_0.X;
  local_4a8._s_0.X = (double)this->Vertices[0].TangentZ.field0_0x0._s_0.X;
  local_488._s_0.Z = (double)this->Vertices[1].TangentZ.field0_0x0._s_0.Z;
  local_4a8._s_0.Z = (double)this->Vertices[0].TangentZ.field0_0x0._s_0.Z;
  local_4a8._s_0.Y = (double)this->Vertices[0].TangentZ.field0_0x0._s_0.Y;
  ComputeTriangleParameterToAttribute
            (&local_1c8,(TVector<double> *)&local_4a8._s_0,(TVector<double> *)&local_488._s_0,
             (TVector<double> *)&local_468._s_0);
  VectorMatrixMultiply(&local_448,&local_348,&local_2c8);
  *(double *)&this->field_0x30 = local_448.M[0][0];
  *(double *)&this->field_0x38 = local_448.M[0][1];
  *(double *)&this->field_0x40 = local_448.M[0][2];
  *(double *)&this->field_0x48 = local_448.M[0][3];
  *(double *)&this->field_0x50 = local_448.M[1][0];
  *(double *)&this->field_0x58 = local_448.M[1][1];
  *(double *)&this->field_0x60 = local_448.M[1][2];
  *(double *)&this->field_0x68 = local_448.M[1][3];
  *(double *)&this->field_0x70 = local_448.M[2][0];
  *(double *)&this->field_0x78 = local_448.M[2][1];
  *(double *)&this->field_0x80 = local_448.M[2][2];
  *(double *)&this->field_0x88 = local_448.M[2][3];
  *(double *)&this->field_0x90 = local_448.M[3][0];
  *(double *)&this->field_0x98 = local_448.M[3][1];
  *(double *)&this->field_0xa0 = local_448.M[3][2];
  *(double *)&this->field_0xa8 = local_448.M[3][3];
  VectorMatrixMultiply(&local_448,&local_348,&local_248);
  *(double *)&this->field_0xb0 = local_448.M[0][0];
  *(double *)&this->field_0xb8 = local_448.M[0][1];
  *(double *)&this->field_0xc0 = local_448.M[0][2];
  *(double *)&this->field_0xc8 = local_448.M[0][3];
  *(double *)&this->field_0xd0 = local_448.M[1][0];
  *(double *)&this->field_0xd8 = local_448.M[1][1];
  *(double *)&this->field_0xe0 = local_448.M[1][2];
  *(double *)&this->field_0xe8 = local_448.M[1][3];
  *(double *)&this->field_0xf0 = local_448.M[2][0];
  *(double *)&this->field_0xf8 = local_448.M[2][1];
  *(double *)&this->field_0x100 = local_448.M[2][2];
  *(double *)&this->field_0x108 = local_448.M[2][3];
  *(double *)&this->field_0x110 = local_448.M[3][0];
  *(double *)&this->field_0x118 = local_448.M[3][1];
  *(double *)&this->field_0x120 = local_448.M[3][2];
  *(double *)&this->field_0x128 = local_448.M[3][3];
  VectorMatrixMultiply(&local_448,&local_348,&local_1c8);
  *(double *)&this->field_0x130 = local_448.M[0][0];
  *(double *)&this->field_0x138 = local_448.M[0][1];
  *(double *)&this->field_0x140 = local_448.M[0][2];
  *(double *)&this->field_0x148 = local_448.M[0][3];
  *(double *)&this->field_0x150 = local_448.M[1][0];
  *(double *)&this->field_0x158 = local_448.M[1][1];
  *(double *)&this->field_0x160 = local_448.M[1][2];
  *(double *)&this->field_0x168 = local_448.M[1][3];
  *(double *)&this->field_0x170 = local_448.M[2][0];
  *(double *)&this->field_0x178 = local_448.M[2][1];
  *(double *)&this->field_0x180 = local_448.M[2][2];
  *(double *)&this->field_0x188 = local_448.M[2][3];
  *(double *)&this->field_0x190 = local_448.M[3][0];
  *(double *)&this->field_0x198 = local_448.M[3][1];
  *(double *)&this->field_0x1a0 = local_448.M[3][2];
  *(double *)&this->field_0x1a8 = local_448.M[3][3];
  local_468._s_0.X =
       (double)FLinearColor::sRGBToLinearTable[this->Vertices[2].Color.field0_0x0._s_0.R];
  local_468._s_0.Y =
       (double)FLinearColor::sRGBToLinearTable[this->Vertices[2].Color.field0_0x0._s_0.G];
  local_468._s_0.Z =
       (double)FLinearColor::sRGBToLinearTable[this->Vertices[2].Color.field0_0x0._s_0.B];
  local_488._s_0.X =
       (double)FLinearColor::sRGBToLinearTable[this->Vertices[1].Color.field0_0x0._s_0.R];
  local_488._s_0.Y =
       (double)FLinearColor::sRGBToLinearTable[this->Vertices[1].Color.field0_0x0._s_0.G];
  local_488._s_0.Z =
       (double)FLinearColor::sRGBToLinearTable[this->Vertices[1].Color.field0_0x0._s_0.B];
  local_4a8._s_0.X =
       (double)FLinearColor::sRGBToLinearTable[this->Vertices[0].Color.field0_0x0._s_0.R];
  local_4a8._s_0.Y =
       (double)FLinearColor::sRGBToLinearTable[this->Vertices[0].Color.field0_0x0._s_0.G];
  local_4a8._s_0.Z =
       (double)FLinearColor::sRGBToLinearTable[this->Vertices[0].Color.field0_0x0._s_0.B];
  ComputeTriangleParameterToAttribute
            (&local_148,(TVector<double> *)&local_4a8._s_0,(TVector<double> *)&local_488._s_0,
             (TVector<double> *)&local_468._s_0);
  VectorMatrixMultiply(&local_448,&local_348,&local_148);
  iVar3 = 0;
  *(double *)&this->field_0x5b0 = local_448.M[0][0];
  *(double *)&this->field_0x5b8 = local_448.M[0][1];
  *(double *)&this->field_0x5c0 = local_448.M[0][2];
  *(double *)&this->field_0x5c8 = local_448.M[0][3];
  *(double *)&this->field_0x5d0 = local_448.M[1][0];
  *(double *)&this->field_0x5d8 = local_448.M[1][1];
  *(double *)&this->field_0x5e0 = local_448.M[1][2];
  *(double *)&this->field_0x5e8 = local_448.M[1][3];
  *(double *)&this->field_0x5f0 = local_448.M[2][0];
  *(double *)&this->field_0x5f8 = local_448.M[2][1];
  *(double *)&this->field_0x600 = local_448.M[2][2];
  *(double *)&this->field_0x608 = local_448.M[2][3];
  *(double *)&this->field_0x610 = local_448.M[3][0];
  *(double *)&this->field_0x618 = local_448.M[3][1];
  *(double *)&this->field_0x620 = local_448.M[3][2];
  *(double *)&this->field_0x628 = local_448.M[3][3];
  if (0 < *(int *)&this->field_0x8) {
    pdVar2 = (double *)&this->field_0x1b0;
    pTVar4 = this->Vertices[1].UVs;
    do {
      local_4a8._s_0.X = (double)*(undefined8 *)((longlong)(pTVar4 + -0xc) + 8);
      local_4a8._s_0.Y = (double)*(undefined8 *)(pTVar4 + -0xb);
      local_488._s_0.X = (pTVar4->field0_0x0)._s_0.X;
      local_488._s_0.Y = (pTVar4->field0_0x0)._s_0.Y;
      local_468._s_0.X = (double)*(undefined8 *)((longlong)(pTVar4 + 0xb) + 8);
      local_468._s_0.Y = (double)*(undefined8 *)(pTVar4 + 0xc);
      local_468._s_0.Z = 0.0;
      local_488._s_0.Z = 0.0;
      local_4a8._s_0.Z = 0.0;
      ComputeTriangleParameterToAttribute
                (&local_c8,(TVector<double> *)&local_4a8._s_0,(TVector<double> *)&local_488._s_0,
                 (TVector<double> *)&local_468._s_0);
      VectorMatrixMultiply(&local_448,&local_348,&local_c8);
      pTVar4 = pTVar4 + 1;
      iVar3 = iVar3 + 1;
      *pdVar2 = local_448.M[0][0];
      pdVar2[1] = local_448.M[0][1];
      pdVar2[2] = local_448.M[0][2];
      pdVar2[3] = local_448.M[0][3];
      pdVar2[4] = local_448.M[1][0];
      pdVar2[5] = local_448.M[1][1];
      pdVar2[6] = local_448.M[1][2];
      pdVar2[7] = local_448.M[1][3];
      pdVar2[8] = local_448.M[2][0];
      pdVar2[9] = local_448.M[2][1];
      pdVar2[10] = local_448.M[2][2];
      pdVar2[0xb] = local_448.M[2][3];
      pdVar2[0xc] = local_448.M[3][0];
      pdVar2[0xd] = local_448.M[3][1];
      pdVar2[0xe] = local_448.M[3][2];
      pdVar2[0xf] = local_448.M[3][3];
      pdVar2 = pdVar2 + 0x10;
    } while (iVar3 < *(int *)&this->field_0x8);
  }
  return;
}

