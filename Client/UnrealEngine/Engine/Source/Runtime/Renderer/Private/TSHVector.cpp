// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 32

// TSHVector<2> @ 144afa5c0

TSHVector<2> * __thiscall TSHVector<2>::TSHVector<2>(TSHVector<2> *this,TVector4<float> *param_1)

{
  this->V[0] = 0.0;
  this->V[1] = 0.0;
  this->V[2] = 0.0;
  this->V[3] = 0.0;
  this->V[0] = (param_1->field0_0x0)._s_0.X;
  this->V[1] = (param_1->field0_0x0)._s_0.Y;
  this->V[2] = (param_1->field0_0x0)._s_0.Z;
  this->V[3] = (param_1->field0_0x0)._s_0.W;
  return this;
}

// TSHVector<2> @ 144afa5f0

TSHVector<2> * __thiscall
TSHVector<2>::TSHVector<2>
          (TSHVector<2> *this,float param_1,float param_2,float param_3,float param_4)

{
  this->V[3] = param_4;
  this->V[0] = param_1;
  this->V[1] = param_2;
  this->V[2] = param_3;
  return this;
}

// TSHVector<2> @ 144afa620

TSHVector<2> * __thiscall TSHVector<2>::TSHVector<2>(TSHVector<2> *this)

{
  this->V[0] = 0.0;
  this->V[1] = 0.0;
  this->V[2] = 0.0;
  this->V[3] = 0.0;
  return this;
}

// TSHVector<3> @ 144afa630

TSHVector<3> * __thiscall TSHVector<3>::TSHVector<3>(TSHVector<3> *this,TVector4<float> *param_1)

{
  this->V[0] = 0.0;
  this->V[1] = 0.0;
  this->V[2] = 0.0;
  this->V[3] = 0.0;
  this->V[4] = 0.0;
  this->V[5] = 0.0;
  this->V[6] = 0.0;
  this->V[7] = 0.0;
  this->V[8] = 0.0;
  this->V[9] = 0.0;
  this->V[10] = 0.0;
  this->V[0xb] = 0.0;
  this->V[0] = (param_1->field0_0x0)._s_0.X;
  this->V[1] = (param_1->field0_0x0)._s_0.Y;
  this->V[2] = (param_1->field0_0x0)._s_0.Z;
  this->V[3] = (param_1->field0_0x0)._s_0.W;
  return this;
}

// TSHVector<3> @ 144afa660

TSHVector<3> * __thiscall
TSHVector<3>::TSHVector<3>
          (TSHVector<3> *this,float param_1,float param_2,float param_3,float param_4)

{
  this->V[4] = 0.0;
  this->V[5] = 0.0;
  this->V[6] = 0.0;
  this->V[7] = 0.0;
  this->V[8] = 0.0;
  this->V[9] = 0.0;
  this->V[10] = 0.0;
  this->V[0xb] = 0.0;
  this->V[0] = param_1;
  this->V[1] = param_2;
  this->V[2] = param_3;
  this->V[3] = param_4;
  return this;
}

// TSHVector<3> @ 144afa6a0

TSHVector<3> * __thiscall TSHVector<3>::TSHVector<3>(TSHVector<3> *this)

{
  this->V[0] = 0.0;
  this->V[1] = 0.0;
  this->V[2] = 0.0;
  this->V[3] = 0.0;
  this->V[4] = 0.0;
  this->V[5] = 0.0;
  this->V[6] = 0.0;
  this->V[7] = 0.0;
  this->V[8] = 0.0;
  this->V[9] = 0.0;
  this->V[10] = 0.0;
  this->V[0xb] = 0.0;
  return this;
}

// operator*= @ 144b01e50

TSHVector<2> * __thiscall TSHVector<2>::operator*=(TSHVector<2> *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_1;
  fVar2 = this->V[1];
  fVar3 = this->V[2];
  fVar4 = this->V[3];
  this->V[0] = fVar1 * this->V[0];
  this->V[1] = fVar1 * fVar2;
  this->V[2] = fVar1 * fVar3;
  this->V[3] = fVar1 * fVar4;
  return this;
}

// operator*= @ 144b01e70

