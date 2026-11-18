// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 157

// IsValidIndex @ 14149ebc0

bool __thiscall UE::Math::TVector2<double>::IsValidIndex(TVector2<double> *this,int param_1)

{
  return (uint)param_1 < 2;
}

// TVector2<float> @ 1417a01a0

TVector2<float> * __thiscall
UE::Math::TVector2<float>::TVector2<float>(TVector2<float> *this,TVector4<float> *param_1)

{
  (this->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  return this;
}

// TVector2<float> @ 1417a01c0

TVector2<float> * __thiscall
UE::Math::TVector2<float>::TVector2<float>(TVector2<float> *this,TVector<float> *param_1)

{
  (this->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  return this;
}

// TVector2<float> @ 1417a01e0

TVector2<float> * __thiscall
UE::Math::TVector2<float>::TVector2<float>(TVector2<float> *this,float param_1)

{
  (this->field0_0x0)._s_0.X = param_1;
  (this->field0_0x0)._s_0.Y = param_1;
  return this;
}

// TVector2<float> @ 1417a0200

TVector2<float> * __thiscall
UE::Math::TVector2<float>::TVector2<float>(TVector2<float> *this,float param_1,float param_2)

{
  (this->field0_0x0)._s_0.X = param_1;
  (this->field0_0x0)._s_0.Y = param_2;
  return this;
}

// TVector2<float> @ 1417a0220

TVector2<float> * __thiscall
UE::Math::TVector2<float>::TVector2<float>(TVector2<float> *this,EForceInit param_1)

{
  this->field0_0x0 = (TVector2<float>_u_0)0x0;
  return this;
}

// TVector2<float> @ 1417a0230

TVector2<float> * __thiscall
UE::Math::TVector2<float>::TVector2<float>(TVector2<float> *this,ENoInit param_1)

{
  return this;
}

// TVector2<double> @ 1417a0240

TVector2<double> * __thiscall
UE::Math::TVector2<double>::TVector2<double>(TVector2<double> *this,TVector4<double> *param_1)

{
  (this->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  return this;
}

// TVector2<double> @ 1417a0260

TVector2<double> * __thiscall
UE::Math::TVector2<double>::TVector2<double>(TVector2<double> *this,TVector<double> *param_1)

{
  (this->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  return this;
}

// TVector2<double> @ 1417a0280

TVector2<double> * __thiscall
UE::Math::TVector2<double>::TVector2<double>(TVector2<double> *this,double param_1)

{
  (this->field0_0x0)._s_0.X = param_1;
  (this->field0_0x0)._s_0.Y = param_1;
  return this;
}

// TVector2<double> @ 1417a02a0

TVector2<double> * __thiscall
UE::Math::TVector2<double>::TVector2<double>(TVector2<double> *this,double param_1,double param_2)

{
  (this->field0_0x0)._s_0.X = param_1;
  (this->field0_0x0)._s_0.Y = param_2;
  return this;
}

// TVector2<double> @ 1417a02c0

TVector2<double> * __thiscall
UE::Math::TVector2<double>::TVector2<double>(TVector2<double> *this,EForceInit param_1)

{
  (this->field0_0x0)._s_0.X = 0.0;
  (this->field0_0x0)._s_0.Y = 0.0;
  return this;
}

// TVector2<double> @ 1417a02e0

TVector2<double> * __thiscall
UE::Math::TVector2<double>::TVector2<double>(TVector2<double> *this,ENoInit param_1)

{
  return this;
}

// operator== @ 1417a9f00

bool __thiscall
UE::Math::TVector2<float>::operator==(TVector2<float> *this,TVector2<float> *param_1)

{
  if (((param_1->field0_0x0)._s_0.X == (this->field0_0x0)._s_0.X) &&
     ((param_1->field0_0x0)._s_0.Y == (this->field0_0x0)._s_0.Y)) {
    return true;
  }
  return false;
}

// operator== @ 1417a9f20

bool __thiscall
UE::Math::TVector2<double>::operator==(TVector2<double> *this,TVector2<double> *param_1)

{
  if (((param_1->field0_0x0)._s_0.X == (this->field0_0x0)._s_0.X) &&
     ((param_1->field0_0x0)._s_0.Y == (this->field0_0x0)._s_0.Y)) {
    return true;
  }
  return false;
}

// operator!= @ 1417aa350

bool __thiscall
UE::Math::TVector2<float>::operator!=(TVector2<float> *this,TVector2<float> *param_1)

{
  if (((param_1->field0_0x0)._s_0.X == (this->field0_0x0)._s_0.X) &&
     ((param_1->field0_0x0)._s_0.Y == (this->field0_0x0)._s_0.Y)) {
    return false;
  }
  return true;
}

// operator!= @ 1417aa370

bool __thiscall
UE::Math::TVector2<double>::operator!=(TVector2<double> *this,TVector2<double> *param_1)

{
  if (((param_1->field0_0x0)._s_0.X == (this->field0_0x0)._s_0.X) &&
     ((param_1->field0_0x0)._s_0.Y == (this->field0_0x0)._s_0.Y)) {
    return false;
  }
  return true;
}

// operator[] @ 1417aa5d0

float * __thiscall UE::Math::TVector2<float>::operator[](TVector2<float> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  float *pfVar3;
  
  if (1 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                       ,0x4b0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pfVar3 = (float *)(*pcVar1)();
      return pfVar3;
    }
  }
  return (float *)((longlong)&this->field0_0x0 + (longlong)param_1 * 4);
}

// operator[] @ 1417aa620

float __thiscall UE::Math::TVector2<float>::operator[](TVector2<float> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((uint)param_1 < 2) {
    return (this->field0_0x0).XY[param_1];
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidIndex(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                     ,0x4b9,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  return (this->field0_0x0).XY[param_1];
}

// operator[] @ 1417aa690

double * __thiscall UE::Math::TVector2<double>::operator[](TVector2<double> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  double *pdVar3;
  
  if (1 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                       ,0x4b0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pdVar3 = (double *)(*pcVar1)();
      return pdVar3;
    }
  }
  return (double *)((longlong)&this->field0_0x0 + (longlong)param_1 * 8);
}

// operator[] @ 1417aa6e0

double __thiscall UE::Math::TVector2<double>::operator[](TVector2<double> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  
  if ((uint)param_1 < 2) {
    return (this->field0_0x0).XY[param_1];
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidIndex(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                     ,0x4b9,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    dVar3 = (double)(*pcVar1)();
    return dVar3;
  }
  return (this->field0_0x0).XY[param_1];
}

// operator* @ 1417ab620

TVector2<float> __thiscall
UE::Math::TVector2<float>::operator*(TVector2<float> *this,TVector2<float> *param_1)

{
  float fVar1;
  float fVar2;
  float *in_R8;
  
  fVar1 = in_R8[1];
  fVar2 = (this->field0_0x0)._s_0.Y;
  (param_1->field0_0x0)._s_0.X = *in_R8 * (this->field0_0x0)._s_0.X;
  (param_1->field0_0x0)._s_0.Y = fVar1 * fVar2;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// operator* @ 1417ab650

TVector2<float> __thiscall UE::Math::TVector2<float>::operator*(TVector2<float> *this,float param_1)

{
  float fVar1;
  TVector2<float>_u_0 in_RDX;
  float in_XMM2_Da;
  
  fVar1 = (this->field0_0x0)._s_0.Y;
  *(float *)in_RDX = in_XMM2_Da * (this->field0_0x0)._s_0.X;
  *(float *)((longlong)in_RDX + 4) = in_XMM2_Da * fVar1;
  return (TVector2<float>)in_RDX;
}

// operator* @ 1417ab670

TVector2<double> * __thiscall
UE::Math::TVector2<double>::operator*
          (TVector2<double> *this,TVector2<double> *__return_storage_ptr__,TVector2<double> *param_1
          )

{
  TVector2<double>_u_0 TVar1;
  double dVar2;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y * (this->field0_0x0)._s_0.Y;
  TVar1._8_4_ = SUB84(dVar2,0);
  TVar1._s_0.X = (param_1->field0_0x0)._s_0.X * (this->field0_0x0)._s_0.X;
  TVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  __return_storage_ptr__->field0_0x0 = TVar1;
  return __return_storage_ptr__;
}

// operator* @ 1417ab690

TVector2<double> * __thiscall
UE::Math::TVector2<double>::operator*
          (TVector2<double> *this,TVector2<double> *__return_storage_ptr__,double param_1)

{
  TVector2<double>_u_0 TVar1;
  double dVar2;
  
  dVar2 = param_1 * (this->field0_0x0)._s_0.Y;
  TVar1._8_4_ = SUB84(dVar2,0);
  TVar1._s_0.X = param_1 * (this->field0_0x0)._s_0.X;
  TVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  __return_storage_ptr__->field0_0x0 = TVar1;
  return __return_storage_ptr__;
}

// operator- @ 1417ab9d0

TVector2<float> __thiscall
UE::Math::TVector2<float>::operator-(TVector2<float> *this,TVector2<float> *param_1)

{
  float fVar1;
  float fVar2;
  float *in_R8;
  
  fVar1 = (this->field0_0x0)._s_0.Y;
  fVar2 = in_R8[1];
  (param_1->field0_0x0)._s_0.X = (this->field0_0x0)._s_0.X - *in_R8;
  (param_1->field0_0x0)._s_0.Y = fVar1 - fVar2;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// operator- @ 1417aba00

TVector2<float> __thiscall UE::Math::TVector2<float>::operator-(TVector2<float> *this,float param_1)

{
  float fVar1;
  TVector2<float>_u_0 in_RDX;
  float in_XMM2_Da;
  
  fVar1 = (this->field0_0x0)._s_0.Y;
  *(float *)in_RDX = (this->field0_0x0)._s_0.X - in_XMM2_Da;
  *(float *)((longlong)in_RDX + 4) = fVar1 - in_XMM2_Da;
  return (TVector2<float>)in_RDX;
}

// operator- @ 1417aba30

TVector2<float> __thiscall UE::Math::TVector2<float>::operator-(TVector2<float> *this)

{
  TVector2<float>_u_0 in_RDX;
  
  *(uint *)in_RDX = (uint)(this->field0_0x0)._s_0.X ^ __xmm_80000000800000008000000080000000;
  *(uint *)((longlong)in_RDX + 4) =
       (uint)(this->field0_0x0)._s_0.Y ^ __xmm_80000000800000008000000080000000;
  return (TVector2<float>)in_RDX;
}

// operator- @ 1417aba60

TVector2<double> * __thiscall
UE::Math::TVector2<double>::operator-
          (TVector2<double> *this,TVector2<double> *__return_storage_ptr__,TVector2<double> *param_1
          )

{
  TVector2<double>_u_0 TVar1;
  double dVar2;
  
  dVar2 = (this->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  TVar1._8_4_ = SUB84(dVar2,0);
  TVar1._s_0.X = (this->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  TVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  __return_storage_ptr__->field0_0x0 = TVar1;
  return __return_storage_ptr__;
}

// operator- @ 1417aba80

TVector2<double> * __thiscall
UE::Math::TVector2<double>::operator-
          (TVector2<double> *this,TVector2<double> *__return_storage_ptr__,double param_1)

{
  TVector2<double>_u_0 TVar1;
  double dVar2;
  
  dVar2 = (this->field0_0x0)._s_0.Y - param_1;
  TVar1._8_4_ = SUB84(dVar2,0);
  TVar1._s_0.X = (this->field0_0x0)._s_0.X - param_1;
  TVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  __return_storage_ptr__->field0_0x0 = TVar1;
  return __return_storage_ptr__;
}

// operator- @ 1417abaa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector2<double> * __thiscall
UE::Math::TVector2<double>::operator-
          (TVector2<double> *this,TVector2<double> *__return_storage_ptr__)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)((longlong)&this->field0_0x0 + 4) ^ __xmm_80000000000000008000000000000000._4_4_;
  uVar2 = *(uint *)((longlong)&this->field0_0x0 + 8) ^ _UNK_15066df78;
  uVar3 = *(uint *)((longlong)&this->field0_0x0 + 0xc) ^ _UNK_15066df7c;
  *(uint *)&__return_storage_ptr__->field0_0x0 =
       *(uint *)&this->field0_0x0 ^ (uint)__xmm_80000000000000008000000000000000;
  *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar1;
  *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar2;
  *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar3;
  return __return_storage_ptr__;
}

// operator+ @ 1417abec0

TVector2<float> __thiscall
UE::Math::TVector2<float>::operator+(TVector2<float> *this,TVector2<float> *param_1)

{
  float fVar1;
  float fVar2;
  float *in_R8;
  
  fVar1 = in_R8[1];
  fVar2 = (this->field0_0x0)._s_0.Y;
  (param_1->field0_0x0)._s_0.X = *in_R8 + (this->field0_0x0)._s_0.X;
  (param_1->field0_0x0)._s_0.Y = fVar1 + fVar2;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// operator+ @ 1417abef0

TVector2<float> __thiscall UE::Math::TVector2<float>::operator+(TVector2<float> *this,float param_1)

{
  float fVar1;
  TVector2<float>_u_0 in_RDX;
  float in_XMM2_Da;
  
  fVar1 = (this->field0_0x0)._s_0.Y;
  *(float *)in_RDX = in_XMM2_Da + (this->field0_0x0)._s_0.X;
  *(float *)((longlong)in_RDX + 4) = in_XMM2_Da + fVar1;
  return (TVector2<float>)in_RDX;
}

// operator+ @ 1417abf10

TVector2<double> * __thiscall
UE::Math::TVector2<double>::operator+
          (TVector2<double> *this,TVector2<double> *__return_storage_ptr__,TVector2<double> *param_1
          )

{
  TVector2<double>_u_0 TVar1;
  double dVar2;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y + (this->field0_0x0)._s_0.Y;
  TVar1._8_4_ = SUB84(dVar2,0);
  TVar1._s_0.X = (param_1->field0_0x0)._s_0.X + (this->field0_0x0)._s_0.X;
  TVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  __return_storage_ptr__->field0_0x0 = TVar1;
  return __return_storage_ptr__;
}

// operator+ @ 1417abf30

TVector2<double> * __thiscall
UE::Math::TVector2<double>::operator+
          (TVector2<double> *this,TVector2<double> *__return_storage_ptr__,double param_1)

{
  TVector2<double>_u_0 TVar1;
  double dVar2;
  
  dVar2 = param_1 + (this->field0_0x0)._s_0.Y;
  TVar1._8_4_ = SUB84(dVar2,0);
  TVar1._s_0.X = param_1 + (this->field0_0x0)._s_0.X;
  TVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  __return_storage_ptr__->field0_0x0 = TVar1;
  return __return_storage_ptr__;
}

// operator/ @ 1417ac010

TVector2<float> __thiscall
UE::Math::TVector2<float>::operator/(TVector2<float> *this,TVector2<float> *param_1)

{
  float fVar1;
  float fVar2;
  float *in_R8;
  
  fVar1 = (this->field0_0x0)._s_0.Y;
  fVar2 = in_R8[1];
  (param_1->field0_0x0)._s_0.X = (this->field0_0x0)._s_0.X / *in_R8;
  (param_1->field0_0x0)._s_0.Y = fVar1 / fVar2;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// operator/ @ 1417ac040

TVector2<float> __thiscall UE::Math::TVector2<float>::operator/(TVector2<float> *this,float param_1)

{
  float fVar1;
  TVector2<float>_u_0 in_RDX;
  float fVar2;
  float in_XMM2_Da;
  
  fVar2 = __real_3f800000 / in_XMM2_Da;
  fVar1 = (this->field0_0x0)._s_0.X;
  *(float *)((longlong)in_RDX + 4) = fVar2 * (this->field0_0x0)._s_0.Y;
  *(float *)in_RDX = fVar2 * fVar1;
  return (TVector2<float>)in_RDX;
}

// operator/ @ 1417ac070

TVector2<double> * __thiscall
UE::Math::TVector2<double>::operator/
          (TVector2<double> *this,TVector2<double> *__return_storage_ptr__,TVector2<double> *param_1
          )

{
  TVector2<double>_u_0 TVar1;
  
  TVar1._s_0 = (TVector2<double>_u_0_s_0)divpd(this->field0_0x0,param_1->field0_0x0);
  __return_storage_ptr__->field0_0x0 = TVar1;
  return __return_storage_ptr__;
}

// operator/ @ 1417ac090

TVector2<double> * __thiscall
UE::Math::TVector2<double>::operator/
          (TVector2<double> *this,TVector2<double> *__return_storage_ptr__,double param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (this->field0_0x0)._s_0.Y;
  dVar2 = __real_3ff0000000000000 / param_1;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2 * (this->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 * dVar1;
  return __return_storage_ptr__;
}

// operator^ @ 1417aeeb0

float __thiscall
UE::Math::TVector2<float>::operator^(TVector2<float> *this,TVector2<float> *param_1)

{
  return (param_1->field0_0x0)._s_0.Y * (this->field0_0x0)._s_0.X -
         (this->field0_0x0)._s_0.Y * (param_1->field0_0x0)._s_0.X;
}

// operator^ @ 1417aeed0

double __thiscall
UE::Math::TVector2<double>::operator^(TVector2<double> *this,TVector2<double> *param_1)

{
  return (param_1->field0_0x0)._s_0.Y * (this->field0_0x0)._s_0.X -
         (this->field0_0x0)._s_0.Y * (param_1->field0_0x0)._s_0.X;
}

// operator| @ 1417af110

float __thiscall
UE::Math::TVector2<float>::operator|(TVector2<float> *this,TVector2<float> *param_1)

{
  return (param_1->field0_0x0)._s_0.Y * (this->field0_0x0)._s_0.Y +
         (param_1->field0_0x0)._s_0.X * (this->field0_0x0)._s_0.X;
}

// operator| @ 1417af130

double __thiscall
UE::Math::TVector2<double>::operator|(TVector2<double> *this,TVector2<double> *param_1)

{
  return (param_1->field0_0x0)._s_0.Y * (this->field0_0x0)._s_0.Y +
         (param_1->field0_0x0)._s_0.X * (this->field0_0x0)._s_0.X;
}

// operator*= @ 1417af660

TVector2<float> __thiscall
UE::Math::TVector2<float>::operator*=(TVector2<float> *this,TVector2<float> *param_1)

{
  float *in_R8;
  
  (this->field0_0x0)._s_0.X = *in_R8 * (this->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.Y = in_R8[1] * (this->field0_0x0)._s_0.Y;
  param_1->field0_0x0 = this->field0_0x0;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// operator*= @ 1417af690

TVector2<float> __thiscall
UE::Math::TVector2<float>::operator*=(TVector2<float> *this,float param_1)

{
  TVector2<float>_u_0 in_RDX;
  float in_XMM2_Da;
  
  (this->field0_0x0)._s_0.Y = in_XMM2_Da * (this->field0_0x0)._s_0.Y;
  (this->field0_0x0)._s_0.X = in_XMM2_Da * (this->field0_0x0)._s_0.X;
  *(TVector2<float>_u_0 *)in_RDX = this->field0_0x0;
  return (TVector2<float>)in_RDX;
}

// operator*= @ 1417af6c0

TVector2<double> * __thiscall
UE::Math::TVector2<double>::operator*=
          (TVector2<double> *this,TVector2<double> *__return_storage_ptr__,TVector2<double> *param_1
          )

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  
  (this->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X * (this->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Y * (this->field0_0x0)._s_0.Y;
  uVar1 = *(undefined4 *)&this->field0_0x0;
  uVar2 = *(undefined4 *)((longlong)&this->field0_0x0 + 4);
  *(undefined4 *)&this->field0_0x0 = uVar1;
  *(undefined4 *)((longlong)&this->field0_0x0 + 4) = uVar2;
  (this->field0_0x0)._s_0.Y = dVar3;
  *(undefined4 *)&__return_storage_ptr__->field0_0x0 = uVar1;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  return __return_storage_ptr__;
}

// operator*= @ 1417af6f0

TVector2<double> * __thiscall
UE::Math::TVector2<double>::operator*=
          (TVector2<double> *this,TVector2<double> *__return_storage_ptr__,double param_1)

{
  TVector2<double>_u_0 TVar1;
  TVector2<double>_u_0 TVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  
  dVar3 = param_1 * (this->field0_0x0)._s_0.X;
  dVar6 = param_1 * (this->field0_0x0)._s_0.Y;
  uVar4 = SUB84(dVar6,0);
  uVar5 = (undefined4)((ulonglong)dVar6 >> 0x20);
  TVar1._8_4_ = uVar4;
  TVar1._s_0.X = dVar3;
  TVar1._12_4_ = uVar5;
  this->field0_0x0 = TVar1;
  TVar2._8_4_ = uVar4;
  TVar2._s_0.X = dVar3;
  TVar2._12_4_ = uVar5;
  __return_storage_ptr__->field0_0x0 = TVar2;
  return __return_storage_ptr__;
}

// operator+= @ 1417aff70

TVector2<float> __thiscall
UE::Math::TVector2<float>::operator+=(TVector2<float> *this,TVector2<float> *param_1)

{
  float *in_R8;
  
  (this->field0_0x0)._s_0.X = *in_R8 + (this->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.Y = in_R8[1] + (this->field0_0x0)._s_0.Y;
  param_1->field0_0x0 = this->field0_0x0;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// operator+= @ 1417affa0

TVector2<double> * __thiscall
UE::Math::TVector2<double>::operator+=
          (TVector2<double> *this,TVector2<double> *__return_storage_ptr__,TVector2<double> *param_1
          )

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  
  (this->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X + (this->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Y + (this->field0_0x0)._s_0.Y;
  uVar1 = *(undefined4 *)&this->field0_0x0;
  uVar2 = *(undefined4 *)((longlong)&this->field0_0x0 + 4);
  *(undefined4 *)&this->field0_0x0 = uVar1;
  *(undefined4 *)((longlong)&this->field0_0x0 + 4) = uVar2;
  (this->field0_0x0)._s_0.Y = dVar3;
  *(undefined4 *)&__return_storage_ptr__->field0_0x0 = uVar1;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  return __return_storage_ptr__;
}

// operator-= @ 1417b0220

TVector2<float> __thiscall
UE::Math::TVector2<float>::operator-=(TVector2<float> *this,TVector2<float> *param_1)

{
  float *in_R8;
  
  (this->field0_0x0)._s_0.X = (this->field0_0x0)._s_0.X - *in_R8;
  (this->field0_0x0)._s_0.Y = (this->field0_0x0)._s_0.Y - in_R8[1];
  param_1->field0_0x0 = this->field0_0x0;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// operator-= @ 1417b0250

TVector2<double> * __thiscall
UE::Math::TVector2<double>::operator-=
          (TVector2<double> *this,TVector2<double> *__return_storage_ptr__,TVector2<double> *param_1
          )

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  
  (this->field0_0x0)._s_0.X = (this->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar3 = (this->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  uVar1 = *(undefined4 *)&this->field0_0x0;
  uVar2 = *(undefined4 *)((longlong)&this->field0_0x0 + 4);
  *(undefined4 *)&this->field0_0x0 = uVar1;
  *(undefined4 *)((longlong)&this->field0_0x0 + 4) = uVar2;
  (this->field0_0x0)._s_0.Y = dVar3;
  *(undefined4 *)&__return_storage_ptr__->field0_0x0 = uVar1;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  return __return_storage_ptr__;
}

// operator/= @ 1417b03e0

TVector2<float> __thiscall
UE::Math::TVector2<float>::operator/=(TVector2<float> *this,TVector2<float> *param_1)

{
  float *in_R8;
  
  (this->field0_0x0)._s_0.X = (this->field0_0x0)._s_0.X / *in_R8;
  (this->field0_0x0)._s_0.Y = (this->field0_0x0)._s_0.Y / in_R8[1];
  param_1->field0_0x0 = this->field0_0x0;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// operator/= @ 1417b0410

TVector2<float> __thiscall
UE::Math::TVector2<float>::operator/=(TVector2<float> *this,float param_1)

{
  TVector2<float>_u_0 in_RDX;
  float fVar1;
  float in_XMM2_Da;
  
  fVar1 = __real_3f800000 / in_XMM2_Da;
  (this->field0_0x0)._s_0.Y = fVar1 * (this->field0_0x0)._s_0.Y;
  (this->field0_0x0)._s_0.X = fVar1 * (this->field0_0x0)._s_0.X;
  *(TVector2<float>_u_0 *)in_RDX = this->field0_0x0;
  return (TVector2<float>)in_RDX;
}

// operator/= @ 1417b0450

TVector2<double> * __thiscall
UE::Math::TVector2<double>::operator/=
          (TVector2<double> *this,TVector2<double> *__return_storage_ptr__,TVector2<double> *param_1
          )

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  
  (this->field0_0x0)._s_0.X = (this->field0_0x0)._s_0.X / (param_1->field0_0x0)._s_0.X;
  dVar3 = (this->field0_0x0)._s_0.Y / (param_1->field0_0x0)._s_0.Y;
  uVar1 = *(undefined4 *)&this->field0_0x0;
  uVar2 = *(undefined4 *)((longlong)&this->field0_0x0 + 4);
  *(undefined4 *)&this->field0_0x0 = uVar1;
  *(undefined4 *)((longlong)&this->field0_0x0 + 4) = uVar2;
  (this->field0_0x0)._s_0.Y = dVar3;
  *(undefined4 *)&__return_storage_ptr__->field0_0x0 = uVar1;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  return __return_storage_ptr__;
}

// Clamp @ 1417b83e0

TVector2<float> __cdecl
UE::Math::TVector2<float>::Clamp
          (TVector2<float> *param_1,TVector2<float> *param_2,TVector2<float> *param_3)

{
  float fVar1;
  float *in_R9;
  float fVar2;
  float fVar3;
  
  fVar2 = (param_2->field0_0x0)._s_0.X;
  fVar3 = (param_2->field0_0x0)._s_0.Y;
  if (*in_R9 <= fVar2) {
    fVar2 = *in_R9;
  }
  if (in_R9[1] <= fVar3) {
    fVar3 = in_R9[1];
  }
  fVar1 = (param_3->field0_0x0)._s_0.X;
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar1 = (param_3->field0_0x0)._s_0.Y;
  if (fVar3 <= fVar1) {
    fVar3 = fVar1;
  }
  (param_1->field0_0x0)._s_0.X = fVar2;
  (param_1->field0_0x0)._s_0.Y = fVar3;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// Clamp @ 1417b8420

TVector2<double> * __cdecl
UE::Math::TVector2<double>::Clamp
          (TVector2<double> *__return_storage_ptr__,TVector2<double> *param_1,
          TVector2<double> *param_2,TVector2<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_3->field0_0x0)._s_0.X;
  if (dVar1 <= dVar2) {
    dVar2 = dVar1;
  }
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  if (dVar1 <= dVar3) {
    dVar3 = dVar1;
  }
  dVar1 = (param_2->field0_0x0)._s_0.X;
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  if (dVar3 <= dVar1) {
    dVar3 = dVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  return __return_storage_ptr__;
}

// ClampAxes @ 1417b8460

TVector2<float> __thiscall
UE::Math::TVector2<float>::ClampAxes(TVector2<float> *this,float param_1,float param_2)

{
  TVector2<float>_u_0 in_RDX;
  float fVar1;
  float fVar2;
  float in_XMM3_Da;
  
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Y;
  if (in_XMM3_Da <= fVar1) {
    fVar1 = in_XMM3_Da;
  }
  if (in_XMM3_Da <= fVar2) {
    fVar2 = in_XMM3_Da;
  }
  if (fVar1 <= param_2) {
    fVar1 = param_2;
  }
  if (fVar2 <= param_2) {
    fVar2 = param_2;
  }
  *(float *)in_RDX = fVar1;
  *(float *)((longlong)in_RDX + 4) = fVar2;
  return (TVector2<float>)in_RDX;
}

// ClampAxes @ 1417b8490

TVector2<double> * __thiscall
UE::Math::TVector2<double>::ClampAxes
          (TVector2<double> *this,TVector2<double> *__return_storage_ptr__,double param_1,
          double param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  TVector2<double>_u_0 TVar3;
  
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_2;
  auVar2 = minpd((undefined1  [16])this->field0_0x0,auVar2);
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = param_1;
  TVar3 = (TVector2<double>_u_0)maxpd(auVar2,auVar1);
  __return_storage_ptr__->field0_0x0 = TVar3;
  return __return_storage_ptr__;
}

// Component @ 1417ba500

float * __thiscall UE::Math::TVector2<float>::Component(TVector2<float> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  float *pfVar3;
  
  if (1 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                       ,0x4b0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pfVar3 = (float *)(*pcVar1)();
      return pfVar3;
    }
  }
  return (float *)((longlong)&this->field0_0x0 + (longlong)param_1 * 4);
}

// Component @ 1417ba550

float __thiscall UE::Math::TVector2<float>::Component(TVector2<float> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((uint)param_1 < 2) {
    return (this->field0_0x0).XY[param_1];
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidIndex(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                     ,0x4b9,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  return (this->field0_0x0).XY[param_1];
}

// Component @ 1417ba5c0

double * __thiscall UE::Math::TVector2<double>::Component(TVector2<double> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  double *pdVar3;
  
  if (1 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                       ,0x4b0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pdVar3 = (double *)(*pcVar1)();
      return pdVar3;
    }
  }
  return (double *)((longlong)&this->field0_0x0 + (longlong)param_1 * 8);
}

// Component @ 1417ba610

double __thiscall UE::Math::TVector2<double>::Component(TVector2<double> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  
  if ((uint)param_1 < 2) {
    return (this->field0_0x0).XY[param_1];
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidIndex(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                     ,0x4b9,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    dVar3 = (double)(*pcVar1)();
    return dVar3;
  }
  return (this->field0_0x0).XY[param_1];
}

// ComponentMax @ 1417ba940

TVector2<float> __thiscall
UE::Math::TVector2<float>::ComponentMax(TVector2<float> *this,TVector2<float> *param_1)

{
  float fVar1;
  float *in_R8;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = *in_R8;
  if (*in_R8 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar1 = (this->field0_0x0)._s_0.Y;
  fVar3 = in_R8[1];
  if (in_R8[1] <= fVar1) {
    fVar3 = fVar1;
  }
  (param_1->field0_0x0)._s_0.X = fVar2;
  (param_1->field0_0x0)._s_0.Y = fVar3;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// ComponentMax @ 1417ba970

TVector2<double> * __thiscall
UE::Math::TVector2<double>::ComponentMax
          (TVector2<double> *this,TVector2<double> *__return_storage_ptr__,TVector2<double> *param_1
          )

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (this->field0_0x0)._s_0.X;
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  dVar1 = (this->field0_0x0)._s_0.Y;
  if (dVar3 <= dVar1) {
    dVar3 = dVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  return __return_storage_ptr__;
}

// ComponentMin @ 1417baac0

TVector2<float> __thiscall
UE::Math::TVector2<float>::ComponentMin(TVector2<float> *this,TVector2<float> *param_1)

{
  float fVar1;
  float *in_R8;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = *in_R8;
  if (fVar1 <= *in_R8) {
    fVar2 = fVar1;
  }
  fVar1 = (this->field0_0x0)._s_0.Y;
  fVar3 = in_R8[1];
  if (fVar1 <= in_R8[1]) {
    fVar3 = fVar1;
  }
  (param_1->field0_0x0)._s_0.X = fVar2;
  (param_1->field0_0x0)._s_0.Y = fVar3;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// ComponentMin @ 1417baaf0

TVector2<double> * __thiscall
UE::Math::TVector2<double>::ComponentMin
          (TVector2<double> *this,TVector2<double> *__return_storage_ptr__,TVector2<double> *param_1
          )

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (this->field0_0x0)._s_0.X;
  if (dVar1 <= dVar2) {
    dVar2 = dVar1;
  }
  dVar1 = (this->field0_0x0)._s_0.Y;
  if (dVar1 <= dVar3) {
    dVar3 = dVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  return __return_storage_ptr__;
}

// ComponentwiseAllGreaterOrEqual @ 1417bac40

bool __thiscall
UE::Math::TVector2<float>::ComponentwiseAllGreaterOrEqual
          (TVector2<float> *this,TVector2<float> *param_1)

{
  float *pfVar1;
  float fVar2;
  
  fVar2 = (param_1->field0_0x0)._s_0.X;
  if ((fVar2 < (this->field0_0x0)._s_0.X || fVar2 == (this->field0_0x0)._s_0.X) &&
     (fVar2 = (param_1->field0_0x0)._s_0.Y, pfVar1 = &(this->field0_0x0)._s_0.Y,
     fVar2 < *pfVar1 || fVar2 == *pfVar1)) {
    return true;
  }
  return false;
}

// ComponentwiseAllGreaterOrEqual @ 1417bac60

bool __thiscall
UE::Math::TVector2<double>::ComponentwiseAllGreaterOrEqual
          (TVector2<double> *this,TVector2<double> *param_1)

{
  double *pdVar1;
  double dVar2;
  
  dVar2 = (param_1->field0_0x0)._s_0.X;
  if ((dVar2 < (this->field0_0x0)._s_0.X || dVar2 == (this->field0_0x0)._s_0.X) &&
     (dVar2 = (param_1->field0_0x0)._s_0.Y, pdVar1 = &(this->field0_0x0)._s_0.Y,
     dVar2 < *pdVar1 || dVar2 == *pdVar1)) {
    return true;
  }
  return false;
}

// ComponentwiseAllGreaterThan @ 1417bac90

bool __thiscall
UE::Math::TVector2<float>::ComponentwiseAllGreaterThan
          (TVector2<float> *this,TVector2<float> *param_1)

{
  if (((param_1->field0_0x0)._s_0.X < (this->field0_0x0)._s_0.X) &&
     ((param_1->field0_0x0)._s_0.Y < (this->field0_0x0)._s_0.Y)) {
    return true;
  }
  return false;
}

// ComponentwiseAllGreaterThan @ 1417bacb0

bool __thiscall
UE::Math::TVector2<double>::ComponentwiseAllGreaterThan
          (TVector2<double> *this,TVector2<double> *param_1)

{
  if (((param_1->field0_0x0)._s_0.X < (this->field0_0x0)._s_0.X) &&
     ((param_1->field0_0x0)._s_0.Y < (this->field0_0x0)._s_0.Y)) {
    return true;
  }
  return false;
}

// ComponentwiseAllLessOrEqual @ 1417bace0

bool __thiscall
UE::Math::TVector2<float>::ComponentwiseAllLessOrEqual
          (TVector2<float> *this,TVector2<float> *param_1)

{
  if (((this->field0_0x0)._s_0.X <= (param_1->field0_0x0)._s_0.X) &&
     ((this->field0_0x0)._s_0.Y <= (param_1->field0_0x0)._s_0.Y)) {
    return true;
  }
  return false;
}

// ComponentwiseAllLessOrEqual @ 1417bad00

bool __thiscall
UE::Math::TVector2<double>::ComponentwiseAllLessOrEqual
          (TVector2<double> *this,TVector2<double> *param_1)

{
  if (((this->field0_0x0)._s_0.X <= (param_1->field0_0x0)._s_0.X) &&
     ((this->field0_0x0)._s_0.Y <= (param_1->field0_0x0)._s_0.Y)) {
    return true;
  }
  return false;
}

// ComponentwiseAllLessThan @ 1417bad30

bool __thiscall
UE::Math::TVector2<float>::ComponentwiseAllLessThan(TVector2<float> *this,TVector2<float> *param_1)

{
  float *pfVar1;
  float fVar2;
  
  fVar2 = (param_1->field0_0x0)._s_0.X;
  if (((this->field0_0x0)._s_0.X <= fVar2 && fVar2 != (this->field0_0x0)._s_0.X) &&
     (fVar2 = (param_1->field0_0x0)._s_0.Y, pfVar1 = &(this->field0_0x0)._s_0.Y,
     *pfVar1 <= fVar2 && fVar2 != *pfVar1)) {
    return true;
  }
  return false;
}

// ComponentwiseAllLessThan @ 1417bad50

bool __thiscall
UE::Math::TVector2<double>::ComponentwiseAllLessThan
          (TVector2<double> *this,TVector2<double> *param_1)

{
  double *pdVar1;
  double dVar2;
  
  dVar2 = (param_1->field0_0x0)._s_0.X;
  if (((this->field0_0x0)._s_0.X <= dVar2 && dVar2 != (this->field0_0x0)._s_0.X) &&
     (dVar2 = (param_1->field0_0x0)._s_0.Y, pdVar1 = &(this->field0_0x0)._s_0.Y,
     *pdVar1 <= dVar2 && dVar2 != *pdVar1)) {
    return true;
  }
  return false;
}

// ContainsNaN @ 1417bce40

bool __thiscall UE::Math::TVector2<float>::ContainsNaN(TVector2<float> *this)

{
  int iVar1;
  
  iVar1 = _finite((double)(this->field0_0x0)._s_0.X);
  if (iVar1 != 0) {
    iVar1 = _finite((double)(this->field0_0x0)._s_0.Y);
    if (iVar1 != 0) {
      return false;
    }
  }
  return true;
}

// ContainsNaN @ 1417bce90

bool __thiscall UE::Math::TVector2<double>::ContainsNaN(TVector2<double> *this)

{
  int iVar1;
  
  iVar1 = _finite((this->field0_0x0)._s_0.X);
  if (iVar1 != 0) {
    iVar1 = _finite((this->field0_0x0)._s_0.Y);
    if (iVar1 != 0) {
      return false;
    }
  }
  return true;
}

// CrossProduct @ 1417c1220

float __cdecl
UE::Math::TVector2<float>::CrossProduct(TVector2<float> *param_1,TVector2<float> *param_2)

{
  return (param_2->field0_0x0)._s_0.Y * (param_1->field0_0x0)._s_0.X -
         (param_1->field0_0x0)._s_0.Y * (param_2->field0_0x0)._s_0.X;
}

// CrossProduct @ 1417c1240

double __cdecl
UE::Math::TVector2<double>::CrossProduct(TVector2<double> *param_1,TVector2<double> *param_2)

{
  return (param_2->field0_0x0)._s_0.Y * (param_1->field0_0x0)._s_0.X -
         (param_1->field0_0x0)._s_0.Y * (param_2->field0_0x0)._s_0.X;
}

// DiagnosticCheckNaN @ 1417c4410

void __thiscall UE::Math::TVector2<float>::DiagnosticCheckNaN(TVector2<float> *this)

{
  return;
}

// DiagnosticCheckNaN @ 1417c4420

void __thiscall UE::Math::TVector2<double>::DiagnosticCheckNaN(TVector2<double> *this)

{
  return;
}

// DistSquared @ 1417c48a0

float __cdecl
UE::Math::TVector2<float>::DistSquared(TVector2<float> *param_1,TVector2<float> *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  fVar2 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  return fVar1 * fVar1 + fVar2 * fVar2;
}

// DistSquared @ 1417c48d0

double __cdecl
UE::Math::TVector2<double>::DistSquared(TVector2<double> *param_1,TVector2<double> *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar2 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  return dVar1 * dVar1 + dVar2 * dVar2;
}

// Distance @ 1417c4a40

float __cdecl UE::Math::TVector2<float>::Distance(TVector2<float> *param_1,TVector2<float> *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  fVar2 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  return SQRT(fVar1 * fVar1 + fVar2 * fVar2);
}

// Distance @ 1417c4a70

double __cdecl
UE::Math::TVector2<double>::Distance(TVector2<double> *param_1,TVector2<double> *param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  
  dVar1 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  auVar2._0_8_ = dVar1 * dVar1 + dVar3 * dVar3;
  auVar2._8_8_ = 0;
  auVar2 = sqrtpd(auVar2,auVar2);
  return auVar2._0_8_;
}

// Dot @ 1417c4d30

float __thiscall UE::Math::TVector2<float>::Dot(TVector2<float> *this,TVector2<float> *param_1)

{
  return (param_1->field0_0x0)._s_0.Y * (this->field0_0x0)._s_0.Y +
         (param_1->field0_0x0)._s_0.X * (this->field0_0x0)._s_0.X;
}

// Dot @ 1417c4d50

double __thiscall UE::Math::TVector2<double>::Dot(TVector2<double> *this,TVector2<double> *param_1)

{
  return (param_1->field0_0x0)._s_0.Y * (this->field0_0x0)._s_0.Y +
         (param_1->field0_0x0)._s_0.X * (this->field0_0x0)._s_0.X;
}

// DotProduct @ 1417c4dd0

float __cdecl
UE::Math::TVector2<float>::DotProduct(TVector2<float> *param_1,TVector2<float> *param_2)

{
  return (param_1->field0_0x0)._s_0.Y * (param_2->field0_0x0)._s_0.Y +
         (param_1->field0_0x0)._s_0.X * (param_2->field0_0x0)._s_0.X;
}

// DotProduct @ 1417c4df0

double __cdecl
UE::Math::TVector2<double>::DotProduct(TVector2<double> *param_1,TVector2<double> *param_2)

{
  return (param_1->field0_0x0)._s_0.Y * (param_2->field0_0x0)._s_0.Y +
         (param_1->field0_0x0)._s_0.X * (param_2->field0_0x0)._s_0.X;
}

// Equals @ 1417c5d30

bool __thiscall
UE::Math::TVector2<float>::Equals(TVector2<float> *this,TVector2<float> *param_1,float param_2)

{
  if (((float)((uint)((this->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X) &
              __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2) &&
     ((float)((uint)((this->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2)) {
    return true;
  }
  return false;
}

// Equals @ 1417c5d70

bool __thiscall
UE::Math::TVector2<double>::Equals(TVector2<double> *this,TVector2<double> *param_1,double param_2)

{
  double dVar1;
  
  dVar1 = (this->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  if (((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_2)
     && (dVar1 = (this->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y,
        (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_2))
  {
    return true;
  }
  return false;
}

// GetAbs @ 1417d11b0

TVector2<float> __thiscall UE::Math::TVector2<float>::GetAbs(TVector2<float> *this)

{
  TVector2<float>_u_0 in_RDX;
  
  *(uint *)in_RDX = (uint)(this->field0_0x0)._s_0.X & __xmm_7fffffff7fffffff7fffffff7fffffff;
  *(uint *)((longlong)in_RDX + 4) =
       (uint)(this->field0_0x0)._s_0.Y & __xmm_7fffffff7fffffff7fffffff7fffffff;
  return (TVector2<float>)in_RDX;
}

// GetAbs @ 1417d11e0

TVector2<double> * __thiscall
UE::Math::TVector2<double>::GetAbs(TVector2<double> *this,TVector2<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->field0_0x0 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)*(undefined8 *)&this->field0_0x0 &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  uVar1 = *(undefined8 *)((longlong)&this->field0_0x0 + 8);
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  return __return_storage_ptr__;
}

// GetAbsMax @ 1417d1280

float __thiscall UE::Math::TVector2<float>::GetAbsMax(TVector2<float> *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)((uint)(this->field0_0x0)._s_0.Y & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar2 = (float)((uint)(this->field0_0x0)._s_0.X & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (fVar1 <= fVar2) {
    fVar1 = fVar2;
  }
  return fVar1;
}

// GetAbsMax @ 1417d12b0

double __thiscall UE::Math::TVector2<double>::GetAbsMax(TVector2<double> *this)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  uVar1 = *(undefined8 *)((longlong)&this->field0_0x0 + 8);
  dVar2 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar3 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->field0_0x0 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)*(undefined8 *)&this->field0_0x0 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (dVar2 <= dVar3) {
    dVar2 = dVar3;
  }
  return dVar2;
}

// GetClampedToMaxSize @ 1417d2030

TVector2<float> __thiscall
UE::Math::TVector2<float>::GetClampedToMaxSize(TVector2<float> *this,float param_1)

{
  float fVar1;
  float fVar2;
  TVector2<float>_u_0 in_RDX;
  float fVar3;
  float in_XMM2_Da;
  
  if (in_XMM2_Da < __real_38d1b717) {
    *(TVector2<float>_u_0 *)in_RDX = (TVector2<float>_u_0_s_0)ZeroVector.field0_0x0;
    return (TVector2<float>)in_RDX;
  }
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Y;
  fVar3 = fVar2 * fVar2 + fVar1 * fVar1;
  if (in_XMM2_Da * in_XMM2_Da < fVar3) {
    fVar3 = (__real_3f800000 / SQRT(fVar3)) * in_XMM2_Da;
    *(float *)((longlong)in_RDX + 4) = fVar3 * fVar2;
    *(float *)in_RDX = fVar3 * fVar1;
    return (TVector2<float>)in_RDX;
  }
  *(TVector2<float>_u_0 *)in_RDX = (TVector2<float>_u_0_s_0)this->field0_0x0;
  return (TVector2<float>)in_RDX;
}

// GetClampedToMaxSize @ 1417d20b0

TVector2<double> * __thiscall
UE::Math::TVector2<double>::GetClampedToMaxSize
          (TVector2<double> *this,TVector2<double> *__return_storage_ptr__,double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if (param_1 < __real_3f1a36e2e0000000) {
    (__return_storage_ptr__->field0_0x0)._s_0 = (TVector2<double>_u_0_s_0)ZeroVector;
    return __return_storage_ptr__;
  }
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar2 = (this->field0_0x0)._s_0.Y;
  dVar3 = dVar2 * dVar2 + dVar1 * dVar1;
  if (param_1 * param_1 < dVar3) {
    dVar3 = (__real_3ff0000000000000 / SQRT(dVar3)) * param_1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3 * dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar3 * dVar1;
    return __return_storage_ptr__;
  }
  dVar1 = (this->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetClampedToSize @ 1417d2460

TVector2<float> __thiscall
UE::Math::TVector2<float>::GetClampedToSize(TVector2<float> *this,float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  TVector2<float>_u_0 in_RDX;
  float in_XMM3_Da;
  float fVar3;
  undefined8 local_res8;
  
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Y;
  fVar3 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
  local_res8 = ZeroVector.field0_0x0;
  if (__real_322bcc77 < fVar3) {
    local_res8._4_4_ = (__real_3f800000 / fVar3) * fVar2;
    local_res8._0_4_ = (__real_3f800000 / fVar3) * fVar1;
  }
  if (in_XMM3_Da <= fVar3) {
    fVar3 = in_XMM3_Da;
  }
  if (fVar3 <= param_2) {
    fVar3 = param_2;
  }
  *(float *)((longlong)in_RDX + 4) = fVar3 * (float)local_res8._4_4_;
  *(float *)in_RDX = fVar3 * (float)(undefined4)local_res8;
  return (TVector2<float>)in_RDX;
}

// GetClampedToSize @ 1417d2500

TVector2<double> * __thiscall
UE::Math::TVector2<double>::GetClampedToSize
          (TVector2<double> *this,TVector2<double> *__return_storage_ptr__,double param_1,
          double param_2)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 in_XMM3_Qb;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  auVar6._8_8_ = in_XMM3_Qb;
  auVar6._0_8_ = param_2;
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar2 = (this->field0_0x0)._s_0.Y;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar2 * dVar2 + dVar1 * dVar1;
  auVar7 = sqrtpd(auVar6,auVar7);
  dVar5 = auVar7._0_8_;
  uVar4 = ZeroVector.field0_0x0._s_0.X;
  uVar3 = ZeroVector.field0_0x0._s_0.Y;
  if (__real_3e45798ee0000000 < dVar5) {
    uVar4 = (__real_3ff0000000000000 / dVar5) * dVar1;
    uVar3 = (__real_3ff0000000000000 / dVar5) * dVar2;
  }
  if (param_2 <= dVar5) {
    dVar5 = param_2;
  }
  if (dVar5 <= param_1) {
    dVar5 = param_1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5 * (double)uVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar5 * (double)uVar4;
  return __return_storage_ptr__;
}

// GetMax @ 1417d4590

float __thiscall UE::Math::TVector2<float>::GetMax(TVector2<float> *this)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (this->field0_0x0)._s_0.Y;
  fVar1 = (this->field0_0x0)._s_0.X;
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  return fVar2;
}

// GetMax @ 1417d45a0

double __thiscall UE::Math::TVector2<double>::GetMax(TVector2<double> *this)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->field0_0x0)._s_0.Y;
  dVar1 = (this->field0_0x0)._s_0.X;
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  return dVar2;
}

// GetMin @ 1417d4820

float __thiscall UE::Math::TVector2<float>::GetMin(TVector2<float> *this)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (this->field0_0x0)._s_0.Y;
  fVar1 = (this->field0_0x0)._s_0.X;
  if (fVar1 <= fVar2) {
    fVar2 = fVar1;
  }
  return fVar2;
}

// GetMin @ 1417d4830

double __thiscall UE::Math::TVector2<double>::GetMin(TVector2<double> *this)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->field0_0x0)._s_0.Y;
  dVar1 = (this->field0_0x0)._s_0.X;
  if (dVar1 <= dVar2) {
    dVar2 = dVar1;
  }
  return dVar2;
}

// GetRotated @ 1417d68c0

TVector2<float> __thiscall
UE::Math::TVector2<float>::GetRotated(TVector2<float> *this,float param_1)

{
  float fVar1;
  float fVar2;
  TVector2<float>_u_0 in_RDX;
  float in_XMM2_Da;
  float local_res8 [2];
  float local_res18 [4];
  
  FMath::SinCos<float>(local_res8,local_res18,in_XMM2_Da * __real_3c8efa35);
  fVar1 = (this->field0_0x0)._s_0.Y;
  fVar2 = (this->field0_0x0)._s_0.X;
  *(float *)in_RDX = fVar2 * local_res18[0] - fVar1 * local_res8[0];
  *(float *)((longlong)in_RDX + 4) = fVar2 * local_res8[0] + fVar1 * local_res18[0];
  return (TVector2<float>)in_RDX;
}

// GetRotated @ 1417d6940

TVector2<double> * __thiscall
UE::Math::TVector2<double>::GetRotated
          (TVector2<double> *this,TVector2<double> *__return_storage_ptr__,double param_1)

{
  double dVar1;
  double dVar2;
  double extraout_XMM0_Qa;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  
  __libm_sse2_sincos_();
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar2 = (this->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) * (this->field0_0x0)._s_0.X -
       extraout_XMM0_Qa * (this->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) * dVar2 + extraout_XMM0_Qa * dVar1;
  return __return_storage_ptr__;
}

// GetSafeNormal @ 1417d6c80

TVector2<float> __thiscall
UE::Math::TVector2<float>::GetSafeNormal(TVector2<float> *this,float param_1)

{
  float fVar1;
  float fVar2;
  TVector2<float>_u_0 in_RDX;
  float fVar3;
  float in_XMM2_Da;
  
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Y;
  fVar3 = fVar2 * fVar2 + fVar1 * fVar1;
  if (in_XMM2_Da < fVar3) {
    fVar3 = __real_3f800000 / SQRT(fVar3);
    *(float *)((longlong)in_RDX + 4) = fVar3 * fVar2;
    *(float *)in_RDX = fVar3 * fVar1;
    return (TVector2<float>)in_RDX;
  }
  *(undefined8 *)in_RDX = 0;
  return (TVector2<float>)in_RDX;
}

// GetSafeNormal @ 1417d6ce0

TVector2<double> * __thiscall
UE::Math::TVector2<double>::GetSafeNormal
          (TVector2<double> *this,TVector2<double> *__return_storage_ptr__,double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar2 = (this->field0_0x0)._s_0.Y;
  dVar3 = dVar2 * dVar2 + dVar1 * dVar1;
  if (param_1 < dVar3) {
    dVar3 = __real_3ff0000000000000 / SQRT(dVar3);
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1 * dVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 * dVar3;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  return __return_storage_ptr__;
}

// GetSignVector @ 1417d7b30

TVector2<float> __thiscall UE::Math::TVector2<float>::GetSignVector(TVector2<float> *this)

{
  float *pfVar1;
  TVector2<float>_u_0 in_RDX;
  undefined4 uVar2;
  undefined4 uVar3;
  
  pfVar1 = &(this->field0_0x0)._s_0.Y;
  uVar3 = __real_bf800000;
  if (0.0 < *pfVar1 || *pfVar1 == 0.0) {
    uVar3 = __real_3f800000;
  }
  uVar2 = __real_3f800000;
  if ((this->field0_0x0)._s_0.X <= 0.0 && (this->field0_0x0)._s_0.X != 0.0) {
    uVar2 = __real_bf800000;
  }
  *(undefined4 *)in_RDX = uVar2;
  *(undefined4 *)((longlong)in_RDX + 4) = uVar3;
  return (TVector2<float>)in_RDX;
}

// GetSignVector @ 1417d7b70

TVector2<double> * __thiscall
UE::Math::TVector2<double>::GetSignVector
          (TVector2<double> *this,TVector2<double> *__return_storage_ptr__)

{
  double *pdVar1;
  undefined4 uVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  
  pdVar1 = &(this->field0_0x0)._s_0.Y;
  uVar2 = (undefined4)__real_bff0000000000000;
  uVar4 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  if (0.0 < *pdVar1 || *pdVar1 == 0.0) {
    uVar2 = (undefined4)__real_3ff0000000000000;
    uVar4 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  }
  uVar3 = __real_3ff0000000000000;
  if ((this->field0_0x0)._s_0.X <= 0.0 && (this->field0_0x0)._s_0.X != 0.0) {
    uVar3 = __real_bff0000000000000;
  }
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = uVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)CONCAT44(uVar4,uVar2);
  return __return_storage_ptr__;
}

// InitFromString @ 1417da950

bool __thiscall UE::Math::TVector2<float>::InitFromString(TVector2<float> *this,FString *param_1)

{
  float *pfVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  
  pfVar1 = &(this->field0_0x0)._s_0.Y;
  *pfVar1 = 0.0;
  pwVar4 = L"";
  (this->field0_0x0)._s_0.X = 0.0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar2 = FParse::Value(pwVar3,L"X=",(float *)this);
  if (bVar2) {
    if ((param_1->Data).ArrayNum != 0) {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar2 = FParse::Value(pwVar4,L"Y=",pfVar1);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// InitFromString @ 1417da9e0

bool __thiscall UE::Math::TVector2<double>::InitFromString(TVector2<double> *this,FString *param_1)

{
  double *pdVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  
  pdVar1 = &(this->field0_0x0)._s_0.Y;
  *pdVar1 = 0.0;
  pwVar4 = L"";
  (this->field0_0x0)._s_0.X = 0.0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar2 = FParse::Value(pwVar3,L"X=",(double *)this);
  if (bVar2) {
    if ((param_1->Data).ArrayNum != 0) {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar2 = FParse::Value(pwVar4,L"Y=",pdVar1);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// IntPoint @ 1417dc750

TIntPoint<int> __thiscall UE::Math::TVector2<float>::IntPoint(TVector2<float> *this)

{
  float fVar1;
  float fVar2;
  TIntPoint<int>_u_0 in_RDX;
  
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Y;
  *(int *)in_RDX = (int)ROUND(fVar1 + fVar1 + __real_3f000000) >> 1;
  *(int *)((longlong)in_RDX + 4) = (int)ROUND(fVar2 + fVar2 + __real_3f000000) >> 1;
  return (TIntPoint<int>)in_RDX;
}

// IntPoint @ 1417dc790

TIntPoint<int> __thiscall UE::Math::TVector2<double>::IntPoint(TVector2<double> *this)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  bool bVar4;
  TIntPoint<int> TVar5;
  TIntPoint<int>_u_0 in_RDX;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar2 = (this->field0_0x0)._s_0.Y;
  lVar7 = (longlong)ROUND(dVar1 + dVar1 + __real_3fe0000000000000) >> 1;
  iVar6 = (int)lVar7;
  lVar9 = (longlong)ROUND(dVar2 + dVar2 + __real_3fe0000000000000) >> 1;
  if (lVar7 != iVar6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar3)();
      return (TIntPoint<int>)TVar5.field0_0x0;
    }
  }
  iVar8 = (int)lVar9;
  *(int *)in_RDX = iVar6;
  if (lVar9 != iVar8) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar3)();
      return (TIntPoint<int>)TVar5.field0_0x0;
    }
  }
  *(int *)((longlong)in_RDX + 4) = iVar8;
  return (TIntPoint<int>)in_RDX;
}

// IsNearlyZero @ 1417de230

bool __thiscall UE::Math::TVector2<float>::IsNearlyZero(TVector2<float> *this,float param_1)

{
  if (((float)((uint)(this->field0_0x0)._s_0.X & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_1)
     && ((float)((uint)(this->field0_0x0)._s_0.Y & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
         param_1)) {
    return true;
  }
  return false;
}

// IsNearlyZero @ 1417de260

bool __thiscall UE::Math::TVector2<double>::IsNearlyZero(TVector2<double> *this,double param_1)

{
  undefined8 uVar1;
  
  if (((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->field0_0x0 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)*(undefined8 *)&this->field0_0x0 &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_1) &&
     (uVar1 = *(undefined8 *)((longlong)&this->field0_0x0 + 8),
     (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_1)) {
    return true;
  }
  return false;
}

// IsValidIndex @ 1417deae0

bool __thiscall UE::Math::TVector2<float>::IsValidIndex(TVector2<float> *this,int param_1)

{
  return (uint)param_1 < 2;
}

// IsZero @ 1417dec60

bool __thiscall UE::Math::TVector2<float>::IsZero(TVector2<float> *this)

{
  if (((this->field0_0x0)._s_0.X == 0.0) && ((this->field0_0x0)._s_0.Y == 0.0)) {
    return true;
  }
  return false;
}

// IsZero @ 1417dec80

bool __thiscall UE::Math::TVector2<double>::IsZero(TVector2<double> *this)

{
  if (((this->field0_0x0)._s_0.X == 0.0) && ((this->field0_0x0)._s_0.Y == 0.0)) {
    return true;
  }
  return false;
}

// Length @ 1417dfa50

float __thiscall UE::Math::TVector2<float>::Length(TVector2<float> *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Y;
  return SQRT(fVar2 * fVar2 + fVar1 * fVar1);
}

// Length @ 1417dfa80

double __thiscall UE::Math::TVector2<double>::Length(TVector2<double> *this)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar2 = (this->field0_0x0)._s_0.Y;
  auVar3._0_8_ = dVar1 * dVar1;
  auVar3._8_8_ = 0;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar2 * dVar2 + auVar3._0_8_;
  auVar4 = sqrtpd(auVar3,auVar4);
  return auVar4._0_8_;
}

// Max @ 1417e41b0

TVector2<float> __cdecl
UE::Math::TVector2<float>::Max(TVector2<float> *param_1,TVector2<float> *param_2)

{
  float *in_R8;
  float fVar1;
  float fVar2;
  
  fVar1 = (param_2->field0_0x0)._s_0.X;
  fVar2 = (param_2->field0_0x0)._s_0.Y;
  if (fVar1 <= *in_R8) {
    fVar1 = *in_R8;
  }
  if (fVar2 <= in_R8[1]) {
    fVar2 = in_R8[1];
  }
  (param_1->field0_0x0)._s_0.X = fVar1;
  (param_1->field0_0x0)._s_0.Y = fVar2;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// Max @ 1417e41e0

TVector2<double> * __cdecl
UE::Math::TVector2<double>::Max
          (TVector2<double> *__return_storage_ptr__,TVector2<double> *param_1,
          TVector2<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.X;
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  if (dVar3 <= dVar1) {
    dVar3 = dVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  return __return_storage_ptr__;
}

// Min @ 1417e4580

TVector2<float> __cdecl
UE::Math::TVector2<float>::Min(TVector2<float> *param_1,TVector2<float> *param_2)

{
  float *in_R8;
  float fVar1;
  float fVar2;
  
  fVar1 = (param_2->field0_0x0)._s_0.X;
  fVar2 = (param_2->field0_0x0)._s_0.Y;
  if (*in_R8 <= fVar1) {
    fVar1 = *in_R8;
  }
  if (in_R8[1] <= fVar2) {
    fVar2 = in_R8[1];
  }
  (param_1->field0_0x0)._s_0.X = fVar1;
  (param_1->field0_0x0)._s_0.Y = fVar2;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// Min @ 1417e45b0

TVector2<double> * __cdecl
UE::Math::TVector2<double>::Min
          (TVector2<double> *__return_storage_ptr__,TVector2<double> *param_1,
          TVector2<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.X;
  if (dVar1 <= dVar2) {
    dVar2 = dVar1;
  }
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  if (dVar1 <= dVar3) {
    dVar3 = dVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  return __return_storage_ptr__;
}

// NetSerialize @ 1417e6700

bool __thiscall
UE::Math::TVector2<float>::NetSerialize
          (TVector2<float> *this,FArchive *param_1,UPackageMap *param_2,bool *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  FArchive *pFVar7;
  float local_res10 [2];
  float local_18 [4];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEngineNetworkCustomVersion::Guid);
  uVar5 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1);
  if (0x15 < uVar5) {
    iVar6 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1);
    if (iVar6 != 0x1a) {
      pFVar7 = ::operator<<(param_1,(float *)this);
      ::operator<<(pFVar7,&(this->field0_0x0)._s_0.Y);
      return true;
    }
  }
  if ((param_1->field_0x28 & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ar.IsLoading()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                       ,0x2c7,L"float -> double conversion applied outside of load!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res10);
    }
  }
  else {
    local_res10[0] = *(float *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_18);
    }
  }
  else {
    local_18[0] = *(float *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  (this->field0_0x0)._s_0.X = local_res10[0];
  (this->field0_0x0)._s_0.Y = local_18[0];
  return true;
}

// NetSerialize @ 1417e6850

bool __thiscall
UE::Math::TVector2<double>::NetSerialize
          (TVector2<double> *this,FArchive *param_1,UPackageMap *param_2,bool *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  FArchive *pFVar7;
  float local_res10 [2];
  float local_18 [4];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEngineNetworkCustomVersion::Guid);
  uVar5 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1);
  if (0x15 < uVar5) {
    iVar6 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1);
    if (iVar6 != 0x1a) {
      pFVar7 = ::operator<<(param_1,(double *)this);
      ::operator<<(pFVar7,&(this->field0_0x0)._s_0.Y);
      return true;
    }
  }
  if ((param_1->field_0x28 & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ar.IsLoading()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                       ,0x2c7,L"float -> double conversion applied outside of load!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res10);
    }
  }
  else {
    local_res10[0] = *(float *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_18);
    }
  }
  else {
    local_18[0] = *(float *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  (this->field0_0x0)._s_0.X = (double)local_res10[0];
  (this->field0_0x0)._s_0.Y = (double)local_18[0];
  return true;
}

// Normalize @ 1417e7560

bool __thiscall UE::Math::TVector2<float>::Normalize(TVector2<float> *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Y;
  fVar3 = fVar2 * fVar2 + fVar1 * fVar1;
  if (param_1 < fVar3) {
    fVar3 = __real_3f800000 / SQRT(fVar3);
    (this->field0_0x0)._s_0.Y = fVar3 * fVar2;
    (this->field0_0x0)._s_0.X = fVar3 * fVar1;
    return true;
  }
  this->field0_0x0 = (TVector2<float>_u_0)0x0;
  return false;
}

// Normalize @ 1417e75c0

bool __thiscall UE::Math::TVector2<double>::Normalize(TVector2<double> *this,double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar2 = (this->field0_0x0)._s_0.Y;
  dVar3 = dVar2 * dVar2 + dVar1 * dVar1;
  if (param_1 < dVar3) {
    dVar3 = __real_3ff0000000000000 / SQRT(dVar3);
    (this->field0_0x0)._s_0.X = dVar1 * dVar3;
    (this->field0_0x0)._s_0.Y = dVar2 * dVar3;
    return true;
  }
  (this->field0_0x0)._s_0.X = 0.0;
  (this->field0_0x0)._s_0.Y = 0.0;
  return false;
}

// One @ 1417e8090

TVector2<float> __cdecl UE::Math::TVector2<float>::One(void)

{
  TVector2<float>_u_0 in_RCX;
  
  *(TVector2<float>_u_0 *)in_RCX = (TVector2<float>_u_0_s_0)UnitVector.field0_0x0;
  return (TVector2<float>)in_RCX;
}

// One @ 1417e80b0

TVector2<double> * __cdecl UE::Math::TVector2<double>::One(TVector2<double> *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0 = (TVector2<double>_u_0_s_0)UnitVector;
  return __return_storage_ptr__;
}

// RoundToVector @ 1417f7f60

TVector2<float> __thiscall UE::Math::TVector2<float>::RoundToVector(TVector2<float> *this)

{
  TVector2<float>_u_0 in_RDX;
  undefined1 in_XMM0 [16];
  undefined1 auVar1 [16];
  float fVar2;
  
  auVar1 = roundps(in_XMM0,ZEXT416((uint)((this->field0_0x0)._s_0.X + __real_3f000000)),1);
  fVar2 = (this->field0_0x0)._s_0.Y + __real_3f000000;
  *(int *)in_RDX = auVar1._0_4_;
  auVar1 = roundps(auVar1,ZEXT416((uint)fVar2),1);
  *(int *)((longlong)in_RDX + 4) = auVar1._0_4_;
  return (TVector2<float>)in_RDX;
}

// RoundToVector @ 1417f7fa0

TVector2<double> * __thiscall
UE::Math::TVector2<double>::RoundToVector
          (TVector2<double> *this,TVector2<double> *__return_storage_ptr__)

{
  undefined1 auVar1 [16];
  undefined1 in_XMM0 [16];
  undefined1 auVar2 [16];
  double dVar3;
  
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (this->field0_0x0)._s_0.X + __real_3fe0000000000000;
  auVar2 = roundpd(in_XMM0,auVar2,1);
  dVar3 = (this->field0_0x0)._s_0.Y + __real_3fe0000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.X = auVar2._0_8_;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = dVar3;
  auVar2 = roundpd(auVar2,auVar1,1);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = auVar2._0_8_;
  return __return_storage_ptr__;
}

// Serialize @ 1417f8fe0

bool __thiscall UE::Math::TVector2<float>::Serialize(TVector2<float> *this,FArchive *param_1)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar1 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)this);
    }
  }
  else {
    (this->field0_0x0)._s_0.X = *pfVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &(this->field0_0x0)._s_0.Y;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if (pfVar2 + 1 <= (float *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return true;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    return true;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
  return true;
}

// Serialize @ 1417f90b0

bool __thiscall
UE::Math::TVector2<float>::Serialize(TVector2<float> *this,FStructuredArchiveSlot param_1)

{
  FArchive *pFVar1;
  float *pfVar2;
  float *pfVar3;
  
  pFVar1 = *(FArchive **)(*(longlong *)param_1 + 8);
  pfVar2 = (float *)**(undefined8 **)&pFVar1->field_0x8;
  if ((float *)(*(undefined8 **)&pFVar1->field_0x8)[1] < pfVar2 + 1) {
    if ((pFVar1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar1,(uint *)this);
    }
  }
  else {
    (this->field0_0x0)._s_0.X = *pfVar2;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
  }
  pfVar2 = &(this->field0_0x0)._s_0.Y;
  pFVar1 = *(FArchive **)(*(longlong *)param_1 + 8);
  pfVar3 = (float *)**(undefined8 **)&pFVar1->field_0x8;
  if (pfVar3 + 1 <= (float *)(*(undefined8 **)&pFVar1->field_0x8)[1]) {
    *pfVar2 = *pfVar3;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
    return true;
  }
  if ((pFVar1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,pfVar2,4);
    return true;
  }
  FArchive::SerializeByteOrderSwapped(pFVar1,(uint *)pfVar2);
  return true;
}

// Serialize @ 1417f9180

bool __thiscall UE::Math::TVector2<double>::Serialize(TVector2<double> *this,FArchive *param_1)

{
  Math::operator<<(param_1,this);
  return true;
}

// Serialize @ 1417f91a0

bool __thiscall
UE::Math::TVector2<double>::Serialize(TVector2<double> *this,FStructuredArchiveSlot param_1)

{
  Math::operator<<(param_1,this);
  return true;
}

// SerializeFromMismatchedTag @ 1417fad60

bool __thiscall
UE::Math::TVector2<float>::SerializeFromMismatchedTag
          (TVector2<float> *this,FName param_1,FArchive *param_2)

{
  uint uVar1;
  FName FVar2;
  TVector2<float>_u_0 TVar3;
  FName FVar4;
  FName FVar5;
  bool bVar6;
  FNameEntryId FVar7;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  uint local_res10 [2];
  TVector2<double>_u_0 local_18;
  
  FVar7 = FNameEntryId::FromValidEName((EName)local_res10);
  local_18._4_4_ = 0;
  local_18._0_4_ = *(uint *)CONCAT44(extraout_var,FVar7.Value);
  FVar7 = FNameEntryId::FromValidEName((EName)local_res10);
  uVar1 = *(uint *)CONCAT44(extraout_var_00,FVar7.Value);
  FVar7 = FNameEntryId::FromValidEName((EName)local_res10);
  local_res10[0] = *(uint *)CONCAT44(extraout_var_01,FVar7.Value);
  local_res10[1] = 0;
  FVar4.Number = 0;
  FVar4.ComparisonIndex.Value = uVar1;
  if ((param_1 != FVar4) &&
     ((FVar2.Number = 0, FVar2.ComparisonIndex.Value = local_res10[0], param_1 != FVar2 ||
      (0x3eb < (int)((ulonglong)*(undefined8 *)&param_2->field_0x40 >> 0x20))))) {
    FVar5.Number = local_18._4_4_;
    FVar5.ComparisonIndex.Value = local_18._0_4_;
    if ((param_1 != FVar5) && (param_1 != FVar2)) {
      return false;
    }
    Math::operator<<(param_2,(TVector2<double> *)&local_18._s_0);
    TVar3._s_0.Y = (float)local_18._s_0.Y;
    TVar3._s_0.X = (float)(double)CONCAT44(local_18._4_4_,local_18._0_4_);
    this->field0_0x0 = TVar3;
    return true;
  }
  bVar6 = Serialize(this,param_2);
  return bVar6;
}

// SerializeFromMismatchedTag @ 1417fae80

bool __thiscall
UE::Math::TVector2<double>::SerializeFromMismatchedTag
          (TVector2<double> *this,FName param_1,FArchive *param_2)

{
  uint uVar1;
  uint uVar2;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  bool bVar6;
  FNameEntryId FVar7;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  TVector2<float>_u_0 local_res10;
  
  FVar7 = FNameEntryId::FromValidEName((EName)&local_res10);
  uVar1 = *(uint *)CONCAT44(extraout_var,FVar7.Value);
  FVar7 = FNameEntryId::FromValidEName((EName)&local_res10);
  uVar2 = *(uint *)CONCAT44(extraout_var_00,FVar7.Value);
  FVar7 = FNameEntryId::FromValidEName((EName)&local_res10);
  local_res10._s_0.X = *(float *)CONCAT44(extraout_var_01,FVar7.Value);
  local_res10._s_0.Y = 0.0;
  FVar4.Number = 0;
  FVar4.ComparisonIndex.Value = uVar2;
  if ((param_1 != FVar4) &&
     (FVar3.Number = 0, FVar3.ComparisonIndex.Value = (uint)local_res10._s_0.X, param_1 != FVar3)) {
    FVar5.Number = 0;
    FVar5.ComparisonIndex.Value = uVar1;
    if (param_1 != FVar5) {
      return false;
    }
    bVar6 = TVector2<float>::Serialize((TVector2<float> *)&local_res10._s_0,param_2);
    (this->field0_0x0)._s_0.X = (double)local_res10._s_0.X;
    (this->field0_0x0)._s_0.Y = (double)local_res10._s_0.Y;
    return bVar6;
  }
  Math::operator<<(param_2,this);
  return true;
}

// Set @ 1417fc0e0

void __thiscall UE::Math::TVector2<float>::Set(TVector2<float> *this,float param_1,float param_2)

{
  (this->field0_0x0)._s_0.X = param_1;
  (this->field0_0x0)._s_0.Y = param_2;
  return;
}

// Set @ 1417fc0f0

void __thiscall
UE::Math::TVector2<double>::Set(TVector2<double> *this,double param_1,double param_2)

{
  (this->field0_0x0)._s_0.X = param_1;
  (this->field0_0x0)._s_0.Y = param_2;
  return;
}

// Size @ 1417feb70

float __thiscall UE::Math::TVector2<float>::Size(TVector2<float> *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Y;
  return SQRT(fVar2 * fVar2 + fVar1 * fVar1);
}

// Size @ 1417feba0

double __thiscall UE::Math::TVector2<double>::Size(TVector2<double> *this)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar2 = (this->field0_0x0)._s_0.Y;
  auVar3._0_8_ = dVar1 * dVar1;
  auVar3._8_8_ = 0;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar2 * dVar2 + auVar3._0_8_;
  auVar4 = sqrtpd(auVar3,auVar4);
  return auVar4._0_8_;
}

// SizeSquared @ 1417fedc0

float __thiscall UE::Math::TVector2<float>::SizeSquared(TVector2<float> *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Y;
  return fVar2 * fVar2 + fVar1 * fVar1;
}

// SizeSquared @ 1417fede0

double __thiscall UE::Math::TVector2<double>::SizeSquared(TVector2<double> *this)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar2 = (this->field0_0x0)._s_0.Y;
  return dVar2 * dVar2 + dVar1 * dVar1;
}

// SphericalToUnitCartesian @ 141800640

TVector<float> * __thiscall
UE::Math::TVector2<float>::SphericalToUnitCartesian
          (TVector2<float> *this,TVector<float> *__return_storage_ptr__)

{
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  
  __libm_sse2_sincosf4_();
  (__return_storage_ptr__->field0_0x0)._s_0.X = extraout_XMM0_Dd * extraout_XMM0_Da;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = extraout_XMM0_Dc * extraout_XMM0_Da;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = extraout_XMM0_Db;
  return __return_storage_ptr__;
}

// SphericalToUnitCartesian @ 141800690

TVector<double> * __thiscall
UE::Math::TVector2<double>::SphericalToUnitCartesian
          (TVector2<double> *this,TVector<double> *__return_storage_ptr__)

{
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qb;
  double extraout_XMM0_Qb_00;
  
  __libm_sse2_sincos_();
  __libm_sse2_sincos_();
  (__return_storage_ptr__->field0_0x0)._s_0.Z = extraout_XMM0_Qb;
  (__return_storage_ptr__->field0_0x0)._s_0.X = extraout_XMM0_Qb_00 * extraout_XMM0_Qa;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = extraout_XMM0_Qa_00 * extraout_XMM0_Qa;
  return __return_storage_ptr__;
}

// SquaredLength @ 141800d80

float __thiscall UE::Math::TVector2<float>::SquaredLength(TVector2<float> *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Y;
  return fVar2 * fVar2 + fVar1 * fVar1;
}

// SquaredLength @ 141800da0

double __thiscall UE::Math::TVector2<double>::SquaredLength(TVector2<double> *this)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar2 = (this->field0_0x0)._s_0.Y;
  return dVar2 * dVar2 + dVar1 * dVar1;
}

// ToDirectionAndLength @ 141803f80

void __thiscall
UE::Math::TVector2<float>::ToDirectionAndLength
          (TVector2<float> *this,TVector2<float> *param_1,float *param_2)

{
  float fVar1;
  TVector2<float>_u_0 TVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = __real_322bcc77;
  fVar4 = (this->field0_0x0)._s_0.X;
  fVar1 = (this->field0_0x0)._s_0.Y;
  fVar4 = SQRT(fVar1 * fVar1 + fVar4 * fVar4);
  *param_2 = fVar4;
  if (fVar3 < fVar4) {
    TVar2._s_0.Y = (__real_3f800000 / fVar4) * (this->field0_0x0)._s_0.Y;
    TVar2._s_0.X = (__real_3f800000 / fVar4) * (this->field0_0x0)._s_0.X;
    param_1->field0_0x0 = TVar2;
    return;
  }
  (param_1->field0_0x0)._s_0 = (TVector2<float>_u_0_s_0)ZeroVector;
  return;
}

// ToDirectionAndLength @ 141803ff0

void __thiscall
UE::Math::TVector2<double>::ToDirectionAndLength
          (TVector2<double> *this,TVector2<double> *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 in_XMM2 [16];
  undefined1 auVar4 [16];
  
  dVar2 = __real_3e45798ee0000000;
  dVar3 = (this->field0_0x0)._s_0.Y;
  dVar1 = (this->field0_0x0)._s_0.X;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar3 * dVar3 + dVar1 * dVar1;
  auVar4 = sqrtpd(in_XMM2,auVar4);
  dVar3 = auVar4._0_8_;
  *param_2 = dVar3;
  if (dVar2 < dVar3) {
    dVar1 = (this->field0_0x0)._s_0.Y;
    dVar3 = __real_3ff0000000000000 / dVar3;
    (param_1->field0_0x0)._s_0.X = dVar3 * (this->field0_0x0)._s_0.X;
    (param_1->field0_0x0)._s_0.Y = dVar3 * dVar1;
    return;
  }
  (param_1->field0_0x0)._s_0 = (TVector2<double>_u_0_s_0)ZeroVector;
  return;
}

// ToString @ 141806e40

FString * __thiscall
UE::Math::TVector2<float>::ToString(TVector2<float> *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"X=%3.3f Y=%3.3f");
  return __return_storage_ptr__;
}

// ToString @ 141806e80

FString * __thiscall
UE::Math::TVector2<double>::ToString(TVector2<double> *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"X=%3.3f Y=%3.3f");
  return __return_storage_ptr__;
}

// UnitX @ 14180b3f0

TVector2<float> __cdecl UE::Math::TVector2<float>::UnitX(void)

{
  TVector2<float>_u_0 in_RCX;
  
  *(undefined8 *)in_RCX = 0x3f800000;
  return (TVector2<float>)in_RCX;
}

// UnitX @ 14180b410

TVector2<double> * __cdecl
UE::Math::TVector2<double>::UnitX(TVector2<double> *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.X = 1.0;
  return __return_storage_ptr__;
}

// UnitY @ 14180b480

TVector2<float> __cdecl UE::Math::TVector2<float>::UnitY(void)

{
  TVector2<float>_u_0 in_RCX;
  
  *(undefined4 *)in_RCX = 0;
  *(undefined4 *)((longlong)in_RCX + 4) = 0x3f800000;
  return (TVector2<float>)in_RCX;
}

// UnitY @ 14180b4a0

TVector2<double> * __cdecl
UE::Math::TVector2<double>::UnitY(TVector2<double> *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 1.0;
  return __return_storage_ptr__;
}

// Zero @ 14180e360

TVector2<float> __cdecl UE::Math::TVector2<float>::Zero(void)

{
  TVector2<float>_u_0 in_RCX;
  
  *(TVector2<float>_u_0 *)in_RCX = (TVector2<float>_u_0_s_0)ZeroVector.field0_0x0;
  return (TVector2<float>)in_RCX;
}

// Zero @ 14180e380

TVector2<double> * __cdecl
UE::Math::TVector2<double>::Zero(TVector2<double> *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0 = (TVector2<double>_u_0_s_0)ZeroVector;
  return __return_storage_ptr__;
}

