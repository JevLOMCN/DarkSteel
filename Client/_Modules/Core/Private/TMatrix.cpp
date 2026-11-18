// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 124

// Inverse @ 14149d7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMatrix<double> * __thiscall
UE::Math::TMatrix<double>::Inverse(TMatrix<double> *this,TMatrix<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_b8 [32];
  TMatrix<double> local_98;
  ulonglong local_18;
  
  dVar2 = Identity.M[0][1];
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  dVar1 = this->M[0][0];
  uVar3 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar4 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((((((__real_3e45798ee0000000 <= (double)CONCAT44(uVar4,uVar3) &&
           (double)CONCAT44(uVar4,uVar3) != __real_3e45798ee0000000) ||
         (dVar1 = this->M[0][1],
         uVar3 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar4 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         __real_3e45798ee0000000 <= (double)CONCAT44(uVar4,uVar3) &&
         (double)CONCAT44(uVar4,uVar3) != __real_3e45798ee0000000)) ||
        (dVar1 = this->M[0][2],
        uVar3 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar4 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3e45798ee0000000 <= (double)CONCAT44(uVar4,uVar3) &&
        (double)CONCAT44(uVar4,uVar3) != __real_3e45798ee0000000)) ||
       ((dVar1 = this->M[1][0],
        uVar3 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar4 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3e45798ee0000000 <= (double)CONCAT44(uVar4,uVar3) &&
        (double)CONCAT44(uVar4,uVar3) != __real_3e45798ee0000000 ||
        (dVar1 = this->M[1][1],
        uVar3 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar4 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3e45798ee0000000 <= (double)CONCAT44(uVar4,uVar3) &&
        (double)CONCAT44(uVar4,uVar3) != __real_3e45798ee0000000)))) ||
      ((dVar1 = this->M[1][2], uVar3 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
       , uVar4 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3e45798ee0000000 <= (double)CONCAT44(uVar4,uVar3) &&
       (double)CONCAT44(uVar4,uVar3) != __real_3e45798ee0000000 ||
       ((dVar1 = this->M[2][0],
        uVar3 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar4 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3e45798ee0000000 <= (double)CONCAT44(uVar4,uVar3) &&
        (double)CONCAT44(uVar4,uVar3) != __real_3e45798ee0000000 ||
        (dVar1 = this->M[2][1],
        uVar3 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar4 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3e45798ee0000000 <= (double)CONCAT44(uVar4,uVar3) &&
        (double)CONCAT44(uVar4,uVar3) != __real_3e45798ee0000000)))))) ||
     (dVar1 = this->M[2][2], uVar3 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar4 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     __real_3e45798ee0000000 <= (double)CONCAT44(uVar4,uVar3) &&
     (double)CONCAT44(uVar4,uVar3) != __real_3e45798ee0000000)) {
    FMath::MatrixInverse(&local_98,this);
    __return_storage_ptr__->M[0][0] = local_98.M[0][0];
    __return_storage_ptr__->M[0][1] = local_98.M[0][1];
    __return_storage_ptr__->M[0][2] = local_98.M[0][2];
    __return_storage_ptr__->M[0][3] = local_98.M[0][3];
    __return_storage_ptr__->M[1][0] = local_98.M[1][0];
    __return_storage_ptr__->M[1][1] = local_98.M[1][1];
    __return_storage_ptr__->M[1][2] = local_98.M[1][2];
    __return_storage_ptr__->M[1][3] = local_98.M[1][3];
    __return_storage_ptr__->M[2][0] = local_98.M[2][0];
    __return_storage_ptr__->M[2][1] = local_98.M[2][1];
    __return_storage_ptr__->M[2][2] = local_98.M[2][2];
    __return_storage_ptr__->M[2][3] = local_98.M[2][3];
    __return_storage_ptr__->M[3][0] = local_98.M[3][0];
    __return_storage_ptr__->M[3][1] = local_98.M[3][1];
    __return_storage_ptr__->M[3][2] = local_98.M[3][2];
    __return_storage_ptr__->M[3][3] = local_98.M[3][3];
  }
  else {
    __return_storage_ptr__->M[0][0] = Identity.M[0][0];
    __return_storage_ptr__->M[0][1] = dVar2;
    dVar1 = Identity.M[0][3];
    __return_storage_ptr__->M[0][2] = Identity.M[0][2];
    __return_storage_ptr__->M[0][3] = dVar1;
    dVar1 = Identity.M[1][1];
    __return_storage_ptr__->M[1][0] = Identity.M[1][0];
    __return_storage_ptr__->M[1][1] = dVar1;
    dVar1 = Identity.M[1][3];
    __return_storage_ptr__->M[1][2] = Identity.M[1][2];
    __return_storage_ptr__->M[1][3] = dVar1;
    dVar1 = Identity.M[2][1];
    __return_storage_ptr__->M[2][0] = Identity.M[2][0];
    __return_storage_ptr__->M[2][1] = dVar1;
    dVar1 = Identity.M[2][3];
    __return_storage_ptr__->M[2][2] = Identity.M[2][2];
    __return_storage_ptr__->M[2][3] = dVar1;
    dVar1 = Identity.M[3][1];
    __return_storage_ptr__->M[3][0] = Identity.M[3][0];
    __return_storage_ptr__->M[3][1] = dVar1;
    dVar1 = Identity.M[3][3];
    __return_storage_ptr__->M[3][2] = Identity.M[3][2];
    __return_storage_ptr__->M[3][3] = dVar1;
  }
  return __return_storage_ptr__;
}

// TMatrix<float> @ 14179c8c0

TMatrix<float> * __thiscall
UE::Math::TMatrix<float>::TMatrix<float>
          (TMatrix<float> *this,TPlane<float> *param_1,TPlane<float> *param_2,TPlane<float> *param_3
          ,TPlane<float> *param_4)

{
  this->M[0][0] = *(float *)&param_1->_padding_;
  this->M[0][1] = *(float *)((longlong)&param_1->_padding_ + 4);
  this->M[0][2] = (float)param_1->_padding_;
  this->M[0][3] = param_1->W;
  this->M[1][0] = *(float *)&param_2->_padding_;
  this->M[1][1] = *(float *)((longlong)&param_2->_padding_ + 4);
  this->M[1][2] = (float)param_2->_padding_;
  this->M[1][3] = param_2->W;
  this->M[2][0] = *(float *)&param_3->_padding_;
  this->M[2][1] = *(float *)((longlong)&param_3->_padding_ + 4);
  this->M[2][2] = (float)param_3->_padding_;
  this->M[2][3] = param_3->W;
  this->M[3][0] = *(float *)&param_4->_padding_;
  this->M[3][1] = *(float *)((longlong)&param_4->_padding_ + 4);
  this->M[3][2] = (float)param_4->_padding_;
  this->M[3][3] = param_4->W;
  return this;
}

// TMatrix<float> @ 14179c940

TMatrix<float> * __thiscall
UE::Math::TMatrix<float>::TMatrix<float>
          (TMatrix<float> *this,TVector<float> *param_1,TVector<float> *param_2,
          TVector<float> *param_3,TVector<float> *param_4)

{
  float fVar1;
  
  this->M[0][0] = (param_1->field0_0x0)._s_0.X;
  this->M[0][1] = (param_1->field0_0x0)._s_0.Y;
  this->M[0][2] = (param_1->field0_0x0)._s_0.Z;
  this->M[0][3] = 0.0;
  this->M[1][0] = (param_2->field0_0x0)._s_0.X;
  this->M[1][1] = (param_2->field0_0x0)._s_0.Y;
  this->M[1][2] = (param_2->field0_0x0)._s_0.Z;
  this->M[1][3] = 0.0;
  this->M[2][0] = (param_3->field0_0x0)._s_0.X;
  this->M[2][1] = (param_3->field0_0x0)._s_0.Y;
  fVar1 = (param_3->field0_0x0)._s_0.Z;
  this->M[2][3] = 0.0;
  this->M[2][2] = fVar1;
  this->M[3][0] = (param_4->field0_0x0)._s_0.X;
  this->M[3][1] = (param_4->field0_0x0)._s_0.Y;
  this->M[3][2] = (param_4->field0_0x0)._s_0.Z;
  this->M[3][3] = 1.0;
  return this;
}

// TMatrix<float> @ 14179c9c0

TMatrix<float> * __thiscall
UE::Math::TMatrix<float>::TMatrix<float>(TMatrix<float> *this,EForceInit param_1)

{
  *(float *)((longlong)(this->M + 0) + 0) = 0.0;
  *(float *)((longlong)(this->M + 0) + 4) = 0.0;
  *(float *)((longlong)(this->M + 0) + 8) = 0.0;
  *(float *)((longlong)(this->M + 0) + 0xc) = 0.0;
  *(float *)((longlong)(this->M + 1) + 0) = 0.0;
  *(float *)((longlong)(this->M + 1) + 4) = 0.0;
  *(float *)((longlong)(this->M + 1) + 8) = 0.0;
  *(float *)((longlong)(this->M + 1) + 0xc) = 0.0;
  *(float *)((longlong)(this->M + 2) + 0) = 0.0;
  *(float *)((longlong)(this->M + 2) + 4) = 0.0;
  *(float *)((longlong)(this->M + 2) + 8) = 0.0;
  *(float *)((longlong)(this->M + 2) + 0xc) = 0.0;
  *(float *)((longlong)(this->M + 3) + 0) = 0.0;
  *(float *)((longlong)(this->M + 3) + 4) = 0.0;
  *(float *)((longlong)(this->M + 3) + 8) = 0.0;
  *(float *)((longlong)(this->M + 3) + 0xc) = 0.0;
  return this;
}

// TMatrix<double> @ 14179c9e0

TMatrix<double> * __thiscall
UE::Math::TMatrix<double>::TMatrix<double>
          (TMatrix<double> *this,TPlane<double> *param_1,TPlane<double> *param_2,
          TPlane<double> *param_3,TPlane<double> *param_4)

{
  this->M[0][0] = (double)param_1->_padding_;
  this->M[0][1] = (double)param_1->_padding_;
  this->M[0][2] = (double)param_1->_padding_;
  this->M[0][3] = param_1->W;
  this->M[1][0] = (double)param_2->_padding_;
  this->M[1][1] = (double)param_2->_padding_;
  this->M[1][2] = (double)param_2->_padding_;
  this->M[1][3] = param_2->W;
  this->M[2][0] = (double)param_3->_padding_;
  this->M[2][1] = (double)param_3->_padding_;
  this->M[2][2] = (double)param_3->_padding_;
  this->M[2][3] = param_3->W;
  this->M[3][0] = (double)param_4->_padding_;
  this->M[3][1] = (double)param_4->_padding_;
  this->M[3][2] = (double)param_4->_padding_;
  this->M[3][3] = param_4->W;
  return this;
}

// TMatrix<double> @ 14179ca70

TMatrix<double> * __thiscall
UE::Math::TMatrix<double>::TMatrix<double>
          (TMatrix<double> *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4)

{
  this->M[0][0] = (param_1->field0_0x0)._s_0.X;
  this->M[0][1] = (param_1->field0_0x0)._s_0.Y;
  this->M[0][2] = (param_1->field0_0x0)._s_0.Z;
  this->M[0][3] = 0.0;
  this->M[1][0] = (param_2->field0_0x0)._s_0.X;
  this->M[1][1] = (param_2->field0_0x0)._s_0.Y;
  this->M[1][2] = (param_2->field0_0x0)._s_0.Z;
  this->M[1][3] = 0.0;
  this->M[2][0] = (param_3->field0_0x0)._s_0.X;
  this->M[2][1] = (param_3->field0_0x0)._s_0.Y;
  this->M[2][2] = (param_3->field0_0x0)._s_0.Z;
  this->M[2][3] = 0.0;
  this->M[3][0] = (param_4->field0_0x0)._s_0.X;
  this->M[3][1] = (param_4->field0_0x0)._s_0.Y;
  this->M[3][2] = (param_4->field0_0x0)._s_0.Z;
  this->M[3][3] = 1.0;
  return this;
}

// TMatrix<double> @ 14179cb00

TMatrix<double> * __thiscall
UE::Math::TMatrix<double>::TMatrix<double>(TMatrix<double> *this,EForceInit param_1)

{
  this->M[0][0] = 0.0;
  this->M[0][1] = 0.0;
  this->M[0][2] = 0.0;
  this->M[0][3] = 0.0;
  this->M[1][0] = 0.0;
  this->M[1][1] = 0.0;
  this->M[1][2] = 0.0;
  this->M[1][3] = 0.0;
  this->M[2][0] = 0.0;
  this->M[2][1] = 0.0;
  this->M[2][2] = 0.0;
  this->M[2][3] = 0.0;
  this->M[3][0] = 0.0;
  this->M[3][1] = 0.0;
  this->M[3][2] = 0.0;
  this->M[3][3] = 0.0;
  return this;
}

// operator== @ 1417a9da0

bool __thiscall UE::Math::TMatrix<float>::operator==(TMatrix<float> *this,TMatrix<float> *param_1)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = 0;
  lVar2 = (longlong)this - (longlong)param_1;
  do {
    lVar3 = 0;
    pfVar1 = (float *)param_1;
    do {
      if (*pfVar1 != *(float *)(lVar2 + (longlong)pfVar1)) {
        return false;
      }
      lVar3 = lVar3 + 1;
      pfVar1 = pfVar1 + 1;
    } while (lVar3 < 4);
    lVar4 = lVar4 + 1;
    param_1 = (TMatrix<float> *)((longlong)param_1 + 0x10);
  } while (lVar4 < 4);
  return true;
}

// operator== @ 1417a9df0

bool __thiscall
UE::Math::TMatrix<double>::operator==(TMatrix<double> *this,TMatrix<double> *param_1)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = 0;
  lVar2 = (longlong)this - (longlong)param_1;
  do {
    lVar3 = 0;
    pdVar1 = (double *)param_1;
    do {
      if (*pdVar1 != *(double *)(lVar2 + (longlong)pdVar1)) {
        return false;
      }
      lVar3 = lVar3 + 1;
      pdVar1 = pdVar1 + 1;
    } while (lVar3 < 4);
    lVar4 = lVar4 + 1;
    param_1 = (TMatrix<double> *)((longlong)param_1 + 0x20);
  } while (lVar4 < 4);
  return true;
}

// operator!= @ 1417aa1f0

bool __thiscall UE::Math::TMatrix<float>::operator!=(TMatrix<float> *this,TMatrix<float> *param_1)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = 0;
  lVar2 = (longlong)this - (longlong)param_1;
  do {
    lVar3 = 0;
    pfVar1 = (float *)param_1;
    do {
      if (*pfVar1 != *(float *)((longlong)pfVar1 + lVar2)) {
        return true;
      }
      lVar3 = lVar3 + 1;
      pfVar1 = pfVar1 + 1;
    } while (lVar3 < 4);
    lVar4 = lVar4 + 1;
    param_1 = (TMatrix<float> *)((longlong)param_1 + 0x10);
  } while (lVar4 < 4);
  return false;
}

// operator!= @ 1417aa240

bool __thiscall
UE::Math::TMatrix<double>::operator!=(TMatrix<double> *this,TMatrix<double> *param_1)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = 0;
  lVar2 = (longlong)this - (longlong)param_1;
  do {
    lVar3 = 0;
    pdVar1 = (double *)param_1;
    do {
      if (*pdVar1 != *(double *)((longlong)pdVar1 + lVar2)) {
        return true;
      }
      lVar3 = lVar3 + 1;
      pdVar1 = pdVar1 + 1;
    } while (lVar3 < 4);
    lVar4 = lVar4 + 1;
    param_1 = (TMatrix<double> *)((longlong)param_1 + 0x20);
  } while (lVar4 < 4);
  return false;
}

// operator* @ 1417aabd0

TMatrix<float> * __thiscall
UE::Math::TMatrix<float>::operator*
          (TMatrix<float> *this,TMatrix<float> *__return_storage_ptr__,TMatrix<float> *param_1)

{
  VectorMatrixMultiply(__return_storage_ptr__,this,param_1);
  return __return_storage_ptr__;
}

// operator* @ 1417aac00

TMatrix<float> * __thiscall
UE::Math::TMatrix<float>::operator*
          (TMatrix<float> *this,TMatrix<float> *__return_storage_ptr__,float param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float (*pafVar5) [4];
  longlong lVar6;
  
  lVar6 = 4;
  pafVar5 = (float (*) [4])__return_storage_ptr__;
  do {
    pfVar1 = (float *)((longlong)pafVar5 + ((longlong)this - (longlong)__return_storage_ptr__));
    fVar2 = pfVar1[1];
    fVar3 = pfVar1[2];
    fVar4 = pfVar1[3];
    (*pafVar5)[0] = *pfVar1 * param_1;
    (*pafVar5)[1] = fVar2 * param_1;
    (*pafVar5)[2] = fVar3 * param_1;
    (*pafVar5)[3] = fVar4 * param_1;
    lVar6 = lVar6 + -1;
    pafVar5 = pafVar5 + 1;
  } while (lVar6 != 0);
  return __return_storage_ptr__;
}

// operator* @ 1417aac40

TMatrix<double> * __thiscall
UE::Math::TMatrix<double>::operator*
          (TMatrix<double> *this,TMatrix<double> *__return_storage_ptr__,TMatrix<double> *param_1)

{
  VectorMatrixMultiply(__return_storage_ptr__,this,param_1);
  return __return_storage_ptr__;
}

// operator* @ 1417aac70

TMatrix<double> * __thiscall
UE::Math::TMatrix<double>::operator*
          (TMatrix<double> *this,TMatrix<double> *__return_storage_ptr__,double param_1)

{
  double *pdVar1;
  double *pdVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double *pdVar8;
  longlong lVar9;
  
  lVar9 = 4;
  pdVar8 = __return_storage_ptr__->M[0] + 2;
  do {
    pdVar2 = (double *)
             (((longlong)this - (longlong)__return_storage_ptr__) + -0x10 + (longlong)pdVar8);
    pdVar1 = (double *)(((longlong)this - (longlong)__return_storage_ptr__) + (longlong)pdVar8);
    dVar7 = *pdVar1;
    dVar4 = pdVar2[1] * param_1;
    dVar6 = pdVar1[1] * param_1;
    auVar3._8_4_ = SUB84(dVar4,0);
    auVar3._0_8_ = *pdVar2 * param_1;
    auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *(undefined1 (*) [16])*(double (*) [4])(pdVar8 + -2) = auVar3;
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = dVar7 * param_1;
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])pdVar8 = auVar5;
    lVar9 = lVar9 + -1;
    pdVar8 = pdVar8 + 4;
  } while (lVar9 != 0);
  return __return_storage_ptr__;
}