TSHVector<3> * __thiscall TSHVector<3>::operator*=(TSHVector<3> *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_1;
  fVar2 = this->V[1];
  fVar3 = this->V[2];
  fVar4 = this->V[3];
  this->V[0] = fVar1 * this->V[0];
  this->V[1] = fVar1 * fVar2;
  this->V[2] = fVar1 * fVar3;
  this->V[3] = fVar1 * fVar4;
  this->V[4] = fVar1 * this->V[4];
  this->V[5] = fVar1 * this->V[5];
  this->V[6] = fVar1 * this->V[6];
  this->V[7] = fVar1 * this->V[7];
  this->V[8] = fVar1 * this->V[8];
  this->V[9] = fVar1 * this->V[9];
  this->V[10] = fVar1 * this->V[10];
  this->V[0xb] = fVar1 * this->V[0xb];
  return this;
}

// operator+= @ 144b01ea0

TSHVector<2> * __thiscall TSHVector<2>::operator+=(TSHVector<2> *this,TSHVector<2> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1->V[1];
  fVar2 = param_1->V[2];
  fVar3 = param_1->V[3];
  fVar4 = this->V[1];
  fVar5 = this->V[2];
  fVar6 = this->V[3];
  this->V[0] = param_1->V[0] + this->V[0];
  this->V[1] = fVar1 + fVar4;
  this->V[2] = fVar2 + fVar5;
  this->V[3] = fVar3 + fVar6;
  return this;
}

// operator+= @ 144b01ec0

TSHVector<3> * __thiscall TSHVector<3>::operator+=(TSHVector<3> *this,TSHVector<3> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1->V[1];
  fVar2 = param_1->V[2];
  fVar3 = param_1->V[3];
  fVar4 = this->V[1];
  fVar5 = this->V[2];
  fVar6 = this->V[3];
  this->V[0] = param_1->V[0] + this->V[0];
  this->V[1] = fVar1 + fVar4;
  this->V[2] = fVar2 + fVar5;
  this->V[3] = fVar3 + fVar6;
  fVar1 = param_1->V[5];
  fVar2 = param_1->V[6];
  fVar3 = param_1->V[7];
  this->V[4] = param_1->V[4] + this->V[4];
  this->V[5] = fVar1 + this->V[5];
  this->V[6] = fVar2 + this->V[6];
  this->V[7] = fVar3 + this->V[7];
  fVar1 = param_1->V[9];
  fVar2 = param_1->V[10];
  fVar3 = param_1->V[0xb];
  this->V[8] = param_1->V[8] + this->V[8];
  this->V[9] = fVar1 + this->V[9];
  this->V[10] = fVar2 + this->V[10];
  this->V[0xb] = fVar3 + this->V[0xb];
  return this;
}

// operator-= @ 144b01ef0

TSHVector<2> * __thiscall TSHVector<2>::operator-=(TSHVector<2> *this,TSHVector<2> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = this->V[1];
  fVar2 = this->V[2];
  fVar3 = this->V[3];
  fVar4 = param_1->V[1];
  fVar5 = param_1->V[2];
  fVar6 = param_1->V[3];
  this->V[0] = this->V[0] - param_1->V[0];
  this->V[1] = fVar1 - fVar4;
  this->V[2] = fVar2 - fVar5;
  this->V[3] = fVar3 - fVar6;
  return this;
}

// operator-= @ 144b01f10

TSHVector<3> * __thiscall TSHVector<3>::operator-=(TSHVector<3> *this,TSHVector<3> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = this->V[1];
  fVar2 = this->V[2];
  fVar3 = this->V[3];
  fVar4 = param_1->V[1];
  fVar5 = param_1->V[2];
  fVar6 = param_1->V[3];
  this->V[0] = this->V[0] - param_1->V[0];
  this->V[1] = fVar1 - fVar4;
  this->V[2] = fVar2 - fVar5;
  this->V[3] = fVar3 - fVar6;
  fVar1 = param_1->V[5];
  fVar2 = param_1->V[6];
  fVar3 = param_1->V[7];
  this->V[4] = this->V[4] - param_1->V[4];
  this->V[5] = this->V[5] - fVar1;
  this->V[6] = this->V[6] - fVar2;
  this->V[7] = this->V[7] - fVar3;
  fVar1 = param_1->V[9];
  fVar2 = param_1->V[10];
  fVar3 = param_1->V[0xb];
  this->V[8] = this->V[8] - param_1->V[8];
  this->V[9] = this->V[9] - fVar1;
  this->V[10] = this->V[10] - fVar2;
  this->V[0xb] = this->V[0xb] - fVar3;
  return this;
}

// operator/= @ 144b01f40

TSHVector<2> * __thiscall TSHVector<2>::operator/=(TSHVector<2> *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = __real_3f800000 / *param_1;
  fVar1 = this->V[1];
  fVar2 = this->V[2];
  fVar3 = this->V[3];
  this->V[0] = fVar4 * this->V[0];
  this->V[1] = fVar4 * fVar1;
  this->V[2] = fVar4 * fVar2;
  this->V[3] = fVar4 * fVar3;
  return this;
}

// operator/= @ 144b01f60

TSHVector<3> * __thiscall TSHVector<3>::operator/=(TSHVector<3> *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = __real_3f800000 / *param_1;
  fVar1 = this->V[1];
  fVar2 = this->V[2];
  fVar3 = this->V[3];
  this->V[0] = fVar4 * this->V[0];
  this->V[1] = fVar4 * fVar1;
  this->V[2] = fVar4 * fVar2;
  this->V[3] = fVar4 * fVar3;
  this->V[4] = fVar4 * this->V[4];
  this->V[5] = fVar4 * this->V[5];
  this->V[6] = fVar4 * this->V[6];
  this->V[7] = fVar4 * this->V[7];
  this->V[8] = fVar4 * this->V[8];
  this->V[9] = fVar4 * this->V[9];
  this->V[10] = fVar4 * this->V[10];
  this->V[0xb] = fVar4 * this->V[0xb];
  return this;
}

// AmbientFunction @ 144b06680

TSHVector<2> * __cdecl TSHVector<2>::AmbientFunction(TSHVector<2> *__return_storage_ptr__)

{
  __return_storage_ptr__->V[0] = 0.0;
  __return_storage_ptr__->V[1] = 0.0;
  __return_storage_ptr__->V[2] = 0.0;
  __return_storage_ptr__->V[3] = 0.0;
  __return_storage_ptr__->V[0] = 0.28209478;
  return __return_storage_ptr__;
}

// AmbientFunction @ 144b066a0

TSHVector<3> * __cdecl TSHVector<3>::AmbientFunction(TSHVector<3> *__return_storage_ptr__)

{
  __return_storage_ptr__->V[0] = 0.0;
  __return_storage_ptr__->V[1] = 0.0;
  __return_storage_ptr__->V[2] = 0.0;
  __return_storage_ptr__->V[3] = 0.0;
  __return_storage_ptr__->V[4] = 0.0;
  __return_storage_ptr__->V[5] = 0.0;
  __return_storage_ptr__->V[6] = 0.0;
  __return_storage_ptr__->V[7] = 0.0;
  __return_storage_ptr__->V[8] = 0.0;
  __return_storage_ptr__->V[9] = 0.0;
  __return_storage_ptr__->V[10] = 0.0;
  __return_storage_ptr__->V[0xb] = 0.0;
  __return_storage_ptr__->V[0] = 0.28209478;
  return __return_storage_ptr__;
}

// ApplyWindowing @ 144b066c0

void __thiscall TSHVector<2>::ApplyWindowing(TSHVector<2> *this,float param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  
  fVar2 = __real_3f800000;
  iVar7 = 0;
  iVar10 = 1;
  do {
    iVar9 = -iVar7;
    fVar11 = fVar2 / ((float)(iVar10 * iVar10 * iVar7 * iVar7) * param_1 + fVar2);
    if (iVar9 == iVar7 || SBORROW4(iVar9,iVar7) != iVar7 * -2 < 0) {
      iVar1 = iVar7 + 1;
      if (3 < iVar7 * 2 + 1) {
        iVar3 = iVar1 * iVar7 + iVar9;
        uVar4 = ((iVar1 + iVar7) - 4U >> 2) + 1;
        uVar8 = (ulonglong)uVar4;
        iVar9 = iVar9 + uVar4 * 4;
        pfVar5 = this->V + (longlong)iVar3 + 2;
        do {
          pfVar5[-2] = pfVar5[-2] * fVar11;
          pfVar5[-1] = pfVar5[-1] * fVar11;
          *pfVar5 = *pfVar5 * fVar11;
          pfVar5[1] = pfVar5[1] * fVar11;
          uVar8 = uVar8 - 1;
          pfVar5 = pfVar5 + 4;
        } while (uVar8 != 0);
      }
      if (iVar9 <= iVar7) {
        lVar6 = (longlong)((iVar7 - iVar9) + 1);
        pfVar5 = this->V + (iVar9 + iVar1 * iVar7);
        do {
          *pfVar5 = fVar11 * *pfVar5;
          lVar6 = lVar6 + -1;
          pfVar5 = pfVar5 + 1;
        } while (lVar6 != 0);
      }
    }
    iVar7 = iVar7 + 1;
    iVar10 = iVar10 + 1;
  } while (iVar7 < 2);
  return;
}