// operator+ @ 1417abc40

TMatrix<float> * __thiscall
UE::Math::TMatrix<float>::operator+
          (TMatrix<float> *this,TMatrix<float> *__return_storage_ptr__,TMatrix<float> *param_1)

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
  
  fVar1 = this->M[0][1];
  fVar2 = this->M[0][2];
  fVar3 = this->M[0][3];
  fVar4 = param_1->M[0][1];
  fVar5 = param_1->M[0][2];
  fVar6 = param_1->M[0][3];
  fVar7 = param_1->M[1][0];
  fVar8 = param_1->M[1][1];
  fVar9 = param_1->M[1][2];
  fVar10 = param_1->M[1][3];
  fVar11 = this->M[1][0];
  fVar12 = this->M[1][1];
  fVar13 = this->M[1][2];
  fVar14 = this->M[1][3];
  fVar15 = this->M[2][0];
  fVar16 = this->M[2][1];
  fVar17 = this->M[2][2];
  fVar18 = this->M[2][3];
  __return_storage_ptr__->M[0][0] = param_1->M[0][0] + this->M[0][0];
  __return_storage_ptr__->M[0][1] = fVar4 + fVar1;
  __return_storage_ptr__->M[0][2] = fVar5 + fVar2;
  __return_storage_ptr__->M[0][3] = fVar6 + fVar3;
  fVar1 = param_1->M[2][0];
  fVar2 = param_1->M[2][1];
  fVar3 = param_1->M[2][2];
  fVar4 = param_1->M[2][3];
  __return_storage_ptr__->M[1][0] = fVar7 + fVar11;
  __return_storage_ptr__->M[1][1] = fVar8 + fVar12;
  __return_storage_ptr__->M[1][2] = fVar9 + fVar13;
  __return_storage_ptr__->M[1][3] = fVar10 + fVar14;
  fVar5 = param_1->M[3][0];
  fVar6 = param_1->M[3][1];
  fVar7 = param_1->M[3][2];
  fVar8 = param_1->M[3][3];
  fVar9 = this->M[3][0];
  fVar10 = this->M[3][1];
  fVar11 = this->M[3][2];
  fVar12 = this->M[3][3];
  __return_storage_ptr__->M[2][0] = fVar1 + fVar15;
  __return_storage_ptr__->M[2][1] = fVar2 + fVar16;
  __return_storage_ptr__->M[2][2] = fVar3 + fVar17;
  __return_storage_ptr__->M[2][3] = fVar4 + fVar18;
  __return_storage_ptr__->M[3][0] = fVar5 + fVar9;
  __return_storage_ptr__->M[3][1] = fVar6 + fVar10;
  __return_storage_ptr__->M[3][2] = fVar7 + fVar11;
  __return_storage_ptr__->M[3][3] = fVar8 + fVar12;
  return __return_storage_ptr__;
}

// operator+ @ 1417abc90

TMatrix<double> * __thiscall
UE::Math::TMatrix<double>::operator+
          (TMatrix<double> *this,TMatrix<double> *__return_storage_ptr__,TMatrix<double> *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  dVar11 = param_1->M[0][2];
  dVar10 = param_1->M[0][3];
  dVar5 = param_1->M[0][1] + this->M[0][1];
  dVar12 = this->M[0][2];
  dVar13 = this->M[0][3];
  auVar1._8_4_ = SUB84(dVar5,0);
  auVar1._0_8_ = param_1->M[0][0] + this->M[0][0];
  auVar1._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__->M[0] = auVar1;
  dVar14 = param_1->M[1][0];
  dVar5 = param_1->M[1][1];
  dVar10 = dVar10 + dVar13;
  dVar13 = this->M[1][0];
  dVar15 = this->M[1][1];
  auVar6._8_4_ = SUB84(dVar10,0);
  auVar6._0_8_ = dVar11 + dVar12;
  auVar6._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->M[0] + 2) = auVar6;
  dVar11 = param_1->M[1][2];
  dVar10 = param_1->M[1][3];
  dVar5 = dVar5 + dVar15;
  dVar12 = this->M[1][2];
  dVar15 = this->M[1][3];
  auVar2._8_4_ = SUB84(dVar5,0);
  auVar2._0_8_ = dVar14 + dVar13;
  auVar2._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__->M[1] = auVar2;
  dVar13 = param_1->M[2][0];
  dVar5 = param_1->M[2][1];
  dVar10 = dVar10 + dVar15;
  dVar14 = this->M[2][0];
  dVar15 = this->M[2][1];
  auVar7._8_4_ = SUB84(dVar10,0);
  auVar7._0_8_ = dVar11 + dVar12;
  auVar7._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->M[1] + 2) = auVar7;
  dVar11 = param_1->M[2][2];
  dVar10 = param_1->M[2][3];
  dVar5 = dVar5 + dVar15;
  dVar12 = this->M[2][2];
  dVar15 = this->M[2][3];
  auVar3._8_4_ = SUB84(dVar5,0);
  auVar3._0_8_ = dVar13 + dVar14;
  auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__->M[2] = auVar3;
  dVar13 = param_1->M[3][0];
  dVar5 = param_1->M[3][1];
  dVar10 = dVar10 + dVar15;
  dVar14 = this->M[3][0];
  dVar15 = this->M[3][1];
  auVar8._8_4_ = SUB84(dVar10,0);
  auVar8._0_8_ = dVar11 + dVar12;
  auVar8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->M[2] + 2) = auVar8;
  dVar11 = param_1->M[3][2];
  dVar10 = param_1->M[3][3];
  dVar5 = dVar5 + dVar15;
  dVar12 = this->M[3][2];
  dVar15 = this->M[3][3];
  auVar4._8_4_ = SUB84(dVar5,0);
  auVar4._0_8_ = dVar13 + dVar14;
  auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__->M[3] = auVar4;
  dVar10 = dVar10 + dVar15;
  auVar9._8_4_ = SUB84(dVar10,0);
  auVar9._0_8_ = dVar11 + dVar12;
  auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->M[3] + 2) = auVar9;
  return __return_storage_ptr__;
}

// operator*= @ 1417af1b0

void __thiscall UE::Math::TMatrix<float>::operator*=(TMatrix<float> *this,TMatrix<float> *param_1)

{
  VectorMatrixMultiply(this,this,param_1);
  return;
}

// operator*= @ 1417af1d0

void __thiscall UE::Math::TMatrix<float>::operator*=(TMatrix<float> *this,float param_1)

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
  
  fVar4 = this->M[2][0];
  fVar5 = this->M[2][1];
  fVar6 = this->M[2][2];
  fVar7 = this->M[2][3];
  fVar1 = this->M[0][1];
  fVar2 = this->M[0][2];
  fVar3 = this->M[0][3];
  fVar8 = this->M[1][0];
  fVar9 = this->M[1][1];
  fVar10 = this->M[1][2];
  fVar11 = this->M[1][3];
  fVar12 = this->M[3][0];
  fVar13 = this->M[3][1];
  fVar14 = this->M[3][2];
  fVar15 = this->M[3][3];
  this->M[0][0] = param_1 * this->M[0][0];
  this->M[0][1] = param_1 * fVar1;
  this->M[0][2] = param_1 * fVar2;
  this->M[0][3] = param_1 * fVar3;
  this->M[1][0] = fVar8 * param_1;
  this->M[1][1] = fVar9 * param_1;
  this->M[1][2] = fVar10 * param_1;
  this->M[1][3] = fVar11 * param_1;
  this->M[2][0] = fVar4 * param_1;
  this->M[2][1] = fVar5 * param_1;
  this->M[2][2] = fVar6 * param_1;
  this->M[2][3] = fVar7 * param_1;
  this->M[3][0] = fVar12 * param_1;
  this->M[3][1] = fVar13 * param_1;
  this->M[3][2] = fVar14 * param_1;
  this->M[3][3] = fVar15 * param_1;
  return;
}

// operator*= @ 1417af260

void __thiscall
UE::Math::TMatrix<double>::operator*=(TMatrix<double> *this,TMatrix<double> *param_1)

{
  VectorMatrixMultiply(this,this,param_1);
  return;
}

// operator*= @ 1417af280

void __thiscall UE::Math::TMatrix<double>::operator*=(TMatrix<double> *this,double param_1)

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
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  
  dVar17 = this->M[1][2];
  dVar10 = this->M[1][3];
  dVar18 = this->M[2][0];
  dVar8 = this->M[2][1];
  dVar19 = this->M[2][2];
  dVar6 = this->M[2][3];
  dVar20 = this->M[3][0];
  dVar4 = this->M[3][1];
  dVar21 = this->M[1][0];
  dVar12 = this->M[1][1];
  dVar22 = this->M[0][2];
  dVar14 = this->M[0][3];
  dVar15 = param_1 * this->M[0][1];
  dVar23 = this->M[3][2];
  dVar2 = this->M[3][3];
  auVar16._8_4_ = SUB84(dVar15,0);
  auVar16._0_8_ = param_1 * this->M[0][0];
  auVar16._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  *(undefined1 (*) [16])this->M[0] = auVar16;
  dVar14 = dVar14 * param_1;
  dVar12 = dVar12 * param_1;
  auVar13._8_4_ = SUB84(dVar14,0);
  auVar13._0_8_ = dVar22 * param_1;
  auVar13._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  *(undefined1 (*) [16])(this->M[0] + 2) = auVar13;
  auVar11._8_4_ = SUB84(dVar12,0);
  auVar11._0_8_ = dVar21 * param_1;
  auVar11._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])this->M[1] = auVar11;
  dVar10 = dVar10 * param_1;
  dVar8 = dVar8 * param_1;
  auVar9._8_4_ = SUB84(dVar10,0);
  auVar9._0_8_ = dVar17 * param_1;
  auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])(this->M[1] + 2) = auVar9;
  auVar7._8_4_ = SUB84(dVar8,0);
  auVar7._0_8_ = dVar18 * param_1;
  auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])this->M[2] = auVar7;
  dVar6 = dVar6 * param_1;
  dVar4 = dVar4 * param_1;
  auVar5._8_4_ = SUB84(dVar6,0);
  auVar5._0_8_ = dVar19 * param_1;
  auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(this->M[2] + 2) = auVar5;
  dVar2 = dVar2 * param_1;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = dVar20 * param_1;
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])this->M[3] = auVar3;
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = dVar23 * param_1;
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])(this->M[3] + 2) = auVar1;
  return;
}

// operator+= @ 1417af820

void __thiscall UE::Math::TMatrix<float>::operator+=(TMatrix<float> *this,TMatrix<float> *param_1)

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
  float fVar30;
  
  fVar1 = this->M[0][1];
  fVar2 = this->M[1][1];
  fVar3 = param_1->M[0][1];
  fVar4 = param_1->M[1][1];
  fVar5 = this->M[0][2];
  fVar6 = this->M[1][2];
  fVar7 = param_1->M[0][2];
  fVar8 = param_1->M[1][2];
  fVar9 = this->M[0][3];
  fVar10 = param_1->M[0][3];
  fVar11 = this->M[1][0];
  fVar12 = param_1->M[1][0];
  fVar13 = this->M[2][0];
  fVar14 = param_1->M[2][0];
  fVar15 = this->M[3][0];
  fVar16 = param_1->M[3][0];
  fVar17 = this->M[2][1];
  fVar18 = this->M[3][1];
  fVar19 = param_1->M[2][1];
  fVar20 = param_1->M[3][1];
  fVar21 = this->M[2][2];
  fVar22 = param_1->M[2][2];
  fVar23 = this->M[1][3];
  fVar24 = this->M[2][3];
  fVar25 = param_1->M[1][3];
  fVar26 = param_1->M[2][3];
  fVar27 = this->M[3][2];
  fVar28 = param_1->M[3][2];
  fVar29 = this->M[3][3];
  fVar30 = param_1->M[3][3];
  this->M[0][0] = param_1->M[0][0] + this->M[0][0];
  this->M[0][1] = fVar1 + fVar3;
  this->M[0][2] = fVar5 + fVar7;
  this->M[0][3] = fVar9 + fVar10;
  this->M[1][0] = fVar11 + fVar12;
  this->M[1][1] = fVar2 + fVar4;
  this->M[1][2] = fVar6 + fVar8;
  this->M[1][3] = fVar23 + fVar25;
  this->M[2][0] = fVar13 + fVar14;
  this->M[2][1] = fVar17 + fVar19;
  this->M[2][2] = fVar21 + fVar22;
  this->M[2][3] = fVar24 + fVar26;
  this->M[3][0] = fVar15 + fVar16;
  this->M[3][1] = fVar18 + fVar20;
  this->M[3][2] = fVar27 + fVar28;
  this->M[3][3] = fVar29 + fVar30;
  return;
}

// operator+= @ 1417af9f0

void __thiscall
UE::Math::TMatrix<double>::operator+=(TMatrix<double> *this,TMatrix<double> *param_1)

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
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  
  dVar1 = this->M[3][2];
  dVar26 = param_1->M[0][2];
  dVar27 = param_1->M[0][3];
  dVar29 = this->M[1][1] + param_1->M[1][1];
  dVar31 = this->M[2][3] + param_1->M[2][3];
  dVar2 = this->M[3][3];
  dVar30 = this->M[3][1] + param_1->M[3][1];
  dVar3 = param_1->M[3][2];
  dVar4 = param_1->M[3][3];
  dVar22 = this->M[0][1] + param_1->M[0][1];
  dVar5 = this->M[1][0];
  dVar6 = this->M[1][2];
  dVar7 = param_1->M[1][0];
  dVar8 = this->M[2][0];
  dVar9 = param_1->M[1][2];
  dVar17 = this->M[1][3] + param_1->M[1][3];
  dVar10 = this->M[2][2];
  dVar11 = param_1->M[2][0];
  dVar15 = this->M[2][1] + param_1->M[2][1];
  dVar12 = this->M[3][0];
  dVar13 = param_1->M[2][2];
  dVar14 = param_1->M[3][0];
  dVar28 = this->M[0][2];
  dVar24 = this->M[0][3];
  auVar25._8_4_ = SUB84(dVar22,0);
  auVar25._0_8_ = param_1->M[0][0] + this->M[0][0];
  auVar25._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  *(undefined1 (*) [16])this->M[0] = auVar25;
  dVar24 = dVar24 + dVar27;
  auVar23._8_4_ = SUB84(dVar24,0);
  auVar23._0_8_ = dVar28 + dVar26;
  auVar23._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  *(undefined1 (*) [16])(this->M[0] + 2) = auVar23;
  auVar21._8_4_ = SUB84(dVar29,0);
  auVar21._0_8_ = dVar5 + dVar7;
  auVar21._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
  *(undefined1 (*) [16])this->M[1] = auVar21;
  auVar20._8_4_ = SUB84(dVar17,0);
  auVar20._0_8_ = dVar6 + dVar9;
  auVar20._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  *(undefined1 (*) [16])(this->M[1] + 2) = auVar20;
  auVar19._8_4_ = SUB84(dVar15,0);
  auVar19._0_8_ = dVar8 + dVar11;
  auVar19._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  *(undefined1 (*) [16])this->M[2] = auVar19;
  auVar18._8_4_ = SUB84(dVar31,0);
  auVar18._0_8_ = dVar10 + dVar13;
  auVar18._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
  *(undefined1 (*) [16])(this->M[2] + 2) = auVar18;
  auVar16._8_4_ = SUB84(dVar30,0);
  auVar16._0_8_ = dVar12 + dVar14;
  auVar16._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
  *(undefined1 (*) [16])this->M[3] = auVar16;
  this->M[3][2] = dVar1 + dVar3;
  this->M[3][3] = dVar2 + dVar4;
  return;
}

// ApplyScale @ 1417b4bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMatrix<float> * __thiscall
UE::Math::TMatrix<float>::ApplyScale
          (TMatrix<float> *this,TMatrix<float> *__return_storage_ptr__,float param_1)

{
  undefined1 auStack_78 [32];
  TMatrix<float> local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58.M[0][1] = 0.0;
  local_58.M[0][2] = 0.0;
  local_58.M[0][3] = 0.0;
  local_58.M[1][0] = 0.0;
  local_58.M[1][2] = 0.0;
  local_58.M[1][3] = 0.0;
  local_58.M[2][0] = 0.0;
  local_58.M[2][1] = 0.0;
  local_58.M[2][3] = 0.0;
  local_58.M[3]._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_58.M[3]._8_8_ = _UNK_150689648;
  local_58.M[0][0] = param_1;
  local_58.M[1][1] = param_1;
  local_58.M[2][2] = param_1;
  VectorMatrixMultiply(__return_storage_ptr__,&local_58,this);
  return __return_storage_ptr__;
}

// ApplyScale @ 1417b4c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMatrix<double> * __thiscall
UE::Math::TMatrix<double>::ApplyScale
          (TMatrix<double> *this,TMatrix<double> *__return_storage_ptr__,double param_1)

{
  undefined1 auStack_b8 [32];
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_98.M[0][1] = 0.0;
  local_98.M[1][0] = 0.0;
  local_98.M[2][0] = 0.0;
  local_98.M[2][1] = 0.0;
  local_98.M[3][2] = ___xmm_3ff00000000000000000000000000000;
  local_98.M[3][3] = _UNK_15061cbc8;
  local_98.M[2][3] = 0.0;
  local_98.M[0][2] = 0.0;
  local_98.M[0][3] = 0.0;
  local_98.M[1][2] = 0.0;
  local_98.M[1][3] = 0.0;
  local_98.M[3][0] = 0.0;
  local_98.M[3][1] = 0.0;
  local_98.M[0][0] = param_1;
  local_98.M[1][1] = param_1;
  local_98.M[2][2] = param_1;
  VectorMatrixMultiply(__return_storage_ptr__,&local_98,this);
  return __return_storage_ptr__;
}

// ComputeHash @ 1417bb770

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall UE::Math::TMatrix<float>::ComputeHash(TMatrix<float> *this)