// ApplyWindowing @ 144b067c0

void __thiscall TSHVector<3>::ApplyWindowing(TSHVector<3> *this,float param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  
  fVar2 = __real_3f800000;
  iVar7 = 0;
  iVar10 = 1;
  do {
    iVar9 = -iVar7;
    fVar11 = fVar2 / ((float)(iVar10 * iVar10 * iVar7 * iVar7) * param_1 + fVar2);
    if (iVar9 == iVar7 || SBORROW4(iVar9,iVar7) != iVar7 * -2 < 0) {
      iVar1 = iVar7 + 1;
      if (3 < iVar7 * 2 + 1) {
        iVar3 = iVar1 * iVar7 + iVar9;
        uVar4 = ((iVar1 + iVar7) - 4U >> 2) + 1;
        uVar8 = (ulonglong)uVar4;
        iVar9 = iVar9 + uVar4 * 4;
        pfVar5 = this->V + (longlong)iVar3 + 2;
        do {
          pfVar5[-2] = pfVar5[-2] * fVar11;
          pfVar5[-1] = pfVar5[-1] * fVar11;
          *pfVar5 = *pfVar5 * fVar11;
          pfVar5[1] = pfVar5[1] * fVar11;
          uVar8 = uVar8 - 1;
          pfVar5 = pfVar5 + 4;
        } while (uVar8 != 0);
      }
      if (iVar9 <= iVar7) {
        lVar6 = (longlong)((iVar7 - iVar9) + 1);
        pfVar5 = this->V + (iVar9 + iVar1 * iVar7);
        do {
          *pfVar5 = fVar11 * *pfVar5;
          lVar6 = lVar6 + -1;
          pfVar5 = pfVar5 + 1;
        } while (lVar6 != 0);
      }
    }
    iVar7 = iVar7 + 1;
    iVar10 = iVar10 + 1;
  } while (iVar7 < 3);
  return;
}

// AreFloatsValid @ 144b068c0

bool __thiscall TSHVector<2>::AreFloatsValid(TSHVector<2> *this)