{
  return ___xmm_0000000b0000000a0000000900000008 + (int)this->M[2][0] ^
         ___xmm_00000007000000060000000500000004 + (int)this->M[1][0] ^
         ___xmm_0000000f0000000e0000000d0000000c + (int)this->M[3][0] ^
         (int)__xmm_00000003000000020000000100000000 + (int)this->M[0][0] ^
         _UNK_150689568 + (int)this->M[2][2] ^ _UNK_150631eb8 + (int)this->M[1][2] ^
         _UNK_150689578 + (int)this->M[3][2] ^ _UNK_150631e08 + (int)this->M[0][2] ^
         _UNK_150689564 + (int)this->M[2][1] ^ _UNK_150631eb4 + (int)this->M[1][1] ^
         _UNK_150689574 + (int)this->M[3][1] ^
         __xmm_00000003000000020000000100000000._4_4_ + (int)this->M[0][1] ^
         _UNK_15068956c + (int)this->M[2][3] ^ _UNK_150631ebc + (int)this->M[1][3] ^
         _UNK_15068957c + (int)this->M[3][3] ^ _UNK_150631e0c + (int)this->M[0][3];
}

// ComputeHash @ 1417bb7e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall UE::Math::TMatrix<double>::ComputeHash(TMatrix<double> *this)

{
  return ___xmm_0000000b0000000a0000000900000008 + *(int *)this->M[1] ^
         ___xmm_00000007000000060000000500000004 + *(int *)(this->M[0] + 2) ^
         ___xmm_0000000f0000000e0000000d0000000c + *(int *)(this->M[1] + 2) ^
         (int)__xmm_00000003000000020000000100000000 + *(int *)this->M[0] ^
         _UNK_150689568 + *(int *)(this->M[1] + 1) ^ _UNK_150631eb8 + *(int *)(this->M[0] + 3) ^
         _UNK_150689578 + *(int *)(this->M[1] + 3) ^ _UNK_150631e08 + *(int *)(this->M[0] + 1) ^
         _UNK_150689564 + *(int *)((longlong)this->M[1] + 4) ^
         _UNK_150631eb4 + *(int *)((longlong)this->M[0] + 0x14) ^
         _UNK_150689574 + *(int *)((longlong)this->M[1] + 0x14) ^
         __xmm_00000003000000020000000100000000._4_4_ + *(int *)((longlong)this->M[0] + 4) ^
         _UNK_15068956c + *(int *)((longlong)this->M[1] + 0xc) ^
         _UNK_150631ebc + *(int *)((longlong)this->M[0] + 0x1c) ^
         _UNK_15068957c + *(int *)((longlong)this->M[1] + 0x1c) ^
         _UNK_150631e0c + *(int *)((longlong)this->M[0] + 0xc);
}

// ConcatTranslation @ 1417bbf30

TMatrix<float> * __thiscall
UE::Math::TMatrix<float>::ConcatTranslation
          (TMatrix<float> *this,TMatrix<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(this->M[0] + 2);
  *(undefined8 *)__return_storage_ptr__->M[0] = *(undefined8 *)this->M[0];
  *(undefined8 *)(__return_storage_ptr__->M[0] + 2) = uVar1;
  uVar1 = *(undefined8 *)(this->M[1] + 2);
  *(undefined8 *)__return_storage_ptr__->M[1] = *(undefined8 *)this->M[1];
  *(undefined8 *)(__return_storage_ptr__->M[1] + 2) = uVar1;
  uVar1 = *(undefined8 *)(this->M[2] + 2);
  *(undefined8 *)__return_storage_ptr__->M[2] = *(undefined8 *)this->M[2];
  *(undefined8 *)(__return_storage_ptr__->M[2] + 2) = uVar1;
  __return_storage_ptr__->M[3][0] = this->M[3][0] + (param_1->field0_0x0)._s_0.X;
  __return_storage_ptr__->M[3][1] = this->M[3][1] + (param_1->field0_0x0)._s_0.Y;
  __return_storage_ptr__->M[3][2] = this->M[3][2] + (param_1->field0_0x0)._s_0.Z;
  __return_storage_ptr__->M[3][3] = this->M[3][3];
  return __return_storage_ptr__;
}

// ConcatTranslation @ 1417bbf90

TMatrix<double> * __thiscall
UE::Math::TMatrix<double>::ConcatTranslation
          (TMatrix<double> *this,TMatrix<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = this->M[0][1];
  __return_storage_ptr__->M[0][0] = this->M[0][0];
  __return_storage_ptr__->M[0][1] = dVar1;
  dVar1 = this->M[0][3];
  __return_storage_ptr__->M[0][2] = this->M[0][2];
  __return_storage_ptr__->M[0][3] = dVar1;
  dVar1 = this->M[1][1];
  __return_storage_ptr__->M[1][0] = this->M[1][0];
  __return_storage_ptr__->M[1][1] = dVar1;
  dVar1 = this->M[1][3];
  __return_storage_ptr__->M[1][2] = this->M[1][2];
  __return_storage_ptr__->M[1][3] = dVar1;
  dVar1 = this->M[2][1];
  __return_storage_ptr__->M[2][0] = this->M[2][0];
  __return_storage_ptr__->M[2][1] = dVar1;
  dVar1 = this->M[2][3];
  __return_storage_ptr__->M[2][2] = this->M[2][2];
  __return_storage_ptr__->M[2][3] = dVar1;
  __return_storage_ptr__->M[3][0] = this->M[3][0] + (param_1->field0_0x0)._s_0.X;
  __return_storage_ptr__->M[3][1] = this->M[3][1] + (param_1->field0_0x0)._s_0.Y;
  __return_storage_ptr__->M[3][2] = this->M[3][2] + (param_1->field0_0x0)._s_0.Z;
  __return_storage_ptr__->M[3][3] = this->M[3][3];
  return __return_storage_ptr__;
}

// ContainsNaN @ 1417bcaf0

bool __thiscall UE::Math::TMatrix<float>::ContainsNaN(TMatrix<float> *this)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  float *pfVar4;
  
  lVar3 = 0;
  do {
    lVar2 = 0;
    pfVar4 = (float *)this;
    do {
      iVar1 = _finite((double)*pfVar4);
      if (iVar1 == 0) {
        return true;
      }
      lVar2 = lVar2 + 1;
      pfVar4 = pfVar4 + 1;
    } while (lVar2 < 4);
    lVar3 = lVar3 + 1;
    this = (TMatrix<float> *)((longlong)this + 0x10);
  } while (lVar3 < 4);
  return false;
}

// ContainsNaN @ 1417bcb70

bool __thiscall UE::Math::TMatrix<double>::ContainsNaN(TMatrix<double> *this)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  double *pdVar4;
  
  lVar3 = 0;
  do {
    lVar2 = 0;
    pdVar4 = (double *)this;
    do {
      iVar1 = _finite(*pdVar4);
      if (iVar1 == 0) {
        return true;
      }
      lVar2 = lVar2 + 1;
      pdVar4 = pdVar4 + 1;
    } while (lVar2 < 4);
    lVar3 = lVar3 + 1;
    this = (TMatrix<double> *)((longlong)this + 0x20);
  } while (lVar3 < 4);
  return false;
}

// DebugPrint @ 1417c2580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::Math::TMatrix<float>::DebugPrint(TMatrix<float> *this)

{
  int iVar1;
  int iVar2;
  FString local_28;
  FString local_18;
  
  if (4 < (byte)LogUnrealMath._0_1_) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    ::FString::PrintfImpl(&local_18,L"[%g %g %g %g] ");
    iVar1 = 0;
    iVar2 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar2 = iVar1;
    }
    ::FString::AppendChars(&local_28,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_18,L"[%g %g %g %g] ");
    iVar2 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar2 = iVar1;
    }
    ::FString::AppendChars(&local_28,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_18,L"[%g %g %g %g] ");
    iVar2 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar2 = iVar1;
    }
    ::FString::AppendChars(&local_28,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_18,L"[%g %g %g %g] ");
    iVar2 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar2 = iVar1;
    }
    ::FString::AppendChars(&local_28,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    Logging::Private::BasicLog<5>
              (&`public:_void___cdecl_UE::Math::TMatrix<float>::DebugPrint(void)const___ptr64'::__l3
                ::LOG_Static,(FLogCategoryBase *)&LogUnrealMath);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// DebugPrint @ 1417c27b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::Math::TMatrix<double>::DebugPrint(TMatrix<double> *this)

{
  int iVar1;
  int iVar2;
  FString local_28;
  FString local_18;
  
  if (4 < (byte)LogUnrealMath._0_1_) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    ::FString::PrintfImpl(&local_18,L"[%g %g %g %g] ");
    iVar1 = 0;
    iVar2 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar2 = iVar1;
    }
    ::FString::AppendChars(&local_28,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_18,L"[%g %g %g %g] ");
    iVar2 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar2 = iVar1;
    }
    ::FString::AppendChars(&local_28,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_18,L"[%g %g %g %g] ");
    iVar2 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar2 = iVar1;
    }
    ::FString::AppendChars(&local_28,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_18,L"[%g %g %g %g] ");
    iVar2 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar2 = iVar1;
    }
    ::FString::AppendChars(&local_28,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    Logging::Private::BasicLog<5>
              (&`public:_void___cdecl_UE::Math::TMatrix<double>::DebugPrint(void)const___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogUnrealMath);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Determinant @ 1417c4010

float __thiscall UE::Math::TMatrix<float>::Determinant(TMatrix<float> *this)

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
  
  fVar9 = this->M[0][2];
  fVar10 = this->M[0][3];
  fVar11 = this->M[1][2];
  fVar1 = this->M[2][2];
  fVar2 = this->M[3][2];
  fVar3 = this->M[2][3];
  fVar4 = this->M[3][3];
  fVar5 = this->M[2][1];
  fVar14 = fVar9 * this->M[1][3] - fVar10 * fVar11;
  fVar6 = this->M[3][1];
  fVar12 = fVar3 * fVar9 - fVar1 * fVar10;
  fVar7 = this->M[1][1];
  fVar13 = fVar3 * fVar11 - fVar1 * this->M[1][3];
  fVar8 = this->M[0][1];
  fVar10 = fVar4 * fVar9 - fVar2 * fVar10;
  fVar11 = fVar4 * fVar11 - fVar2 * this->M[1][3];
  fVar9 = fVar4 * fVar1 - fVar2 * fVar3;
  return ((((fVar9 * fVar7 - fVar11 * fVar5) + fVar13 * fVar6) * this->M[0][0] -
          ((fVar9 * fVar8 - fVar10 * fVar5) + fVar12 * fVar6) * this->M[1][0]) +
         ((fVar11 * fVar8 - fVar10 * fVar7) + fVar14 * fVar6) * this->M[2][0]) -
         ((fVar13 * fVar8 - fVar12 * fVar7) + fVar14 * fVar5) * this->M[3][0];
}

// Determinant @ 1417c41c0

double __thiscall UE::Math::TMatrix<double>::Determinant(TMatrix<double> *this)

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
  
  dVar1 = this->M[0][2];
  dVar2 = this->M[0][3];
  dVar3 = this->M[1][2];
  dVar4 = this->M[2][2];
  dVar5 = this->M[3][2];
  dVar6 = this->M[2][3];
  dVar7 = this->M[3][3];
  dVar8 = this->M[2][1];
  dVar14 = dVar1 * this->M[1][3] - dVar2 * dVar3;
  dVar9 = this->M[3][1];
  dVar12 = dVar6 * dVar1 - dVar4 * dVar2;
  dVar10 = this->M[1][1];
  dVar13 = dVar6 * dVar3 - dVar4 * this->M[1][3];
  dVar11 = this->M[0][1];
  dVar2 = dVar7 * dVar1 - dVar5 * dVar2;
  dVar3 = dVar7 * dVar3 - dVar5 * this->M[1][3];
  dVar1 = dVar7 * dVar4 - dVar5 * dVar6;
  return ((((dVar1 * dVar10 - dVar3 * dVar8) + dVar13 * dVar9) * this->M[0][0] -
          ((dVar1 * dVar11 - dVar2 * dVar8) + dVar12 * dVar9) * this->M[1][0]) +
         ((dVar3 * dVar11 - dVar2 * dVar10) + dVar14 * dVar9) * this->M[2][0]) -
         ((dVar13 * dVar11 - dVar12 * dVar10) + dVar14 * dVar8) * this->M[3][0];
}

// DiagnosticCheckNaN @ 1417c4370

void __thiscall UE::Math::TMatrix<float>::DiagnosticCheckNaN(TMatrix<float> *this)

{
  return;
}

// DiagnosticCheckNaN @ 1417c4380

void __thiscall UE::Math::TMatrix<double>::DiagnosticCheckNaN(TMatrix<double> *this)

{
  return;
}

// Equals @ 1417c57f0

bool __thiscall
UE::Math::TMatrix<float>::Equals(TMatrix<float> *this,TMatrix<float> *param_1,float param_2)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = 0;
  lVar2 = (longlong)this - (longlong)param_1;
  do {
    lVar3 = 0;
    pfVar1 = (float *)param_1;
    do {
      if (param_2 < (float)((uint)(*(float *)(lVar2 + (longlong)pfVar1) - *pfVar1) &
                           __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        return false;
      }
      lVar3 = lVar3 + 1;
      pfVar1 = pfVar1 + 1;
    } while (lVar3 < 4);
    lVar4 = lVar4 + 1;
    param_1 = (TMatrix<float> *)((longlong)param_1 + 0x10);
  } while (lVar4 < 4);
  return true;
}

// Equals @ 1417c5850

bool __thiscall
UE::Math::TMatrix<double>::Equals(TMatrix<double> *this,TMatrix<double> *param_1,double param_2)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  
  lVar4 = 0;
  lVar2 = (longlong)this - (longlong)param_1;
  do {
    lVar3 = 0;
    pdVar1 = (double *)param_1;
    do {
      dVar5 = *(double *)(lVar2 + (longlong)pdVar1) - *pdVar1;
      if (param_2 < (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
      {
        return false;
      }
      lVar3 = lVar3 + 1;
      pdVar1 = pdVar1 + 1;
    } while (lVar3 < 4);
    lVar4 = lVar4 + 1;
    param_1 = (TMatrix<double> *)((longlong)param_1 + 0x20);
  } while (lVar4 < 4);
  return true;
}

// ErrorEnsure @ 1417c6720

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Math::TMatrix<float>::ErrorEnsure(wchar_t *param_1)

{
  wchar_t *local_res8;
  wchar_t **local_res10 [3];
  
  local_res8 = param_1;
  if (1 < (byte)LogUnrealMath._0_1_) {
    Logging::Private::BasicLog<2>
              (&`private:_static_void___cdecl_UE::Math::TMatrix<float>::ErrorEnsure(wchar_t_const*___ptr64)'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogUnrealMath);
  }
  local_res10[0] = &local_res8;
  `UE::Math::TMatrix<float>::ErrorEnsure'::__l2::<lambda_1>::operator()(local_res10);
  return;
}

// ErrorEnsure @ 1417c6770

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Math::TMatrix<double>::ErrorEnsure(wchar_t *param_1)

{
  wchar_t *local_res8;
  wchar_t **local_res10 [3];
  
  local_res8 = param_1;
  if (1 < (byte)LogUnrealMath._0_1_) {
    Logging::Private::BasicLog<2>
              (&`private:_static_void___cdecl_UE::Math::TMatrix<double>::ErrorEnsure(wchar_t_const*___ptr64)'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogUnrealMath);
  }
  local_res10[0] = &local_res8;
  `UE::Math::TMatrix<double>::ErrorEnsure'::__l2::<lambda_1>::operator()(local_res10);
  return;
}

// ExtractScaling @ 1417cc070

TVector<float> * __thiscall
UE::Math::TMatrix<float>::ExtractScaling
          (TMatrix<float> *this,TVector<float> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar5 = __real_3f800000;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  fVar6 = this->M[0][1];
  fVar1 = this->M[0][2];
  fVar7 = this->M[1][0];
  fVar2 = this->M[2][0];
  fVar4 = this->M[0][0];
  fVar3 = this->M[1][2];
  fVar4 = fVar4 * fVar4 + fVar6 * fVar6 + fVar1 * fVar1;
  fVar6 = this->M[1][1];
  fVar1 = this->M[2][1];
  fVar7 = fVar7 * fVar7 + fVar6 * fVar6 + fVar3 * fVar3;
  fVar6 = this->M[2][2];
  fVar6 = fVar2 * fVar2 + fVar1 * fVar1 + fVar6 * fVar6;
  if (param_1 < fVar4) {
    fVar4 = SQRT(fVar4);
    (__return_storage_ptr__->field0_0x0)._s_0.X = fVar4;
    fVar4 = fVar5 / fVar4;
    fVar1 = this->M[0][1];
    fVar2 = this->M[0][2];
    this->M[0][0] = fVar4 * this->M[0][0];
    this->M[0][1] = fVar4 * fVar1;
    this->M[0][2] = fVar4 * fVar2;
  }
  if (fVar7 <= param_1) {
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  }
  else {
    fVar7 = SQRT(fVar7);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar7;
    fVar7 = fVar5 / fVar7;
    fVar1 = this->M[1][1];
    fVar2 = this->M[1][2];
    this->M[1][0] = fVar7 * this->M[1][0];
    this->M[1][1] = fVar7 * fVar1;
    this->M[1][2] = fVar7 * fVar2;
  }
  if (param_1 < fVar6) {
    fVar6 = SQRT(fVar6);
    (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar6;
    fVar5 = fVar5 / fVar6;
    fVar6 = this->M[2][1];
    fVar1 = this->M[2][2];
    this->M[2][0] = fVar5 * this->M[2][0];
    this->M[2][1] = fVar5 * fVar6;
    this->M[2][2] = fVar5 * fVar1;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// ExtractScaling @ 1417cc1d0

TVector<double> * __thiscall
UE::Math::TMatrix<double>::ExtractScaling
          (TMatrix<double> *this,TVector<double> *__return_storage_ptr__,double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar9 = __real_3ff0000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  dVar10 = this->M[0][1];
  dVar1 = this->M[0][2];
  dVar11 = this->M[1][0];
  dVar2 = this->M[2][0];
  dVar3 = this->M[0][0];
  dVar4 = this->M[1][2];
  dVar3 = dVar3 * dVar3 + dVar10 * dVar10 + dVar1 * dVar1;
  dVar10 = this->M[1][1];
  dVar1 = this->M[2][1];
  dVar11 = dVar11 * dVar11 + dVar10 * dVar10 + dVar4 * dVar4;
  dVar10 = this->M[2][2];
  auVar8._0_8_ = dVar10 * dVar10;
  auVar8._8_8_ = 0.0;
  dVar10 = dVar2 * dVar2 + dVar1 * dVar1 + auVar8._0_8_;
  if (param_1 < dVar3) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar3;
    auVar8 = sqrtpd(auVar8,auVar5);
    dVar2 = dVar9 / auVar8._0_8_;
    (__return_storage_ptr__->field0_0x0)._s_0.X = auVar8._0_8_;
    auVar8._0_8_ = this->M[0][0] * dVar2;
    auVar8._8_8_ = this->M[0][1] * dVar2;
    dVar1 = this->M[0][2];
    *(undefined1 (*) [16])this->M[0] = auVar8;
    this->M[0][2] = dVar2 * dVar1;
  }
  if (dVar11 <= param_1) {
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  }
  else {
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar11;
    auVar8 = sqrtpd(auVar8,auVar7);
    dVar11 = dVar9 / auVar8._0_8_;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = auVar8._0_8_;
    auVar8._0_8_ = this->M[1][0] * dVar11;
    auVar8._8_8_ = this->M[1][1] * dVar11;
    dVar1 = this->M[1][2];
    *(undefined1 (*) [16])this->M[1] = auVar8;
    this->M[1][2] = dVar11 * dVar1;
  }
  if (param_1 < dVar10) {
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar10;
    auVar8 = sqrtpd(auVar8,auVar6);
    dVar9 = dVar9 / auVar8._0_8_;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar8._0_8_;
    dVar1 = this->M[2][1];
    dVar10 = this->M[2][2];
    this->M[2][0] = this->M[2][0] * dVar9;
    this->M[2][1] = dVar1 * dVar9;
    this->M[2][2] = dVar9 * dVar10;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// GetColumn @ 1417d2a90

TVector<float> * __thiscall
UE::Math::TMatrix<float>::GetColumn
          (TMatrix<float> *this,TVector<float> *__return_storage_ptr__,int param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = this->M[0][param_1];
  (__return_storage_ptr__->field0_0x0)._s_0.Y = this->M[1][param_1];
  (__return_storage_ptr__->field0_0x0)._s_0.Z = this->M[2][param_1];
  return __return_storage_ptr__;
}

// GetColumn @ 1417d2ac0

TVector<double> * __thiscall
UE::Math::TMatrix<double>::GetColumn
          (TMatrix<double> *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = this->M[0][param_1];
  (__return_storage_ptr__->field0_0x0)._s_0.Y = this->M[1][param_1];
  (__return_storage_ptr__->field0_0x0)._s_0.Z = this->M[2][param_1];
  return __return_storage_ptr__;
}

// GetFrustumBottomPlane @ 1417d3ca0

bool __thiscall
UE::Math::TMatrix<float>::GetFrustumBottomPlane(TMatrix<float> *this,TPlane<float> *param_1)

{
  bool bVar1;
  
  bVar1 = MakeFrustumPlane<float>
                    (this->M[0][3] + this->M[0][1],this->M[1][3] + this->M[1][1],
                     this->M[2][3] + this->M[2][1],this->M[3][3] + this->M[3][1],param_1);
  return bVar1;
}

// GetFrustumBottomPlane @ 1417d3cf0

bool __thiscall
UE::Math::TMatrix<double>::GetFrustumBottomPlane(TMatrix<double> *this,TPlane<double> *param_1)

{
  bool bVar1;
  
  bVar1 = MakeFrustumPlane<double>
                    (this->M[0][3] + this->M[0][1],this->M[1][3] + this->M[1][1],
                     this->M[2][3] + this->M[2][1],this->M[3][3] + this->M[3][1],param_1);
  return bVar1;
}

// GetFrustumFarPlane @ 1417d3d40

bool __thiscall
UE::Math::TMatrix<float>::GetFrustumFarPlane(TMatrix<float> *this,TPlane<float> *param_1)

{
  bool bVar1;
  
  bVar1 = MakeFrustumPlane<float>(this->M[0][2],this->M[1][2],this->M[2][2],this->M[3][2],param_1);
  return bVar1;
}

// GetFrustumFarPlane @ 1417d3d70

bool __thiscall
UE::Math::TMatrix<double>::GetFrustumFarPlane(TMatrix<double> *this,TPlane<double> *param_1)

{
  bool bVar1;
  
  bVar1 = MakeFrustumPlane<double>(this->M[0][2],this->M[1][2],this->M[2][2],this->M[3][2],param_1);
  return bVar1;
}

// GetFrustumLeftPlane @ 1417d3da0

bool __thiscall
UE::Math::TMatrix<float>::GetFrustumLeftPlane(TMatrix<float> *this,TPlane<float> *param_1)

{
  bool bVar1;
  
  bVar1 = MakeFrustumPlane<float>
                    (this->M[0][3] + this->M[0][0],this->M[1][3] + this->M[1][0],
                     this->M[2][3] + this->M[2][0],this->M[3][3] + this->M[3][0],param_1);
  return bVar1;
}

// GetFrustumLeftPlane @ 1417d3de0

bool __thiscall
UE::Math::TMatrix<double>::GetFrustumLeftPlane(TMatrix<double> *this,TPlane<double> *param_1)

{
  bool bVar1;
  
  bVar1 = MakeFrustumPlane<double>
                    (this->M[0][3] + this->M[0][0],this->M[1][3] + this->M[1][0],
                     this->M[2][3] + this->M[2][0],this->M[3][3] + this->M[3][0],param_1);
  return bVar1;
}

// GetFrustumNearPlane @ 1417d3e20

bool __thiscall
UE::Math::TMatrix<float>::GetFrustumNearPlane(TMatrix<float> *this,TPlane<float> *param_1)

{
  bool bVar1;
  
  bVar1 = MakeFrustumPlane<float>
                    (this->M[0][3] - this->M[0][2],this->M[1][3] - this->M[1][2],
                     this->M[2][3] - this->M[2][2],this->M[3][3] - this->M[3][2],param_1);
  return bVar1;
}

// GetFrustumNearPlane @ 1417d3e70

bool __thiscall
UE::Math::TMatrix<double>::GetFrustumNearPlane(TMatrix<double> *this,TPlane<double> *param_1)

{
  bool bVar1;
  
  bVar1 = MakeFrustumPlane<double>
                    (this->M[0][3] - this->M[0][2],this->M[1][3] - this->M[1][2],
                     this->M[2][3] - this->M[2][2],this->M[3][3] - this->M[3][2],param_1);
  return bVar1;
}

// GetFrustumRightPlane @ 1417d3ec0

bool __thiscall
UE::Math::TMatrix<float>::GetFrustumRightPlane(TMatrix<float> *this,TPlane<float> *param_1)

{
  bool bVar1;
  
  bVar1 = MakeFrustumPlane<float>
                    (this->M[0][3] - this->M[0][0],this->M[1][3] - this->M[1][0],
                     this->M[2][3] - this->M[2][0],this->M[3][3] - this->M[3][0],param_1);
  return bVar1;
}

// GetFrustumRightPlane @ 1417d3f00

bool __thiscall
UE::Math::TMatrix<double>::GetFrustumRightPlane(TMatrix<double> *this,TPlane<double> *param_1)

{
  bool bVar1;
  
  bVar1 = MakeFrustumPlane<double>
                    (this->M[0][3] - this->M[0][0],this->M[1][3] - this->M[1][0],
                     this->M[2][3] - this->M[2][0],this->M[3][3] - this->M[3][0],param_1);
  return bVar1;
}

// GetFrustumTopPlane @ 1417d3f40

bool __thiscall
UE::Math::TMatrix<float>::GetFrustumTopPlane(TMatrix<float> *this,TPlane<float> *param_1)

{
  bool bVar1;
  
  bVar1 = MakeFrustumPlane<float>
                    (this->M[0][3] - this->M[0][1],this->M[1][3] - this->M[1][1],
                     this->M[2][3] - this->M[2][1],this->M[3][3] - this->M[3][1],param_1);
  return bVar1;
}

// GetFrustumTopPlane @ 1417d3f90

bool __thiscall
UE::Math::TMatrix<double>::GetFrustumTopPlane(TMatrix<double> *this,TPlane<double> *param_1)

{
  bool bVar1;
  
  bVar1 = MakeFrustumPlane<double>
                    (this->M[0][3] - this->M[0][1],this->M[1][3] - this->M[1][1],
                     this->M[2][3] - this->M[2][1],this->M[3][3] - this->M[3][1],param_1);
  return bVar1;
}

// GetMatrixWithoutScale @ 1417d44d0

TMatrix<float> * __thiscall
UE::Math::TMatrix<float>::GetMatrixWithoutScale
          (TMatrix<float> *this,TMatrix<float> *__return_storage_ptr__,float param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(this->M[0] + 2);
  *(undefined8 *)__return_storage_ptr__->M[0] = *(undefined8 *)this->M[0];
  *(undefined8 *)(__return_storage_ptr__->M[0] + 2) = uVar1;
  uVar1 = *(undefined8 *)(this->M[1] + 2);
  *(undefined8 *)__return_storage_ptr__->M[1] = *(undefined8 *)this->M[1];
  *(undefined8 *)(__return_storage_ptr__->M[1] + 2) = uVar1;
  uVar1 = *(undefined8 *)(this->M[2] + 2);
  *(undefined8 *)__return_storage_ptr__->M[2] = *(undefined8 *)this->M[2];
  *(undefined8 *)(__return_storage_ptr__->M[2] + 2) = uVar1;
  uVar1 = *(undefined8 *)(this->M[3] + 2);
  *(undefined8 *)__return_storage_ptr__->M[3] = *(undefined8 *)this->M[3];
  *(undefined8 *)(__return_storage_ptr__->M[3] + 2) = uVar1;
  RemoveScaling(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetMatrixWithoutScale @ 1417d4520

TMatrix<double> * __thiscall
UE::Math::TMatrix<double>::GetMatrixWithoutScale
          (TMatrix<double> *this,TMatrix<double> *__return_storage_ptr__,double param_1)

{
  double dVar1;
  
  dVar1 = this->M[0][1];
  __return_storage_ptr__->M[0][0] = this->M[0][0];
  __return_storage_ptr__->M[0][1] = dVar1;
  dVar1 = this->M[0][3];
  __return_storage_ptr__->M[0][2] = this->M[0][2];
  __return_storage_ptr__->M[0][3] = dVar1;
  dVar1 = this->M[1][1];
  __return_storage_ptr__->M[1][0] = this->M[1][0];
  __return_storage_ptr__->M[1][1] = dVar1;
  dVar1 = this->M[1][3];
  __return_storage_ptr__->M[1][2] = this->M[1][2];
  __return_storage_ptr__->M[1][3] = dVar1;
  dVar1 = this->M[2][1];
  __return_storage_ptr__->M[2][0] = this->M[2][0];
  __return_storage_ptr__->M[2][1] = dVar1;
  dVar1 = this->M[2][3];
  __return_storage_ptr__->M[2][2] = this->M[2][2];
  __return_storage_ptr__->M[2][3] = dVar1;
  dVar1 = this->M[3][1];
  __return_storage_ptr__->M[3][0] = this->M[3][0];
  __return_storage_ptr__->M[3][1] = dVar1;
  dVar1 = this->M[3][3];
  __return_storage_ptr__->M[3][2] = this->M[3][2];
  __return_storage_ptr__->M[3][3] = dVar1;
  RemoveScaling(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetMaximumAxisScale @ 1417d45f0

float __thiscall UE::Math::TMatrix<float>::GetMaximumAxisScale(TMatrix<float> *this)

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
  
  fVar9 = this->M[1][0];
  fVar8 = this->M[2][0];
  fVar1 = this->M[2][1];
  fVar2 = this->M[2][2];
  fVar3 = this->M[1][2];
  fVar4 = this->M[0][0];
  fVar5 = this->M[0][2];
  fVar6 = this->M[0][1];
  fVar7 = this->M[1][1];
  fVar9 = fVar7 * fVar7 + fVar9 * fVar9 + fVar3 * fVar3;
  fVar8 = fVar1 * fVar1 + fVar8 * fVar8 + fVar2 * fVar2;
  if (fVar9 <= fVar8) {
    fVar9 = fVar8;
  }
  fVar8 = fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5;
  if (fVar9 <= fVar8) {
    fVar9 = fVar8;
  }
  return SQRT(fVar9);
}

// GetMaximumAxisScale @ 1417d46a0

double __thiscall UE::Math::TMatrix<double>::GetMaximumAxisScale(TMatrix<double> *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  
  dVar1 = this->M[1][0];
  dVar11 = this->M[2][0];
  dVar2 = this->M[2][1];
  dVar3 = this->M[2][2];
  dVar4 = this->M[1][2];
  dVar5 = this->M[0][0];
  dVar6 = this->M[0][2];
  dVar7 = this->M[0][1];
  dVar8 = this->M[1][1];
  auVar10._0_8_ = dVar1 * dVar1;
  auVar10._8_8_ = 0;
  dVar4 = dVar8 * dVar8 + auVar10._0_8_ + dVar4 * dVar4;
  dVar11 = dVar2 * dVar2 + dVar11 * dVar11 + dVar3 * dVar3;
  dVar1 = dVar7 * dVar7 + dVar5 * dVar5 + dVar6 * dVar6;
  if (dVar4 <= dVar11) {
    dVar4 = dVar11;
  }
  if (dVar4 <= dVar1) {
    dVar4 = dVar1;
  }
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar4;
  auVar10 = sqrtpd(auVar10,auVar9);
  return auVar10._0_8_;
}

// GetMinimumAxisScale @ 1417d4880

float __thiscall UE::Math::TMatrix<float>::GetMinimumAxisScale(TMatrix<float> *this)

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
  
  fVar9 = this->M[1][0];
  fVar8 = this->M[2][0];
  fVar1 = this->M[2][1];
  fVar2 = this->M[2][2];
  fVar3 = this->M[1][2];
  fVar4 = this->M[0][0];
  fVar5 = this->M[0][2];
  fVar6 = this->M[0][1];
  fVar7 = this->M[1][1];
  fVar9 = fVar7 * fVar7 + fVar9 * fVar9 + fVar3 * fVar3;
  fVar8 = fVar1 * fVar1 + fVar8 * fVar8 + fVar2 * fVar2;
  if (fVar8 <= fVar9) {
    fVar9 = fVar8;
  }
  fVar8 = fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5;
  if (fVar8 <= fVar9) {
    fVar9 = fVar8;
  }
  return SQRT(fVar9);
}

// GetMinimumAxisScale @ 1417d4930

double __thiscall UE::Math::TMatrix<double>::GetMinimumAxisScale(TMatrix<double> *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  
  dVar1 = this->M[1][0];
  dVar11 = this->M[2][0];
  dVar2 = this->M[2][1];
  dVar3 = this->M[2][2];
  dVar4 = this->M[1][2];
  dVar5 = this->M[0][0];
  dVar6 = this->M[0][2];
  dVar7 = this->M[0][1];
  dVar8 = this->M[1][1];
  auVar10._0_8_ = dVar1 * dVar1;
  auVar10._8_8_ = 0;
  dVar4 = dVar8 * dVar8 + auVar10._0_8_ + dVar4 * dVar4;
  dVar11 = dVar2 * dVar2 + dVar11 * dVar11 + dVar3 * dVar3;
  dVar1 = dVar7 * dVar7 + dVar5 * dVar5 + dVar6 * dVar6;
  if (dVar11 <= dVar4) {
    dVar4 = dVar11;
  }
  if (dVar1 <= dVar4) {
    dVar4 = dVar1;
  }
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar4;
  auVar10 = sqrtpd(auVar10,auVar9);
  return auVar10._0_8_;
}

// GetOrigin @ 1417d4dd0

TVector<float> * __thiscall
UE::Math::TMatrix<float>::GetOrigin(TMatrix<float> *this,TVector<float> *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = this->M[3][0];
  (__return_storage_ptr__->field0_0x0)._s_0.Y = this->M[3][1];
  (__return_storage_ptr__->field0_0x0)._s_0.Z = this->M[3][2];
  return __return_storage_ptr__;
}

// GetOrigin @ 1417d4df0

TVector<double> * __thiscall
UE::Math::TMatrix<double>::GetOrigin(TMatrix<double> *this,TVector<double> *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = this->M[3][0];
  (__return_storage_ptr__->field0_0x0)._s_0.Y = this->M[3][1];
  (__return_storage_ptr__->field0_0x0)._s_0.Z = this->M[3][2];
  return __return_storage_ptr__;
}

// GetScaleVector @ 1417d7210

TVector<float> * __thiscall
UE::Math::TMatrix<float>::GetScaleVector
          (TMatrix<float> *this,TVector<float> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  (__return_storage_ptr__->field0_0x0)._s_0.X = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 1.0;
  fVar4 = this->M[0][1];
  fVar1 = this->M[0][0];
  fVar2 = this->M[0][2];
  fVar3 = 0.0;
  fVar4 = fVar1 * fVar1 + fVar4 * fVar4 + fVar2 * fVar2;
  if (param_1 < fVar4) {
    fVar3 = SQRT(fVar4);
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar3;
  fVar4 = this->M[1][0];
  fVar1 = this->M[1][1];
  fVar2 = this->M[1][2];
  fVar3 = 0.0;
  fVar4 = fVar1 * fVar1 + fVar4 * fVar4 + fVar2 * fVar2;
  if (param_1 < fVar4) {
    fVar3 = SQRT(fVar4);
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar3;
  fVar4 = this->M[2][1];
  fVar1 = this->M[2][0];
  fVar2 = this->M[2][2];
  fVar4 = fVar1 * fVar1 + fVar4 * fVar4 + fVar2 * fVar2;
  if (param_1 < fVar4) {
    (__return_storage_ptr__->field0_0x0)._s_0.Z = SQRT(fVar4);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// GetScaleVector @ 1417d72e0

TVector<double> * __thiscall
UE::Math::TMatrix<double>::GetScaleVector
          (TMatrix<double> *this,TVector<double> *__return_storage_ptr__,double param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  
  (__return_storage_ptr__->field0_0x0)._s_0.X = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 1.0;
  dVar9 = this->M[0][1];
  dVar1 = this->M[0][0];
  dVar2 = this->M[0][2];
  auVar6._0_8_ = dVar9 * dVar9;
  auVar6._8_8_ = 0;
  dVar9 = dVar1 * dVar1 + auVar6._0_8_ + dVar2 * dVar2;
  if (dVar9 <= param_1) {
    dVar9 = 0.0;
  }
  else {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar9;
    auVar6 = sqrtpd(auVar6,auVar5);
    dVar9 = auVar6._0_8_;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar9;
  dVar9 = this->M[1][1];
  dVar1 = this->M[1][0];
  dVar2 = this->M[1][2];
  auVar7._0_8_ = dVar1 * dVar1;
  auVar7._8_8_ = 0;
  dVar9 = dVar9 * dVar9 + auVar7._0_8_ + dVar2 * dVar2;
  if (dVar9 <= param_1) {
    dVar9 = 0.0;
  }
  else {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = dVar9;
    auVar6 = sqrtpd(auVar7,auVar3);
    dVar9 = auVar6._0_8_;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar9;
  dVar9 = this->M[2][1];
  dVar1 = this->M[2][0];
  dVar2 = this->M[2][2];
  auVar8._0_8_ = dVar9 * dVar9;
  auVar8._8_8_ = 0;
  dVar9 = dVar1 * dVar1 + auVar8._0_8_ + dVar2 * dVar2;
  if (param_1 < dVar9) {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = dVar9;
    auVar6 = sqrtpd(auVar8,auVar4);
    (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar6._0_8_;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// GetScaledAxes @ 1417d74d0

void __thiscall
UE::Math::TMatrix<float>::GetScaledAxes
          (TMatrix<float> *this,TVector<float> *param_1,TVector<float> *param_2,
          TVector<float> *param_3)

{
  (param_1->field0_0x0)._s_0.X = this->M[0][0];
  (param_1->field0_0x0)._s_0.Y = this->M[0][1];
  (param_1->field0_0x0)._s_0.Z = this->M[0][2];
  (param_2->field0_0x0)._s_0.X = this->M[1][0];
  (param_2->field0_0x0)._s_0.Y = this->M[1][1];
  (param_2->field0_0x0)._s_0.Z = this->M[1][2];
  (param_3->field0_0x0)._s_0.X = this->M[2][0];
  (param_3->field0_0x0)._s_0.Y = this->M[2][1];
  (param_3->field0_0x0)._s_0.Z = this->M[2][2];
  return;
}

// GetScaledAxes @ 1417d7510

void __thiscall
UE::Math::TMatrix<double>::GetScaledAxes
          (TMatrix<double> *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  (param_1->field0_0x0)._s_0.X = this->M[0][0];
  (param_1->field0_0x0)._s_0.Y = this->M[0][1];
  (param_1->field0_0x0)._s_0.Z = this->M[0][2];
  (param_2->field0_0x0)._s_0.X = this->M[1][0];
  (param_2->field0_0x0)._s_0.Y = this->M[1][1];
  (param_2->field0_0x0)._s_0.Z = this->M[1][2];
  (param_3->field0_0x0)._s_0.X = this->M[2][0];
  (param_3->field0_0x0)._s_0.Y = this->M[2][1];
  (param_3->field0_0x0)._s_0.Z = this->M[2][2];
  return;
}

// GetScaledAxis @ 1417d7560

TVector<float> * __thiscall
UE::Math::TMatrix<float>::GetScaledAxis
          (TMatrix<float> *this,TVector<float> *__return_storage_ptr__,Type param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  TVector<float> *pTVar4;
  
  if (param_1 != None) {
    if (param_1 == X) {
      (__return_storage_ptr__->field0_0x0)._s_0.X = this->M[0][0];
      (__return_storage_ptr__->field0_0x0)._s_0.Y = this->M[0][1];
      (__return_storage_ptr__->field0_0x0)._s_0.Z = this->M[0][2];
      return __return_storage_ptr__;
    }
    if (param_1 == Y) {
      (__return_storage_ptr__->field0_0x0)._s_0.X = this->M[1][0];
      (__return_storage_ptr__->field0_0x0)._s_0.Y = this->M[1][1];
      (__return_storage_ptr__->field0_0x0)._s_0.Z = this->M[1][2];
      return __return_storage_ptr__;
    }
    if (param_1 == Z) {
      (__return_storage_ptr__->field0_0x0)._s_0.X = this->M[2][0];
      (__return_storage_ptr__->field0_0x0)._s_0.Y = this->M[2][1];
      (__return_storage_ptr__->field0_0x0)._s_0.Z = this->M[2][2];
      return __return_storage_ptr__;
    }
  }
  bVar3 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8889999205074993814>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Matrix.inl"
                     ,0x296,"0");
  uVar2 = TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TVector<float> *)(*pcVar1)();
    return pTVar4;
  }
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = TVector<float>::ZeroVector.field0_0x0._0_8_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)uVar2;
  return __return_storage_ptr__;
}

// GetScaledAxis @ 1417d7620

TVector<double> * __thiscall
UE::Math::TMatrix<double>::GetScaledAxis
          (TMatrix<double> *this,TVector<double> *__return_storage_ptr__,Type param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  TVector<double> *pTVar5;
  
  if (param_1 != None) {
    if (param_1 == X) {
      (__return_storage_ptr__->field0_0x0)._s_0.X = this->M[0][0];
      (__return_storage_ptr__->field0_0x0)._s_0.Y = this->M[0][1];
      (__return_storage_ptr__->field0_0x0)._s_0.Z = this->M[0][2];
      return __return_storage_ptr__;
    }
    if (param_1 == Y) {
      (__return_storage_ptr__->field0_0x0)._s_0.X = this->M[1][0];
      (__return_storage_ptr__->field0_0x0)._s_0.Y = this->M[1][1];
      (__return_storage_ptr__->field0_0x0)._s_0.Z = this->M[1][2];
      return __return_storage_ptr__;
    }
    if (param_1 == Z) {
      (__return_storage_ptr__->field0_0x0)._s_0.X = this->M[2][0];
      (__return_storage_ptr__->field0_0x0)._s_0.Y = this->M[2][1];
      (__return_storage_ptr__->field0_0x0)._s_0.Z = this->M[2][2];
      return __return_storage_ptr__;
    }
  }
  bVar4 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8889999205074993814>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Matrix.inl"
                     ,0x296,"0");
  uVar3 = TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TVector<double> *)(*pcVar1)();
    return pTVar5;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)uVar3;
  return __return_storage_ptr__;
}

// GetTransposed @ 1417d84e0

TMatrix<float> * __thiscall
UE::Math::TMatrix<float>::GetTransposed(TMatrix<float> *this,TMatrix<float> *__return_storage_ptr__)

{
  __return_storage_ptr__->M[0][0] = this->M[0][0];
  __return_storage_ptr__->M[0][1] = this->M[1][0];
  __return_storage_ptr__->M[0][2] = this->M[2][0];
  __return_storage_ptr__->M[0][3] = this->M[3][0];
  __return_storage_ptr__->M[1][0] = this->M[0][1];
  __return_storage_ptr__->M[1][1] = this->M[1][1];
  __return_storage_ptr__->M[1][2] = this->M[2][1];
  __return_storage_ptr__->M[1][3] = this->M[3][1];
  __return_storage_ptr__->M[2][0] = this->M[0][2];
  __return_storage_ptr__->M[2][1] = this->M[1][2];
  __return_storage_ptr__->M[2][2] = this->M[2][2];
  __return_storage_ptr__->M[2][3] = this->M[3][2];
  __return_storage_ptr__->M[3][0] = this->M[0][3];
  __return_storage_ptr__->M[3][1] = this->M[1][3];
  __return_storage_ptr__->M[3][2] = this->M[2][3];
  __return_storage_ptr__->M[3][3] = this->M[3][3];
  return __return_storage_ptr__;
}

// GetTransposed @ 1417d8550

TMatrix<double> * __thiscall
UE::Math::TMatrix<double>::GetTransposed
          (TMatrix<double> *this,TMatrix<double> *__return_storage_ptr__)

{
  __return_storage_ptr__->M[0][0] = this->M[0][0];
  __return_storage_ptr__->M[0][1] = this->M[1][0];
  __return_storage_ptr__->M[0][2] = this->M[2][0];
  __return_storage_ptr__->M[0][3] = this->M[3][0];
  __return_storage_ptr__->M[1][0] = this->M[0][1];
  __return_storage_ptr__->M[1][1] = this->M[1][1];
  __return_storage_ptr__->M[1][2] = this->M[2][1];
  __return_storage_ptr__->M[1][3] = this->M[3][1];
  __return_storage_ptr__->M[2][0] = this->M[0][2];
  __return_storage_ptr__->M[2][1] = this->M[1][2];
  __return_storage_ptr__->M[2][2] = this->M[2][2];
  __return_storage_ptr__->M[2][3] = this->M[3][2];
  __return_storage_ptr__->M[3][0] = this->M[0][3];
  __return_storage_ptr__->M[3][1] = this->M[1][3];
  __return_storage_ptr__->M[3][2] = this->M[2][3];
  __return_storage_ptr__->M[3][3] = this->M[3][3];
  return __return_storage_ptr__;
}

// GetUnitAxes @ 1417d8960

void __thiscall
UE::Math::TMatrix<float>::GetUnitAxes
          (TMatrix<float> *this,TVector<float> *param_1,TVector<float> *param_2,
          TVector<float> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  (param_1->field0_0x0)._s_0.X = this->M[0][0];
  (param_1->field0_0x0)._s_0.Y = this->M[0][1];
  (param_1->field0_0x0)._s_0.Z = this->M[0][2];
  (param_2->field0_0x0)._s_0.X = this->M[1][0];
  (param_2->field0_0x0)._s_0.Y = this->M[1][1];
  (param_2->field0_0x0)._s_0.Z = this->M[1][2];
  (param_3->field0_0x0)._s_0.X = this->M[2][0];
  (param_3->field0_0x0)._s_0.Y = this->M[2][1];
  (param_3->field0_0x0)._s_0.Z = this->M[2][2];
  fVar1 = (param_1->field0_0x0)._s_0.X;
  fVar2 = (param_1->field0_0x0)._s_0.Y;
  fVar3 = (param_1->field0_0x0)._s_0.Z;
  fVar4 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
  if (__real_322bcc77 < fVar4) {
    fVar4 = __real_3f800000 / SQRT(fVar4);
    (param_1->field0_0x0)._s_0.X = fVar4 * fVar1;
    (param_1->field0_0x0)._s_0.Y = fVar4 * fVar2;
    (param_1->field0_0x0)._s_0.Z = fVar4 * fVar3;
  }
  fVar1 = (param_2->field0_0x0)._s_0.X;
  fVar2 = (param_2->field0_0x0)._s_0.Y;
  fVar3 = (param_2->field0_0x0)._s_0.Z;
  fVar4 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
  if (__real_322bcc77 < fVar4) {
    fVar4 = __real_3f800000 / SQRT(fVar4);
    (param_2->field0_0x0)._s_0.X = fVar4 * fVar1;
    (param_2->field0_0x0)._s_0.Y = fVar4 * fVar2;
    (param_2->field0_0x0)._s_0.Z = fVar4 * fVar3;
  }
  fVar1 = (param_3->field0_0x0)._s_0.X;
  fVar2 = (param_3->field0_0x0)._s_0.Y;
  fVar3 = (param_3->field0_0x0)._s_0.Z;
  fVar4 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
  if (__real_322bcc77 < fVar4) {
    fVar4 = __real_3f800000 / SQRT(fVar4);
    (param_3->field0_0x0)._s_0.X = fVar4 * fVar1;
    (param_3->field0_0x0)._s_0.Y = fVar4 * fVar2;
    (param_3->field0_0x0)._s_0.Z = fVar4 * fVar3;
  }
  return;
}

// GetUnitAxes @ 1417d8ae0

void __thiscall
UE::Math::TMatrix<double>::GetUnitAxes
          (TMatrix<double> *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  double dVar1;
  
  dVar1 = __real_3e45798ee0000000;
  (param_1->field0_0x0)._s_0.X = this->M[0][0];
  (param_1->field0_0x0)._s_0.Y = this->M[0][1];
  (param_1->field0_0x0)._s_0.Z = this->M[0][2];
  (param_2->field0_0x0)._s_0.X = this->M[1][0];
  (param_2->field0_0x0)._s_0.Y = this->M[1][1];
  (param_2->field0_0x0)._s_0.Z = this->M[1][2];
  (param_3->field0_0x0)._s_0.X = this->M[2][0];
  (param_3->field0_0x0)._s_0.Y = this->M[2][1];
  (param_3->field0_0x0)._s_0.Z = this->M[2][2];
  TVector<double>::Normalize(param_1,dVar1);
  TVector<double>::Normalize(param_2,__real_3e45798ee0000000);
  TVector<double>::Normalize(param_3,__real_3e45798ee0000000);
  return;
}

// GetUnitAxis @ 1417d8b80

TVector<float> * __thiscall
UE::Math::TMatrix<float>::GetUnitAxis
          (TMatrix<float> *this,TVector<float> *__return_storage_ptr__,Type param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  TVector<float> *pTVar5;
  float fVar6;
  TVector<float> local_18;
  
  pTVar5 = GetScaledAxis(this,&local_18,param_1);
  uVar4 = TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  fVar1 = (pTVar5->field0_0x0)._s_0.X;
  fVar2 = (pTVar5->field0_0x0)._s_0.Y;
  fVar3 = (pTVar5->field0_0x0)._s_0.Z;
  fVar6 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
  if (fVar6 == __real_3f800000) {
    fVar1 = (pTVar5->field0_0x0)._s_0.Z;
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&pTVar5->field0_0x0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
    return __return_storage_ptr__;
  }
  if (fVar6 < __real_322bcc77) {
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = TVector<float>::ZeroVector.field0_0x0._0_8_
    ;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)uVar4;
    return __return_storage_ptr__;
  }
  fVar6 = __real_3f800000 / SQRT(fVar6);
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar6 * fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar6 * fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar6 * fVar3;
  return __return_storage_ptr__;
}

// Inverse @ 1417dc860

TMatrix<float> * __thiscall
UE::Math::TMatrix<float>::Inverse(TMatrix<float> *this,TMatrix<float> *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  TMatrix<float> local_48;
  
  uVar3 = Identity.M[1]._8_8_;
  uVar2 = Identity.M[1]._0_8_;
  uVar1 = Identity.M[0]._8_8_;
  if ((((float)((uint)this->M[0][0] & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) &&
      ((float)((uint)this->M[0][1] & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) &&
     ((float)((uint)this->M[0][2] & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
    if ((((float)((uint)this->M[1][0] & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)
        && ((float)((uint)this->M[1][1] & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77
           )) && ((float)((uint)this->M[1][2] & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
                  __real_322bcc77)) {
      if ((((float)((uint)this->M[2][0] & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77
           ) && ((float)((uint)this->M[2][1] & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
                 __real_322bcc77)) &&
         ((float)((uint)this->M[2][2] & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77))
      {
        *(undefined8 *)__return_storage_ptr__->M[0] = Identity.M[0]._0_8_;
        *(undefined8 *)(__return_storage_ptr__->M[0] + 2) = uVar1;
        uVar4 = Identity.M[2]._8_8_;
        uVar1 = Identity.M[2]._0_8_;
        *(undefined8 *)__return_storage_ptr__->M[1] = uVar2;
        *(undefined8 *)(__return_storage_ptr__->M[1] + 2) = uVar3;
        uVar3 = Identity.M[3]._8_8_;
        uVar2 = Identity.M[3]._0_8_;
        *(undefined8 *)__return_storage_ptr__->M[2] = uVar1;
        *(undefined8 *)(__return_storage_ptr__->M[2] + 2) = uVar4;
        *(undefined8 *)__return_storage_ptr__->M[3] = uVar2;
        *(undefined8 *)(__return_storage_ptr__->M[3] + 2) = uVar3;
        return __return_storage_ptr__;
      }
    }
  }
  FMath::MatrixInverse(&local_48,this);
  *(undefined8 *)__return_storage_ptr__->M[0] = local_48.M[0]._0_8_;
  *(undefined8 *)(__return_storage_ptr__->M[0] + 2) = local_48.M[0]._8_8_;
  *(undefined8 *)__return_storage_ptr__->M[1] = local_48.M[1]._0_8_;
  *(undefined8 *)(__return_storage_ptr__->M[1] + 2) = local_48.M[1]._8_8_;
  *(undefined8 *)__return_storage_ptr__->M[2] = local_48.M[2]._0_8_;
  *(undefined8 *)(__return_storage_ptr__->M[2] + 2) = local_48.M[2]._8_8_;
  *(undefined8 *)__return_storage_ptr__->M[3] = local_48.M[3]._0_8_;
  *(undefined8 *)(__return_storage_ptr__->M[3] + 2) = local_48.M[3]._8_8_;
  return __return_storage_ptr__;
}

// InverseFast @ 1417dcb70

/* WARNING: Enum "Type": Some values do not have unique names */

TMatrix<float> * __thiscall
UE::Math::TMatrix<float>::InverseFast(TMatrix<float> *this,TMatrix<float> *__return_storage_ptr__)

{
  bool bVar1;
  wchar_t *local_res10;
  wchar_t **local_res18 [2];
  
  if ((((float)((uint)this->M[0][0] & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) &&
      ((float)((uint)this->M[0][1] & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) &&
     ((float)((uint)this->M[0][2] & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
    if ((((float)((uint)this->M[1][0] & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)
        && ((float)((uint)this->M[1][1] & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77
           )) && ((float)((uint)this->M[1][2] & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
                  __real_322bcc77)) {
      if ((((float)((uint)this->M[2][0] & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77
           ) && ((float)((uint)this->M[2][1] & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
                 __real_322bcc77)) &&
         ((float)((uint)this->M[2][2] & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77))
      {
        local_res10 = 
        L"TMatrix<T>::InverseFast(), trying to invert a NIL matrix, this results in NaNs! Use Inverse() instead."
        ;
        if (1 < (byte)LogUnrealMath._0_1_) {
          Logging::Private::BasicLog<2>
                    (&`private:_static_void___cdecl_UE::Math::TMatrix<float>::ErrorEnsure(wchar_t_const*___ptr64)'
                      ::__l3::LOG_Static,(FLogCategoryBase *)&LogUnrealMath);
        }
        local_res18[0] = &local_res10;
        `UE::Math::TMatrix<float>::ErrorEnsure'::__l2::<lambda_1>::operator()(local_res18);
      }
    }
  }
  bVar1 = FMath::MatrixInverse(__return_storage_ptr__,this);
  if (!bVar1) {
    local_res10 = 
    L"TMatrix<T>::InverseFast(), trying to invert a non-invertible matrix, this results in NaNs! Use Inverse() instead."
    ;
    if (1 < (byte)LogUnrealMath._0_1_) {
      Logging::Private::BasicLog<2>
                (&`private:_static_void___cdecl_UE::Math::TMatrix<float>::ErrorEnsure(wchar_t_const*___ptr64)'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogUnrealMath);
    }
    local_res18[0] = &local_res10;
    `UE::Math::TMatrix<float>::ErrorEnsure'::__l2::<lambda_1>::operator()(local_res18);
  }
  return __return_storage_ptr__;
}

// InverseFast @ 1417dccb0

/* WARNING: Enum "Type": Some values do not have unique names */

TMatrix<double> * __thiscall
UE::Math::TMatrix<double>::InverseFast
          (TMatrix<double> *this,TMatrix<double> *__return_storage_ptr__)

{
  double dVar1;
  bool bVar2;
  wchar_t *local_res10;
  wchar_t **local_res18 [2];
  
  dVar1 = this->M[0][0];
  if (((((((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
           __real_3e45798ee0000000) &&
         (dVar1 = this->M[0][1],
         (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
         __real_3e45798ee0000000)) &&
        (dVar1 = this->M[0][2],
        (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3e45798ee0000000)) &&
       ((dVar1 = this->M[1][0],
        (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3e45798ee0000000 &&
        (dVar1 = this->M[1][1],
        (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3e45798ee0000000)))) &&
      ((dVar1 = this->M[1][2],
       (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
       __real_3e45798ee0000000 &&
       ((dVar1 = this->M[2][0],
        (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3e45798ee0000000 &&
        (dVar1 = this->M[2][1],
        (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3e45798ee0000000)))))) &&
     (dVar1 = this->M[2][2],
     (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
     __real_3e45798ee0000000)) {
    local_res10 = 
    L"TMatrix<T>::InverseFast(), trying to invert a NIL matrix, this results in NaNs! Use Inverse() instead."
    ;
    if (1 < (byte)LogUnrealMath._0_1_) {
      Logging::Private::BasicLog<2>
                (&`private:_static_void___cdecl_UE::Math::TMatrix<double>::ErrorEnsure(wchar_t_const*___ptr64)'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogUnrealMath);
    }
    local_res18[0] = &local_res10;
    `UE::Math::TMatrix<double>::ErrorEnsure'::__l2::<lambda_1>::operator()(local_res18);
  }
  bVar2 = FMath::MatrixInverse(__return_storage_ptr__,this);
  if (!bVar2) {
    local_res10 = 
    L"TMatrix<T>::InverseFast(), trying to invert a non-invertible matrix, this results in NaNs! Use Inverse() instead."
    ;
    if (1 < (byte)LogUnrealMath._0_1_) {
      Logging::Private::BasicLog<2>
                (&`private:_static_void___cdecl_UE::Math::TMatrix<double>::ErrorEnsure(wchar_t_const*___ptr64)'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogUnrealMath);
    }
    local_res18[0] = &local_res10;
    `UE::Math::TMatrix<double>::ErrorEnsure'::__l2::<lambda_1>::operator()(local_res18);
  }
  return __return_storage_ptr__;
}

// InverseTransformPosition @ 1417dd0e0

TVector<float> * __thiscall
UE::Math::TMatrix<float>::InverseTransformPosition
          (TMatrix<float> *this,TVector<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  TMatrix<float> local_48;
  
  InverseFast(this,&local_48);
  fVar1 = (param_1->field0_0x0)._s_0.X;
  fVar2 = (param_1->field0_0x0)._s_0.Y;
  fVar3 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       fVar2 * local_48.M[1][0] + fVar1 * local_48.M[0][0] + fVar3 * local_48.M[2][0] +
       local_48.M[3][0] * 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       fVar2 * local_48.M[1][2] + fVar1 * local_48.M[0][2] + fVar3 * local_48.M[2][2] +
       local_48.M[3][2] * 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       fVar2 * local_48.M[1][1] + fVar1 * local_48.M[0][1] + fVar3 * local_48.M[2][1] +
       local_48.M[3][1] * 1.0;
  return __return_storage_ptr__;
}

// InverseTransformPosition @ 1417dd1a0

TVector<double> * __thiscall
UE::Math::TMatrix<double>::InverseTransformPosition
          (TMatrix<double> *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TMatrix<double> local_98;
  
  InverseFast(this,&local_98);
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  local_98.M[3][1] = __real_3ff0000000000000 * local_98.M[3][1];
  local_98.M[3][2] = __real_3ff0000000000000 * local_98.M[3][2];
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       dVar3 * local_98.M[1][0] + dVar2 * local_98.M[0][0] + dVar1 * local_98.M[2][0] +
       __real_3ff0000000000000 * local_98.M[3][0];
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       dVar3 * local_98.M[1][2] + dVar2 * local_98.M[0][2] + dVar1 * local_98.M[2][2] +
       local_98.M[3][2];
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       dVar3 * local_98.M[1][1] + dVar2 * local_98.M[0][1] + dVar1 * local_98.M[2][1] +
       local_98.M[3][1];
  return __return_storage_ptr__;
}

// InverseTransformVector @ 1417dd8c0

TVector<float> * __thiscall
UE::Math::TMatrix<float>::InverseTransformVector
          (TMatrix<float> *this,TVector<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  TMatrix<float> local_48;
  
  InverseFast(this,&local_48);
  fVar1 = (param_1->field0_0x0)._s_0.X;
  fVar2 = (param_1->field0_0x0)._s_0.Y;
  fVar3 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       fVar2 * local_48.M[1][0] + fVar1 * local_48.M[0][0] + fVar3 * local_48.M[2][0] +
       local_48.M[3][0] * 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       fVar2 * local_48.M[1][2] + fVar1 * local_48.M[0][2] + fVar3 * local_48.M[2][2] +
       local_48.M[3][2] * 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       fVar2 * local_48.M[1][1] + fVar1 * local_48.M[0][1] + fVar3 * local_48.M[2][1] +
       local_48.M[3][1] * 0.0;
  return __return_storage_ptr__;
}

// InverseTransformVector @ 1417dd980

TVector<double> * __thiscall
UE::Math::TMatrix<double>::InverseTransformVector
          (TMatrix<double> *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TMatrix<double> local_98;
  
  InverseFast(this,&local_98);
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       dVar3 * local_98.M[1][0] + dVar2 * local_98.M[0][0] + dVar1 * local_98.M[2][0] +
       local_98.M[3][0] * 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       dVar3 * local_98.M[1][2] + dVar2 * local_98.M[0][2] + dVar1 * local_98.M[2][2] +
       local_98.M[3][2] * 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       dVar3 * local_98.M[1][1] + dVar2 * local_98.M[0][1] + dVar1 * local_98.M[2][1] +
       local_98.M[3][1] * 0.0;
  return __return_storage_ptr__;
}

// Mirror @ 1417e4660

void __thiscall UE::Math::TMatrix<float>::Mirror(TMatrix<float> *this,Type param_1,Type param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  
  uVar3 = __xmm_80000000800000008000000080000000;
  if (param_1 == X) {
    this->M[0][0] = (float)((uint)this->M[0][0] ^ __xmm_80000000800000008000000080000000);
    this->M[1][0] = (float)((uint)this->M[1][0] ^ uVar3);
    this->M[2][0] = (float)((uint)this->M[2][0] ^ uVar3);
    this->M[3][0] = (float)((uint)this->M[3][0] ^ uVar3);
  }
  else if (param_1 == Y) {
    this->M[0][1] = (float)((uint)this->M[0][1] ^ __xmm_80000000800000008000000080000000);
    this->M[1][1] = (float)((uint)this->M[1][1] ^ uVar3);
    this->M[2][1] = (float)((uint)this->M[2][1] ^ uVar3);
    this->M[3][1] = (float)((uint)this->M[3][1] ^ uVar3);
  }
  else if (param_1 == Z) {
    this->M[0][2] = (float)((uint)this->M[0][2] ^ __xmm_80000000800000008000000080000000);
    this->M[1][2] = (float)((uint)this->M[1][2] ^ uVar3);
    this->M[2][2] = (float)((uint)this->M[2][2] ^ uVar3);
    this->M[3][2] = (float)((uint)this->M[3][2] ^ uVar3);
  }
  if (param_2 == X) {
    fVar1 = this->M[0][1];
    this->M[0][0] = (float)((uint)this->M[0][0] ^ uVar3);
    fVar2 = this->M[0][2];
    this->M[0][1] = (float)((uint)fVar1 ^ uVar3);
    this->M[0][2] = (float)((uint)fVar2 ^ uVar3);
    return;
  }
  if (param_2 == Y) {
    fVar1 = this->M[1][1];
    this->M[1][0] = (float)((uint)this->M[1][0] ^ uVar3);
    fVar2 = this->M[1][2];
    this->M[1][1] = (float)((uint)fVar1 ^ uVar3);
    this->M[1][2] = (float)((uint)fVar2 ^ uVar3);
    return;
  }
  if (param_2 == Z) {
    fVar1 = this->M[2][1];
    this->M[2][0] = (float)((uint)this->M[2][0] ^ uVar3);
    fVar2 = this->M[2][2];
    this->M[2][1] = (float)((uint)fVar1 ^ uVar3);
    this->M[2][2] = (float)((uint)fVar2 ^ uVar3);
  }
  return;
}

// Mirror @ 1417e47b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UE::Math::TMatrix<double>::Mirror(TMatrix<double> *this,Type param_1,Type param_2)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = _UNK_15066df7c;
  uVar7 = _UNK_15066df78;
  uVar6 = __xmm_80000000000000008000000000000000._4_4_;
  uVar5 = (uint)__xmm_80000000000000008000000000000000;
  if (param_1 == X) {
    dVar1 = this->M[0][0];
    this->M[0][0] =
         (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(dVar1,0) ^ (uint)__xmm_80000000000000008000000000000000);
    dVar1 = this->M[1][0];
    this->M[1][0] =
         (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar6,SUB84(dVar1,0) ^ uVar5);
    dVar1 = this->M[2][0];
    this->M[2][0] =
         (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar6,SUB84(dVar1,0) ^ uVar5);
    dVar1 = this->M[3][0];
    this->M[3][0] =
         (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar6,SUB84(dVar1,0) ^ uVar5);
  }
  else if (param_1 == Y) {
    dVar1 = this->M[0][1];
    this->M[0][1] =
         (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(dVar1,0) ^ (uint)__xmm_80000000000000008000000000000000);
    dVar1 = this->M[1][1];
    this->M[1][1] =
         (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar6,SUB84(dVar1,0) ^ uVar5);
    dVar1 = this->M[2][1];
    this->M[2][1] =
         (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar6,SUB84(dVar1,0) ^ uVar5);
    dVar1 = this->M[3][1];
    this->M[3][1] =
         (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar6,SUB84(dVar1,0) ^ uVar5);
  }
  else if (param_1 == Z) {
    dVar1 = this->M[0][2];
    this->M[0][2] =
         (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(dVar1,0) ^ (uint)__xmm_80000000000000008000000000000000);
    dVar1 = this->M[1][2];
    this->M[1][2] =
         (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar6,SUB84(dVar1,0) ^ uVar5);
    dVar1 = this->M[2][2];
    this->M[2][2] =
         (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar6,SUB84(dVar1,0) ^ uVar5);
    dVar1 = this->M[3][2];
    this->M[3][2] =
         (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar6,SUB84(dVar1,0) ^ uVar5);
  }
  if (param_2 == X) {
    uVar2 = *(uint *)((longlong)this->M[0] + 4);
    uVar3 = *(uint *)(this->M[0] + 1);
    uVar4 = *(uint *)((longlong)this->M[0] + 0xc);
    *(uint *)this->M[0] = *(uint *)this->M[0] ^ uVar5;
    *(uint *)((longlong)this->M[0] + 4) = uVar2 ^ uVar6;
    *(uint *)(this->M[0] + 1) = uVar3 ^ uVar7;
    *(uint *)((longlong)this->M[0] + 0xc) = uVar4 ^ uVar8;
    dVar1 = this->M[0][2];
    this->M[0][2] =
         (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar6,SUB84(dVar1,0) ^ uVar5);
    return;
  }
  if (param_2 == Y) {
    uVar2 = *(uint *)((longlong)this->M[1] + 4);
    uVar3 = *(uint *)(this->M[1] + 1);
    uVar4 = *(uint *)((longlong)this->M[1] + 0xc);
    *(uint *)this->M[1] = *(uint *)this->M[1] ^ uVar5;
    *(uint *)((longlong)this->M[1] + 4) = uVar2 ^ uVar6;
    *(uint *)(this->M[1] + 1) = uVar3 ^ uVar7;
    *(uint *)((longlong)this->M[1] + 0xc) = uVar4 ^ uVar8;
    dVar1 = this->M[1][2];
    this->M[1][2] =
         (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar6,SUB84(dVar1,0) ^ uVar5);
    return;
  }
  if (param_2 == Z) {
    uVar2 = *(uint *)((longlong)this->M[2] + 4);
    uVar3 = *(uint *)(this->M[2] + 1);
    uVar4 = *(uint *)((longlong)this->M[2] + 0xc);
    *(uint *)this->M[2] = *(uint *)this->M[2] ^ uVar5;
    *(uint *)((longlong)this->M[2] + 4) = uVar2 ^ uVar6;
    *(uint *)(this->M[2] + 1) = uVar3 ^ uVar7;
    *(uint *)((longlong)this->M[2] + 0xc) = uVar4 ^ uVar8;
    dVar1 = this->M[2][2];
    this->M[2][2] =
         (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar6,SUB84(dVar1,0) ^ uVar5);
  }
  return;
}

// RemoveScaling @ 1417f5330

void __thiscall UE::Math::TMatrix<float>::RemoveScaling(TMatrix<float> *this,float param_1)

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
  
  fVar1 = this->M[0][0];
  fVar2 = this->M[0][1];
  fVar3 = this->M[0][2];
  fVar4 = this->M[1][0];
  fVar5 = this->M[1][1];
  fVar6 = this->M[1][2];
  fVar7 = this->M[2][0];
  fVar8 = this->M[2][1];
  fVar9 = this->M[2][2];
  fVar10 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  fVar11 = fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6;
  fVar13 = fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9;
  fVar12 = __real_3f800000;
  if (0.0 <= fVar10 - param_1) {
    fVar12 = __real_3f800000 / SQRT(fVar10);
  }
  fVar10 = __real_3f800000;
  if (0.0 <= fVar11 - param_1) {
    fVar10 = __real_3f800000 / SQRT(fVar11);
  }
  fVar11 = __real_3f800000;
  if (0.0 <= fVar13 - param_1) {
    fVar11 = __real_3f800000 / SQRT(fVar13);
  }
  this->M[0][0] = fVar1 * fVar12;
  this->M[0][1] = fVar2 * fVar12;
  this->M[0][2] = fVar3 * fVar12;
  this->M[1][0] = fVar4 * fVar10;
  this->M[1][1] = fVar5 * fVar10;
  this->M[1][2] = fVar6 * fVar10;
  this->M[2][0] = fVar7 * fVar11;
  this->M[2][1] = fVar8 * fVar11;
  this->M[2][2] = fVar9 * fVar11;
  return;
}

// RemoveScaling @ 1417f5530

void __thiscall UE::Math::TMatrix<double>::RemoveScaling(TMatrix<double> *this,double param_1)

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
  
  dVar1 = this->M[2][2];
  dVar2 = this->M[0][0];
  dVar3 = this->M[0][1];
  dVar4 = this->M[0][2];
  dVar5 = this->M[1][0];
  dVar6 = this->M[1][1];
  dVar7 = this->M[1][2];
  dVar8 = this->M[2][0];
  dVar12 = dVar2 * dVar2 + dVar3 * dVar3 + dVar4 * dVar4;
  dVar13 = dVar5 * dVar5 + dVar6 * dVar6 + dVar7 * dVar7;
  dVar9 = this->M[2][1];
  dVar10 = dVar8 * dVar8 + dVar9 * dVar9 + dVar1 * dVar1;
  dVar11 = __real_3ff0000000000000;
  if (0.0 <= dVar12 - param_1) {
    dVar11 = __real_3ff0000000000000 / SQRT(dVar12);
  }
  dVar12 = __real_3ff0000000000000;
  if (0.0 <= dVar13 - param_1) {
    dVar12 = __real_3ff0000000000000 / SQRT(dVar13);
  }
  dVar13 = __real_3ff0000000000000;
  if (0.0 <= dVar10 - param_1) {
    dVar13 = __real_3ff0000000000000 / SQRT(dVar10);
  }
  this->M[0][0] = dVar2 * dVar11;
  this->M[0][1] = dVar3 * dVar11;
  this->M[0][2] = dVar4 * dVar11;
  this->M[1][0] = dVar5 * dVar12;
  this->M[1][1] = dVar6 * dVar12;
  this->M[1][2] = dVar7 * dVar12;
  this->M[2][0] = dVar8 * dVar13;
  this->M[2][1] = dVar9 * dVar13;
  this->M[2][2] = dVar1 * dVar13;
  return;
}

// RemoveTranslation @ 1417f5890

TMatrix<float> * __thiscall
UE::Math::TMatrix<float>::RemoveTranslation
          (TMatrix<float> *this,TMatrix<float> *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(this->M[0] + 2);
  uVar2 = *(undefined8 *)this->M[1];
  uVar3 = *(undefined8 *)(this->M[1] + 2);
  *(undefined8 *)__return_storage_ptr__->M[0] = *(undefined8 *)this->M[0];
  *(undefined8 *)(__return_storage_ptr__->M[0] + 2) = uVar1;
  uVar1 = *(undefined8 *)this->M[2];
  uVar4 = *(undefined8 *)(this->M[2] + 2);
  *(undefined8 *)__return_storage_ptr__->M[1] = uVar2;
  *(undefined8 *)(__return_storage_ptr__->M[1] + 2) = uVar3;
  uVar2 = *(undefined8 *)this->M[3];
  uVar3 = *(undefined8 *)(this->M[3] + 2);
  *(undefined8 *)__return_storage_ptr__->M[2] = uVar1;
  *(undefined8 *)(__return_storage_ptr__->M[2] + 2) = uVar4;
  *(undefined8 *)__return_storage_ptr__->M[3] = uVar2;
  *(undefined8 *)(__return_storage_ptr__->M[3] + 2) = uVar3;
  *(float *)((longlong)(__return_storage_ptr__->M + 3) + 0) = 0.0;
  *(float *)((longlong)(__return_storage_ptr__->M + 3) + 4) = 0.0;
  __return_storage_ptr__->M[3][2] = 0.0;
  return __return_storage_ptr__;
}

// RemoveTranslation @ 1417f58d0

TMatrix<double> * __thiscall
UE::Math::TMatrix<double>::RemoveTranslation
          (TMatrix<double> *this,TMatrix<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = this->M[0][1];
  dVar2 = this->M[0][2];
  dVar3 = this->M[0][3];
  __return_storage_ptr__->M[0][0] = this->M[0][0];
  __return_storage_ptr__->M[0][1] = dVar1;
  dVar1 = this->M[1][0];
  dVar4 = this->M[1][1];
  __return_storage_ptr__->M[0][2] = dVar2;
  __return_storage_ptr__->M[0][3] = dVar3;
  dVar2 = this->M[1][2];
  dVar3 = this->M[1][3];
  __return_storage_ptr__->M[1][0] = dVar1;
  __return_storage_ptr__->M[1][1] = dVar4;
  dVar1 = this->M[2][0];
  dVar4 = this->M[2][1];
  __return_storage_ptr__->M[1][2] = dVar2;
  __return_storage_ptr__->M[1][3] = dVar3;
  dVar2 = this->M[2][2];
  dVar3 = this->M[2][3];
  __return_storage_ptr__->M[2][0] = dVar1;
  __return_storage_ptr__->M[2][1] = dVar4;
  dVar1 = this->M[3][0];
  dVar4 = this->M[3][1];
  __return_storage_ptr__->M[2][2] = dVar2;
  __return_storage_ptr__->M[2][3] = dVar3;
  dVar2 = this->M[3][2];
  dVar3 = this->M[3][3];
  __return_storage_ptr__->M[3][0] = dVar1;
  __return_storage_ptr__->M[3][1] = dVar4;
  __return_storage_ptr__->M[3][2] = dVar2;
  __return_storage_ptr__->M[3][3] = dVar3;
  __return_storage_ptr__->M[3][0] = 0.0;
  __return_storage_ptr__->M[3][1] = 0.0;
  __return_storage_ptr__->M[3][2] = 0.0;
  return __return_storage_ptr__;
}

// RotDeterminant @ 1417f65a0

float __thiscall UE::Math::TMatrix<float>::RotDeterminant(TMatrix<float> *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = this->M[1][2];
  fVar2 = this->M[0][2];
  fVar3 = this->M[0][1];
  return ((this->M[1][1] * this->M[2][2] - fVar1 * this->M[2][1]) * this->M[0][0] -
         (fVar3 * this->M[2][2] - fVar2 * this->M[2][1]) * this->M[1][0]) +
         (fVar3 * fVar1 - fVar2 * this->M[1][1]) * this->M[2][0];
}

// RotDeterminant @ 1417f6630

double __thiscall UE::Math::TMatrix<double>::RotDeterminant(TMatrix<double> *this)

{
  double dVar1;
  double dVar2;
  
  dVar1 = this->M[0][2];
  dVar2 = this->M[0][1];
  return ((this->M[1][1] * this->M[2][2] - this->M[1][2] * this->M[2][1]) * this->M[0][0] -
         (dVar2 * this->M[2][2] - dVar1 * this->M[2][1]) * this->M[1][0]) +
         (dVar2 * this->M[1][2] - dVar1 * this->M[1][1]) * this->M[2][0];
}

// Rotator @ 1417f7340

TRotator<float> * __thiscall
UE::Math::TMatrix<float>::Rotator(TMatrix<float> *this,TRotator<float> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  TRotationMatrix<float> *pTVar9;
  float fVar10;
  float fVar11;
  TRotationMatrix<float> local_e8 [3];
  
  fVar11 = this->M[0][2];
  fVar1 = this->M[0][0];
  fVar2 = this->M[0][1];
  fVar3 = this->M[1][1];
  fVar4 = this->M[1][0];
  fVar5 = this->M[1][2];
  fVar6 = this->M[2][1];
  fVar7 = this->M[2][0];
  fVar8 = this->M[2][2];
  fVar10 = FGenericPlatformMath::Atan2(fVar2,fVar1);
  fVar10 = fVar10 * __real_42652ee1;
  fVar11 = FGenericPlatformMath::Atan2(fVar11,SQRT(fVar2 * fVar2 + fVar1 * fVar1));
  fVar11 = fVar11 * __real_42652ee1;
  __return_storage_ptr__->Roll = 0.0;
  __return_storage_ptr__->Yaw = fVar10;
  __return_storage_ptr__->Pitch = fVar11;
  pTVar9 = TRotationMatrix<float>::TRotationMatrix<float>(local_e8,__return_storage_ptr__);
  fVar11 = FGenericPlatformMath::Atan2
                     (*(float *)&pTVar9->field_0x14 * fVar6 + *(float *)&pTVar9->field_0x10 * fVar7
                      + *(float *)&pTVar9->field_0x18 * fVar8,
                      *(float *)&pTVar9->field_0x14 * fVar3 + *(float *)&pTVar9->field_0x10 * fVar4
                      + *(float *)&pTVar9->field_0x18 * fVar5);
  __return_storage_ptr__->Roll = fVar11 * __real_42652ee1;
  return __return_storage_ptr__;
}

// Rotator @ 1417f74c0

TRotator<double> * __thiscall
UE::Math::TMatrix<double>::Rotator(TMatrix<double> *this,TRotator<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  TRotationMatrix<double> *pTVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  TRotationMatrix<double> local_128 [2];
  
  dVar11 = this->M[0][2];
  dVar1 = this->M[0][0];
  auVar12._8_8_ = 0;
  auVar12._0_8_ = dVar1;
  dVar2 = this->M[0][1];
  dVar3 = this->M[1][1];
  dVar4 = this->M[1][0];
  dVar5 = this->M[1][2];
  dVar6 = this->M[2][1];
  dVar7 = this->M[2][0];
  dVar8 = this->M[2][2];
  dVar10 = FGenericPlatformMath::Atan2(dVar2,dVar1);
  dVar10 = dVar10 * __real_404ca5dc1a63c1f8;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = dVar2 * dVar2 + dVar1 * dVar1;
  auVar13 = sqrtpd(auVar12,auVar13);
  dVar11 = FGenericPlatformMath::Atan2(dVar11,auVar13._0_8_);
  dVar11 = dVar11 * __real_404ca5dc1a63c1f8;
  __return_storage_ptr__->Roll = 0.0;
  __return_storage_ptr__->Yaw = dVar10;
  __return_storage_ptr__->Pitch = dVar11;
  pTVar9 = TRotationMatrix<double>::TRotationMatrix<double>(local_128,__return_storage_ptr__);
  dVar11 = FGenericPlatformMath::Atan2
                     (*(double *)&pTVar9->field_0x28 * dVar6 +
                      *(double *)&pTVar9->field_0x20 * dVar7 +
                      *(double *)&pTVar9->field_0x30 * dVar8,
                      *(double *)&pTVar9->field_0x28 * dVar3 +
                      *(double *)&pTVar9->field_0x20 * dVar4 +
                      *(double *)&pTVar9->field_0x30 * dVar5);
  __return_storage_ptr__->Roll = dVar11 * __real_404ca5dc1a63c1f8;
  return __return_storage_ptr__;
}

// ScaleTranslation @ 1417f8420

void __thiscall
UE::Math::TMatrix<float>::ScaleTranslation(TMatrix<float> *this,TVector<float> *param_1)

{
  this->M[3][0] = (param_1->field0_0x0)._s_0.X * this->M[3][0];
  this->M[3][1] = (param_1->field0_0x0)._s_0.Y * this->M[3][1];
  this->M[3][2] = (param_1->field0_0x0)._s_0.Z * this->M[3][2];
  return;
}

// ScaleTranslation @ 1417f8460

void __thiscall
UE::Math::TMatrix<double>::ScaleTranslation(TMatrix<double> *this,TVector<double> *param_1)

{
  this->M[3][0] = (param_1->field0_0x0)._s_0.X * this->M[3][0];
  this->M[3][1] = (param_1->field0_0x0)._s_0.Y * this->M[3][1];
  this->M[3][2] = (param_1->field0_0x0)._s_0.Z * this->M[3][2];
  return;
}

// Serialize @ 1417f8d00

bool __thiscall UE::Math::TMatrix<float>::Serialize(TMatrix<float> *this,FArchive *param_1)

{
  Math::operator<<(param_1,this);
  return true;
}

// Serialize @ 1417f8d20

bool __thiscall UE::Math::TMatrix<double>::Serialize(TMatrix<double> *this,FArchive *param_1)

{
  Math::operator<<(param_1,this);
  return true;
}

// SerializeFromMismatchedTag @ 1417fa260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Math::TMatrix<float>::SerializeFromMismatchedTag
          (TMatrix<float> *this,FName param_1,FArchive *param_2)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined1 auStack_d8 [32];
  uint local_b8 [2];
  FNameEntryId local_b0;
  uint uStack_ac;
  FNameEntryId local_a8;
  uint uStack_a4;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  FVar4 = FNameEntryId::FromValidEName((EName)local_b8);
  uStack_a4 = 0;
  local_a8.Value = *(uint *)CONCAT44(extraout_var,FVar4.Value);
  FVar4 = FNameEntryId::FromValidEName((EName)local_b8);
  uStack_ac = 0;
  local_b0.Value = *(uint *)CONCAT44(extraout_var_00,FVar4.Value);
  FVar4 = FNameEntryId::FromValidEName((EName)local_b8);
  local_b8[0] = *(uint *)CONCAT44(extraout_var_01,FVar4.Value);
  local_b8[1] = 0;
  FVar2.Number = uStack_ac;
  FVar2.ComparisonIndex.Value = local_b0.Value;
  if ((param_1 == FVar2) ||
     ((FVar1.Number = 0, FVar1.ComparisonIndex.Value = local_b8[0], param_1 == FVar1 &&
      ((int)((ulonglong)*(undefined8 *)&param_2->field_0x40 >> 0x20) < 0x3ec)))) {
    Math::operator<<(param_2,this);
  }
  else {
    FVar3.Number = uStack_a4;
    FVar3.ComparisonIndex.Value = local_a8.Value;
    if ((param_1 != FVar3) && (param_1 != FVar1)) {
      return false;
    }
    Math::operator<<(param_2,&local_98);
    this->M[0][0] = (float)local_98.M[0][0];
    this->M[0][1] = (float)local_98.M[0][1];
    this->M[0][2] = (float)local_98.M[0][2];
    this->M[0][3] = (float)local_98.M[0][3];
    this->M[1][0] = (float)local_98.M[1][0];
    this->M[1][1] = (float)local_98.M[1][1];
    this->M[1][2] = (float)local_98.M[1][2];
    this->M[1][3] = (float)local_98.M[1][3];
    this->M[2][0] = (float)local_98.M[2][0];
    this->M[2][1] = (float)local_98.M[2][1];
    this->M[2][2] = (float)local_98.M[2][2];
    this->M[2][3] = (float)local_98.M[2][3];
    this->M[3][0] = (float)local_98.M[3][0];
    this->M[3][1] = (float)local_98.M[3][1];
    this->M[3][2] = (float)local_98.M[3][2];
    this->M[3][3] = (float)local_98.M[3][3];
  }
  return true;
}

// SerializeFromMismatchedTag @ 1417fa3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Math::TMatrix<double>::SerializeFromMismatchedTag
          (TMatrix<double> *this,FName param_1,FArchive *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  FName FVar4;
  FName FVar5;
  FName FVar6;
  FNameEntryId FVar7;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined1 auStack_c8 [32];
  uint local_a8 [2];
  FNameEntryId local_a0;
  uint uStack_9c;
  FNameEntryId local_98;
  uint uStack_94;
  TMatrix<float> local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  FVar7 = FNameEntryId::FromValidEName((EName)local_a8);
  uStack_94 = 0;
  local_98.Value = *(uint *)CONCAT44(extraout_var,FVar7.Value);
  FVar7 = FNameEntryId::FromValidEName((EName)local_a8);
  uStack_9c = 0;
  local_a0.Value = *(uint *)CONCAT44(extraout_var_00,FVar7.Value);
  FVar7 = FNameEntryId::FromValidEName((EName)local_a8);
  local_a8[0] = *(uint *)CONCAT44(extraout_var_01,FVar7.Value);
  local_a8[1] = 0;
  FVar5.Number = uStack_9c;
  FVar5.ComparisonIndex.Value = local_a0.Value;
  if ((param_1 == FVar5) ||
     (FVar4.Number = 0, FVar4.ComparisonIndex.Value = local_a8[0], param_1 == FVar4)) {
    Math::operator<<(param_2,this);
  }
  else {
    FVar6.Number = uStack_94;
    FVar6.ComparisonIndex.Value = local_98.Value;
    if (param_1 != FVar6) {
      return false;
    }
    Math::operator<<(param_2,&local_88);
    auVar3._8_4_ = SUB84((double)local_88.M[0][1],0);
    auVar3._0_8_ = (double)local_88.M[0][0];
    auVar3._12_4_ = (int)((ulonglong)(double)local_88.M[0][1] >> 0x20);
    *(undefined1 (*) [16])this->M[0] = auVar3;
    auVar2._8_4_ = SUB84((double)local_88.M[0][3],0);
    auVar2._0_8_ = (double)local_88.M[0][2];
    auVar2._12_4_ = (int)((ulonglong)(double)local_88.M[0][3] >> 0x20);
    *(undefined1 (*) [16])(this->M[0] + 2) = auVar2;
    auVar1._8_4_ = SUB84((double)local_88.M[1][1],0);
    auVar1._0_8_ = (double)local_88.M[1][0];
    auVar1._12_4_ = (int)((ulonglong)(double)local_88.M[1][1] >> 0x20);
    *(undefined1 (*) [16])this->M[1] = auVar1;
    this->M[1][2] = (double)local_88.M[1][2];
    this->M[1][3] = (double)local_88.M[1][3];
    this->M[2][0] = (double)local_88.M[2][0];
    this->M[2][1] = (double)local_88.M[2][1];
    this->M[2][2] = (double)local_88.M[2][2];
    this->M[2][3] = (double)local_88.M[2][3];
    this->M[3][0] = (double)local_88.M[3][0];
    this->M[3][1] = (double)local_88.M[3][1];
    this->M[3][2] = (double)local_88.M[3][2];
    this->M[3][3] = (double)local_88.M[3][3];
  }
  return true;
}

// SetAxes @ 1417fc180

void __thiscall
UE::Math::TMatrix<float>::SetAxes
          (TMatrix<float> *this,TVector<float> *param_1,TVector<float> *param_2,
          TVector<float> *param_3,TVector<float> *param_4)

{
  if (param_1 != (TVector<float> *)0x0) {
    this->M[0][0] = (param_1->field0_0x0)._s_0.X;
    this->M[0][1] = (param_1->field0_0x0)._s_0.Y;
    this->M[0][2] = (param_1->field0_0x0)._s_0.Z;
  }
  if (param_2 != (TVector<float> *)0x0) {
    this->M[1][0] = (param_2->field0_0x0)._s_0.X;
    this->M[1][1] = (param_2->field0_0x0)._s_0.Y;
    this->M[1][2] = (param_2->field0_0x0)._s_0.Z;
  }
  if (param_3 != (TVector<float> *)0x0) {
    this->M[2][0] = (param_3->field0_0x0)._s_0.X;
    this->M[2][1] = (param_3->field0_0x0)._s_0.Y;
    this->M[2][2] = (param_3->field0_0x0)._s_0.Z;
  }
  if (param_4 != (TVector<float> *)0x0) {
    this->M[3][0] = (param_4->field0_0x0)._s_0.X;
    this->M[3][1] = (param_4->field0_0x0)._s_0.Y;
    this->M[3][2] = (param_4->field0_0x0)._s_0.Z;
  }
  return;
}

// SetAxes @ 1417fc1f0

void __thiscall
UE::Math::TMatrix<double>::SetAxes
          (TMatrix<double> *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4)

{
  if (param_1 != (TVector<double> *)0x0) {
    this->M[0][0] = (param_1->field0_0x0)._s_0.X;
    this->M[0][1] = (param_1->field0_0x0)._s_0.Y;
    this->M[0][2] = (param_1->field0_0x0)._s_0.Z;
  }
  if (param_2 != (TVector<double> *)0x0) {
    this->M[1][0] = (param_2->field0_0x0)._s_0.X;
    this->M[1][1] = (param_2->field0_0x0)._s_0.Y;
    this->M[1][2] = (param_2->field0_0x0)._s_0.Z;
  }
  if (param_3 != (TVector<double> *)0x0) {
    this->M[2][0] = (param_3->field0_0x0)._s_0.X;
    this->M[2][1] = (param_3->field0_0x0)._s_0.Y;
    this->M[2][2] = (param_3->field0_0x0)._s_0.Z;
  }
  if (param_4 != (TVector<double> *)0x0) {
    this->M[3][0] = (param_4->field0_0x0)._s_0.X;
    this->M[3][1] = (param_4->field0_0x0)._s_0.Y;
    this->M[3][2] = (param_4->field0_0x0)._s_0.Z;
  }
  return;
}

// SetAxis @ 1417fc270

void __thiscall
UE::Math::TMatrix<float>::SetAxis(TMatrix<float> *this,int param_1,TVector<float> *param_2)

{
  this->M[param_1][0] = (param_2->field0_0x0)._s_0.X;
  this->M[param_1][1] = (param_2->field0_0x0)._s_0.Y;
  this->M[param_1][2] = (param_2->field0_0x0)._s_0.Z;
  return;
}

// SetAxis @ 1417fc2a0

void __thiscall
UE::Math::TMatrix<double>::SetAxis(TMatrix<double> *this,int param_1,TVector<double> *param_2)

{
  this->M[param_1][0] = (param_2->field0_0x0)._s_0.X;
  this->M[param_1][1] = (param_2->field0_0x0)._s_0.Y;
  this->M[param_1][2] = (param_2->field0_0x0)._s_0.Z;
  return;
}

// SetColumn @ 1417fc4b0

void __thiscall
UE::Math::TMatrix<float>::SetColumn(TMatrix<float> *this,int param_1,TVector<float> *param_2)

{
  this->M[0][param_1] = (param_2->field0_0x0)._s_0.X;
  this->M[1][param_1] = (param_2->field0_0x0)._s_0.Y;
  this->M[2][param_1] = (param_2->field0_0x0)._s_0.Z;
  return;
}

// SetColumn @ 1417fc4e0

void __thiscall
UE::Math::TMatrix<double>::SetColumn(TMatrix<double> *this,int param_1,TVector<double> *param_2)

{
  this->M[0][param_1] = (param_2->field0_0x0)._s_0.X;
  this->M[1][param_1] = (param_2->field0_0x0)._s_0.Y;
  this->M[2][param_1] = (param_2->field0_0x0)._s_0.Z;
  return;
}

// SetIdentity @ 1417fd6b0

void __thiscall UE::Math::TMatrix<float>::SetIdentity(TMatrix<float> *this)

{
  *(float *)((longlong)(this->M + 0) + 0) = 1.0;
  *(float *)((longlong)(this->M + 0) + 4) = 0.0;
  *(float *)((longlong)(this->M + 0) + 8) = 0.0;
  *(float *)((longlong)(this->M + 0) + 0xc) = 0.0;
  this->M[1][0] = 0.0;
  *(undefined8 *)(this->M[1] + 3) = 0;
  this->M[2][1] = 0.0;
  *(float *)((longlong)(this->M + 3) + 0) = 0.0;
  *(float *)((longlong)(this->M + 3) + 4) = 0.0;
  this->M[3][2] = 0.0;
  *(float *)((longlong)(this->M + 1) + 4) = 1.0;
  *(float *)((longlong)(this->M + 1) + 8) = 0.0;
  *(float *)((longlong)(this->M + 2) + 8) = 1.0;
  *(float *)((longlong)(this->M + 2) + 0xc) = 0.0;
  this->M[3][3] = 1.0;
  return;
}

// SetIdentity @ 1417fd6f0

void __thiscall UE::Math::TMatrix<double>::SetIdentity(TMatrix<double> *this)

{
  this->M[0][0] = 1.0;
  this->M[0][1] = 0.0;
  this->M[0][2] = 0.0;
  this->M[0][3] = 0.0;
  this->M[1][0] = 0.0;
  this->M[1][1] = 1.0;
  this->M[1][2] = 0.0;
  this->M[1][3] = 0.0;
  this->M[2][0] = 0.0;
  this->M[2][1] = 0.0;
  this->M[2][2] = 1.0;
  this->M[2][3] = 0.0;
  this->M[3][0] = 0.0;
  this->M[3][1] = 0.0;
  this->M[3][2] = 0.0;
  this->M[3][3] = 1.0;
  return;
}

// SetOrigin @ 1417fdb50

void __thiscall UE::Math::TMatrix<float>::SetOrigin(TMatrix<float> *this,TVector<float> *param_1)

{
  this->M[3][0] = (param_1->field0_0x0)._s_0.X;
  this->M[3][1] = (param_1->field0_0x0)._s_0.Y;
  this->M[3][2] = (param_1->field0_0x0)._s_0.Z;
  return;
}

// SetOrigin @ 1417fdb70

void __thiscall UE::Math::TMatrix<double>::SetOrigin(TMatrix<double> *this,TVector<double> *param_1)

{
  this->M[3][0] = (param_1->field0_0x0)._s_0.X;
  this->M[3][1] = (param_1->field0_0x0)._s_0.Y;
  this->M[3][2] = (param_1->field0_0x0)._s_0.Z;
  return;
}

// To3x4MatrixTranspose @ 1418021b0

void __thiscall
UE::Math::TMatrix<double>::To3x4MatrixTranspose(TMatrix<double> *this,double *param_1)

{
  *param_1 = this->M[0][0];
  param_1[1] = this->M[1][0];
  param_1[2] = this->M[2][0];
  param_1[3] = this->M[3][0];
  param_1[4] = this->M[0][1];
  param_1[5] = this->M[1][1];
  param_1[6] = this->M[2][1];
  param_1[7] = this->M[3][1];
  param_1[8] = this->M[0][2];
  param_1[9] = this->M[1][2];
  param_1[10] = this->M[2][2];
  param_1[0xb] = this->M[3][2];
  return;
}

// ToQuat @ 141806460

TQuat<float> * __thiscall
UE::Math::TMatrix<float>::ToQuat(TMatrix<float> *this,TQuat<float> *__return_storage_ptr__)

{
  TQuat<float>::TQuat<float>(__return_storage_ptr__,this);
  return __return_storage_ptr__;
}

// ToQuat @ 141806490

TQuat<double> * __thiscall
UE::Math::TMatrix<double>::ToQuat(TMatrix<double> *this,TQuat<double> *__return_storage_ptr__)

{
  TQuat<double>::TQuat<double>(__return_storage_ptr__,this);
  return __return_storage_ptr__;
}

// ToString @ 141806780

FString * __thiscall
UE::Math::TMatrix<float>::ToString(TMatrix<float> *this,FString *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  FString local_18;
  
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::PrintfImpl(&local_18,L"[%g %g %g %g] ");
  iVar1 = 0;
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = iVar1;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"[%g %g %g %g] ");
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = iVar1;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"[%g %g %g %g] ");
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = iVar1;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"[%g %g %g %g] ");
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = iVar1;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToString @ 141806980

FString * __thiscall
UE::Math::TMatrix<double>::ToString(TMatrix<double> *this,FString *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  FString local_18;
  
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::PrintfImpl(&local_18,L"[%g %g %g %g] ");
  iVar1 = 0;
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = iVar1;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"[%g %g %g %g] ");
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = iVar1;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"[%g %g %g %g] ");
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = iVar1;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"[%g %g %g %g] ");
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = iVar1;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// TransformFVector4 @ 141808480

TVector4<float> * __thiscall
UE::Math::TMatrix<float>::TransformFVector4
          (TMatrix<float> *this,TVector4<float> *__return_storage_ptr__,TVector4<float> *param_1)

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
  
  fVar1 = (param_1->field0_0x0)._s_0.X;
  fVar2 = (param_1->field0_0x0)._s_0.Y;
  fVar3 = (param_1->field0_0x0)._s_0.Z;
  fVar4 = (param_1->field0_0x0)._s_0.W;
  fVar5 = this->M[1][1];
  fVar6 = this->M[1][2];
  fVar7 = this->M[1][3];
  fVar8 = this->M[0][1];
  fVar9 = this->M[0][2];
  fVar10 = this->M[0][3];
  fVar11 = this->M[2][1];
  fVar12 = this->M[2][2];
  fVar13 = this->M[2][3];
  fVar14 = this->M[3][1];
  fVar15 = this->M[3][2];
  fVar16 = this->M[3][3];
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       fVar2 * this->M[1][0] + fVar1 * this->M[0][0] + fVar3 * this->M[2][0] + fVar4 * this->M[3][0]
  ;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       fVar2 * fVar5 + fVar1 * fVar8 + fVar3 * fVar11 + fVar4 * fVar14;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       fVar2 * fVar6 + fVar1 * fVar9 + fVar3 * fVar12 + fVar4 * fVar15;
  (__return_storage_ptr__->field0_0x0)._s_0.W =
       fVar2 * fVar7 + fVar1 * fVar10 + fVar3 * fVar13 + fVar4 * fVar16;
  return __return_storage_ptr__;
}

// TransformFVector4 @ 1418084d0

TVector4<double> * __thiscall
UE::Math::TMatrix<double>::TransformFVector4
          (TMatrix<double> *this,TVector4<double> *__return_storage_ptr__,TVector4<double> *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
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
  
  dVar4 = this->M[0][2];
  dVar5 = this->M[0][3];
  dVar6 = (param_1->field0_0x0)._s_0.X;
  dVar7 = (param_1->field0_0x0)._s_0.Y;
  dVar8 = (param_1->field0_0x0)._s_0.Z;
  dVar9 = (param_1->field0_0x0)._s_0.W;
  dVar10 = this->M[1][2];
  dVar11 = this->M[1][3];
  dVar3 = dVar7 * this->M[1][1] + dVar6 * this->M[0][1] + dVar8 * this->M[2][1] +
          dVar9 * this->M[3][1];
  dVar12 = this->M[2][2];
  dVar13 = this->M[2][3];
  dVar14 = this->M[3][2];
  dVar15 = this->M[3][3];
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = dVar7 * this->M[1][0] + dVar6 * this->M[0][0] + dVar8 * this->M[2][0] +
                 dVar9 * this->M[3][0];
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
  dVar3 = dVar5 * dVar6 + dVar11 * dVar7 + dVar13 * dVar8 + dVar15 * dVar9;
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar4 * dVar6 + dVar10 * dVar7 + dVar12 * dVar8 + dVar14 * dVar9;
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)&__return_storage_ptr__->field0_0x0 + 0x10) = auVar1;
  return __return_storage_ptr__;
}

// TransformPosition @ 141808980

TVector4<float> * __thiscall
UE::Math::TMatrix<float>::TransformPosition
          (TMatrix<float> *this,TVector4<float> *__return_storage_ptr__,TVector<float> *param_1)

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
  
  fVar1 = (param_1->field0_0x0)._s_0.X;
  fVar2 = (param_1->field0_0x0)._s_0.Y;
  fVar3 = (param_1->field0_0x0)._s_0.Z;
  fVar4 = this->M[1][1];
  fVar5 = this->M[1][2];
  fVar6 = this->M[1][3];
  fVar7 = this->M[0][1];
  fVar8 = this->M[0][2];
  fVar9 = this->M[0][3];
  fVar10 = this->M[2][1];
  fVar11 = this->M[2][2];
  fVar12 = this->M[2][3];
  fVar13 = this->M[3][1];
  fVar14 = this->M[3][2];
  fVar15 = this->M[3][3];
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       fVar2 * this->M[1][0] + fVar1 * this->M[0][0] + fVar3 * this->M[2][0] + this->M[3][0] * 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       fVar2 * fVar4 + fVar1 * fVar7 + fVar3 * fVar10 + fVar13 * 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       fVar2 * fVar5 + fVar1 * fVar8 + fVar3 * fVar11 + fVar14 * 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.W =
       fVar2 * fVar6 + fVar1 * fVar9 + fVar3 * fVar12 + fVar15 * 1.0;
  return __return_storage_ptr__;
}

// TransformPosition @ 141808a00

TVector4<double> * __thiscall
UE::Math::TMatrix<double>::TransformPosition
          (TMatrix<double> *this,TVector4<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
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
  
  dVar5 = this->M[0][2];
  dVar6 = this->M[0][3];
  dVar7 = (param_1->field0_0x0)._s_0.X;
  dVar8 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar9 = this->M[1][2];
  dVar10 = this->M[1][3];
  dVar4 = dVar7 * this->M[0][1] + this->M[1][1] * dVar8 + dVar1 * this->M[2][1] +
          __real_3ff0000000000000 * this->M[3][1];
  dVar11 = this->M[2][2];
  dVar12 = this->M[2][3];
  dVar13 = this->M[3][2] * __real_3ff0000000000000;
  dVar14 = this->M[3][3] * __real_3ff0000000000000;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = dVar7 * this->M[0][0] + this->M[1][0] * dVar8 + dVar1 * this->M[2][0] +
                 __real_3ff0000000000000 * this->M[3][0];
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar3;
  dVar14 = dVar6 * dVar7 + dVar10 * dVar8 + dVar12 * dVar1 + dVar14;
  auVar2._8_4_ = SUB84(dVar14,0);
  auVar2._0_8_ = dVar5 * dVar7 + dVar9 * dVar8 + dVar11 * dVar1 + dVar13;
  auVar2._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  *(undefined1 (*) [16])((longlong)&__return_storage_ptr__->field0_0x0 + 0x10) = auVar2;
  return __return_storage_ptr__;
}

// TransformVector @ 141808fb0

TVector4<float> * __thiscall
UE::Math::TMatrix<float>::TransformVector
          (TMatrix<float> *this,TVector4<float> *__return_storage_ptr__,TVector<float> *param_1)

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
  
  fVar1 = (param_1->field0_0x0)._s_0.X;
  fVar2 = (param_1->field0_0x0)._s_0.Y;
  fVar3 = (param_1->field0_0x0)._s_0.Z;
  fVar4 = this->M[1][1];
  fVar5 = this->M[1][2];
  fVar6 = this->M[1][3];
  fVar7 = this->M[0][1];
  fVar8 = this->M[0][2];
  fVar9 = this->M[0][3];
  fVar10 = this->M[2][1];
  fVar11 = this->M[2][2];
  fVar12 = this->M[2][3];
  fVar13 = this->M[3][1];
  fVar14 = this->M[3][2];
  fVar15 = this->M[3][3];
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       fVar2 * this->M[1][0] + fVar1 * this->M[0][0] + fVar3 * this->M[2][0] + this->M[3][0] * 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       fVar2 * fVar4 + fVar1 * fVar7 + fVar3 * fVar10 + fVar13 * 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       fVar2 * fVar5 + fVar1 * fVar8 + fVar3 * fVar11 + fVar14 * 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.W =
       fVar2 * fVar6 + fVar1 * fVar9 + fVar3 * fVar12 + fVar15 * 0.0;
  return __return_storage_ptr__;
}

// TransformVector @ 141809030

TVector4<double> * __thiscall
UE::Math::TMatrix<double>::TransformVector
          (TMatrix<double> *this,TVector4<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
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
  
  dVar5 = this->M[0][2];
  dVar6 = this->M[0][3];
  dVar7 = (param_1->field0_0x0)._s_0.X;
  dVar8 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar9 = this->M[1][2];
  dVar10 = this->M[1][3];
  dVar4 = dVar7 * this->M[0][1] + this->M[1][1] * dVar8 + dVar1 * this->M[2][1] +
          this->M[3][1] * 0.0;
  dVar11 = this->M[2][2];
  dVar12 = this->M[2][3];
  dVar13 = this->M[3][2];
  dVar14 = this->M[3][3];
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = dVar7 * this->M[0][0] + this->M[1][0] * dVar8 + dVar1 * this->M[2][0] +
                 this->M[3][0] * 0.0;
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar3;
  dVar4 = dVar6 * dVar7 + dVar10 * dVar8 + dVar12 * dVar1 + dVar14 * 0.0;
  auVar2._8_4_ = SUB84(dVar4,0);
  auVar2._0_8_ = dVar5 * dVar7 + dVar9 * dVar8 + dVar11 * dVar1 + dVar13 * 0.0;
  auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])((longlong)&__return_storage_ptr__->field0_0x0 + 0x10) = auVar2;
  return __return_storage_ptr__;
}

// TransposeAdjoint @ 141809490

TMatrix<float> * __thiscall
UE::Math::TMatrix<float>::TransposeAdjoint
          (TMatrix<float> *this,TMatrix<float> *__return_storage_ptr__)

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
  
  fVar1 = this->M[2][0];
  fVar2 = this->M[0][2];
  fVar3 = this->M[0][0];
  fVar4 = this->M[2][2];
  fVar5 = this->M[0][1];
  fVar6 = this->M[2][1];
  fVar7 = this->M[1][0];
  fVar8 = this->M[1][2];
  __return_storage_ptr__->M[0][3] = 0.0;
  __return_storage_ptr__->M[1][3] = 0.0;
  fVar9 = this->M[1][1];
  *(undefined8 *)(__return_storage_ptr__->M[2] + 3) = 0;
  *(float *)((longlong)(__return_storage_ptr__->M + 3) + 4) = 0.0;
  *(float *)((longlong)(__return_storage_ptr__->M + 3) + 8) = 0.0;
  __return_storage_ptr__->M[3][3] = 1.0;
  __return_storage_ptr__->M[0][0] = fVar9 * fVar4 - fVar8 * fVar6;
  __return_storage_ptr__->M[0][1] = fVar1 * fVar8 - fVar7 * fVar4;
  __return_storage_ptr__->M[0][2] = fVar7 * fVar6 - fVar1 * fVar9;
  __return_storage_ptr__->M[1][0] = fVar2 * fVar6 - fVar5 * fVar4;
  __return_storage_ptr__->M[1][1] = fVar3 * fVar4 - fVar2 * fVar1;
  __return_storage_ptr__->M[1][2] = fVar5 * fVar1 - fVar3 * fVar6;
  __return_storage_ptr__->M[2][0] = fVar5 * fVar8 - fVar2 * fVar9;
  __return_storage_ptr__->M[2][1] = fVar2 * fVar7 - fVar3 * fVar8;
  __return_storage_ptr__->M[2][2] = fVar3 * fVar9 - fVar5 * fVar7;
  return __return_storage_ptr__;
}

// TransposeAdjoint @ 141809600

TMatrix<double> * __thiscall
UE::Math::TMatrix<double>::TransposeAdjoint
          (TMatrix<double> *this,TMatrix<double> *__return_storage_ptr__)

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
  
  dVar1 = this->M[2][0];
  dVar2 = this->M[0][2];
  dVar3 = this->M[0][0];
  dVar4 = this->M[2][2];
  dVar5 = this->M[0][1];
  dVar6 = this->M[2][1];
  dVar7 = this->M[1][0];
  dVar8 = this->M[1][2];
  __return_storage_ptr__->M[0][3] = 0.0;
  __return_storage_ptr__->M[1][3] = 0.0;
  dVar9 = this->M[1][1];
  __return_storage_ptr__->M[2][3] = 0.0;
  __return_storage_ptr__->M[3][0] = 0.0;
  __return_storage_ptr__->M[3][1] = 0.0;
  __return_storage_ptr__->M[3][2] = 0.0;
  __return_storage_ptr__->M[3][3] = 1.0;
  __return_storage_ptr__->M[0][0] = dVar9 * dVar4 - dVar8 * dVar6;
  __return_storage_ptr__->M[0][1] = dVar1 * dVar8 - dVar7 * dVar4;
  __return_storage_ptr__->M[0][2] = dVar7 * dVar6 - dVar1 * dVar9;
  __return_storage_ptr__->M[1][0] = dVar2 * dVar6 - dVar5 * dVar4;
  __return_storage_ptr__->M[1][1] = dVar3 * dVar4 - dVar2 * dVar1;
  __return_storage_ptr__->M[1][2] = dVar5 * dVar1 - dVar3 * dVar6;
  __return_storage_ptr__->M[2][0] = dVar5 * dVar8 - dVar2 * dVar9;
  __return_storage_ptr__->M[2][2] = dVar3 * dVar9 - dVar5 * dVar7;
  __return_storage_ptr__->M[2][1] = dVar2 * dVar7 - dVar3 * dVar8;
  return __return_storage_ptr__;
}

// operator() @ 15047c270

bool __thiscall `UE::Math::TMatrix<float>::ErrorEnsure'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8715503415507025451>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8715503415507025451>,
                       &`public:___cdecl_`private:_static_void___cdecl_UE::Math::TMatrix<float>::ErrorEnsure(wchar_t_const*___ptr64)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15047c2c0

bool __thiscall `UE::Math::TMatrix<double>::ErrorEnsure'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8715503415507025451>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8715503415507025451>,
                       &`public:___cdecl_`private:_static_void___cdecl_UE::Math::TMatrix<double>::ErrorEnsure(wchar_t_const*___ptr64)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