{
  int iVar1;
  
  iVar1 = _finite((double)this->V[0]);
  if (iVar1 != 0) {
    iVar1 = _isnan((double)this->V[0]);
    if (iVar1 == 0) {
      iVar1 = _finite((double)this->V[1]);
      if (iVar1 != 0) {
        iVar1 = _isnan((double)this->V[1]);
        if (iVar1 == 0) {
          iVar1 = _finite((double)this->V[2]);
          if (iVar1 != 0) {
            iVar1 = _isnan((double)this->V[2]);
            if (iVar1 == 0) {
              iVar1 = _finite((double)this->V[3]);
              if (iVar1 != 0) {
                iVar1 = _isnan((double)this->V[3]);
                if (iVar1 == 0) {
                  return true;
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// AreFloatsValid @ 144b06980

bool __thiscall TSHVector<3>::AreFloatsValid(TSHVector<3> *this)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  
  bVar1 = true;
  lVar3 = 0;
  do {
    if (bVar1 == false) {
LAB_144b069bd:
      bVar1 = false;
    }
    else {
      iVar2 = _finite((double)this->V[lVar3]);
      if (iVar2 == 0) goto LAB_144b069bd;
      iVar2 = _isnan((double)this->V[lVar3]);
      if (iVar2 != 0) goto LAB_144b069bd;
      bVar1 = true;
    }
    lVar3 = lVar3 + 1;
    if (8 < lVar3) {
      return bVar1;
    }
  } while( true );
}

// CalcDiffuseTransfer @ 144b093a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSHVector<2> * __cdecl
TSHVector<2>::CalcDiffuseTransfer(TSHVector<2> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  __return_storage_ptr__->V[0] = 0.0;
  __return_storage_ptr__->V[1] = 0.0;
  __return_storage_ptr__->V[2] = 0.0;
  __return_storage_ptr__->V[3] = 0.0;
  __return_storage_ptr__->V[0] = 0.282095;
  fVar2 = __real_40060a92;
  fVar5 = (float)(param_1->field0_0x0)._s_0.Y * ___real_befa2a2c;
  __return_storage_ptr__->V[1] = fVar5;
  fVar4 = (float)(param_1->field0_0x0)._s_0.Z * ___real_3efa2a2c;
  __return_storage_ptr__->V[2] = fVar4;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  __return_storage_ptr__->V[0] = 0.88622755;
  fVar3 = (float)dVar1 * ___real_befa2a2c;
  __return_storage_ptr__->V[1] = fVar5 * fVar2;
  __return_storage_ptr__->V[2] = fVar4 * fVar2;
  __return_storage_ptr__->V[3] = fVar3 * fVar2;
  return __return_storage_ptr__;
}

// CalcDiffuseTransfer @ 144b09420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSHVector<3> * __cdecl
TSHVector<3>::CalcDiffuseTransfer(TSHVector<3> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar4 = __real_3f490fdb;
  __return_storage_ptr__->V[0] = 0.0;
  __return_storage_ptr__->V[1] = 0.0;
  __return_storage_ptr__->V[2] = 0.0;
  __return_storage_ptr__->V[3] = 0.0;
  __return_storage_ptr__->V[4] = 0.0;
  __return_storage_ptr__->V[5] = 0.0;
  __return_storage_ptr__->V[6] = 0.0;
  __return_storage_ptr__->V[7] = 0.0;
  __return_storage_ptr__->V[8] = 0.0;
  __return_storage_ptr__->V[9] = 0.0;
  __return_storage_ptr__->V[10] = 0.0;
  __return_storage_ptr__->V[0xb] = 0.0;
  __return_storage_ptr__->V[0] = 0.282095;
  fVar13 = (float)(param_1->field0_0x0)._s_0.Y * ___real_befa2a2c;
  __return_storage_ptr__->V[1] = fVar13;
  fVar12 = (float)(param_1->field0_0x0)._s_0.Z * ___real_3efa2a2c;
  __return_storage_ptr__->V[2] = fVar12;
  fVar11 = (float)(param_1->field0_0x0)._s_0.X * ___real_befa2a2c;
  __return_storage_ptr__->V[3] = fVar11;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar7 = (param_1->field0_0x0)._s_0.Z;
  fVar10 = (float)(dVar1 * dVar2) * ___real_3f8bd89d;
  dVar7 = dVar7 * dVar7 * __real_4008000000000000 - __real_3ff0000000000000;
  __return_storage_ptr__->V[4] = fVar10;
  fVar8 = (float)dVar7 * ___real_3ea17b0f;
  fVar9 = (float)((param_1->field0_0x0)._s_0.Y * (param_1->field0_0x0)._s_0.Z) * ___real_bf8bd89d;
  __return_storage_ptr__->V[6] = fVar8;
  __return_storage_ptr__->V[5] = fVar9;
  dVar7 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  __return_storage_ptr__->V[0] = 0.88622755;
  fVar6 = (float)(dVar7 * dVar3) * ___real_bf8bd89d;
  fVar12 = fVar12 * __real_40060a92;
  fVar11 = fVar11 * __real_40060a92;
  fVar5 = (float)(dVar1 * dVar1 - dVar2 * dVar2) * ___real_3f0bd89d;
  __return_storage_ptr__->V[1] = fVar13 * __real_40060a92;
  __return_storage_ptr__->V[2] = fVar12;
  __return_storage_ptr__->V[3] = fVar11;
  __return_storage_ptr__->V[8] = fVar5 * fVar4;
  __return_storage_ptr__->V[4] = fVar10 * fVar4;
  __return_storage_ptr__->V[5] = fVar9 * fVar4;
  __return_storage_ptr__->V[6] = fVar8 * fVar4;
  __return_storage_ptr__->V[7] = fVar6 * fVar4;
  return __return_storage_ptr__;
}

// CalcIntegral @ 144b09d20

float __thiscall TSHVector<2>::CalcIntegral(TSHVector<2> *this)

{
  return this->V[0] * __real_4062dfc5;
}

// CalcIntegral @ 144b09d40

float __thiscall TSHVector<3>::CalcIntegral(TSHVector<3> *this)

{
  return this->V[0] * __real_4062dfc5;
}

// FindWindowingLambda @ 144b204b0

float __cdecl TSHVector<2>::FindWindowingLambda(TSHVector<2> *param_1,float param_2)

{
  uint uVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = 0.0;
  fVar4 = 0.0;
  lVar2 = 3;
  do {
    param_1 = (TSHVector<2> *)((longlong)param_1 + 4);
    fVar4 = fVar4 + *(float *)param_1 * *(float *)param_1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  if (param_2 * param_2 < fVar4 * __real_40800000) {
    uVar1 = 0;
    do {
      fVar3 = fVar5 * __real_40800000 + __real_3f800000;
      fVar3 = (__real_bf800000 / ((fVar4 * __real_42000000) / (fVar3 * fVar3 * fVar3))) *
              (param_2 * param_2 - (fVar4 * __real_40800000) / (fVar3 * fVar3));
      fVar5 = fVar5 + fVar3;
      if ((float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_38d1b717) {
        return fVar5;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 100);
  }
  return fVar5;
}

// FindWindowingLambda @ 144b205e0

float __cdecl TSHVector<3>::FindWindowingLambda(TSHVector<3> *param_1,float param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  ulonglong uVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_c4 [4];
  float local_b4 [43];
  
  uVar8 = 0;
  iVar7 = 1;
  lVar10 = 0;
  iVar11 = 2;
  fVar15 = 0.0;
  do {
    fVar14 = 0.0;
    iVar9 = -1;
    *(float *)((longlong)local_c4 + lVar10) = (float)(iVar11 * iVar11 * iVar7 * iVar7);
    if ((int)(iVar7 + 2U) < 4) {
LAB_144b206c2:
      pfVar6 = param_1->V + ((iVar7 + 1) * iVar7 + iVar9);
      uVar5 = (ulonglong)((iVar7 - iVar9) + 1);
      do {
        fVar18 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        fVar14 = fVar14 + fVar18 * fVar18;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    else {
      pfVar6 = param_1->V + (longlong)((iVar7 + 1) * iVar7 + -1) + 2;
      uVar4 = iVar7 + 2U >> 2;
      uVar5 = (ulonglong)uVar4;
      iVar9 = uVar4 * 4 + -1;
      do {
        pfVar1 = pfVar6 + -2;
        pfVar2 = pfVar6 + -1;
        fVar18 = *pfVar6;
        pfVar3 = pfVar6 + 1;
        pfVar6 = pfVar6 + 4;
        fVar14 = fVar14 + *pfVar1 * *pfVar1 + *pfVar2 * *pfVar2 + fVar18 * fVar18 +
                 *pfVar3 * *pfVar3;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      if (iVar9 <= iVar7) goto LAB_144b206c2;
    }
    iVar7 = iVar7 + 1;
    *(float *)((longlong)local_b4 + lVar10) = fVar14;
    lVar10 = lVar10 + 4;
    iVar11 = iVar11 + 1;
    if (2 < iVar7) {
      fVar14 = param_2 * param_2;
      fVar19 = local_c4[1] * local_b4[1];
      fVar18 = local_c4[0] * local_b4[0];
      if (fVar14 < fVar19 + fVar18) {
        fVar17 = local_c4[1] * __real_40000000 * local_c4[1] * local_b4[1];
        fVar16 = local_c4[0] * __real_40000000 * local_c4[0] * local_b4[0];
        while( true ) {
          fVar12 = local_c4[0] * fVar15 + __real_3f800000;
          fVar13 = local_c4[1] * fVar15 + __real_3f800000;
          fVar12 = (__real_bf800000 /
                   (fVar17 / (fVar13 * fVar13 * fVar13) + fVar16 / (fVar12 * fVar12 * fVar12))) *
                   (fVar14 - (fVar19 / (fVar13 * fVar13) + fVar18 / (fVar12 * fVar12)));
          fVar15 = fVar15 + fVar12;
          if ((float)((uint)fVar12 & __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_38d1b717)
          break;
          fVar12 = local_c4[0] * fVar15 + __real_3f800000;
          fVar13 = local_c4[1] * fVar15 + __real_3f800000;
          fVar12 = (__real_bf800000 /
                   (fVar17 / (fVar13 * fVar13 * fVar13) + fVar16 / (fVar12 * fVar12 * fVar12))) *
                   (fVar14 - (fVar19 / (fVar13 * fVar13) + fVar18 / (fVar12 * fVar12)));
          fVar15 = fVar15 + fVar12;
          if ((float)((uint)fVar12 & __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_38d1b717) {
            return fVar15;
          }
          fVar12 = local_c4[0] * fVar15 + __real_3f800000;
          fVar13 = local_c4[1] * fVar15 + __real_3f800000;
          fVar12 = (__real_bf800000 /
                   (fVar17 / (fVar13 * fVar13 * fVar13) + fVar16 / (fVar12 * fVar12 * fVar12))) *
                   (fVar14 - (fVar19 / (fVar13 * fVar13) + fVar18 / (fVar12 * fVar12)));
          fVar15 = fVar15 + fVar12;
          if ((float)((uint)fVar12 & __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_38d1b717) {
            return fVar15;
          }
          fVar12 = local_c4[0] * fVar15 + __real_3f800000;
          fVar13 = local_c4[1] * fVar15 + __real_3f800000;
          fVar12 = (__real_bf800000 /
                   (fVar17 / (fVar13 * fVar13 * fVar13) + fVar16 / (fVar12 * fVar12 * fVar12))) *
                   (fVar14 - (fVar19 / (fVar13 * fVar13) + fVar18 / (fVar12 * fVar12)));
          fVar15 = fVar15 + fVar12;
          if ((float)((uint)fVar12 & __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_38d1b717) {
            return fVar15;
          }
          fVar12 = local_c4[0] * fVar15 + __real_3f800000;
          fVar13 = local_c4[1] * fVar15 + __real_3f800000;
          fVar12 = (__real_bf800000 /
                   (fVar17 / (fVar13 * fVar13 * fVar13) + fVar16 / (fVar12 * fVar12 * fVar12))) *
                   (fVar14 - (fVar19 / (fVar13 * fVar13) + fVar18 / (fVar12 * fVar12)));
          fVar15 = fVar15 + fVar12;
          if ((float)((uint)fVar12 & __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_38d1b717) {
            return fVar15;
          }
          uVar8 = uVar8 + 5;
          if (99 < uVar8) {
            return fVar15;
          }
        }
      }
      return fVar15;
    }
  } while( true );
}

// GetMaximumDirection @ 144b25f70

TVector<double> * __thiscall
TSHVector<2>::GetMaximumDirection(TSHVector<2> *this,TVector<double> *__return_storage_ptr__)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (double)(float)((uint)this->V[3] ^ __xmm_80000000800000008000000080000000);
  local_28._s_0.Y = (double)(float)((uint)this->V[1] ^ __xmm_80000000800000008000000080000000);
  local_28._s_0.Z = (double)this->V[2];
  UE::Math::TVector<double>::GetSafeNormal
            ((TVector<double> *)&local_28._s_0,__return_storage_ptr__,__real_3e45798ee0000000,
             &UE::Math::TVector<double>::ZeroVector);
  return __return_storage_ptr__;
}

// GetMaximumDirection @ 144b25fe0

TVector<double> * __thiscall
TSHVector<3>::GetMaximumDirection(TSHVector<3> *this,TVector<double> *__return_storage_ptr__)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (double)(float)((uint)this->V[3] ^ __xmm_80000000800000008000000080000000);
  local_28._s_0.Y = (double)(float)((uint)this->V[1] ^ __xmm_80000000800000008000000080000000);
  local_28._s_0.Z = (double)this->V[2];
  UE::Math::TVector<double>::GetSafeNormal
            ((TVector<double> *)&local_28._s_0,__return_storage_ptr__,__real_3e45798ee0000000,
             &UE::Math::TVector<double>::ZeroVector);
  return __return_storage_ptr__;
}

// Normalize @ 144b32650

void __thiscall TSHVector<2>::Normalize(TSHVector<2> *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = this->V[0] * __real_4062dfc5;
  if (__real_3727c5ac < fVar4) {
    fVar4 = __real_3f800000 / fVar4;
    fVar1 = this->V[1];
    fVar2 = this->V[2];
    fVar3 = this->V[3];
    this->V[0] = fVar4 * this->V[0];
    this->V[1] = fVar4 * fVar1;
    this->V[2] = fVar4 * fVar2;
    this->V[3] = fVar4 * fVar3;
  }
  return;
}

// Normalize @ 144b32690

void __thiscall TSHVector<3>::Normalize(TSHVector<3> *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = this->V[0] * __real_4062dfc5;
  if (__real_3727c5ac < fVar4) {
    fVar4 = __real_3f800000 / fVar4;
    fVar1 = this->V[1];
    fVar2 = this->V[2];
    fVar3 = this->V[3];
    this->V[0] = fVar4 * this->V[0];
    this->V[1] = fVar4 * fVar1;
    this->V[2] = fVar4 * fVar2;
    this->V[3] = fVar4 * fVar3;
    this->V[4] = fVar4 * this->V[4];
    this->V[5] = fVar4 * this->V[5];
    this->V[6] = fVar4 * this->V[6];
    this->V[7] = fVar4 * this->V[7];
    this->V[8] = fVar4 * this->V[8];
    this->V[9] = fVar4 * this->V[9];
    this->V[10] = fVar4 * this->V[10];
    this->V[0xb] = fVar4 * this->V[0xb];
  }
  return;
}

// SHBasisFunction @ 144b45c60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSHVector<2> * __cdecl
TSHVector<2>::SHBasisFunction(TSHVector<2> *__return_storage_ptr__,TVector<double> *param_1)

{
  __return_storage_ptr__->V[0] = 0.0;
  __return_storage_ptr__->V[1] = 0.0;
  __return_storage_ptr__->V[2] = 0.0;
  __return_storage_ptr__->V[3] = 0.0;
  __return_storage_ptr__->V[0] = 0.282095;
  __return_storage_ptr__->V[1] = (float)(param_1->field0_0x0)._s_0.Y * ___real_befa2a2c;
  __return_storage_ptr__->V[2] = (float)(param_1->field0_0x0)._s_0.Z * ___real_3efa2a2c;
  __return_storage_ptr__->V[3] = (float)(param_1->field0_0x0)._s_0.X * ___real_befa2a2c;
  return __return_storage_ptr__;
}

// SHBasisFunction @ 144b45cc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSHVector<3> * __cdecl
TSHVector<3>::SHBasisFunction(TSHVector<3> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  
  __return_storage_ptr__->V[0] = 0.0;
  __return_storage_ptr__->V[1] = 0.0;
  __return_storage_ptr__->V[2] = 0.0;
  __return_storage_ptr__->V[3] = 0.0;
  __return_storage_ptr__->V[4] = 0.0;
  __return_storage_ptr__->V[5] = 0.0;
  __return_storage_ptr__->V[6] = 0.0;
  __return_storage_ptr__->V[7] = 0.0;
  __return_storage_ptr__->V[8] = 0.0;
  __return_storage_ptr__->V[9] = 0.0;
  __return_storage_ptr__->V[10] = 0.0;
  __return_storage_ptr__->V[0xb] = 0.0;
  __return_storage_ptr__->V[0] = 0.282095;
  __return_storage_ptr__->V[1] = (float)(param_1->field0_0x0)._s_0.Y * ___real_befa2a2c;
  __return_storage_ptr__->V[2] = (float)(param_1->field0_0x0)._s_0.Z * ___real_3efa2a2c;
  __return_storage_ptr__->V[3] = (float)(param_1->field0_0x0)._s_0.X * ___real_befa2a2c;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar4 = (param_1->field0_0x0)._s_0.Z;
  dVar4 = dVar4 * dVar4 * __real_4008000000000000 - __real_3ff0000000000000;
  __return_storage_ptr__->V[4] = (float)(dVar1 * dVar2) * ___real_3f8bd89d;
  fVar3 = (float)dVar4 * ___real_3ea17b0f;
  __return_storage_ptr__->V[5] =
       (float)((param_1->field0_0x0)._s_0.Y * (param_1->field0_0x0)._s_0.Z) * ___real_bf8bd89d;
  __return_storage_ptr__->V[6] = fVar3;
  fVar3 = (float)(dVar1 * dVar1 - dVar2 * dVar2) * ___real_3f0bd89d;
  __return_storage_ptr__->V[7] =
       (float)((param_1->field0_0x0)._s_0.X * (param_1->field0_0x0)._s_0.Z) * ___real_bf8bd89d;
  __return_storage_ptr__->V[8] = fVar3;
  return __return_storage_ptr__;
}

