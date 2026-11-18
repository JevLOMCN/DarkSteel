// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 260

// IsValidIndex @ 14149ebd0

bool __thiscall UE::Math::TVector<double>::IsValidIndex(TVector<double> *this,int param_1)

{
  return (uint)param_1 < 3;
}

// TVector<double><int> @ 141786d60

TVector<double> * __thiscall
UE::Math::TVector<double>::TVector<double><int>(TVector<double> *this,TIntVector3<int> *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = (param_1->field0_0x0)._s_0.Z;
  uVar1 = *(undefined8 *)&param_1->field0_0x0;
  (this->field0_0x0)._s_0.X = (double)(int)uVar1;
  (this->field0_0x0)._s_0.Y = (double)(int)((ulonglong)uVar1 >> 0x20);
  (this->field0_0x0)._s_0.Z = (double)iVar2;
  return this;
}

// TVector<float> @ 1417a0540

TVector<float> * __thiscall
UE::Math::TVector<float>::TVector<float>(TVector<float> *this,TVector4<float> *param_1)

{
  (this->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  (this->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  return this;
}

// TVector<float> @ 1417a0560

TVector<float> * __thiscall
UE::Math::TVector<float>::TVector<float>(TVector<float> *this,FLinearColor *param_1)

{
  (this->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.R;
  (this->field0_0x0)._s_0.Y = (param_1->field0_0x0)._s_0.G;
  (this->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.B;
  return this;
}

// TVector<float> @ 1417a0580

TVector<float> * __thiscall
UE::Math::TVector<float>::TVector<float>(TVector<float> *this,float param_1)

{
  (this->field0_0x0)._s_0.X = param_1;
  (this->field0_0x0)._s_0.Y = param_1;
  (this->field0_0x0)._s_0.Z = param_1;
  return this;
}

// TVector<float> @ 1417a05a0

TVector<float> * __thiscall
UE::Math::TVector<float>::TVector<float>
          (TVector<float> *this,float param_1,float param_2,float param_3)

{
  (this->field0_0x0)._s_0.X = param_1;
  (this->field0_0x0)._s_0.Y = param_2;
  (this->field0_0x0)._s_0.Z = param_3;
  return this;
}

// TVector<float> @ 1417a05c0

TVector<float> * __thiscall
UE::Math::TVector<float>::TVector<float>
          (TVector<float> *this,float param_1,TVectorConstInit param_2)

{
  (this->field0_0x0)._s_0.X = param_1;
  (this->field0_0x0)._s_0.Y = param_1;
  (this->field0_0x0)._s_0.Z = param_1;
  return this;
}

// TVector<float> @ 1417a05e0

TVector<float> * __thiscall
UE::Math::TVector<float>::TVector<float>(TVector<float> *this,TVector2<float> param_1,float param_2)

{
  float local_res10;
  float fStackX_14;
  
  local_res10 = param_1.field0_0x0._0_4_;
  fStackX_14 = param_1.field0_0x0._4_4_;
  (this->field0_0x0)._s_0.X = local_res10;
  (this->field0_0x0)._s_0.Y = fStackX_14;
  (this->field0_0x0)._s_0.Z = param_2;
  return this;
}

// TVector<float> @ 1417a0610

TVector<float> * __thiscall
UE::Math::TVector<float>::TVector<float>(TVector<float> *this,EForceInit param_1)

{
  *(undefined8 *)&this->field0_0x0 = 0;
  (this->field0_0x0)._s_0.Z = 0.0;
  return this;
}

// TVector<double> @ 1417a0630

TVector<double> * __thiscall
UE::Math::TVector<double>::TVector<double>(TVector<double> *this,TVector4<double> *param_1)

{
  (this->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  (this->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  return this;
}

// TVector<double> @ 1417a0650

TVector<double> * __thiscall
UE::Math::TVector<double>::TVector<double>(TVector<double> *this,FLinearColor *param_1)

{
  (this->field0_0x0)._s_0.X = (double)(param_1->field0_0x0)._s_0.R;
  (this->field0_0x0)._s_0.Y = (double)(param_1->field0_0x0)._s_0.G;
  (this->field0_0x0)._s_0.Z = (double)(param_1->field0_0x0)._s_0.B;
  return this;
}

// TVector<double> @ 1417a0680

TVector<double> * __thiscall
UE::Math::TVector<double>::TVector<double>(TVector<double> *this,double param_1)

{
  (this->field0_0x0)._s_0.Z = param_1;
  (this->field0_0x0)._s_0.X = param_1;
  (this->field0_0x0)._s_0.Y = param_1;
  return this;
}

// TVector<double> @ 1417a06a0

TVector<double> * __thiscall
UE::Math::TVector<double>::TVector<double>
          (TVector<double> *this,double param_1,double param_2,double param_3)

{
  (this->field0_0x0)._s_0.X = param_1;
  (this->field0_0x0)._s_0.Y = param_2;
  (this->field0_0x0)._s_0.Z = param_3;
  return this;
}

// TVector<double> @ 1417a06c0

TVector<double> * __thiscall
UE::Math::TVector<double>::TVector<double>
          (TVector<double> *this,double param_1,TVectorConstInit param_2)

{
  (this->field0_0x0)._s_0.Z = param_1;
  (this->field0_0x0)._s_0.X = param_1;
  (this->field0_0x0)._s_0.Y = param_1;
  return this;
}

// TVector<double> @ 1417a06e0

TVector<double> * __thiscall
UE::Math::TVector<double>::TVector<double>
          (TVector<double> *this,TVector2<double> *param_1,double param_2)

{
  (this->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  (this->field0_0x0)._s_0.Z = param_2;
  return this;
}

// operator== @ 1417a9fd0

bool __thiscall UE::Math::TVector<float>::operator==(TVector<float> *this,TVector<float> *param_1)

{
  if ((((param_1->field0_0x0)._s_0.X == (this->field0_0x0)._s_0.X) &&
      ((param_1->field0_0x0)._s_0.Y == (this->field0_0x0)._s_0.Y)) &&
     ((param_1->field0_0x0)._s_0.Z == (this->field0_0x0)._s_0.Z)) {
    return true;
  }
  return false;
}

// operator!= @ 1417aa420

bool __thiscall UE::Math::TVector<float>::operator!=(TVector<float> *this,TVector<float> *param_1)

{
  if ((((param_1->field0_0x0)._s_0.X == (this->field0_0x0)._s_0.X) &&
      ((param_1->field0_0x0)._s_0.Y == (this->field0_0x0)._s_0.Y)) &&
     ((param_1->field0_0x0)._s_0.Z == (this->field0_0x0)._s_0.Z)) {
    return false;
  }
  return true;
}

// operator[] @ 1417aa8d0

float * __thiscall UE::Math::TVector<float>::operator[](TVector<float> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  float *pfVar3;
  
  if (2 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pfVar3 = (float *)(*pcVar1)();
      return pfVar3;
    }
  }
  return (float *)((longlong)&this->field0_0x0 + (longlong)param_1 * 4);
}

// operator[] @ 1417aa920

float __thiscall UE::Math::TVector<float>::operator[](TVector<float> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((uint)param_1 < 3) {
    return (this->field0_0x0).XYZ[param_1];
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidIndex(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                     ,0x7ab,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  return (this->field0_0x0).XYZ[param_1];
}

// operator[] @ 1417aa990

double * __thiscall UE::Math::TVector<double>::operator[](TVector<double> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  double *pdVar3;
  
  if (2 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pdVar3 = (double *)(*pcVar1)();
      return pdVar3;
    }
  }
  return (double *)((longlong)&this->field0_0x0 + (longlong)param_1 * 8);
}

// operator[] @ 1417aa9e0

double __thiscall UE::Math::TVector<double>::operator[](TVector<double> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  
  if ((uint)param_1 < 3) {
    return (this->field0_0x0).XYZ[param_1];
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidIndex(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                     ,0x7ab,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    dVar3 = (double)(*pcVar1)();
    return dVar3;
  }
  return (this->field0_0x0).XYZ[param_1];
}

// operator* @ 1417ab700

TVector<float> * __thiscall
UE::Math::TVector<float>::operator*
          (TVector<float> *this,TVector<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (param_1->field0_0x0)._s_0.Y;
  fVar2 = (this->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (param_1->field0_0x0)._s_0.X * (this->field0_0x0)._s_0.X;
  fVar3 = (param_1->field0_0x0)._s_0.Z;
  fVar4 = (this->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar1 * fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar3 * fVar4;
  return __return_storage_ptr__;
}

// operator- @ 1417abb60

TVector<float> * __thiscall
UE::Math::TVector<float>::operator-
          (TVector<float> *this,TVector<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (this->field0_0x0)._s_0.Y;
  fVar2 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (this->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  fVar3 = (this->field0_0x0)._s_0.Z;
  fVar4 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar1 - fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar3 - fVar4;
  return __return_storage_ptr__;
}

// operator- @ 1417abba0

TVector<float> * __thiscall
UE::Math::TVector<float>::operator-(TVector<float> *this,TVector<float> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  
  uVar3 = __xmm_80000000800000008000000080000000;
  fVar1 = (this->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (float)((uint)(this->field0_0x0)._s_0.X ^ __xmm_80000000800000008000000080000000);
  fVar2 = (this->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)((uint)fVar1 ^ uVar3);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)((uint)fVar2 ^ uVar3);
  return __return_storage_ptr__;
}

// operator- @ 1417abbe0

TVector<double> * __thiscall
UE::Math::TVector<double>::operator-
          (TVector<double> *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  
  dVar4 = (this->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar1 = (this->field0_0x0)._s_0.Z;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = (this->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1 - dVar2;
  return __return_storage_ptr__;
}

// operator- @ 1417abc10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
UE::Math::TVector<double>::operator-(TVector<double> *this,TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = __xmm_80000000000000008000000000000000._4_4_;
  uVar2 = (uint)__xmm_80000000000000008000000000000000;
  uVar4 = *(uint *)((longlong)&this->field0_0x0 + 4) ^ __xmm_80000000000000008000000000000000._4_4_;
  uVar5 = *(uint *)((longlong)&this->field0_0x0 + 8) ^ _UNK_15066df78;
  uVar6 = *(uint *)((longlong)&this->field0_0x0 + 0xc) ^ _UNK_15066df7c;
  *(uint *)&__return_storage_ptr__->field0_0x0 =
       *(uint *)&this->field0_0x0 ^ (uint)__xmm_80000000000000008000000000000000;
  *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar4;
  *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar5;
  *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar6;
  uVar1 = *(undefined8 *)((longlong)&this->field0_0x0 + 0x10);
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar3,(uint)uVar1 ^ uVar2);
  return __return_storage_ptr__;
}

// operator+ @ 1417abfa0

TVector<float> * __thiscall
UE::Math::TVector<float>::operator+
          (TVector<float> *this,TVector<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (param_1->field0_0x0)._s_0.Y;
  fVar2 = (this->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (param_1->field0_0x0)._s_0.X + (this->field0_0x0)._s_0.X;
  fVar3 = (param_1->field0_0x0)._s_0.Z;
  fVar4 = (this->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar1 + fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar3 + fVar4;
  return __return_storage_ptr__;
}

// operator+ @ 1417abfe0

TVector<double> * __thiscall
UE::Math::TVector<double>::operator+
          (TVector<double> *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  
  dVar4 = (param_1->field0_0x0)._s_0.Y + (this->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar2 = (this->field0_0x0)._s_0.Z;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = (param_1->field0_0x0)._s_0.X + (this->field0_0x0)._s_0.X;
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1 + dVar2;
  return __return_storage_ptr__;
}

// operator/ @ 1417ac120

TVector<float> * __thiscall
UE::Math::TVector<float>::operator/
          (TVector<float> *this,TVector<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (this->field0_0x0)._s_0.Y;
  fVar2 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (this->field0_0x0)._s_0.X / (param_1->field0_0x0)._s_0.X;
  fVar3 = (this->field0_0x0)._s_0.Z;
  fVar4 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar1 / fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar3 / fVar4;
  return __return_storage_ptr__;
}

// operator^ @ 1417aefd0

TVector<float> * __thiscall
UE::Math::TVector<float>::operator^
          (TVector<float> *this,TVector<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = (param_1->field0_0x0)._s_0.Z;
  fVar2 = (this->field0_0x0)._s_0.X;
  fVar3 = (param_1->field0_0x0)._s_0.X;
  fVar4 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       fVar1 * (this->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y * (this->field0_0x0)._s_0.Z;
  fVar5 = (this->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar3 * (this->field0_0x0)._s_0.Z - fVar2 * fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2 * fVar4 - fVar3 * fVar5;
  return __return_storage_ptr__;
}

// operator^ @ 1417af030

TVector<double> * __thiscall
UE::Math::TVector<double>::operator^
          (TVector<double> *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (param_1->field0_0x0)._s_0.Z * (this->field0_0x0)._s_0.Y -
       (param_1->field0_0x0)._s_0.Y * (this->field0_0x0)._s_0.Z;
  dVar5 = (this->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 * (this->field0_0x0)._s_0.Z - dVar1 * dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1 * dVar4 - dVar2 * dVar5;
  return __return_storage_ptr__;
}

// operator| @ 1417af150

float __thiscall UE::Math::TVector<float>::operator|(TVector<float> *this,TVector<float> *param_1)

{
  return (param_1->field0_0x0)._s_0.Y * (this->field0_0x0)._s_0.Y +
         (param_1->field0_0x0)._s_0.X * (this->field0_0x0)._s_0.X +
         (param_1->field0_0x0)._s_0.Z * (this->field0_0x0)._s_0.Z;
}

// operator| @ 1417af180

double __thiscall
UE::Math::TVector<double>::operator|(TVector<double> *this,TVector<double> *param_1)

{
  return (param_1->field0_0x0)._s_0.Y * (this->field0_0x0)._s_0.Y +
         (param_1->field0_0x0)._s_0.X * (this->field0_0x0)._s_0.X +
         (param_1->field0_0x0)._s_0.Z * (this->field0_0x0)._s_0.Z;
}

// operator*= @ 1417af7d0

TVector<float> * __thiscall
UE::Math::TVector<float>::operator*=
          (TVector<float> *this,TVector<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  float fVar1;
  
  (this->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X * (this->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.Y = (param_1->field0_0x0)._s_0.Y * (this->field0_0x0)._s_0.Y;
  (this->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z * (this->field0_0x0)._s_0.Z;
  fVar1 = (this->field0_0x0)._s_0.Z;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&this->field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  return __return_storage_ptr__;
}

// operator+= @ 1417b0090

TVector<float> * __thiscall
UE::Math::TVector<float>::operator+=
          (TVector<float> *this,TVector<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  float fVar1;
  
  (this->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X + (this->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.Y = (param_1->field0_0x0)._s_0.Y + (this->field0_0x0)._s_0.Y;
  (this->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z + (this->field0_0x0)._s_0.Z;
  fVar1 = (this->field0_0x0)._s_0.Z;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&this->field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  return __return_storage_ptr__;
}

// operator+= @ 1417b00e0

TVector<double> * __thiscall
UE::Math::TVector<double>::operator+=
          (TVector<double> *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  (this->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X + (this->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.Y = (param_1->field0_0x0)._s_0.Y + (this->field0_0x0)._s_0.Y;
  (this->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z + (this->field0_0x0)._s_0.Z;
  dVar2 = (this->field0_0x0)._s_0.Y;
  dVar1 = (this->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// operator-= @ 1417b0340

TVector<float> * __thiscall
UE::Math::TVector<float>::operator-=
          (TVector<float> *this,TVector<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  float fVar1;
  
  (this->field0_0x0)._s_0.X = (this->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.Y = (this->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  (this->field0_0x0)._s_0.Z = (this->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  fVar1 = (this->field0_0x0)._s_0.Z;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&this->field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  return __return_storage_ptr__;
}

// operator-= @ 1417b0390

TVector<double> * __thiscall
UE::Math::TVector<double>::operator-=
          (TVector<double> *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  (this->field0_0x0)._s_0.X = (this->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.Y = (this->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  (this->field0_0x0)._s_0.Z = (this->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  dVar2 = (this->field0_0x0)._s_0.Y;
  dVar1 = (this->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// operator/= @ 1417b0540

TVector<float> * __thiscall
UE::Math::TVector<float>::operator/=
          (TVector<float> *this,TVector<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  float fVar1;
  
  (this->field0_0x0)._s_0.X = (this->field0_0x0)._s_0.X / (param_1->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.Y = (this->field0_0x0)._s_0.Y / (param_1->field0_0x0)._s_0.Y;
  (this->field0_0x0)._s_0.Z = (this->field0_0x0)._s_0.Z / (param_1->field0_0x0)._s_0.Z;
  fVar1 = (this->field0_0x0)._s_0.Z;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&this->field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  return __return_storage_ptr__;
}

// AddBounded @ 1417b2980

void __thiscall
UE::Math::TVector<float>::AddBounded(TVector<float> *this,TVector<float> *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (param_1->field0_0x0)._s_0.Y + (this->field0_0x0)._s_0.Y;
  fVar4 = (param_1->field0_0x0)._s_0.Z + (this->field0_0x0)._s_0.Z;
  fVar1 = (param_1->field0_0x0)._s_0.X + (this->field0_0x0)._s_0.X;
  fVar2 = (float)((uint)param_2 ^ __xmm_80000000800000008000000080000000);
  if (param_2 <= fVar3) {
    fVar3 = param_2;
  }
  if (param_2 <= fVar4) {
    fVar4 = param_2;
  }
  if (param_2 <= fVar1) {
    fVar1 = param_2;
  }
  if (fVar3 <= fVar2) {
    fVar3 = fVar2;
  }
  if (fVar4 <= fVar2) {
    fVar4 = fVar2;
  }
  if (fVar1 <= fVar2) {
    fVar1 = fVar2;
  }
  (this->field0_0x0)._s_0.Y = fVar3;
  (this->field0_0x0)._s_0.Z = fVar4;
  (this->field0_0x0)._s_0.X = fVar1;
  return;
}

// AddBounded @ 1417b29e0

void __thiscall
UE::Math::TVector<double>::AddBounded(TVector<double> *this,TVector<double> *param_1,double param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  
  dVar3 = (param_1->field0_0x0)._s_0.Z + (this->field0_0x0)._s_0.Z;
  dVar2 = (param_1->field0_0x0)._s_0.Y + (this->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.X + (this->field0_0x0)._s_0.X;
  uVar4 = SUB84(param_2,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar5 = (uint)((ulonglong)param_2 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  if (param_2 <= dVar3) {
    dVar3 = param_2;
  }
  if (param_2 <= dVar2) {
    dVar2 = param_2;
  }
  if (param_2 <= dVar1) {
    dVar1 = param_2;
  }
  if (dVar3 <= (double)CONCAT44(uVar5,uVar4)) {
    dVar3 = (double)CONCAT44(uVar5,uVar4);
  }
  if (dVar2 <= (double)CONCAT44(uVar5,uVar4)) {
    dVar2 = (double)CONCAT44(uVar5,uVar4);
  }
  if (dVar1 <= (double)CONCAT44(uVar5,uVar4)) {
    dVar1 = (double)CONCAT44(uVar5,uVar4);
  }
  (this->field0_0x0)._s_0.Z = dVar3;
  (this->field0_0x0)._s_0.Y = dVar2;
  (this->field0_0x0)._s_0.X = dVar1;
  return;
}

// AllComponentsEqual @ 1417b38e0

bool __thiscall UE::Math::TVector<float>::AllComponentsEqual(TVector<float> *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Y;
  if ((((float)((uint)(fVar1 - fVar2) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_1) &&
      (fVar3 = (this->field0_0x0)._s_0.Z,
      (float)((uint)(fVar1 - fVar3) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_1)) &&
     ((float)((uint)(fVar2 - fVar3) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_1)) {
    return true;
  }
  return false;
}

// AllComponentsEqual @ 1417b3930

bool __thiscall UE::Math::TVector<double>::AllComponentsEqual(TVector<double> *this,double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = (this->field0_0x0)._s_0.X;
  dVar2 = (this->field0_0x0)._s_0.Y;
  dVar1 = dVar3 - dVar2;
  if ((((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_1)
      && (dVar1 = (this->field0_0x0)._s_0.Z, dVar3 = dVar3 - dVar1,
         (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_1)
      ) && (dVar2 = dVar2 - dVar1,
           (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
           param_1)) {
    return true;
  }
  return false;
}

// BoundToBox @ 1417b6560

TVector<float> * __thiscall
UE::Math::TVector<float>::BoundToBox
          (TVector<float> *this,TVector<float> *__return_storage_ptr__,TVector<float> *param_1,
          TVector<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (param_2->field0_0x0)._s_0.X;
  fVar3 = (this->field0_0x0)._s_0.X;
  if (fVar3 <= fVar2) {
    fVar2 = fVar3;
  }
  fVar3 = (param_2->field0_0x0)._s_0.Y;
  fVar1 = (this->field0_0x0)._s_0.Y;
  if (fVar1 <= fVar3) {
    fVar3 = fVar1;
  }
  fVar1 = (param_1->field0_0x0)._s_0.X;
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar1 = (param_1->field0_0x0)._s_0.Y;
  if (fVar3 <= fVar1) {
    fVar3 = fVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar2;
  fVar2 = (param_2->field0_0x0)._s_0.Z;
  fVar1 = (this->field0_0x0)._s_0.Z;
  if (fVar1 <= fVar2) {
    fVar2 = fVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar3;
  fVar3 = (param_1->field0_0x0)._s_0.Z;
  if (fVar2 <= fVar3) {
    fVar2 = fVar3;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2;
  return __return_storage_ptr__;
}

// BoundToBox @ 1417b65b0

TVector<double> * __thiscall
UE::Math::TVector<double>::BoundToBox
          (TVector<double> *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1,
          TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar3 = (this->field0_0x0)._s_0.X;
  if (dVar3 <= dVar2) {
    dVar2 = dVar3;
  }
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (this->field0_0x0)._s_0.Y;
  if (dVar1 <= dVar3) {
    dVar3 = dVar1;
  }
  dVar1 = (param_1->field0_0x0)._s_0.X;
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  if (dVar3 <= dVar1) {
    dVar3 = dVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2;
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  dVar1 = (this->field0_0x0)._s_0.Z;
  if (dVar1 <= dVar2) {
    dVar2 = dVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  if (dVar2 <= dVar3) {
    dVar2 = dVar3;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// BoundToCube @ 1417b6600

TVector<float> * __thiscall
UE::Math::TVector<float>::BoundToCube
          (TVector<float> *this,TVector<float> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar3 = (float)((uint)param_1 ^ __xmm_80000000800000008000000080000000);
  if (param_1 <= fVar1) {
    fVar1 = param_1;
  }
  fVar2 = (this->field0_0x0)._s_0.Y;
  if (param_1 <= fVar2) {
    fVar2 = param_1;
  }
  if (fVar1 <= fVar3) {
    fVar1 = fVar3;
  }
  if (fVar2 <= fVar3) {
    fVar2 = fVar3;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar1;
  fVar1 = (this->field0_0x0)._s_0.Z;
  if (param_1 <= fVar1) {
    fVar1 = param_1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar2;
  if (fVar1 <= fVar3) {
    fVar1 = fVar3;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  return __return_storage_ptr__;
}

// BoundToCube @ 1417b6650

TVector<double> * __thiscall
UE::Math::TVector<double>::BoundToCube
          (TVector<double> *this,TVector<double> *__return_storage_ptr__,double param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  
  uVar5 = (uint)((ulonglong)param_1 >> 0x20);
  auVar3._8_4_ = SUB84(param_1,0);
  auVar3._0_8_ = param_1;
  auVar3._12_4_ = uVar5;
  auVar3 = minpd(*(undefined1 (*) [16])&this->field0_0x0,auVar3);
  uVar4 = SUB84(param_1,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar5 = uVar5 ^ __xmm_80000000000000008000000000000000._4_4_;
  auVar1._4_4_ = uVar5;
  auVar1._0_4_ = uVar4;
  auVar1._8_4_ = uVar4;
  auVar1._12_4_ = uVar5;
  auVar3 = maxpd(auVar3,auVar1);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar3;
  dVar2 = (this->field0_0x0)._s_0.Z;
  if (param_1 <= dVar2) {
    dVar2 = param_1;
  }
  if (dVar2 <= (double)CONCAT44(uVar5,uVar4)) {
    dVar2 = (double)CONCAT44(uVar5,uVar4);
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// BoxPushOut @ 1417b6690

float __cdecl UE::Math::TVector<float>::BoxPushOut(TVector<float> *param_1,TVector<float> *param_2)

{
  return (float)((uint)((param_1->field0_0x0)._s_0.Y * (param_2->field0_0x0)._s_0.Y) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) +
         (float)((uint)((param_1->field0_0x0)._s_0.X * (param_2->field0_0x0)._s_0.X) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) +
         (float)((uint)((param_1->field0_0x0)._s_0.Z * (param_2->field0_0x0)._s_0.Z) &
                __xmm_7fffffff7fffffff7fffffff7fffffff);
}

// BoxPushOut @ 1417b66d0

double __cdecl
UE::Math::TVector<double>::BoxPushOut(TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y * (param_2->field0_0x0)._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.X * (param_2->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Z * (param_2->field0_0x0)._s_0.Z;
  return (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
         (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
         (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
}

// Coincident @ 1417ba030

bool __cdecl
UE::Math::TVector<float>::Coincident(TVector<float> *param_1,TVector<float> *param_2,float param_3)

{
  return param_3 <=
         (param_1->field0_0x0)._s_0.Y * (param_2->field0_0x0)._s_0.Y +
         (param_1->field0_0x0)._s_0.X * (param_2->field0_0x0)._s_0.X +
         (param_1->field0_0x0)._s_0.Z * (param_2->field0_0x0)._s_0.Z;
}

// Coincident @ 1417ba070

bool __cdecl
UE::Math::TVector<double>::Coincident
          (TVector<double> *param_1,TVector<double> *param_2,double param_3)

{
  return param_3 <=
         (param_1->field0_0x0)._s_0.Y * (param_2->field0_0x0)._s_0.Y +
         (param_1->field0_0x0)._s_0.X * (param_2->field0_0x0)._s_0.X +
         (param_1->field0_0x0)._s_0.Z * (param_2->field0_0x0)._s_0.Z;
}

// Component @ 1417ba7c0

float * __thiscall UE::Math::TVector<float>::Component(TVector<float> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  float *pfVar3;
  
  if (2 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pfVar3 = (float *)(*pcVar1)();
      return pfVar3;
    }
  }
  return (float *)((longlong)&this->field0_0x0 + (longlong)param_1 * 4);
}

// Component @ 1417ba810

float __thiscall UE::Math::TVector<float>::Component(TVector<float> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((uint)param_1 < 3) {
    return (this->field0_0x0).XYZ[param_1];
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidIndex(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                     ,0x7ab,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  return (this->field0_0x0).XYZ[param_1];
}

// Component @ 1417ba880

double * __thiscall UE::Math::TVector<double>::Component(TVector<double> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  double *pdVar3;
  
  if (2 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pdVar3 = (double *)(*pcVar1)();
      return pdVar3;
    }
  }
  return (double *)((longlong)&this->field0_0x0 + (longlong)param_1 * 8);
}

// Component @ 1417ba8d0

double __thiscall UE::Math::TVector<double>::Component(TVector<double> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  
  if ((uint)param_1 < 3) {
    return (this->field0_0x0).XYZ[param_1];
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidIndex(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                     ,0x7ab,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    dVar3 = (double)(*pcVar1)();
    return dVar3;
  }
  return (this->field0_0x0).XYZ[param_1];
}

// ComponentMax @ 1417baa40

TVector<float> * __thiscall
UE::Math::TVector<float>::ComponentMax
          (TVector<float> *this,TVector<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (param_1->field0_0x0)._s_0.X;
  fVar3 = (this->field0_0x0)._s_0.X;
  if (fVar2 <= fVar3) {
    fVar2 = fVar3;
  }
  fVar3 = (param_1->field0_0x0)._s_0.Y;
  fVar1 = (this->field0_0x0)._s_0.Y;
  if (fVar3 <= fVar1) {
    fVar3 = fVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar2;
  fVar2 = (param_1->field0_0x0)._s_0.Z;
  fVar1 = (this->field0_0x0)._s_0.Z;
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2;
  return __return_storage_ptr__;
}

// ComponentMax @ 1417baa80

TVector<double> * __thiscall
UE::Math::TVector<double>::ComponentMax
          (TVector<double> *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (this->field0_0x0)._s_0.X;
  if (dVar2 <= dVar3) {
    dVar2 = dVar3;
  }
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (this->field0_0x0)._s_0.Y;
  if (dVar3 <= dVar1) {
    dVar3 = dVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar1 = (this->field0_0x0)._s_0.Z;
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// ComponentMin @ 1417babc0

TVector<float> * __thiscall
UE::Math::TVector<float>::ComponentMin
          (TVector<float> *this,TVector<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (param_1->field0_0x0)._s_0.X;
  fVar3 = (this->field0_0x0)._s_0.X;
  if (fVar3 <= fVar2) {
    fVar2 = fVar3;
  }
  fVar3 = (param_1->field0_0x0)._s_0.Y;
  fVar1 = (this->field0_0x0)._s_0.Y;
  if (fVar1 <= fVar3) {
    fVar3 = fVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar2;
  fVar2 = (param_1->field0_0x0)._s_0.Z;
  fVar1 = (this->field0_0x0)._s_0.Z;
  if (fVar1 <= fVar2) {
    fVar2 = fVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2;
  return __return_storage_ptr__;
}

// ComponentMin @ 1417bac00

TVector<double> * __thiscall
UE::Math::TVector<double>::ComponentMin
          (TVector<double> *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (this->field0_0x0)._s_0.X;
  if (dVar3 <= dVar2) {
    dVar2 = dVar3;
  }
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (this->field0_0x0)._s_0.Y;
  if (dVar1 <= dVar3) {
    dVar3 = dVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar1 = (this->field0_0x0)._s_0.Z;
  if (dVar1 <= dVar2) {
    dVar2 = dVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// ContainsNaN @ 1417bcfa0

bool __thiscall UE::Math::TVector<float>::ContainsNaN(TVector<float> *this)

{
  int iVar1;
  
  iVar1 = _finite((double)(this->field0_0x0)._s_0.X);
  if (iVar1 != 0) {
    iVar1 = _finite((double)(this->field0_0x0)._s_0.Y);
    if (iVar1 != 0) {
      iVar1 = _finite((double)(this->field0_0x0)._s_0.Z);
      if (iVar1 != 0) {
        return false;
      }
    }
  }
  return true;
}

// ContainsNaN @ 1417bd000

bool __thiscall UE::Math::TVector<double>::ContainsNaN(TVector<double> *this)

{
  int iVar1;
  
  iVar1 = _finite((this->field0_0x0)._s_0.X);
  if (iVar1 != 0) {
    iVar1 = _finite((this->field0_0x0)._s_0.Y);
    if (iVar1 != 0) {
      iVar1 = _finite((this->field0_0x0)._s_0.Z);
      if (iVar1 != 0) {
        return false;
      }
    }
  }
  return true;
}

// Coplanar @ 1417bd7b0

bool __cdecl
UE::Math::TVector<float>::Coplanar
          (TVector<float> *param_1,TVector<float> *param_2,TVector<float> *param_3,
          TVector<float> *param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (param_2->field0_0x0)._s_0.X;
  fVar2 = (param_2->field0_0x0)._s_0.Y;
  fVar3 = (param_2->field0_0x0)._s_0.Z;
  if (param_5 <=
      (float)((uint)(fVar2 * (param_4->field0_0x0)._s_0.Y + fVar1 * (param_4->field0_0x0)._s_0.X +
                    fVar3 * (param_4->field0_0x0)._s_0.Z) & __xmm_7fffffff7fffffff7fffffff7fffffff))
  {
    return (float)((uint)(((param_3->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y) * fVar2 +
                          ((param_3->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X) * fVar1 +
                         ((param_3->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z) * fVar3) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_3dcccccd;
  }
  return false;
}

// Coplanar @ 1417bd840

bool __cdecl
UE::Math::TVector<double>::Coplanar
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,double param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = (param_2->field0_0x0)._s_0.X;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  dVar3 = dVar1 * (param_4->field0_0x0)._s_0.Y + dVar4 * (param_4->field0_0x0)._s_0.X +
          dVar2 * (param_4->field0_0x0)._s_0.Z;
  if (param_5 <=
      (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar4 = ((param_3->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y) * dVar1 +
            ((param_3->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X) * dVar4 +
            ((param_3->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z) * dVar2;
    return (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
           __real_3fb99999a0000000;
  }
  return false;
}

// CosineAngle2D @ 1417bdc00

float __thiscall
UE::Math::TVector<float>::CosineAngle2D(TVector<float> *this,TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_28;
  
  fVar4 = (float)((ulonglong)*(undefined8 *)&this->field0_0x0 >> 0x20);
  local_28 = (float)*(undefined8 *)&this->field0_0x0;
  fVar1 = fVar4 * fVar4 + local_28 * local_28;
  if (__real_322bcc77 < fVar1) {
    fVar1 = __real_3f800000 / SQRT(fVar1);
    local_28 = local_28 * fVar1;
    fVar4 = fVar4 * fVar1;
  }
  fVar1 = (param_1->field0_0x0)._s_0.X;
  fVar3 = (param_1->field0_0x0)._s_0.Y;
  fVar2 = fVar3 * fVar3 + fVar1 * fVar1;
  if (__real_322bcc77 < fVar2) {
    fVar2 = __real_3f800000 / SQRT(fVar2);
    fVar3 = fVar2 * fVar3;
    fVar1 = fVar2 * fVar1;
  }
  return fVar4 * fVar3 + local_28 * fVar1;
}

// CosineAngle2D @ 1417bdcc0

double __thiscall
UE::Math::TVector<double>::CosineAngle2D(TVector<double> *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = (this->field0_0x0)._s_0.X;
  dVar4 = (this->field0_0x0)._s_0.Y;
  dVar2 = dVar4 * dVar4 + dVar5 * dVar5;
  if (__real_3e45798ee0000000 < dVar2) {
    dVar2 = __real_3ff0000000000000 / SQRT(dVar2);
    dVar5 = dVar5 * dVar2;
    dVar4 = dVar4 * dVar2;
  }
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = dVar1 * dVar1 + dVar2 * dVar2;
  if (__real_3e45798ee0000000 < dVar3) {
    dVar3 = __real_3ff0000000000000 / SQRT(dVar3);
    dVar2 = dVar2 * dVar3;
    dVar1 = dVar1 * dVar3;
  }
  return dVar4 * dVar1 + dVar5 * dVar2;
}

// CreateOrthonormalBasis @ 1417c0960

void __cdecl
UE::Math::TVector<float>::CreateOrthonormalBasis
          (TVector<float> *param_1,TVector<float> *param_2,TVector<float> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = (param_3->field0_0x0)._s_0.X;
  fVar4 = (param_1->field0_0x0)._s_0.X;
  fVar3 = (param_1->field0_0x0)._s_0.Y;
  fVar6 = (param_3->field0_0x0)._s_0.Y;
  fVar7 = (param_1->field0_0x0)._s_0.Z;
  fVar8 = (param_3->field0_0x0)._s_0.Z;
  fVar2 = (fVar3 * fVar6 + fVar4 * fVar5 + fVar7 * fVar8) /
          (fVar6 * fVar6 + fVar5 * fVar5 + fVar8 * fVar8);
  (param_1->field0_0x0)._s_0.X = fVar4 - fVar2 * fVar5;
  (param_1->field0_0x0)._s_0.Y = fVar3 - fVar2 * fVar6;
  (param_1->field0_0x0)._s_0.Z = fVar7 - fVar2 * fVar8;
  fVar5 = (param_3->field0_0x0)._s_0.Z;
  fVar4 = (param_3->field0_0x0)._s_0.X;
  fVar3 = (param_3->field0_0x0)._s_0.Y;
  fVar6 = (param_2->field0_0x0)._s_0.X;
  fVar7 = (param_2->field0_0x0)._s_0.Y;
  fVar8 = (param_2->field0_0x0)._s_0.Z;
  fVar2 = (fVar7 * fVar3 + fVar6 * fVar4 + fVar8 * fVar5) /
          (fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5);
  fVar6 = fVar6 - fVar2 * fVar4;
  fVar7 = fVar7 - fVar2 * fVar3;
  (param_2->field0_0x0)._s_0.X = fVar6;
  fVar8 = fVar8 - fVar2 * fVar5;
  (param_2->field0_0x0)._s_0.Y = fVar7;
  (param_2->field0_0x0)._s_0.Z = fVar8;
  fVar2 = __real_2edbe6fe;
  fVar5 = (param_1->field0_0x0)._s_0.X;
  fVar4 = (param_1->field0_0x0)._s_0.Y;
  fVar3 = (param_1->field0_0x0)._s_0.Z;
  if (fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3 < __real_2edbe6fe) {
    fVar3 = (param_3->field0_0x0)._s_0.Y;
    fVar4 = (param_3->field0_0x0)._s_0.Z;
    fVar1 = (param_3->field0_0x0)._s_0.X;
    fVar5 = fVar4 * fVar7 - fVar3 * fVar8;
    fVar4 = fVar1 * fVar8 - fVar4 * fVar6;
    (param_1->field0_0x0)._s_0.X = fVar5;
    fVar3 = fVar3 * fVar6 - fVar1 * fVar7;
    (param_1->field0_0x0)._s_0.Y = fVar4;
    (param_1->field0_0x0)._s_0.Z = fVar3;
  }
  fVar6 = (param_2->field0_0x0)._s_0.X;
  fVar7 = (param_2->field0_0x0)._s_0.Y;
  fVar8 = (param_2->field0_0x0)._s_0.Z;
  if (fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8 < fVar2) {
    fVar6 = (param_3->field0_0x0)._s_0.Y;
    fVar7 = (param_3->field0_0x0)._s_0.Z;
    fVar8 = (param_3->field0_0x0)._s_0.X;
    (param_2->field0_0x0)._s_0.X = fVar7 * fVar4 - fVar6 * fVar3;
    (param_2->field0_0x0)._s_0.Y = fVar8 * fVar3 - fVar7 * fVar5;
    (param_2->field0_0x0)._s_0.Z = fVar6 * fVar5 - fVar8 * fVar4;
  }
  fVar7 = __real_3f800000;
  fVar6 = __real_322bcc77;
  fVar5 = (param_1->field0_0x0)._s_0.X;
  fVar4 = (param_1->field0_0x0)._s_0.Y;
  fVar3 = (param_1->field0_0x0)._s_0.Z;
  fVar8 = fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3;
  if (__real_322bcc77 < fVar8) {
    fVar8 = __real_3f800000 / SQRT(fVar8);
    (param_1->field0_0x0)._s_0.X = fVar8 * fVar5;
    (param_1->field0_0x0)._s_0.Y = fVar8 * fVar4;
    (param_1->field0_0x0)._s_0.Z = fVar8 * fVar3;
  }
  fVar5 = (param_2->field0_0x0)._s_0.X;
  fVar4 = (param_2->field0_0x0)._s_0.Y;
  fVar3 = (param_2->field0_0x0)._s_0.Z;
  fVar8 = fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3;
  if (fVar6 < fVar8) {
    fVar8 = fVar7 / SQRT(fVar8);
    (param_2->field0_0x0)._s_0.X = fVar8 * fVar5;
    (param_2->field0_0x0)._s_0.Y = fVar8 * fVar4;
    (param_2->field0_0x0)._s_0.Z = fVar8 * fVar3;
  }
  fVar5 = (param_3->field0_0x0)._s_0.X;
  fVar4 = (param_3->field0_0x0)._s_0.Y;
  fVar3 = (param_3->field0_0x0)._s_0.Z;
  fVar8 = fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3;
  if (fVar6 < fVar8) {
    fVar7 = fVar7 / SQRT(fVar8);
    (param_3->field0_0x0)._s_0.X = fVar7 * fVar5;
    (param_3->field0_0x0)._s_0.Y = fVar7 * fVar4;
    (param_3->field0_0x0)._s_0.Z = fVar7 * fVar3;
  }
  return;
}

// CreateOrthonormalBasis @ 1417c0d20

void __cdecl
UE::Math::TVector<double>::CreateOrthonormalBasis
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar1 = (param_3->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar4 = (param_3->field0_0x0)._s_0.Y;
  dVar5 = (param_1->field0_0x0)._s_0.Z;
  dVar6 = (param_3->field0_0x0)._s_0.Z;
  dVar8 = (dVar3 * dVar4 + dVar2 * dVar1 + dVar5 * dVar6) /
          (dVar4 * dVar4 + dVar1 * dVar1 + dVar6 * dVar6);
  (param_1->field0_0x0)._s_0.X = dVar2 - dVar8 * dVar1;
  (param_1->field0_0x0)._s_0.Y = dVar3 - dVar8 * dVar4;
  (param_1->field0_0x0)._s_0.Z = dVar5 - dVar8 * dVar6;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  dVar2 = (param_3->field0_0x0)._s_0.X;
  dVar3 = (param_3->field0_0x0)._s_0.Y;
  dVar4 = (param_2->field0_0x0)._s_0.X;
  dVar5 = (param_2->field0_0x0)._s_0.Y;
  dVar6 = (param_2->field0_0x0)._s_0.Z;
  dVar8 = (dVar5 * dVar3 + dVar4 * dVar2 + dVar6 * dVar1) /
          (dVar3 * dVar3 + dVar2 * dVar2 + dVar1 * dVar1);
  dVar4 = dVar4 - dVar8 * dVar2;
  (param_2->field0_0x0)._s_0.X = dVar4;
  dVar6 = dVar6 - dVar8 * dVar1;
  dVar5 = dVar5 - dVar8 * dVar3;
  (param_2->field0_0x0)._s_0.Z = dVar6;
  (param_2->field0_0x0)._s_0.Y = dVar5;
  dVar8 = __real_3ddb7cdfc28ae400;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar3 = (param_1->field0_0x0)._s_0.X;
  if (dVar1 * dVar1 + dVar3 * dVar3 + dVar2 * dVar2 < __real_3ddb7cdfc28ae400) {
    dVar2 = (param_3->field0_0x0)._s_0.Y;
    dVar1 = (param_3->field0_0x0)._s_0.Z;
    dVar7 = (param_3->field0_0x0)._s_0.X;
    dVar3 = dVar1 * dVar5 - dVar2 * dVar6;
    dVar1 = dVar7 * dVar6 - dVar1 * dVar4;
    (param_1->field0_0x0)._s_0.X = dVar3;
    dVar2 = dVar2 * dVar4 - dVar7 * dVar5;
    (param_1->field0_0x0)._s_0.Y = dVar1;
    (param_1->field0_0x0)._s_0.Z = dVar2;
  }
  dVar4 = (param_2->field0_0x0)._s_0.X;
  dVar5 = (param_2->field0_0x0)._s_0.Y;
  dVar6 = (param_2->field0_0x0)._s_0.Z;
  if (dVar5 * dVar5 + dVar4 * dVar4 + dVar6 * dVar6 < dVar8) {
    dVar4 = (param_3->field0_0x0)._s_0.Y;
    dVar5 = (param_3->field0_0x0)._s_0.Z;
    dVar6 = (param_3->field0_0x0)._s_0.X;
    (param_2->field0_0x0)._s_0.X = dVar5 * dVar1 - dVar4 * dVar2;
    (param_2->field0_0x0)._s_0.Y = dVar6 * dVar2 - dVar5 * dVar3;
    (param_2->field0_0x0)._s_0.Z = dVar4 * dVar3 - dVar6 * dVar1;
  }
  dVar1 = __real_3e45798ee0000000;
  Normalize(param_1,__real_3e45798ee0000000);
  Normalize(param_2,dVar1);
  Normalize(param_3,dVar1);
  return;
}

// Cross @ 1417c1160

TVector<float> * __thiscall
UE::Math::TVector<float>::Cross
          (TVector<float> *this,TVector<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = (param_1->field0_0x0)._s_0.Z;
  fVar2 = (this->field0_0x0)._s_0.X;
  fVar3 = (param_1->field0_0x0)._s_0.X;
  fVar4 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       fVar1 * (this->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y * (this->field0_0x0)._s_0.Z;
  fVar5 = (this->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar3 * (this->field0_0x0)._s_0.Z - fVar2 * fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2 * fVar4 - fVar3 * fVar5;
  return __return_storage_ptr__;
}

// Cross @ 1417c11c0

TVector<double> * __thiscall
UE::Math::TVector<double>::Cross
          (TVector<double> *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (param_1->field0_0x0)._s_0.Z * (this->field0_0x0)._s_0.Y -
       (param_1->field0_0x0)._s_0.Y * (this->field0_0x0)._s_0.Z;
  dVar5 = (this->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 * (this->field0_0x0)._s_0.Z - dVar1 * dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1 * dVar4 - dVar2 * dVar5;
  return __return_storage_ptr__;
}

// CrossProduct @ 1417c1260

TVector<float> * __cdecl
UE::Math::TVector<float>::CrossProduct
          (TVector<float> *__return_storage_ptr__,TVector<float> *param_1,TVector<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = (param_1->field0_0x0)._s_0.Z;
  fVar2 = (param_1->field0_0x0)._s_0.X;
  fVar3 = (param_2->field0_0x0)._s_0.X;
  fVar4 = (param_2->field0_0x0)._s_0.Z;
  fVar5 = (param_2->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (param_1->field0_0x0)._s_0.Y * (param_2->field0_0x0)._s_0.Z -
       fVar1 * (param_2->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2 * fVar5 - fVar3 * (param_1->field0_0x0)._s_0.Y
  ;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar3 * fVar1 - fVar2 * fVar4;
  return __return_storage_ptr__;
}

// CrossProduct @ 1417c12d0

TVector<double> * __cdecl
UE::Math::TVector<double>::CrossProduct
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          )

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.Z;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (param_1->field0_0x0)._s_0.Y * (param_2->field0_0x0)._s_0.Z -
       (param_1->field0_0x0)._s_0.Z * (param_2->field0_0x0)._s_0.Y;
  dVar5 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 * (param_1->field0_0x0)._s_0.Z - dVar1 * dVar3
  ;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1 * dVar4 - dVar2 * dVar5;
  return __return_storage_ptr__;
}

// DegreesToRadians @ 1417c3150

TVector<float> * __cdecl
UE::Math::TVector<float>::DegreesToRadians
          (TVector<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = __real_3c8efa35;
  fVar3 = (param_1->field0_0x0)._s_0.Z * __real_3c8efa35;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X * __real_3c8efa35;
  fVar1 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar1 * fVar2;
  return __return_storage_ptr__;
}

// DegreesToRadians @ 1417c3190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __cdecl
UE::Math::TVector<double>::DegreesToRadians
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = _UNK_150689668 * (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z * __real_3f91df46a0000000;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       ___xmm_3f91df46a00000003f91df46a0000000 * (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// DiagnosticCheckNaN @ 1417c4450

void __thiscall UE::Math::TVector<float>::DiagnosticCheckNaN(TVector<float> *this,wchar_t *param_1)

{
  return;
}

// DiagnosticCheckNaN @ 1417c4460

void __thiscall UE::Math::TVector<float>::DiagnosticCheckNaN(TVector<float> *this)

{
  return;
}

// DiagnosticCheckNaN @ 1417c4470

void __thiscall
UE::Math::TVector<double>::DiagnosticCheckNaN(TVector<double> *this,wchar_t *param_1)

{
  return;
}

// DiagnosticCheckNaN @ 1417c4480

void __thiscall UE::Math::TVector<double>::DiagnosticCheckNaN(TVector<double> *this)

{
  return;
}

// Dist2D @ 1417c4760

float __cdecl UE::Math::TVector<float>::Dist2D(TVector<float> *param_1,TVector<float> *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  fVar2 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  return SQRT(fVar1 * fVar1 + fVar2 * fVar2);
}

// Dist2D @ 1417c4790

double __cdecl UE::Math::TVector<double>::Dist2D(TVector<double> *param_1,TVector<double> *param_2)

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

// Dist @ 1417c47c0

float __cdecl UE::Math::TVector<float>::Dist(TVector<float> *param_1,TVector<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  fVar3 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  fVar2 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  return SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
}

// Dist @ 1417c4800

double __cdecl UE::Math::TVector<double>::Dist(TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  
  dVar5 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  dVar4 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  auVar2._0_8_ = dVar1 * dVar1;
  auVar2._8_8_ = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar5 * dVar5 + dVar4 * dVar4 + auVar2._0_8_;
  auVar3 = sqrtpd(auVar2,auVar3);
  return auVar3._0_8_;
}

// DistSquared2D @ 1417c4840

float __cdecl
UE::Math::TVector<float>::DistSquared2D(TVector<float> *param_1,TVector<float> *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  fVar2 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  return fVar1 * fVar1 + fVar2 * fVar2;
}

// DistSquared2D @ 1417c4870

double __cdecl
UE::Math::TVector<double>::DistSquared2D(TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar2 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  return dVar1 * dVar1 + dVar2 * dVar2;
}

// DistSquared @ 1417c4900

float __cdecl UE::Math::TVector<float>::DistSquared(TVector<float> *param_1,TVector<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  fVar3 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  fVar2 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  return fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2;
}

// DistSquared @ 1417c4940

double __cdecl
UE::Math::TVector<double>::DistSquared(TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  return dVar1 * dVar1 + dVar3 * dVar3 + dVar2 * dVar2;
}

// DistSquaredXY @ 1417c4980

float __cdecl
UE::Math::TVector<float>::DistSquaredXY(TVector<float> *param_1,TVector<float> *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  fVar2 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  return fVar1 * fVar1 + fVar2 * fVar2;
}

// DistSquaredXY @ 1417c49b0

double __cdecl
UE::Math::TVector<double>::DistSquaredXY(TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar2 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  return dVar1 * dVar1 + dVar2 * dVar2;
}

// DistXY @ 1417c49e0

float __cdecl UE::Math::TVector<float>::DistXY(TVector<float> *param_1,TVector<float> *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  fVar2 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  return SQRT(fVar1 * fVar1 + fVar2 * fVar2);
}

// DistXY @ 1417c4a10

double __cdecl UE::Math::TVector<double>::DistXY(TVector<double> *param_1,TVector<double> *param_2)

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

// Distance @ 1417c4aa0

float __cdecl UE::Math::TVector<float>::Distance(TVector<float> *param_1,TVector<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  fVar3 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  fVar2 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  return SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
}

// Distance @ 1417c4ae0

double __cdecl
UE::Math::TVector<double>::Distance(TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  
  dVar5 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  dVar4 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  auVar2._0_8_ = dVar1 * dVar1;
  auVar2._8_8_ = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar5 * dVar5 + dVar4 * dVar4 + auVar2._0_8_;
  auVar3 = sqrtpd(auVar2,auVar3);
  return auVar3._0_8_;
}

// Dot @ 1417c4d70

float __thiscall UE::Math::TVector<float>::Dot(TVector<float> *this,TVector<float> *param_1)

{
  return (param_1->field0_0x0)._s_0.Y * (this->field0_0x0)._s_0.Y +
         (param_1->field0_0x0)._s_0.X * (this->field0_0x0)._s_0.X +
         (param_1->field0_0x0)._s_0.Z * (this->field0_0x0)._s_0.Z;
}

// Dot @ 1417c4da0

double __thiscall UE::Math::TVector<double>::Dot(TVector<double> *this,TVector<double> *param_1)

{
  return (param_1->field0_0x0)._s_0.Y * (this->field0_0x0)._s_0.Y +
         (param_1->field0_0x0)._s_0.X * (this->field0_0x0)._s_0.X +
         (param_1->field0_0x0)._s_0.Z * (this->field0_0x0)._s_0.Z;
}

// DotProduct @ 1417c4e10

float __cdecl UE::Math::TVector<float>::DotProduct(TVector<float> *param_1,TVector<float> *param_2)

{
  return (param_1->field0_0x0)._s_0.Y * (param_2->field0_0x0)._s_0.Y +
         (param_1->field0_0x0)._s_0.X * (param_2->field0_0x0)._s_0.X +
         (param_1->field0_0x0)._s_0.Z * (param_2->field0_0x0)._s_0.Z;
}

// DotProduct @ 1417c4e40

double __cdecl
UE::Math::TVector<double>::DotProduct(TVector<double> *param_1,TVector<double> *param_2)

{
  return (param_1->field0_0x0)._s_0.Y * (param_2->field0_0x0)._s_0.Y +
         (param_1->field0_0x0)._s_0.X * (param_2->field0_0x0)._s_0.X +
         (param_1->field0_0x0)._s_0.Z * (param_2->field0_0x0)._s_0.Z;
}

// Equals @ 1417c5e70

bool __thiscall
UE::Math::TVector<float>::Equals(TVector<float> *this,TVector<float> *param_1,float param_2)

{
  if ((((float)((uint)((this->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2) &&
      ((float)((uint)((this->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y) &
              __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2)) &&
     ((float)((uint)((this->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2)) {
    return true;
  }
  return false;
}

// EvaluateBezier @ 1417c88c0

float __cdecl
UE::Math::TVector<float>::EvaluateBezier
          (TVector<float> *param_1,int param_2,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_3)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
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
  undefined8 local_d8;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  
  if ((param_1 == (TVector<float> *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ControlPoints",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x895,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    fVar7 = (float)(*pcVar3)();
    return fVar7;
  }
  if ((param_2 < 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumPoints >= 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x896,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    fVar7 = (float)(*pcVar3)();
    return fVar7;
  }
  fVar7 = param_1[1].field0_0x0._s_0.Y;
  fVar8 = param_1[1].field0_0x0._s_0.X;
  fVar9 = param_1[2].field0_0x0._s_0.X;
  fVar10 = param_1[2].field0_0x0._s_0.Y;
  fVar11 = param_1[1].field0_0x0._s_0.Z;
  fVar15 = (param_1->field0_0x0)._s_0.Y;
  fVar16 = param_1[2].field0_0x0._s_0.Z;
  fVar19 = (param_1->field0_0x0)._s_0.X;
  fVar1 = (param_1->field0_0x0)._s_0.Z;
  local_d0 = (param_1->field0_0x0)._s_0.Z;
  fVar17 = __real_3f800000 / (float)(param_2 + -1);
  fVar18 = ((fVar9 - (fVar8 + fVar8)) + fVar19) * __real_40400000;
  fVar20 = ((fVar10 - (fVar7 + fVar7)) + fVar15) * __real_40400000;
  fVar14 = ((param_1[3].field0_0x0._s_0.X - fVar9 * __real_40400000) + fVar8 * __real_40400000) -
           fVar19;
  fVar12 = ((fVar16 - (fVar11 + fVar11)) + fVar1) * __real_40400000;
  local_d8 = *(undefined8 *)&param_1->field0_0x0;
  fVar13 = ((param_1[3].field0_0x0._s_0.Y - fVar10 * __real_40400000) + fVar7 * __real_40400000) -
           fVar15;
  fVar9 = ((param_1[3].field0_0x0._s_0.Z - fVar16 * __real_40400000) + fVar11 * __real_40400000) -
          fVar1;
  fVar8 = ((fVar14 * fVar17 + fVar18) * fVar17 + (fVar8 - fVar19) * __real_40400000) * fVar17;
  fVar16 = ((fVar13 * fVar17 + fVar20) * fVar17 + (fVar7 - fVar15) * __real_40400000) * fVar17;
  pFVar2 = (param_3->AllocatorInstance).Data;
  fVar14 = fVar14 * __real_40c00000;
  fVar13 = fVar13 * __real_40c00000;
  fVar10 = fVar9 * __real_40c00000;
  local_c8 = *(undefined8 *)&param_1->field0_0x0;
  fVar7 = 0.0;
  fVar19 = (fVar18 + fVar18) * fVar17 * fVar17;
  fVar18 = (fVar20 + fVar20) * fVar17 * fVar17;
  fVar15 = (fVar12 + fVar12) * fVar17 * fVar17;
  fVar9 = ((fVar9 * fVar17 + fVar12) * fVar17 + (fVar11 - fVar1) * __real_40400000) * fVar17;
  local_c0 = local_d0;
  if (((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)param_3->ArrayMax * 0xc)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    fVar7 = (float)(*pcVar3)();
    return fVar7;
  }
  iVar5 = param_3->ArrayNum;
  if (iVar5 == param_3->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&param_3->AllocatorInstance,&param_3->ArrayMax);
  }
  param_3->ArrayNum = iVar5 + 1;
  pFVar2 = (param_3->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + (longlong)iVar5 * 0xc) = *(undefined8 *)&param_1->field0_0x0;
  *(float *)(pFVar2 + (longlong)iVar5 * 0xc + 8) = (param_1->field0_0x0)._s_0.Z;
  if (param_2 < 2) {
    fVar7 = 0.0;
  }
  else {
    uVar6 = (ulonglong)(param_2 - 1);
    do {
      fVar15 = fVar15 + fVar17 * fVar17 * fVar17 * fVar10;
      fVar18 = fVar18 + fVar17 * fVar17 * fVar17 * fVar13;
      fVar19 = fVar19 + fVar17 * fVar17 * fVar17 * fVar14;
      fVar11 = (float)local_d8 + fVar8;
      fVar8 = fVar8 + fVar19;
      local_d8._4_4_ = local_d8._4_4_ + fVar16;
      local_d0 = local_d0 + fVar9;
      pFVar2 = (param_3->AllocatorInstance).Data;
      local_c8._0_4_ = (float)local_c8 - fVar11;
      fVar16 = fVar16 + fVar18;
      fVar9 = fVar9 + fVar15;
      local_c8._4_4_ = local_c8._4_4_ - local_d8._4_4_;
      local_d8 = CONCAT44(local_d8._4_4_,fVar11);
      fVar7 = fVar7 + SQRT(local_c8._4_4_ * local_c8._4_4_ + (float)local_c8 * (float)local_c8 +
                           (local_c0 - local_d0) * (local_c0 - local_d0));
      local_c8 = local_d8;
      local_c0 = local_d0;
      if (((pFVar2 <= (FScriptContainerElement *)&local_d8) &&
          ((FScriptContainerElement *)&local_d8 < pFVar2 + (longlong)param_3->ArrayMax * 0xc)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        fVar7 = (float)(*pcVar3)();
        return fVar7;
      }
      iVar5 = param_3->ArrayNum;
      if (iVar5 == param_3->ArrayMax) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = iVar5 + 1;
      pFVar2 = (param_3->AllocatorInstance).Data;
      *(undefined8 *)(pFVar2 + (longlong)iVar5 * 0xc) = local_d8;
      *(float *)(pFVar2 + (longlong)iVar5 * 0xc + 8) = local_d0;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return fVar7;
}

// EvaluateBezier @ 1417c8e20

double __cdecl
UE::Math::TVector<double>::EvaluateBezier
          (TVector<double> *param_1,int param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  int iVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined4 uVar22;
  double dVar23;
  double dVar24;
  undefined1 local_e8 [16];
  double local_d8;
  undefined1 local_d0 [16];
  double local_c0;
  
  if ((param_1 == (TVector<double> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ControlPoints",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x895,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    dVar17 = (double)(*pcVar9)();
    return dVar17;
  }
  if ((param_2 < 2) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumPoints >= 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x896,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    dVar17 = (double)(*pcVar9)();
    return dVar17;
  }
  dVar17 = param_1[1].field0_0x0._s_0.Y;
  dVar18 = param_1[1].field0_0x0._s_0.X;
  dVar1 = param_1[2].field0_0x0._s_0.X;
  dVar2 = param_1[2].field0_0x0._s_0.Y;
  dVar3 = param_1[1].field0_0x0._s_0.Z;
  dVar19 = (param_1->field0_0x0)._s_0.Y;
  dVar4 = param_1[2].field0_0x0._s_0.Z;
  dVar5 = (param_1->field0_0x0)._s_0.X;
  dVar6 = (param_1->field0_0x0)._s_0.Z;
  dVar11 = __real_3ff0000000000000 / (double)(param_2 + -1);
  local_d8 = (param_1->field0_0x0)._s_0.Z;
  dVar12 = ((dVar1 - (dVar18 + dVar18)) + dVar5) * __real_4008000000000000;
  dVar13 = ((dVar2 - (dVar17 + dVar17)) + dVar19) * __real_4008000000000000;
  dVar10 = ((param_1[3].field0_0x0._s_0.X - dVar1 * __real_4008000000000000) +
           dVar18 * __real_4008000000000000) - dVar5;
  dVar23 = ((dVar4 - (dVar3 + dVar3)) + dVar6) * __real_4008000000000000;
  dVar2 = ((param_1[3].field0_0x0._s_0.Y - dVar2 * __real_4008000000000000) +
          dVar17 * __real_4008000000000000) - dVar19;
  local_e8 = *(undefined1 (*) [16])&param_1->field0_0x0;
  dVar1 = ((param_1[3].field0_0x0._s_0.Z - dVar4 * __real_4008000000000000) +
          dVar3 * __real_4008000000000000) - dVar6;
  dVar18 = ((dVar10 * dVar11 + dVar12) * dVar11 + (dVar18 - dVar5) * __real_4008000000000000) *
           dVar11;
  dVar5 = ((dVar2 * dVar11 + dVar13) * dVar11 + (dVar17 - dVar19) * __real_4008000000000000) *
          dVar11;
  pFVar7 = (param_3->AllocatorInstance).Data;
  dVar10 = dVar10 * __real_4018000000000000;
  dVar17 = dVar1 * __real_4018000000000000;
  dVar2 = dVar2 * __real_4018000000000000;
  dVar4 = (dVar23 + dVar23) * dVar11 * dVar11;
  dVar19 = 0.0;
  dVar12 = (dVar12 + dVar12) * dVar11 * dVar11;
  dVar13 = (dVar13 + dVar13) * dVar11 * dVar11;
  local_c0 = (param_1->field0_0x0)._s_0.Z;
  dVar1 = ((dVar1 * dVar11 + dVar23) * dVar11 + (dVar3 - dVar6) * __real_4008000000000000) * dVar11;
  local_d0 = *(undefined1 (*) [16])&param_1->field0_0x0;
  if (((pFVar7 <= param_1) && (param_1 < pFVar7 + (longlong)param_3->ArrayMax * 0x18)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar9 = (code *)swi(3);
    dVar17 = (double)(*pcVar9)();
    return dVar17;
  }
  iVar15 = param_3->ArrayNum;
  if (iVar15 == param_3->ArrayMax) {
    iVar15 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&param_3->AllocatorInstance,&param_3->ArrayMax);
  }
  param_3->ArrayNum = iVar15 + 1;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  pFVar8 = (param_3->AllocatorInstance).Data;
  pFVar7 = pFVar8 + (longlong)iVar15 * 0x18;
  *(double *)pFVar7 = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar7 + 8) = dVar3;
  *(double *)(pFVar8 + (longlong)iVar15 * 0x18 + 0x10) = (param_1->field0_0x0)._s_0.Z;
  if (param_2 < 2) {
    dVar19 = 0.0;
  }
  else {
    uVar16 = (ulonglong)(param_2 - 1);
    do {
      dVar4 = dVar4 + dVar11 * dVar11 * dVar11 * dVar17;
      dVar13 = dVar13 + dVar11 * dVar11 * dVar11 * dVar2;
      dVar12 = dVar12 + dVar11 * dVar11 * dVar11 * dVar10;
      dVar24 = (double)local_e8._0_8_ + dVar18;
      dVar18 = dVar18 + dVar12;
      dVar23 = (double)local_e8._8_8_ + dVar5;
      pFVar7 = (param_3->AllocatorInstance).Data;
      dVar3 = (double)local_d0._0_8_ - dVar24;
      local_d8 = local_d8 + dVar1;
      dVar5 = dVar5 + dVar13;
      dVar1 = dVar1 + dVar4;
      dVar6 = (double)local_d0._8_8_ - dVar23;
      auVar20._0_8_ = (local_c0 - local_d8) * (local_c0 - local_d8);
      auVar20._8_8_ = 0;
      uVar22 = (undefined4)((ulonglong)dVar23 >> 0x20);
      local_e8._8_4_ = SUB84(dVar23,0);
      local_e8._0_8_ = dVar24;
      local_e8._12_4_ = uVar22;
      local_d0._8_4_ = SUB84(dVar23,0);
      local_d0._0_8_ = dVar24;
      local_d0._12_4_ = uVar22;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = dVar6 * dVar6 + dVar3 * dVar3 + auVar20._0_8_;
      auVar21 = sqrtpd(auVar20,auVar21);
      dVar19 = dVar19 + auVar21._0_8_;
      local_c0 = local_d8;
      if (((pFVar7 <= (FScriptContainerElement *)local_e8) &&
          ((FScriptContainerElement *)local_e8 < pFVar7 + (longlong)param_3->ArrayMax * 0x18)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar9 = (code *)swi(3);
        dVar17 = (double)(*pcVar9)();
        return dVar17;
      }
      iVar15 = param_3->ArrayNum;
      if (iVar15 == param_3->ArrayMax) {
        iVar15 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = iVar15 + 1;
      pFVar8 = (param_3->AllocatorInstance).Data;
      pFVar7 = pFVar8 + (longlong)iVar15 * 0x18;
      *(undefined8 *)pFVar7 = local_e8._0_8_;
      *(undefined8 *)(pFVar7 + 8) = local_e8._8_8_;
      *(double *)(pFVar8 + (longlong)iVar15 * 0x18 + 0x10) = local_d8;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  return dVar19;
}

// FindBestAxisVectors @ 1417cd890

void __thiscall
UE::Math::TVector<float>::FindBestAxisVectors
          (TVector<float> *this,TVector<float> *param_1,TVector<float> *param_2)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar6 = __real_3f800000;
  fVar3 = (float)((uint)(this->field0_0x0)._s_0.Z & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if ((fVar3 <= (float)((uint)(this->field0_0x0)._s_0.X & __xmm_7fffffff7fffffff7fffffff7fffffff))
     || (fVar3 <= (float)((uint)(this->field0_0x0)._s_0.Y & __xmm_7fffffff7fffffff7fffffff7fffffff))
     ) {
    fVar9 = 0.0;
    fVar3 = __real_3f800000;
  }
  else {
    fVar3 = 0.0;
    fVar9 = __real_3f800000;
  }
  (param_1->field0_0x0)._s_0.X = fVar9;
  (param_1->field0_0x0)._s_0.Y = 0.0;
  (param_1->field0_0x0)._s_0.Z = fVar3;
  fVar5 = (this->field0_0x0)._s_0.X;
  fVar8 = (this->field0_0x0)._s_0.Y;
  fVar1 = (this->field0_0x0)._s_0.Z;
  fVar7 = fVar8 * 0.0 + fVar5 * fVar9 + fVar1 * fVar3;
  fVar9 = fVar9 - fVar7 * fVar5;
  fVar8 = 0.0 - fVar7 * fVar8;
  fVar3 = fVar3 - fVar7 * fVar1;
  fVar5 = fVar8 * fVar8 + fVar9 * fVar9 + fVar3 * fVar3;
  if (fVar5 == fVar6) {
    uVar4 = CONCAT44(fVar8,fVar9);
    uVar2 = fVar3;
  }
  else {
    uVar4 = ZeroVector.field0_0x0._0_8_;
    uVar2 = ZeroVector.field0_0x0._s_0.Z;
    if (__real_322bcc77 <= fVar5) {
      fVar6 = __real_3f800000 / SQRT(fVar5);
      uVar4 = CONCAT44(fVar6 * fVar8,fVar6 * fVar9);
      uVar2 = fVar6 * fVar3;
    }
  }
  *(undefined8 *)&param_1->field0_0x0 = uVar4;
  (param_1->field0_0x0)._s_0.Z = (float)uVar2;
  fVar6 = (this->field0_0x0)._s_0.Y;
  fVar3 = (this->field0_0x0)._s_0.X;
  fVar9 = (param_1->field0_0x0)._s_0.Z;
  fVar5 = (param_1->field0_0x0)._s_0.Y;
  fVar8 = (this->field0_0x0)._s_0.Z;
  fVar1 = (param_1->field0_0x0)._s_0.X;
  (param_2->field0_0x0)._s_0.X = fVar8 * fVar5 - fVar6 * fVar9;
  (param_2->field0_0x0)._s_0.Y = fVar3 * fVar9 - fVar8 * fVar1;
  (param_2->field0_0x0)._s_0.Z = fVar6 * fVar1 - fVar3 * fVar5;
  return;
}

// FindBestAxisVectors @ 1417cda80

void __thiscall
UE::Math::TVector<double>::FindBestAxisVectors
          (TVector<double> *this,TVector<double> *param_1,TVector<double> *param_2)

{
  undefined8 uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  dVar11 = __real_3ff0000000000000;
  uVar1 = *(undefined8 *)((longlong)&this->field0_0x0 + 0x10);
  uVar7 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar8 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar12 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->field0_0x0 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)*(undefined8 *)&this->field0_0x0 &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  uVar17 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  if (((double)CONCAT44(uVar8,uVar7) < dVar12 || (double)CONCAT44(uVar8,uVar7) == dVar12) ||
     (uVar1 = *(undefined8 *)((longlong)&this->field0_0x0 + 8),
     dVar12 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff),
     (double)CONCAT44(uVar8,uVar7) < dVar12 || (double)CONCAT44(uVar8,uVar7) == dVar12)) {
    uVar15 = 0;
    uVar16 = 0;
    uVar13 = SUB84(__real_3ff0000000000000,0);
    uVar14 = uVar17;
  }
  else {
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = SUB84(__real_3ff0000000000000,0);
    uVar16 = uVar17;
  }
  (param_1->field0_0x0)._s_0.X = (double)CONCAT44(uVar16,uVar15);
  (param_1->field0_0x0)._s_0.Y = 0.0;
  (param_1->field0_0x0)._s_0.Z = (double)CONCAT44(uVar14,uVar13);
  dVar12 = (this->field0_0x0)._s_0.X * (double)CONCAT44(uVar16,uVar15) +
           (this->field0_0x0)._s_0.Y * 0.0 +
           (this->field0_0x0)._s_0.Z * (double)CONCAT44(uVar14,uVar13);
  dVar5 = (double)CONCAT44(uVar16,uVar15) - dVar12 * (this->field0_0x0)._s_0.X;
  dVar4 = 0.0 - dVar12 * (this->field0_0x0)._s_0.Y;
  dVar12 = (double)CONCAT44(uVar14,uVar13) - dVar12 * (this->field0_0x0)._s_0.Z;
  dVar9 = dVar4 * dVar4 + dVar5 * dVar5 + dVar12 * dVar12;
  uVar1 = dVar5;
  uVar6 = dVar4;
  uVar10 = dVar12;
  if ((dVar9 != dVar11) &&
     (uVar1 = ZeroVector.field0_0x0._s_0.X, uVar6 = ZeroVector.field0_0x0._s_0.Y,
     uVar10 = ZeroVector.field0_0x0._s_0.Z, __real_3e45798ee0000000 <= dVar9)) {
    dVar11 = dVar11 / SQRT(dVar9);
    uVar1 = dVar5 * dVar11;
    uVar6 = dVar11 * dVar4;
    uVar10 = dVar11 * dVar12;
  }
  auVar3._8_4_ = (int)uVar6;
  auVar3._0_8_ = uVar1;
  auVar3._12_4_ = (int)((ulonglong)uVar6 >> 0x20);
  *(undefined1 (*) [16])&param_1->field0_0x0 = auVar3;
  (param_1->field0_0x0)._s_0.Z = (double)uVar10;
  dVar11 = (param_1->field0_0x0)._s_0.Y;
  dVar12 = (this->field0_0x0)._s_0.Y;
  dVar4 = (this->field0_0x0)._s_0.X;
  dVar5 = (this->field0_0x0)._s_0.Z;
  dVar9 = (param_1->field0_0x0)._s_0.Z;
  dVar2 = (param_1->field0_0x0)._s_0.X;
  (param_2->field0_0x0)._s_0.X = dVar5 * dVar11 - dVar12 * dVar9;
  (param_2->field0_0x0)._s_0.Y = dVar4 * dVar9 - dVar5 * dVar2;
  (param_2->field0_0x0)._s_0.Z = dVar12 * dVar2 - dVar4 * dVar11;
  return;
}

// GenerateClusterCenters @ 1417d02e0

void __cdecl
UE::Math::TVector<float>::GenerateClusterCenters
          (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_2,int param_3,
          int param_4)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint local_b8;
  ForAnyElementType local_a0;
  int local_98 [24];
  
  uVar10 = (ulonglong)(uint)param_3;
  if (param_2->ArrayNum != 0) {
    iVar17 = param_1->ArrayNum;
    if (iVar17 != 0) {
      local_a0.Data = (FScriptContainerElement *)0x0;
      local_98[0] = 0;
      local_98[1] = 0;
      iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,4,iVar17,&local_a0,local_98,local_98 + 1);
      memset(local_a0.Data + (longlong)iVar9 * 0x10,0,(longlong)iVar17 << 4);
      fVar6 = __real_7f7fc99e;
      fVar5 = __real_3f800000;
      if (0 < param_3) {
        do {
          iVar17 = param_2->ArrayNum;
          local_b8 = 0;
          if (0 < iVar17) {
            lVar19 = 0;
            do {
              uVar12 = 0;
              if ((int)local_b8 < iVar17) {
                uVar12 = ~local_b8 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar2 = (param_2->AllocatorInstance).Data;
              uVar11 = 0;
              iVar17 = param_1->ArrayNum;
              lVar16 = 0;
              uVar12 = 0xffffffff;
              lVar18 = -1;
              if (0 < iVar17) {
                lVar14 = 0;
                fVar21 = fVar6;
                do {
                  uVar15 = 0;
                  if ((int)uVar11 < iVar17) {
                    uVar15 = ~uVar11 >> 0x1f;
                  }
                  if ((uVar15 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pFVar3 = (param_1->AllocatorInstance).Data;
                  fVar20 = (*(float *)(pFVar2 + lVar19 + 4) - *(float *)(pFVar3 + lVar14 + 4)) *
                           (*(float *)(pFVar2 + lVar19 + 4) - *(float *)(pFVar3 + lVar14 + 4)) +
                           (*(float *)(pFVar2 + lVar19) - *(float *)(pFVar3 + lVar14)) *
                           (*(float *)(pFVar2 + lVar19) - *(float *)(pFVar3 + lVar14)) +
                           (*(float *)(pFVar2 + lVar19 + 8) - *(float *)(pFVar3 + lVar14 + 8)) *
                           (*(float *)(pFVar2 + lVar19 + 8) - *(float *)(pFVar3 + lVar14 + 8));
                  if (fVar20 < fVar21) {
                    lVar18 = lVar16;
                    fVar21 = fVar20;
                    uVar12 = uVar11;
                  }
                  iVar17 = param_1->ArrayNum;
                  uVar11 = uVar11 + 1;
                  lVar16 = lVar16 + 1;
                  lVar14 = lVar14 + 0xc;
                } while ((int)uVar11 < iVar17);
              }
              if (uVar12 != 0xffffffff) {
                uVar11 = 0;
                if ((int)uVar12 < local_98[0]) {
                  uVar11 = ~uVar12 >> 0x1f;
                }
                if ((uVar11 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                lVar18 = lVar18 * 0x10;
                *(float *)(local_a0.Data + lVar18) =
                     *(float *)(pFVar2 + lVar19) + *(float *)(local_a0.Data + lVar18);
                *(float *)(local_a0.Data + lVar18 + 4) =
                     *(float *)(pFVar2 + lVar19 + 4) + *(float *)(local_a0.Data + lVar18 + 4);
                *(float *)(local_a0.Data + lVar18 + 8) =
                     *(float *)(pFVar2 + lVar19 + 8) + *(float *)(local_a0.Data + lVar18 + 8);
                uVar11 = 0;
                if ((int)uVar12 < local_98[0]) {
                  uVar11 = ~uVar12 >> 0x1f;
                }
                if ((uVar11 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                *(int *)(local_a0.Data + lVar18 + 0xc) = *(int *)(local_a0.Data + lVar18 + 0xc) + 1;
              }
              local_b8 = local_b8 + 1;
              lVar19 = lVar19 + 0xc;
              iVar17 = param_2->ArrayNum;
            } while ((int)local_b8 < iVar17);
          }
          uVar12 = 0;
          if (0 < param_1->ArrayNum) {
            lVar19 = 0;
            lVar18 = 0;
            do {
              uVar15 = ~uVar12 >> 0x1f;
              uVar11 = 0;
              if ((int)uVar12 < local_98[0]) {
                uVar11 = uVar15;
              }
              if ((uVar11 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (0 < *(int *)(local_a0.Data + lVar18 + 0xc)) {
                uVar11 = 0;
                if ((int)uVar12 < local_98[0]) {
                  uVar11 = uVar15;
                }
                if ((uVar11 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                FVar7.Data = local_a0.Data;
                uVar11 = 0;
                if ((int)uVar12 < local_98[0]) {
                  uVar11 = uVar15;
                }
                if ((uVar11 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                uVar11 = 0;
                if ((int)uVar12 < param_1->ArrayNum) {
                  uVar11 = uVar15;
                }
                fVar22 = fVar5 / (float)*(int *)(local_a0.Data + lVar18 + 0xc);
                fVar21 = *(float *)(FVar7.Data + lVar18);
                fVar20 = *(float *)(FVar7.Data + lVar18 + 4);
                fVar1 = *(float *)(FVar7.Data + lVar18 + 8);
                if ((uVar11 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar2 = (param_1->AllocatorInstance).Data;
                *(float *)(pFVar2 + lVar19) = fVar22 * fVar21;
                *(float *)(pFVar2 + lVar19 + 4) = fVar22 * fVar20;
                *(float *)(pFVar2 + lVar19 + 8) = fVar22 * fVar1;
              }
              uVar12 = uVar12 + 1;
              lVar18 = lVar18 + 0x10;
              lVar19 = lVar19 + 0xc;
            } while ((int)uVar12 < param_1->ArrayNum);
          }
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      uVar13 = 0;
      uVar10 = uVar13;
      if (0 < local_98[0]) {
        do {
          uVar11 = (uint)uVar13;
          uVar12 = 0;
          if ((int)uVar11 < local_98[0]) {
            uVar12 = ~uVar11 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(int *)(local_a0.Data + uVar10 + 0xc) < param_4) {
            uVar12 = 0;
            if ((int)uVar11 < param_1->ArrayNum) {
              uVar12 = ~uVar11 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar2 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar11 * 0xc;
            iVar17 = ~uVar11 + param_1->ArrayNum;
            if (iVar17 != 0) {
              memmove(pFVar2,pFVar2 + 0xc,(longlong)iVar17 * 0xc);
            }
            param_1->ArrayNum = param_1->ArrayNum + -1;
            Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
          }
          uVar13 = (ulonglong)(uVar11 + 1);
          uVar10 = uVar10 + 0x10;
        } while ((int)(uVar11 + 1) < local_98[0]);
      }
      if (local_a0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data);
      }
    }
  }
  return;
}

// GenerateClusterCenters @ 1417d0970

void __cdecl
UE::Math::TVector<double>::GenerateClusterCenters
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,int param_3,
          int param_4)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  double dVar22;
  double dVar23;
  uint local_a8;
  ForAnyElementType local_90;
  int local_88 [20];
  
  uVar12 = (ulonglong)(uint)param_3;
  if (param_2->ArrayNum != 0) {
    iVar19 = param_1->ArrayNum;
    if (iVar19 != 0) {
      local_90.Data = (FScriptContainerElement *)0x0;
      local_88[0] = 0;
      local_88[1] = 0;
      iVar11 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x20,8,iVar19,&local_90,local_88,local_88 + 1);
      memset(local_90.Data + (longlong)iVar11 * 0x20,0,(longlong)iVar19 << 5);
      dVar8 = __real_47eff933c0000000;
      dVar7 = __real_3ff0000000000000;
      if (0 < param_3) {
        do {
          iVar19 = param_2->ArrayNum;
          local_a8 = 0;
          if (0 < iVar19) {
            lVar21 = 0;
            do {
              uVar14 = 0;
              if ((int)local_a8 < iVar19) {
                uVar14 = ~local_a8 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar2 = (param_2->AllocatorInstance).Data;
              uVar13 = 0;
              iVar19 = param_1->ArrayNum;
              lVar18 = 0;
              uVar14 = 0xffffffff;
              lVar20 = -1;
              if (0 < iVar19) {
                lVar16 = 0;
                dVar1 = dVar8;
                do {
                  uVar17 = 0;
                  if ((int)uVar13 < iVar19) {
                    uVar17 = ~uVar13 >> 0x1f;
                  }
                  if ((uVar17 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pFVar3 = (param_1->AllocatorInstance).Data;
                  dVar23 = (*(double *)(pFVar2 + lVar21 + 8) - *(double *)(pFVar3 + lVar16 + 8)) *
                           (*(double *)(pFVar2 + lVar21 + 8) - *(double *)(pFVar3 + lVar16 + 8)) +
                           (*(double *)(pFVar2 + lVar21) - *(double *)(pFVar3 + lVar16)) *
                           (*(double *)(pFVar2 + lVar21) - *(double *)(pFVar3 + lVar16)) +
                           (*(double *)(pFVar2 + lVar21 + 0x10) -
                           *(double *)(pFVar3 + lVar16 + 0x10)) *
                           (*(double *)(pFVar2 + lVar21 + 0x10) -
                           *(double *)(pFVar3 + lVar16 + 0x10));
                  if (dVar23 < dVar1) {
                    lVar20 = lVar18;
                    dVar1 = dVar23;
                    uVar14 = uVar13;
                  }
                  iVar19 = param_1->ArrayNum;
                  uVar13 = uVar13 + 1;
                  lVar18 = lVar18 + 1;
                  lVar16 = lVar16 + 0x18;
                } while ((int)uVar13 < iVar19);
              }
              if (uVar14 != 0xffffffff) {
                uVar13 = 0;
                if ((int)uVar14 < local_88[0]) {
                  uVar13 = ~uVar14 >> 0x1f;
                }
                if ((uVar13 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                lVar20 = lVar20 * 0x20;
                *(double *)(local_90.Data + lVar20) =
                     *(double *)(pFVar2 + lVar21) + *(double *)(local_90.Data + lVar20);
                *(double *)(local_90.Data + lVar20 + 8) =
                     *(double *)(pFVar2 + lVar21 + 8) + *(double *)(local_90.Data + lVar20 + 8);
                *(double *)(local_90.Data + lVar20 + 0x10) =
                     *(double *)(pFVar2 + lVar21 + 0x10) +
                     *(double *)(local_90.Data + lVar20 + 0x10);
                uVar13 = 0;
                if ((int)uVar14 < local_88[0]) {
                  uVar13 = ~uVar14 >> 0x1f;
                }
                if ((uVar13 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                *(int *)(local_90.Data + lVar20 + 0x18) =
                     *(int *)(local_90.Data + lVar20 + 0x18) + 1;
              }
              local_a8 = local_a8 + 1;
              lVar21 = lVar21 + 0x18;
              iVar19 = param_2->ArrayNum;
            } while ((int)local_a8 < iVar19);
          }
          uVar14 = 0;
          if (0 < param_1->ArrayNum) {
            lVar21 = 0;
            lVar20 = 0;
            do {
              uVar17 = ~uVar14 >> 0x1f;
              uVar13 = 0;
              if ((int)uVar14 < local_88[0]) {
                uVar13 = uVar17;
              }
              if ((uVar13 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (0 < *(int *)(local_90.Data + lVar20 + 0x18)) {
                uVar13 = 0;
                if ((int)uVar14 < local_88[0]) {
                  uVar13 = uVar17;
                }
                if ((uVar13 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                FVar9.Data = local_90.Data;
                uVar13 = 0;
                if ((int)uVar14 < local_88[0]) {
                  uVar13 = uVar17;
                }
                if ((uVar13 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                uVar13 = 0;
                if ((int)uVar14 < param_1->ArrayNum) {
                  uVar13 = uVar17;
                }
                dVar22 = dVar7 / (double)*(int *)(local_90.Data + lVar20 + 0x18);
                pFVar2 = FVar9.Data + lVar20 + 8;
                dVar6 = *(double *)pFVar2;
                dVar1 = *(double *)(FVar9.Data + lVar20);
                dVar23 = dVar22 * *(double *)(pFVar2 + 8);
                if ((uVar13 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar2 = (param_1->AllocatorInstance).Data;
                *(double *)(pFVar2 + lVar21) = dVar22 * dVar1;
                auVar5._8_4_ = SUB84(dVar23,0);
                auVar5._0_8_ = dVar22 * dVar6;
                auVar5._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
                *(undefined1 (*) [16])(pFVar2 + lVar21 + 8) = auVar5;
              }
              uVar14 = uVar14 + 1;
              lVar20 = lVar20 + 0x20;
              lVar21 = lVar21 + 0x18;
            } while ((int)uVar14 < param_1->ArrayNum);
          }
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      uVar15 = 0;
      uVar12 = uVar15;
      if (0 < local_88[0]) {
        do {
          uVar13 = (uint)uVar15;
          uVar14 = 0;
          if ((int)uVar13 < local_88[0]) {
            uVar14 = ~uVar13 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(int *)(local_90.Data + uVar12 + 0x18) < param_4) {
            uVar14 = 0;
            if ((int)uVar13 < param_1->ArrayNum) {
              uVar14 = ~uVar13 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar2 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x18;
            iVar19 = ~uVar13 + param_1->ArrayNum;
            if (iVar19 != 0) {
              memmove(pFVar2,pFVar2 + 0x18,(longlong)iVar19 * 0x18);
            }
            param_1->ArrayNum = param_1->ArrayNum + -1;
            Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
          }
          uVar15 = (ulonglong)(uVar13 + 1);
          uVar12 = uVar12 + 0x20;
        } while ((int)(uVar13 + 1) < local_88[0]);
      }
      if (local_90.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data);
      }
    }
  }
  return;
}

// GetAbs @ 1417d1210

TVector<float> * __thiscall
UE::Math::TVector<float>::GetAbs(TVector<float> *this,TVector<float> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  
  uVar3 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar1 = (this->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (float)((uint)(this->field0_0x0)._s_0.X & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar2 = (this->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)((uint)fVar1 & uVar3);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)((uint)fVar2 & uVar3);
  return __return_storage_ptr__;
}

// GetAbs @ 1417d1250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
UE::Math::TVector<double>::GetAbs(TVector<double> *this,TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *(undefined8 *)((longlong)&this->field0_0x0 + 0x10);
  uVar2 = *(uint *)((longlong)&this->field0_0x0 + 4) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar3 = *(uint *)((longlong)&this->field0_0x0 + 8) & _UNK_15061cc88;
  uVar4 = *(uint *)((longlong)&this->field0_0x0 + 0xc) & _UNK_15061cc8c;
  uVar5 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar6 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  *(uint *)&__return_storage_ptr__->field0_0x0 =
       *(uint *)&this->field0_0x0 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar2;
  *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar3;
  *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)CONCAT44(uVar6,uVar5);
  return __return_storage_ptr__;
}

// GetAbsMax @ 1417d12e0

float __thiscall UE::Math::TVector<float>::GetAbsMax(TVector<float> *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)((uint)(this->field0_0x0)._s_0.Y & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar2 = (float)((uint)(this->field0_0x0)._s_0.X & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (fVar1 <= fVar2) {
    fVar1 = fVar2;
  }
  fVar2 = (float)((uint)(this->field0_0x0)._s_0.Z & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (fVar1 <= fVar2) {
    fVar1 = fVar2;
  }
  return fVar1;
}

// GetAbsMax @ 1417d1310

double __thiscall UE::Math::TVector<double>::GetAbsMax(TVector<double> *this)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  uVar1 = *(undefined8 *)((longlong)&this->field0_0x0 + 8);
  dVar2 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  uVar1 = *(undefined8 *)((longlong)&this->field0_0x0 + 0x10);
  dVar3 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->field0_0x0 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)*(undefined8 *)&this->field0_0x0 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (dVar2 <= dVar3) {
    dVar2 = dVar3;
  }
  dVar3 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (dVar2 <= dVar3) {
    dVar2 = dVar3;
  }
  return dVar2;
}

// GetAbsMin @ 1417d1340

float __thiscall UE::Math::TVector<float>::GetAbsMin(TVector<float> *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)((uint)(this->field0_0x0)._s_0.Y & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar2 = (float)((uint)(this->field0_0x0)._s_0.X & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (fVar2 <= fVar1) {
    fVar1 = fVar2;
  }
  fVar2 = (float)((uint)(this->field0_0x0)._s_0.Z & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (fVar2 <= fVar1) {
    fVar1 = fVar2;
  }
  return fVar1;
}

// GetAbsMin @ 1417d1370

double __thiscall UE::Math::TVector<double>::GetAbsMin(TVector<double> *this)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  uVar1 = *(undefined8 *)((longlong)&this->field0_0x0 + 8);
  dVar2 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  uVar1 = *(undefined8 *)((longlong)&this->field0_0x0 + 0x10);
  dVar3 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->field0_0x0 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)*(undefined8 *)&this->field0_0x0 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (dVar3 <= dVar2) {
    dVar2 = dVar3;
  }
  dVar3 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (dVar3 <= dVar2) {
    dVar2 = dVar3;
  }
  return dVar2;
}

// GetClampedToMaxSize2D @ 1417d1f00

TVector<float> * __thiscall
UE::Math::TVector<float>::GetClampedToMaxSize2D
          (TVector<float> *this,TVector<float> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (param_1 < __real_38d1b717) {
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (this->field0_0x0)._s_0.Z;
    return __return_storage_ptr__;
  }
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Y;
  fVar4 = fVar2 * fVar2 + fVar1 * fVar1;
  if (param_1 * param_1 < fVar4) {
    fVar3 = (this->field0_0x0)._s_0.Z;
    fVar4 = (__real_3f800000 / SQRT(fVar4)) * param_1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar4 * fVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.X = fVar4 * fVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar3;
    return __return_storage_ptr__;
  }
  fVar1 = (this->field0_0x0)._s_0.Z;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&this->field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  return __return_storage_ptr__;
}

// GetClampedToMaxSize2D @ 1417d1f90

TVector<double> * __thiscall
UE::Math::TVector<double>::GetClampedToMaxSize2D
          (TVector<double> *this,TVector<double> *__return_storage_ptr__,double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = __real_3ff0000000000000;
  if (param_1 < __real_3f1a36e2e0000000) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (this->field0_0x0)._s_0.Z;
    return __return_storage_ptr__;
  }
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar2 = (this->field0_0x0)._s_0.Y;
  dVar2 = dVar2 * dVar2 + dVar1 * dVar1;
  if (param_1 * param_1 < dVar2) {
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (this->field0_0x0)._s_0.Z;
    dVar3 = (dVar3 / SQRT(dVar2)) * param_1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3 * (this->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar3 * dVar1;
    return __return_storage_ptr__;
  }
  dVar1 = (this->field0_0x0)._s_0.Y;
  dVar3 = (this->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3;
  return __return_storage_ptr__;
}

// GetClampedToMaxSize @ 1417d2150

TVector<float> * __thiscall
UE::Math::TVector<float>::GetClampedToMaxSize
          (TVector<float> *this,TVector<float> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  
  uVar4 = ZeroVector.field0_0x0._s_0.Z;
  if (param_1 < __real_38d1b717) {
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = ZeroVector.field0_0x0._0_8_;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)uVar4;
    return __return_storage_ptr__;
  }
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Z;
  fVar3 = (this->field0_0x0)._s_0.Y;
  fVar5 = fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2;
  if (param_1 * param_1 < fVar5) {
    fVar5 = (__real_3f800000 / SQRT(fVar5)) * param_1;
    (__return_storage_ptr__->field0_0x0)._s_0.X = fVar5 * fVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar5 * fVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar5 * fVar2;
    return __return_storage_ptr__;
  }
  fVar1 = (this->field0_0x0)._s_0.Z;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&this->field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  return __return_storage_ptr__;
}

// GetClampedToMaxSize @ 1417d2220

TVector<double> * __thiscall
UE::Math::TVector<double>::GetClampedToMaxSize
          (TVector<double> *this,TVector<double> *__return_storage_ptr__,double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  
  uVar5 = ZeroVector.field0_0x0._s_0.Z;
  uVar4 = ZeroVector.field0_0x0._s_0.Y;
  if (param_1 < __real_3f1a36e2e0000000) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)uVar5;
    return __return_storage_ptr__;
  }
  dVar1 = (this->field0_0x0)._s_0.Z;
  dVar2 = (this->field0_0x0)._s_0.X;
  dVar3 = (this->field0_0x0)._s_0.Y;
  dVar6 = dVar3 * dVar3 + dVar2 * dVar2 + dVar1 * dVar1;
  if (param_1 * param_1 < dVar6) {
    dVar6 = (__real_3ff0000000000000 / SQRT(dVar6)) * param_1;
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar6 * dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6 * dVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar6 * dVar1;
    return __return_storage_ptr__;
  }
  dVar2 = (this->field0_0x0)._s_0.Y;
  dVar1 = (this->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetClampedToSize2D @ 1417d2300

TVector<float> * __thiscall
UE::Math::TVector<float>::GetClampedToSize2D
          (TVector<float> *this,TVector<float> *__return_storage_ptr__,float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Y;
  fVar2 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
  uVar3 = ZeroVector.field0_0x0._s_0.Y;
  uVar4 = ZeroVector.field0_0x0._s_0.X;
  if (__real_322bcc77 < fVar2) {
    uVar3 = (__real_3f800000 / fVar2) * (this->field0_0x0)._s_0.Y;
    uVar4 = (__real_3f800000 / fVar2) * fVar1;
  }
  if (param_2 <= fVar2) {
    fVar2 = param_2;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (this->field0_0x0)._s_0.Z;
  if (fVar2 <= param_1) {
    fVar2 = param_1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar2 * (float)uVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar2 * (float)uVar4;
  return __return_storage_ptr__;
}

// GetClampedToSize2D @ 1417d23b0

TVector<double> * __thiscall
UE::Math::TVector<double>::GetClampedToSize2D
          (TVector<double> *this,TVector<double> *__return_storage_ptr__,double param_1,
          double param_2)

{
  double dVar1;
  double dVar2;
  undefined8 in_XMM2_Qb;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  
  auVar3._8_8_ = in_XMM2_Qb;
  auVar3._0_8_ = param_1;
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar2 = (this->field0_0x0)._s_0.Y;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar2 * dVar2 + dVar1 * dVar1;
  auVar4 = sqrtpd(auVar3,auVar4);
  dVar2 = auVar4._0_8_;
  uVar5 = ZeroVector.field0_0x0._s_0.Y;
  uVar6 = ZeroVector.field0_0x0._s_0.X;
  if (__real_3e45798ee0000000 < dVar2) {
    uVar5 = (__real_3ff0000000000000 / dVar2) * (this->field0_0x0)._s_0.Y;
    uVar6 = (__real_3ff0000000000000 / dVar2) * dVar1;
  }
  if (param_2 <= dVar2) {
    dVar2 = param_2;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (this->field0_0x0)._s_0.Z;
  if (dVar2 <= param_1) {
    dVar2 = param_1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 * (double)uVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2 * (double)uVar6;
  return __return_storage_ptr__;
}

// GetClampedToSize @ 1417d25a0

TVector<float> * __thiscall
UE::Math::TVector<float>::GetClampedToSize
          (TVector<float> *this,TVector<float> *__return_storage_ptr__,float param_1,float param_2)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  fVar1 = (this->field0_0x0)._s_0.Z;
  fVar3 = (this->field0_0x0)._s_0.Y;
  fVar4 = (this->field0_0x0)._s_0.X;
  fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar1 * fVar1);
  uVar2 = ZeroVector.field0_0x0._s_0.X;
  uVar5 = ZeroVector.field0_0x0._s_0.Z;
  uVar6 = ZeroVector.field0_0x0._s_0.Y;
  if (__real_322bcc77 < fVar3) {
    fVar4 = __real_3f800000 / fVar3;
    uVar2 = fVar4 * (this->field0_0x0)._s_0.X;
    uVar5 = fVar4 * fVar1;
    uVar6 = fVar4 * (this->field0_0x0)._s_0.Y;
  }
  if (param_2 <= fVar3) {
    fVar3 = param_2;
  }
  if (fVar3 <= param_1) {
    fVar3 = param_1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar3 * (float)uVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar3 * (float)uVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar3 * (float)uVar5;
  return __return_storage_ptr__;
}

// GetClampedToSize @ 1417d2670

TVector<double> * __thiscall
UE::Math::TVector<double>::GetClampedToSize
          (TVector<double> *this,TVector<double> *__return_storage_ptr__,double param_1,
          double param_2)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 in_XMM2_Qb;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined8 uVar8;
  
  auVar5._8_8_ = in_XMM2_Qb;
  auVar5._0_8_ = param_1;
  dVar4 = (this->field0_0x0)._s_0.Y;
  dVar1 = (this->field0_0x0)._s_0.Z;
  dVar7 = (this->field0_0x0)._s_0.X;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar4 * dVar4 + dVar7 * dVar7 + dVar1 * dVar1;
  auVar6 = sqrtpd(auVar5,auVar6);
  dVar4 = auVar6._0_8_;
  uVar3 = ZeroVector.field0_0x0._s_0.X;
  uVar8 = ZeroVector.field0_0x0._s_0.Z;
  uVar2 = ZeroVector.field0_0x0._s_0.Y;
  if (__real_3e45798ee0000000 < dVar4) {
    dVar7 = __real_3ff0000000000000 / dVar4;
    uVar3 = dVar7 * (this->field0_0x0)._s_0.X;
    uVar8 = dVar7 * dVar1;
    uVar2 = dVar7 * (this->field0_0x0)._s_0.Y;
  }
  if (param_2 <= dVar4) {
    dVar4 = param_2;
  }
  if (dVar4 <= param_1) {
    dVar4 = param_1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar4 * (double)uVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4 * (double)uVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar4 * (double)uVar8;
  return __return_storage_ptr__;
}

// GetComponentForAxis @ 1417d2b50

float __thiscall UE::Math::TVector<float>::GetComponentForAxis(TVector<float> *this,Type param_1)

{
  if (param_1 != None) {
    if (param_1 == X) {
      return (this->field0_0x0)._s_0.X;
    }
    if (param_1 == Y) {
      return (this->field0_0x0)._s_0.Y;
    }
    if (param_1 == Z) {
      return (this->field0_0x0)._s_0.Z;
    }
  }
  return 0.0;
}

// GetComponentForAxis @ 1417d2b80

double __thiscall UE::Math::TVector<double>::GetComponentForAxis(TVector<double> *this,Type param_1)

{
  if (param_1 != None) {
    if (param_1 == X) {
      return (this->field0_0x0)._s_0.X;
    }
    if (param_1 == Y) {
      return (this->field0_0x0)._s_0.Y;
    }
    if (param_1 == Z) {
      return (this->field0_0x0)._s_0.Z;
    }
  }
  return 0.0;
}

// GetMax @ 1417d45b0

float __thiscall UE::Math::TVector<float>::GetMax(TVector<float> *this)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (this->field0_0x0)._s_0.Y;
  fVar1 = (this->field0_0x0)._s_0.X;
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar1 = (this->field0_0x0)._s_0.Z;
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  return fVar2;
}

// GetMax @ 1417d45d0

double __thiscall UE::Math::TVector<double>::GetMax(TVector<double> *this)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->field0_0x0)._s_0.Y;
  dVar1 = (this->field0_0x0)._s_0.X;
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  dVar1 = (this->field0_0x0)._s_0.Z;
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  return dVar2;
}

// GetMin @ 1417d4840

float __thiscall UE::Math::TVector<float>::GetMin(TVector<float> *this)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (this->field0_0x0)._s_0.Y;
  fVar1 = (this->field0_0x0)._s_0.X;
  if (fVar1 <= fVar2) {
    fVar2 = fVar1;
  }
  fVar1 = (this->field0_0x0)._s_0.Z;
  if (fVar1 <= fVar2) {
    fVar2 = fVar1;
  }
  return fVar2;
}

// GetMin @ 1417d4860

double __thiscall UE::Math::TVector<double>::GetMin(TVector<double> *this)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->field0_0x0)._s_0.Y;
  dVar1 = (this->field0_0x0)._s_0.X;
  if (dVar1 <= dVar2) {
    dVar2 = dVar1;
  }
  dVar1 = (this->field0_0x0)._s_0.Z;
  if (dVar1 <= dVar2) {
    dVar2 = dVar1;
  }
  return dVar2;
}

// GetSafeNormal2D @ 1417d6b40

TVector<float> * __thiscall
UE::Math::TVector<float>::GetSafeNormal2D
          (TVector<float> *this,TVector<float> *__return_storage_ptr__,float param_1,
          TVector<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = __real_3f800000;
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Y;
  fVar4 = fVar2 * fVar2 + fVar1 * fVar1;
  if (fVar4 != __real_3f800000) {
    if (fVar4 < param_1) {
      fVar1 = (param_2->field0_0x0)._s_0.Z;
      *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&param_2->field0_0x0;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
      return __return_storage_ptr__;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (fVar3 / SQRT(fVar4)) * fVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (fVar3 / SQRT(fVar4)) * fVar1;
    return __return_storage_ptr__;
  }
  if ((this->field0_0x0)._s_0.Z == 0.0) {
    fVar1 = (this->field0_0x0)._s_0.Z;
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&this->field0_0x0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// GetSafeNormal2D @ 1417d6bf0

TVector<double> * __thiscall
UE::Math::TVector<double>::GetSafeNormal2D
          (TVector<double> *this,TVector<double> *__return_storage_ptr__,double param_1,
          TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (this->field0_0x0)._s_0.X;
  dVar3 = (this->field0_0x0)._s_0.Y;
  dVar1 = dVar3 * dVar3 + dVar2 * dVar2;
  if (dVar1 == __real_3ff0000000000000) {
    if ((this->field0_0x0)._s_0.Z == 0.0) {
      dVar3 = (this->field0_0x0)._s_0.Y;
      dVar2 = (this->field0_0x0)._s_0.Z;
      (__return_storage_ptr__->field0_0x0)._s_0.X = (this->field0_0x0)._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
      return __return_storage_ptr__;
    }
  }
  else {
    if (dVar1 < param_1) {
      dVar3 = (param_2->field0_0x0)._s_0.Y;
      dVar2 = (param_2->field0_0x0)._s_0.Z;
      (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
      return __return_storage_ptr__;
    }
    dVar2 = dVar2 * (__real_3ff0000000000000 / SQRT(dVar1));
    dVar3 = dVar3 * (__real_3ff0000000000000 / SQRT(dVar1));
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// GetSafeNormal @ 1417d6e80

TVector<float> * __thiscall
UE::Math::TVector<float>::GetSafeNormal
          (TVector<float> *this,TVector<float> *__return_storage_ptr__,float param_1,
          TVector<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Z;
  fVar4 = (this->field0_0x0)._s_0.Y;
  fVar4 = fVar4 * fVar4 + fVar1 * fVar1 + fVar2 * fVar2;
  if (fVar4 == __real_3f800000) {
    fVar1 = (this->field0_0x0)._s_0.Z;
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&this->field0_0x0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
    return __return_storage_ptr__;
  }
  if (fVar4 < param_1) {
    fVar1 = (param_2->field0_0x0)._s_0.Z;
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&param_2->field0_0x0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
    return __return_storage_ptr__;
  }
  fVar3 = __real_3f800000 / SQRT(fVar4);
  fVar4 = (this->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar3 * fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar3 * fVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar3 * fVar2;
  return __return_storage_ptr__;
}

// GetSafeNormal @ 1417d6f20

TVector<double> * __thiscall
UE::Math::TVector<double>::GetSafeNormal
          (TVector<double> *this,TVector<double> *__return_storage_ptr__,double param_1,
          TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar2 = (this->field0_0x0)._s_0.Y;
  dVar3 = (this->field0_0x0)._s_0.Z;
  dVar4 = dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
  if (dVar4 == __real_3ff0000000000000) {
    dVar2 = (this->field0_0x0)._s_0.Y;
    dVar1 = (this->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (this->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
    return __return_storage_ptr__;
  }
  if (dVar4 < param_1) {
    dVar2 = (param_2->field0_0x0)._s_0.Y;
    dVar1 = (param_2->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
    return __return_storage_ptr__;
  }
  dVar4 = __real_3ff0000000000000 / SQRT(dVar4);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 * dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 * dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1 * dVar4;
  return __return_storage_ptr__;
}

// GetSignVector @ 1417d7bb0

TVector<float> * __thiscall
UE::Math::TVector<float>::GetSignVector(TVector<float> *this,TVector<float> *__return_storage_ptr__)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  pfVar1 = &(this->field0_0x0)._s_0.Z;
  fVar4 = __real_bf800000;
  if (0.0 < *pfVar1 || *pfVar1 == 0.0) {
    fVar4 = __real_3f800000;
  }
  pfVar1 = &(this->field0_0x0)._s_0.Y;
  fVar3 = __real_bf800000;
  if (0.0 < *pfVar1 || *pfVar1 == 0.0) {
    fVar3 = __real_3f800000;
  }
  fVar2 = __real_3f800000;
  if ((this->field0_0x0)._s_0.X <= 0.0 && (this->field0_0x0)._s_0.X != 0.0) {
    fVar2 = __real_bf800000;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar4;
  return __return_storage_ptr__;
}

// GetSignVector @ 1417d7c00

TVector<double> * __thiscall
UE::Math::TVector<double>::GetSignVector
          (TVector<double> *this,TVector<double> *__return_storage_ptr__)

{
  double *pdVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  pdVar1 = &(this->field0_0x0)._s_0.Z;
  uVar3 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  uVar4 = (undefined4)__real_bff0000000000000;
  uVar5 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  uVar6 = uVar4;
  uVar7 = uVar5;
  if (0.0 < *pdVar1 || *pdVar1 == 0.0) {
    uVar6 = (int)__real_3ff0000000000000;
    uVar7 = uVar3;
  }
  pdVar1 = &(this->field0_0x0)._s_0.Y;
  if (0.0 < *pdVar1 || *pdVar1 == 0.0) {
    uVar4 = (int)__real_3ff0000000000000;
    uVar5 = uVar3;
  }
  uVar2 = __real_3ff0000000000000;
  if ((this->field0_0x0)._s_0.X <= 0.0 && (this->field0_0x0)._s_0.X != 0.0) {
    uVar2 = __real_bff0000000000000;
  }
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = uVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)CONCAT44(uVar5,uVar4);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)CONCAT44(uVar7,uVar6);
  return __return_storage_ptr__;
}

// GetUnsafeNormal2D @ 1417d8f40

TVector<float> * __thiscall
UE::Math::TVector<float>::GetUnsafeNormal2D
          (TVector<float> *this,TVector<float> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  fVar3 = __real_3f800000 / SQRT(fVar2 * fVar2 + fVar1 * fVar1);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar3 * fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar3 * fVar1;
  return __return_storage_ptr__;
}

// GetUnsafeNormal2D @ 1417d8f90

TVector<double> * __thiscall
UE::Math::TVector<double>::GetUnsafeNormal2D
          (TVector<double> *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = __real_3ff0000000000000;
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar2 = (this->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  dVar3 = dVar3 / SQRT(dVar2 * dVar2 + dVar1 * dVar1);
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1 * dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 * dVar3;
  return __return_storage_ptr__;
}

// GetUnsafeNormal @ 1417d90e0

TVector<float> * __thiscall
UE::Math::TVector<float>::GetUnsafeNormal
          (TVector<float> *this,TVector<float> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Y;
  fVar3 = (this->field0_0x0)._s_0.Z;
  fVar4 = __real_3f800000 / SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar4 * fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar4 * fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar4 * fVar3;
  return __return_storage_ptr__;
}

// GridSnap @ 1417d96c0

TVector<float> * __thiscall
UE::Math::TVector<float>::GridSnap
          (TVector<float> *this,TVector<float> *__return_storage_ptr__,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  fVar1 = *param_1;
  fVar2 = (this->field0_0x0)._s_0.Z;
  fVar5 = fVar1 * __real_3f000000;
  fVar3 = (this->field0_0x0)._s_0.Y;
  if (fVar1 == 0.0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = (this->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2;
    return __return_storage_ptr__;
  }
  auVar4 = ZEXT416((uint)((fVar3 + fVar5) / fVar1));
  auVar7 = roundps(ZEXT416((uint)fVar2),ZEXT416((uint)((fVar5 + fVar2) / fVar1)),1);
  auVar6 = roundps(auVar4,auVar4,1);
  auVar4 = roundps(ZEXT816(0),ZEXT416((uint)((fVar5 + (this->field0_0x0)._s_0.X) / fVar1)),1);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar7._0_4_ * fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = auVar6._0_4_ * fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.X = auVar4._0_4_ * fVar1;
  return __return_storage_ptr__;
}

// GridSnap @ 1417d9750

TVector<double> * __thiscall
UE::Math::TVector<double>::GridSnap
          (TVector<double> *this,TVector<double> *__return_storage_ptr__,double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  dVar1 = *param_1;
  dVar2 = (this->field0_0x0)._s_0.Z;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar2;
  dVar5 = dVar1 * __real_3fe0000000000000;
  dVar3 = (this->field0_0x0)._s_0.Y;
  if (dVar1 == 0.0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = (this->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
    return __return_storage_ptr__;
  }
  auVar7._0_8_ = (dVar3 + dVar5) / dVar1;
  auVar7._8_8_ = 0;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (dVar5 + dVar2) / dVar1;
  auVar9 = roundpd(auVar6,auVar8,1);
  auVar8 = roundpd(auVar7,auVar7,1);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (dVar5 + (this->field0_0x0)._s_0.X) / dVar1;
  auVar6 = roundpd(ZEXT816(0),auVar4,1);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar9._0_8_ * dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = auVar8._0_8_ * dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.X = auVar6._0_8_ * dVar1;
  return __return_storage_ptr__;
}

// HeadingAngle @ 1417d9a80

float __thiscall UE::Math::TVector<float>::HeadingAngle(TVector<float> *this)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  float local_38;
  
  fVar3 = (float)((ulonglong)*(undefined8 *)&this->field0_0x0 >> 0x20);
  local_38 = (float)*(undefined8 *)&this->field0_0x0;
  fVar1 = fVar3 * fVar3 + local_38 * local_38;
  uVar2 = local_38;
  uVar4 = fVar3;
  if ((fVar1 != __real_3f800000) &&
     (uVar2 = ZeroVector.field0_0x0._s_0.X, uVar4 = ZeroVector.field0_0x0._s_0.Y,
     __real_322bcc77 <= fVar1)) {
    uVar2 = (__real_3f800000 / SQRT(fVar1)) * local_38;
    uVar4 = (__real_3f800000 / SQRT(fVar1)) * fVar3;
  }
  fVar1 = __real_bf800000;
  if ((__real_bf800000 <= (float)uVar2) && (fVar1 = (float)uVar2, __real_3f800000 <= (float)uVar2))
  {
    fVar1 = __real_3f800000;
  }
  fVar1 = acosf(fVar1);
  if ((float)uVar4 < 0.0) {
    fVar1 = (float)((uint)fVar1 ^ __xmm_80000000800000008000000080000000);
  }
  return fVar1;
}

// HeadingAngle @ 1417d9b60

double __thiscall UE::Math::TVector<double>::HeadingAngle(TVector<double> *this)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  
  dVar3 = (this->field0_0x0)._s_0.X;
  dVar2 = (this->field0_0x0)._s_0.Y;
  dVar4 = dVar2 * dVar2 + dVar3 * dVar3;
  uVar5 = dVar3;
  uVar1 = dVar2;
  if ((dVar4 != __real_3ff0000000000000) &&
     (uVar5 = ZeroVector.field0_0x0._s_0.X, uVar1 = ZeroVector.field0_0x0._s_0.Y,
     __real_3e45798ee0000000 <= dVar4)) {
    uVar5 = dVar3 * (__real_3ff0000000000000 / SQRT(dVar4));
    uVar1 = (__real_3ff0000000000000 / SQRT(dVar4)) * dVar2;
  }
  dVar3 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= (double)uVar5) &&
     (dVar3 = (double)uVar5, __real_3ff0000000000000 <= (double)uVar5)) {
    dVar3 = __real_3ff0000000000000;
  }
  dVar3 = acos(dVar3);
  if ((double)uVar1 < 0.0) {
    dVar3 = (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^
                             __xmm_80000000000000008000000000000000._4_4_,
                             SUB84(dVar3,0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  return dVar3;
}

// InitFromCompactString @ 1417d9fa0

bool __thiscall
UE::Math::TVector<float>::InitFromCompactString(TVector<float> *this,FString *param_1)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  wchar_t *pwVar6;
  short sVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  
  pwVar8 = L"";
  *(undefined8 *)((longlong)&this->field0_0x0 + 4) = 0;
  (this->field0_0x0)._s_0.X = 0.0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)pwVar6 == (FScriptContainerElement *)0x0) goto LAB_1417d9fde;
  }
  bVar2 = false;
  sVar1 = *pwVar6;
  while (sVar1 != 0) {
    pFVar9 = (FScriptContainerElement *)((longlong)pwVar6 + 2);
    sVar7 = sVar1 + -0x20;
    if (0x19 < (ushort)(sVar1 - 0x61U)) {
      sVar7 = sVar1;
    }
    if (((!bVar2) && (sVar7 == 0x56)) &&
       (iVar5 = FGenericPlatformStricmp::Strnicmp((wchar_t *)pFVar9,L"(0)",3), iVar5 == 0)) {
      if ((FScriptContainerElement *)pwVar6 != (FScriptContainerElement *)0x0) {
        return true;
      }
      break;
    }
    if (((ushort)(sVar7 - 0x41U) < 0x1a) || ((ushort)(sVar7 - 0x30U) < 10)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    pwVar6 = (wchar_t *)pFVar9;
    sVar1 = *(short *)pFVar9;
  }
LAB_1417d9fde:
  if ((param_1->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar2 = FParse::Value(pwVar6,L"X=",(float *)this);
  if ((param_1->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar3 = FParse::Value(pwVar6,L"Y=",&(this->field0_0x0)._s_0.Y);
  if ((param_1->Data).ArrayNum != 0) {
    pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar4 = FParse::Value(pwVar8,L"Z=",&(this->field0_0x0)._s_0.Z);
  return bVar4 || (bVar3 || bVar2);
}

// InitFromCompactString @ 1417da100

bool __thiscall
UE::Math::TVector<double>::InitFromCompactString(TVector<double> *this,FString *param_1)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  wchar_t *pwVar6;
  short sVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  
  pwVar8 = L"";
  (this->field0_0x0)._s_0.Z = 0.0;
  (this->field0_0x0)._s_0.Y = 0.0;
  (this->field0_0x0)._s_0.X = 0.0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)pwVar6 == (FScriptContainerElement *)0x0) goto LAB_1417da143;
  }
  bVar2 = false;
  sVar1 = *pwVar6;
  while (sVar1 != 0) {
    pFVar9 = (FScriptContainerElement *)((longlong)pwVar6 + 2);
    sVar7 = sVar1 + -0x20;
    if (0x19 < (ushort)(sVar1 - 0x61U)) {
      sVar7 = sVar1;
    }
    if (((!bVar2) && (sVar7 == 0x56)) &&
       (iVar5 = FGenericPlatformStricmp::Strnicmp((wchar_t *)pFVar9,L"(0)",3), iVar5 == 0)) {
      if ((FScriptContainerElement *)pwVar6 != (FScriptContainerElement *)0x0) {
        return true;
      }
      break;
    }
    if (((ushort)(sVar7 - 0x41U) < 0x1a) || ((ushort)(sVar7 - 0x30U) < 10)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    pwVar6 = (wchar_t *)pFVar9;
    sVar1 = *(short *)pFVar9;
  }
LAB_1417da143:
  if ((param_1->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar2 = FParse::Value(pwVar6,L"X=",(double *)this);
  if ((param_1->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar3 = FParse::Value(pwVar6,L"Y=",&(this->field0_0x0)._s_0.Y);
  if ((param_1->Data).ArrayNum != 0) {
    pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar4 = FParse::Value(pwVar8,L"Z=",&(this->field0_0x0)._s_0.Z);
  return bVar4 || (bVar3 || bVar2);
}

// InitFromString @ 1417dac60

bool __thiscall UE::Math::TVector<float>::InitFromString(TVector<float> *this,FString *param_1)

{
  float *pfVar1;
  float *pfVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  
  pfVar1 = &(this->field0_0x0)._s_0.Z;
  pfVar2 = &(this->field0_0x0)._s_0.Y;
  *pfVar1 = 0.0;
  *pfVar2 = 0.0;
  pwVar5 = L"";
  (this->field0_0x0)._s_0.X = 0.0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar3 = FParse::Value(pwVar4,L"X=",(float *)this);
  if (bVar3) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar3 = FParse::Value(pwVar4,L"Y=",pfVar2);
    if (bVar3) {
      if ((param_1->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      bVar3 = FParse::Value(pwVar5,L"Z=",pfVar1);
      if (bVar3) {
        return true;
      }
    }
  }
  return false;
}

// InitFromString @ 1417dad20

bool __thiscall UE::Math::TVector<double>::InitFromString(TVector<double> *this,FString *param_1)

{
  double *pdVar1;
  double *pdVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  
  pdVar1 = &(this->field0_0x0)._s_0.Z;
  pdVar2 = &(this->field0_0x0)._s_0.Y;
  *pdVar1 = 0.0;
  *pdVar2 = 0.0;
  pwVar5 = L"";
  (this->field0_0x0)._s_0.X = 0.0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar3 = FParse::Value(pwVar4,L"X=",(double *)this);
  if (bVar3) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar3 = FParse::Value(pwVar4,L"Y=",pdVar2);
    if (bVar3) {
      if ((param_1->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      bVar3 = FParse::Value(pwVar5,L"Z=",pdVar1);
      if (bVar3) {
        return true;
      }
    }
  }
  return false;
}

// IsNearlyZero @ 1417de330

bool __thiscall UE::Math::TVector<float>::IsNearlyZero(TVector<float> *this,float param_1)

{
  if ((((float)((uint)(this->field0_0x0)._s_0.X & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_1
       ) && ((float)((uint)(this->field0_0x0)._s_0.Y & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
             param_1)) &&
     ((float)((uint)(this->field0_0x0)._s_0.Z & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_1))
  {
    return true;
  }
  return false;
}

// IsNearlyZero @ 1417de370

bool __thiscall UE::Math::TVector<double>::IsNearlyZero(TVector<double> *this,double param_1)

{
  undefined8 uVar1;
  
  if ((((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->field0_0x0 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)*(undefined8 *)&this->field0_0x0 &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_1) &&
      (uVar1 = *(undefined8 *)((longlong)&this->field0_0x0 + 8),
      (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_1)) &&
     (uVar1 = *(undefined8 *)((longlong)&this->field0_0x0 + 0x10),
     (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_1)) {
    return true;
  }
  return false;
}

// IsNormalized @ 1417de490

bool __thiscall UE::Math::TVector<float>::IsNormalized(TVector<float> *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Y;
  fVar3 = (this->field0_0x0)._s_0.Z;
  return (float)((uint)(__real_3f800000 - (fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3)) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_3c23d70a;
}

// IsNormalized @ 1417de4e0

bool __thiscall UE::Math::TVector<double>::IsNormalized(TVector<double> *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = (this->field0_0x0)._s_0.X;
  dVar1 = (this->field0_0x0)._s_0.Y;
  dVar2 = (this->field0_0x0)._s_0.Z;
  dVar3 = __real_3ff0000000000000 - (dVar1 * dVar1 + dVar3 * dVar3 + dVar2 * dVar2);
  return (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
         __real_3f847ae140000000;
}

// IsUniform @ 1417de6a0

bool __thiscall UE::Math::TVector<float>::IsUniform(TVector<float> *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Y;
  if ((((float)((uint)(fVar1 - fVar2) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_1) &&
      (fVar3 = (this->field0_0x0)._s_0.Z,
      (float)((uint)(fVar1 - fVar3) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_1)) &&
     ((float)((uint)(fVar2 - fVar3) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_1)) {
    return true;
  }
  return false;
}

// IsUniform @ 1417de6f0

bool __thiscall UE::Math::TVector<double>::IsUniform(TVector<double> *this,double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = (this->field0_0x0)._s_0.X;
  dVar2 = (this->field0_0x0)._s_0.Y;
  dVar1 = dVar3 - dVar2;
  if ((((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_1)
      && (dVar1 = (this->field0_0x0)._s_0.Z, dVar3 = dVar3 - dVar1,
         (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_1)
      ) && (dVar2 = dVar2 - dVar1,
           (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
           param_1)) {
    return true;
  }
  return false;
}

// IsUnit @ 1417de7e0

bool __thiscall UE::Math::TVector<float>::IsUnit(TVector<float> *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Y;
  fVar3 = (this->field0_0x0)._s_0.Z;
  return (float)((uint)(__real_3f800000 - (fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3)) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) < param_1;
}

// IsUnit @ 1417de830

bool __thiscall UE::Math::TVector<double>::IsUnit(TVector<double> *this,double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = (this->field0_0x0)._s_0.X;
  dVar1 = (this->field0_0x0)._s_0.Y;
  dVar2 = (this->field0_0x0)._s_0.Z;
  dVar3 = __real_3ff0000000000000 - (dVar1 * dVar1 + dVar3 * dVar3 + dVar2 * dVar2);
  return (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) < param_1;
}

// IsValidIndex @ 1417deb10

bool __thiscall UE::Math::TVector<float>::IsValidIndex(TVector<float> *this,int param_1)

{
  return (uint)param_1 < 3;
}

// IsZero @ 1417deca0

bool __thiscall UE::Math::TVector<float>::IsZero(TVector<float> *this)

{
  if ((((this->field0_0x0)._s_0.X == 0.0) && ((this->field0_0x0)._s_0.Y == 0.0)) &&
     ((this->field0_0x0)._s_0.Z == 0.0)) {
    return true;
  }
  return false;
}

// IsZero @ 1417decc0

bool __thiscall UE::Math::TVector<double>::IsZero(TVector<double> *this)

{
  if ((((this->field0_0x0)._s_0.X == 0.0) && ((this->field0_0x0)._s_0.Y == 0.0)) &&
     ((this->field0_0x0)._s_0.Z == 0.0)) {
    return true;
  }
  return false;
}

// Length @ 1417dfaa0

float __thiscall UE::Math::TVector<float>::Length(TVector<float> *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Y;
  fVar3 = (this->field0_0x0)._s_0.Z;
  return SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
}

// Length @ 1417dfad0

double __thiscall UE::Math::TVector<double>::Length(TVector<double> *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar2 = (this->field0_0x0)._s_0.Y;
  dVar3 = (this->field0_0x0)._s_0.Z;
  auVar4._0_8_ = dVar1 * dVar1;
  auVar4._8_8_ = 0;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar2 * dVar2 + auVar4._0_8_ + dVar3 * dVar3;
  auVar5 = sqrtpd(auVar4,auVar5);
  return auVar5._0_8_;
}

// Max3 @ 1417e4110

TVector<float> * __cdecl
UE::Math::TVector<float>::Max3
          (TVector<float> *__return_storage_ptr__,TVector<float> *param_1,TVector<float> *param_2,
          TVector<float> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (param_1->field0_0x0)._s_0.X;
  fVar3 = (param_2->field0_0x0)._s_0.X;
  if (fVar2 <= fVar3) {
    fVar2 = fVar3;
  }
  fVar3 = (param_1->field0_0x0)._s_0.Y;
  fVar1 = (param_2->field0_0x0)._s_0.Y;
  if (fVar3 <= fVar1) {
    fVar3 = fVar1;
  }
  fVar1 = (param_3->field0_0x0)._s_0.X;
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar1 = (param_3->field0_0x0)._s_0.Y;
  if (fVar3 <= fVar1) {
    fVar3 = fVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar2;
  fVar2 = (param_1->field0_0x0)._s_0.Z;
  fVar1 = (param_2->field0_0x0)._s_0.Z;
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar3;
  fVar3 = (param_3->field0_0x0)._s_0.Z;
  if (fVar2 <= fVar3) {
    fVar2 = fVar3;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2;
  return __return_storage_ptr__;
}

// Max3 @ 1417e4160

TVector<double> * __cdecl
UE::Math::TVector<double>::Max3
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          ,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.X;
  if (dVar2 <= dVar3) {
    dVar2 = dVar3;
  }
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  if (dVar3 <= dVar1) {
    dVar3 = dVar1;
  }
  dVar1 = (param_3->field0_0x0)._s_0.X;
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  if (dVar3 <= dVar1) {
    dVar3 = dVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  dVar3 = (param_3->field0_0x0)._s_0.Z;
  if (dVar2 <= dVar3) {
    dVar2 = dVar3;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// Max @ 1417e4210

TVector<float> * __cdecl
UE::Math::TVector<float>::Max
          (TVector<float> *__return_storage_ptr__,TVector<float> *param_1,TVector<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (param_1->field0_0x0)._s_0.X;
  fVar3 = (param_2->field0_0x0)._s_0.X;
  if (fVar2 <= fVar3) {
    fVar2 = fVar3;
  }
  fVar3 = (param_1->field0_0x0)._s_0.Y;
  fVar1 = (param_2->field0_0x0)._s_0.Y;
  if (fVar3 <= fVar1) {
    fVar3 = fVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar2;
  fVar2 = (param_1->field0_0x0)._s_0.Z;
  fVar1 = (param_2->field0_0x0)._s_0.Z;
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2;
  return __return_storage_ptr__;
}

// Max @ 1417e4250

TVector<double> * __cdecl
UE::Math::TVector<double>::Max
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          )

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.X;
  if (dVar2 <= dVar3) {
    dVar2 = dVar3;
  }
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  if (dVar3 <= dVar1) {
    dVar3 = dVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// Min3 @ 1417e44e0

TVector<float> * __cdecl
UE::Math::TVector<float>::Min3
          (TVector<float> *__return_storage_ptr__,TVector<float> *param_1,TVector<float> *param_2,
          TVector<float> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (param_1->field0_0x0)._s_0.X;
  fVar3 = (param_2->field0_0x0)._s_0.X;
  if (fVar3 <= fVar2) {
    fVar2 = fVar3;
  }
  fVar3 = (param_1->field0_0x0)._s_0.Y;
  fVar1 = (param_2->field0_0x0)._s_0.Y;
  if (fVar1 <= fVar3) {
    fVar3 = fVar1;
  }
  fVar1 = (param_3->field0_0x0)._s_0.X;
  if (fVar1 <= fVar2) {
    fVar2 = fVar1;
  }
  fVar1 = (param_3->field0_0x0)._s_0.Y;
  if (fVar1 <= fVar3) {
    fVar3 = fVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar2;
  fVar2 = (param_1->field0_0x0)._s_0.Z;
  fVar1 = (param_2->field0_0x0)._s_0.Z;
  if (fVar1 <= fVar2) {
    fVar2 = fVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar3;
  fVar3 = (param_3->field0_0x0)._s_0.Z;
  if (fVar3 <= fVar2) {
    fVar2 = fVar3;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2;
  return __return_storage_ptr__;
}

// Min3 @ 1417e4530

TVector<double> * __cdecl
UE::Math::TVector<double>::Min3
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          ,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.X;
  if (dVar3 <= dVar2) {
    dVar2 = dVar3;
  }
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  if (dVar1 <= dVar3) {
    dVar3 = dVar1;
  }
  dVar1 = (param_3->field0_0x0)._s_0.X;
  if (dVar1 <= dVar2) {
    dVar2 = dVar1;
  }
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  if (dVar1 <= dVar3) {
    dVar3 = dVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  if (dVar1 <= dVar2) {
    dVar2 = dVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  dVar3 = (param_3->field0_0x0)._s_0.Z;
  if (dVar3 <= dVar2) {
    dVar2 = dVar3;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// Min @ 1417e45e0

TVector<float> * __cdecl
UE::Math::TVector<float>::Min
          (TVector<float> *__return_storage_ptr__,TVector<float> *param_1,TVector<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (param_1->field0_0x0)._s_0.X;
  fVar3 = (param_2->field0_0x0)._s_0.X;
  if (fVar3 <= fVar2) {
    fVar2 = fVar3;
  }
  fVar3 = (param_1->field0_0x0)._s_0.Y;
  fVar1 = (param_2->field0_0x0)._s_0.Y;
  if (fVar1 <= fVar3) {
    fVar3 = fVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar2;
  fVar2 = (param_1->field0_0x0)._s_0.Z;
  fVar1 = (param_2->field0_0x0)._s_0.Z;
  if (fVar1 <= fVar2) {
    fVar2 = fVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2;
  return __return_storage_ptr__;
}

// Min @ 1417e4620

TVector<double> * __cdecl
UE::Math::TVector<double>::Min
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          )

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.X;
  if (dVar3 <= dVar2) {
    dVar2 = dVar3;
  }
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  if (dVar1 <= dVar3) {
    dVar3 = dVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  if (dVar1 <= dVar2) {
    dVar2 = dVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// MirrorByPlane @ 1417e4c60

TVector<float> * __thiscall
UE::Math::TVector<float>::MirrorByPlane
          (TVector<float> *this,TVector<float> *__return_storage_ptr__,TPlane<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = *(float *)((longlong)&param_1->_padding_ + 4);
  fVar3 = (this->field0_0x0)._s_0.Y;
  fVar4 = (this->field0_0x0)._s_0.Z;
  fVar6 = (fVar2 * fVar3 + fVar1 * *(float *)&param_1->_padding_ + (float)param_1->_padding_ * fVar4
          ) - param_1->W;
  fVar6 = fVar6 + fVar6;
  fVar5 = *(float *)&param_1->_padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar4 - fVar6 * (float)param_1->_padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar1 - fVar6 * fVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar3 - fVar6 * fVar2;
  return __return_storage_ptr__;
}

// MirrorByPlane @ 1417e4d00

TVector<double> * __thiscall
UE::Math::TVector<double>::MirrorByPlane
          (TVector<double> *this,TVector<double> *__return_storage_ptr__,TPlane<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar2 = (this->field0_0x0)._s_0.Y;
  dVar3 = (this->field0_0x0)._s_0.Z;
  dVar6 = ((double)param_1->_padding_ * dVar2 + dVar1 * (double)param_1->_padding_ +
          (double)param_1->_padding_ * dVar3) - param_1->W;
  dVar6 = dVar6 + dVar6;
  dVar4 = (double)param_1->_padding_;
  dVar5 = (double)param_1->_padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 - dVar6 * (double)param_1->_padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1 - dVar6 * dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 - dVar6 * dVar5;
  return __return_storage_ptr__;
}

// MirrorByVector @ 1417e4da0

TVector<float> * __thiscall
UE::Math::TVector<float>::MirrorByVector
          (TVector<float> *this,TVector<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (param_1->field0_0x0)._s_0.X;
  fVar2 = (param_1->field0_0x0)._s_0.Y;
  fVar3 = (this->field0_0x0)._s_0.X;
  fVar4 = (this->field0_0x0)._s_0.Y;
  fVar5 = (this->field0_0x0)._s_0.Z;
  fVar6 = fVar2 * fVar4 + fVar1 * fVar3;
  fVar6 = (fVar5 + fVar5) * (param_1->field0_0x0)._s_0.Z + fVar6 + fVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar5 - fVar6 * (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar4 - fVar6 * fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar3 - fVar6 * fVar1;
  return __return_storage_ptr__;
}

// MirrorByVector @ 1417e4e40

TVector<double> * __thiscall
UE::Math::TVector<double>::MirrorByVector
          (TVector<double> *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar2 = (this->field0_0x0)._s_0.Y;
  dVar3 = (this->field0_0x0)._s_0.Z;
  dVar6 = (param_1->field0_0x0)._s_0.Y * dVar2 + (param_1->field0_0x0)._s_0.X * dVar1;
  dVar6 = (dVar3 + dVar3) * (param_1->field0_0x0)._s_0.Z + dVar6 + dVar6;
  dVar4 = (param_1->field0_0x0)._s_0.Z;
  dVar5 = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 - dVar6 * (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 - dVar6 * dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1 - dVar6 * dVar5;
  return __return_storage_ptr__;
}

// NetSerialize @ 1417e69b0

bool __thiscall
UE::Math::TVector<float>::NetSerialize
          (TVector<float> *this,FArchive *param_1,UPackageMap *param_2,bool *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  FArchive *pFVar7;
  float local_res10 [2];
  float local_18;
  float local_14 [3];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEngineNetworkCustomVersion::Guid);
  uVar5 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1);
  if ((0x15 < uVar5) && (iVar6 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1), iVar6 != 0x1a)
     ) {
    pFVar7 = ::operator<<(param_1,(float *)this);
    pFVar7 = ::operator<<(pFVar7,&(this->field0_0x0)._s_0.Y);
    ::operator<<(pFVar7,&(this->field0_0x0)._s_0.Z);
    return true;
  }
  if (((param_1->field_0x28 & 1) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x4b5,L"float -> double conversion applied outside of load!"), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
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
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_18);
    }
  }
  else {
    local_18 = *(float *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_14,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_14);
    }
  }
  else {
    local_14[0] = *(float *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  (this->field0_0x0)._s_0.X = local_res10[0];
  (this->field0_0x0)._s_0.Z = local_14[0];
  (this->field0_0x0)._s_0.Y = local_18;
  return true;
}

// NetSerialize @ 1417e6b60

bool __thiscall
UE::Math::TVector<double>::NetSerialize
          (TVector<double> *this,FArchive *param_1,UPackageMap *param_2,bool *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  FArchive *pFVar7;
  float local_res10 [2];
  float local_18;
  float local_14 [3];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEngineNetworkCustomVersion::Guid);
  uVar5 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1);
  if ((0x15 < uVar5) && (iVar6 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1), iVar6 != 0x1a)
     ) {
    pFVar7 = ::operator<<(param_1,(double *)this);
    pFVar7 = ::operator<<(pFVar7,&(this->field0_0x0)._s_0.Y);
    ::operator<<(pFVar7,&(this->field0_0x0)._s_0.Z);
    return true;
  }
  if (((param_1->field_0x28 & 1) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x4b5,L"float -> double conversion applied outside of load!"), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
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
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_18);
    }
  }
  else {
    local_18 = *(float *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_14,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_14);
    }
  }
  else {
    local_14[0] = *(float *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  (this->field0_0x0)._s_0.X = (double)local_res10[0];
  (this->field0_0x0)._s_0.Y = (double)local_18;
  (this->field0_0x0)._s_0.Z = (double)local_14[0];
  return true;
}

// Normalize @ 1417e7620

bool __thiscall UE::Math::TVector<float>::Normalize(TVector<float> *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Z;
  fVar3 = (this->field0_0x0)._s_0.Y;
  fVar3 = fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2;
  if (param_1 < fVar3) {
    fVar3 = __real_3f800000 / SQRT(fVar3);
    (this->field0_0x0)._s_0.X = fVar3 * fVar1;
    (this->field0_0x0)._s_0.Y = fVar3 * (this->field0_0x0)._s_0.Y;
    (this->field0_0x0)._s_0.Z = fVar3 * fVar2;
    return true;
  }
  return false;
}

// Normalize @ 1417e7690

bool __thiscall UE::Math::TVector<double>::Normalize(TVector<double> *this,double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar2 = (this->field0_0x0)._s_0.Y;
  dVar3 = (this->field0_0x0)._s_0.Z;
  dVar4 = dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
  if (param_1 < dVar4) {
    dVar4 = __real_3ff0000000000000 / SQRT(dVar4);
    (this->field0_0x0)._s_0.X = dVar1 * dVar4;
    (this->field0_0x0)._s_0.Y = dVar2 * dVar4;
    (this->field0_0x0)._s_0.Z = dVar3 * dVar4;
    return true;
  }
  return false;
}

// One @ 1417e8130

TVector<float> * __cdecl UE::Math::TVector<float>::One(TVector<float> *__return_storage_ptr__)

{
  undefined4 uVar1;
  
  uVar1 = OneVector.field0_0x0._s_0.Z;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = OneVector.field0_0x0._0_8_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)uVar1;
  return __return_storage_ptr__;
}

// One @ 1417e8150

TVector<double> * __cdecl UE::Math::TVector<double>::One(TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = OneVector.field0_0x0._s_0.Z;
  uVar1 = OneVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = OneVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)uVar2;
  return __return_storage_ptr__;
}

// Orthogonal @ 1417e8590

bool __cdecl
UE::Math::TVector<float>::Orthogonal(TVector<float> *param_1,TVector<float> *param_2,float param_3)

{
  return (float)((uint)((param_1->field0_0x0)._s_0.Y * (param_2->field0_0x0)._s_0.Y +
                        (param_1->field0_0x0)._s_0.X * (param_2->field0_0x0)._s_0.X +
                       (param_1->field0_0x0)._s_0.Z * (param_2->field0_0x0)._s_0.Z) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_3;
}

// Orthogonal @ 1417e85d0

bool __cdecl
UE::Math::TVector<double>::Orthogonal
          (TVector<double> *param_1,TVector<double> *param_2,double param_3)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y * (param_2->field0_0x0)._s_0.Y +
          (param_1->field0_0x0)._s_0.X * (param_2->field0_0x0)._s_0.X +
          (param_1->field0_0x0)._s_0.Z * (param_2->field0_0x0)._s_0.Z;
  return (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_3;
}

// Parallel @ 1417e8a00

bool __cdecl
UE::Math::TVector<float>::Parallel(TVector<float> *param_1,TVector<float> *param_2,float param_3)

{
  return param_3 <=
         (float)((uint)((param_1->field0_0x0)._s_0.Y * (param_2->field0_0x0)._s_0.Y +
                        (param_1->field0_0x0)._s_0.X * (param_2->field0_0x0)._s_0.X +
                       (param_1->field0_0x0)._s_0.Z * (param_2->field0_0x0)._s_0.Z) &
                __xmm_7fffffff7fffffff7fffffff7fffffff);
}

// Parallel @ 1417e8a40

bool __cdecl
UE::Math::TVector<double>::Parallel
          (TVector<double> *param_1,TVector<double> *param_2,double param_3)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y * (param_2->field0_0x0)._s_0.Y +
          (param_1->field0_0x0)._s_0.X * (param_2->field0_0x0)._s_0.X +
          (param_1->field0_0x0)._s_0.Z * (param_2->field0_0x0)._s_0.Z;
  return param_3 <=
         (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
}

// PointPlaneDist @ 1417ea440

float __cdecl
UE::Math::TVector<float>::PointPlaneDist
          (TVector<float> *param_1,TVector<float> *param_2,TVector<float> *param_3)

{
  return ((param_1->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y) *
         (param_3->field0_0x0)._s_0.Y +
         ((param_1->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X) *
         (param_3->field0_0x0)._s_0.X +
         ((param_1->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z) *
         (param_3->field0_0x0)._s_0.Z;
}

// PointPlaneDist @ 1417ea480

double __cdecl
UE::Math::TVector<double>::PointPlaneDist
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  return ((param_1->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y) *
         (param_3->field0_0x0)._s_0.Y +
         ((param_1->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X) *
         (param_3->field0_0x0)._s_0.X +
         ((param_1->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z) *
         (param_3->field0_0x0)._s_0.Z;
}

// PointPlaneProject @ 1417ea4c0

TVector<float> * __cdecl
UE::Math::TVector<float>::PointPlaneProject
          (TVector<float> *__return_storage_ptr__,TVector<float> *param_1,TVector<float> *param_2,
          TVector<float> *param_3,TVector<float> *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fStack_84;
  float local_78;
  
  fVar10 = (float)*(undefined8 *)&param_2->field0_0x0;
  fVar3 = (float)*(undefined8 *)&param_4->field0_0x0 - fVar10;
  fStack_84 = (float)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20);
  fVar8 = (float)((ulonglong)*(undefined8 *)&param_4->field0_0x0 >> 0x20) - fStack_84;
  fVar5 = (float)*(undefined8 *)&param_3->field0_0x0 - fVar10;
  fVar6 = (param_2->field0_0x0)._s_0.Z;
  fVar2 = (param_3->field0_0x0)._s_0.Z - fVar6;
  fVar4 = (float)((ulonglong)*(undefined8 *)&param_3->field0_0x0 >> 0x20) - fStack_84;
  fVar1 = (param_4->field0_0x0)._s_0.Z - fVar6;
  fVar7 = fVar3 * fVar2 - fVar1 * fVar5;
  local_78 = fVar1 * fVar4 - fVar8 * fVar2;
  uVar9 = fVar8 * fVar5 - fVar3 * fVar4;
  fVar1 = fVar7 * fVar7 + local_78 * local_78 + (float)uVar9 * (float)uVar9;
  if (fVar1 != __real_3f800000) {
    if (__real_322bcc77 <= fVar1) {
      fVar1 = __real_3f800000 / SQRT(fVar1);
      local_78 = local_78 * fVar1;
      fVar7 = fVar7 * fVar1;
      uVar9 = (float)uVar9 * fVar1;
    }
    else {
      fVar7 = (float)((ulonglong)ZeroVector.field0_0x0._0_8_ >> 0x20);
      local_78 = (float)ZeroVector.field0_0x0._0_8_;
      uVar9 = ZeroVector.field0_0x0._s_0.Z;
    }
  }
  fVar1 = (param_1->field0_0x0)._s_0.Z;
  fVar2 = (param_1->field0_0x0)._s_0.X;
  fVar3 = (param_1->field0_0x0)._s_0.Y;
  fVar6 = (fVar3 * fVar7 + fVar2 * local_78 + fVar1 * (float)uVar9) -
          (fVar7 * fStack_84 + fVar10 * local_78 + (float)uVar9 * fVar6);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1 - fVar6 * (float)uVar9;
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar2 - fVar6 * local_78;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar3 - fVar6 * fVar7;
  return __return_storage_ptr__;
}

// PointPlaneProject @ 1417ea6f0

TVector<float> * __cdecl
UE::Math::TVector<float>::PointPlaneProject
          (TVector<float> *__return_storage_ptr__,TVector<float> *param_1,TVector<float> *param_2,
          TVector<float> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (param_1->field0_0x0)._s_0.X;
  fVar2 = (param_1->field0_0x0)._s_0.Y;
  fVar3 = (param_1->field0_0x0)._s_0.Z;
  fVar6 = (fVar2 - (param_2->field0_0x0)._s_0.Y) * (param_3->field0_0x0)._s_0.Y +
          (fVar1 - (param_2->field0_0x0)._s_0.X) * (param_3->field0_0x0)._s_0.X +
          (fVar3 - (param_2->field0_0x0)._s_0.Z) * (param_3->field0_0x0)._s_0.Z;
  fVar4 = (param_3->field0_0x0)._s_0.Z;
  fVar5 = (param_3->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar2 - fVar6 * (param_3->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar3 - fVar6 * fVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar1 - fVar6 * fVar5;
  return __return_storage_ptr__;
}

// PointPlaneProject @ 1417ea790

TVector<float> * __cdecl
UE::Math::TVector<float>::PointPlaneProject
          (TVector<float> *__return_storage_ptr__,TVector<float> *param_1,TPlane<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (param_1->field0_0x0)._s_0.X;
  fVar2 = (param_1->field0_0x0)._s_0.Y;
  fVar3 = (param_1->field0_0x0)._s_0.Z;
  fVar6 = (fVar2 * *(float *)((longlong)&param_2->_padding_ + 4) +
           fVar1 * *(float *)&param_2->_padding_ + fVar3 * (float)param_2->_padding_) - param_2->W;
  fVar4 = *(float *)&param_2->_padding_;
  fVar5 = *(float *)((longlong)&param_2->_padding_ + 4);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar3 - fVar6 * (float)param_2->_padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar1 - fVar6 * fVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar2 - fVar6 * fVar5;
  return __return_storage_ptr__;
}

// PointPlaneProject @ 1417ea830

TVector<double> * __cdecl
UE::Math::TVector<double>::PointPlaneProject
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          ,TVector<double> *param_3,TVector<double> *param_4)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar6 = (param_2->field0_0x0)._s_0.X;
  dVar7 = (param_2->field0_0x0)._s_0.Y;
  dVar10 = (param_3->field0_0x0)._s_0.X - dVar6;
  dVar13 = (param_2->field0_0x0)._s_0.Z;
  dVar9 = (param_3->field0_0x0)._s_0.Z - dVar13;
  dVar12 = (param_3->field0_0x0)._s_0.Y - dVar7;
  dVar11 = (param_4->field0_0x0)._s_0.Z - dVar13;
  dVar8 = (param_4->field0_0x0)._s_0.X - dVar6;
  dVar2 = (param_4->field0_0x0)._s_0.Y - dVar7;
  dVar1 = dVar8 * dVar9 - dVar11 * dVar10;
  dVar9 = dVar11 * dVar12 - dVar2 * dVar9;
  dVar2 = dVar2 * dVar10 - dVar8 * dVar12;
  dVar8 = dVar1 * dVar1 + dVar9 * dVar9 + dVar2 * dVar2;
  uVar3 = dVar1;
  uVar4 = dVar9;
  uVar5 = dVar2;
  if ((dVar8 != __real_3ff0000000000000) &&
     (uVar3 = ZeroVector.field0_0x0._s_0.Y, uVar4 = ZeroVector.field0_0x0._s_0.X,
     uVar5 = ZeroVector.field0_0x0._s_0.Z, __real_3e45798ee0000000 <= dVar8)) {
    dVar8 = __real_3ff0000000000000 / SQRT(dVar8);
    uVar3 = dVar1 * dVar8;
    uVar4 = dVar9 * dVar8;
    uVar5 = dVar2 * dVar8;
  }
  dVar9 = (param_1->field0_0x0)._s_0.Z;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar13 = (dVar2 * (double)uVar3 + dVar1 * (double)uVar4 + dVar9 * (double)uVar5) -
           ((double)uVar3 * dVar7 + dVar6 * (double)uVar4 + (double)uVar5 * dVar13);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar9 - dVar13 * (double)uVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1 - dVar13 * (double)uVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 - dVar13 * (double)uVar3;
  return __return_storage_ptr__;
}

// PointPlaneProject @ 1417eaa20

TVector<double> * __cdecl
UE::Math::TVector<double>::PointPlaneProject
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          ,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  dVar6 = (dVar2 - (param_2->field0_0x0)._s_0.Y) * (param_3->field0_0x0)._s_0.Y +
          (dVar1 - (param_2->field0_0x0)._s_0.X) * (param_3->field0_0x0)._s_0.X +
          (dVar3 - (param_2->field0_0x0)._s_0.Z) * (param_3->field0_0x0)._s_0.Z;
  dVar4 = (param_3->field0_0x0)._s_0.Z;
  dVar5 = (param_3->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 - dVar6 * (param_3->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 - dVar6 * dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1 - dVar6 * dVar5;
  return __return_storage_ptr__;
}

// PointPlaneProject @ 1417eaac0

TVector<double> * __cdecl
UE::Math::TVector<double>::PointPlaneProject
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TPlane<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  dVar6 = (dVar2 * (double)param_2->_padding_ + dVar1 * (double)param_2->_padding_ +
          dVar3 * (double)param_2->_padding_) - param_2->W;
  dVar4 = (double)param_2->_padding_;
  dVar5 = (double)param_2->_padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 - dVar6 * (double)param_2->_padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1 - dVar6 * dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 - dVar6 * dVar5;
  return __return_storage_ptr__;
}

// PointsAreNear @ 1417eae40

bool __cdecl
UE::Math::TVector<float>::PointsAreNear
          (TVector<float> *param_1,TVector<float> *param_2,float param_3)

{
  if (((float)((uint)((param_1->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X) &
              __xmm_7fffffff7fffffff7fffffff7fffffff) < param_3) &&
     ((float)((uint)((param_1->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) < param_3)) {
    return (float)((uint)((param_1->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff) < param_3;
  }
  return false;
}

// PointsAreNear @ 1417eae90

bool __cdecl
UE::Math::TVector<double>::PointsAreNear
          (TVector<double> *param_1,TVector<double> *param_2,double param_3)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  if (((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) < param_3) &&
     (dVar1 = (param_1->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y,
     (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) < param_3)) {
    dVar1 = (param_1->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
    return (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) < param_3
    ;
  }
  return false;
}

// PointsAreSame @ 1417eaee0

bool __cdecl
UE::Math::TVector<float>::PointsAreSame(TVector<float> *param_1,TVector<float> *param_2)

{
  float fVar1;
  
  fVar1 = (param_1->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  if ((((__real_b7a7c5ac < fVar1) && (fVar1 < __real_37a7c5ac)) &&
      (fVar1 = (param_1->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y, __real_b7a7c5ac < fVar1)
      ) && ((fVar1 < __real_37a7c5ac &&
            (fVar1 = (param_1->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z,
            __real_b7a7c5ac < fVar1)))) {
    return fVar1 < __real_37a7c5ac;
  }
  return false;
}

// PointsAreSame @ 1417eaf40

bool __cdecl
UE::Math::TVector<double>::PointsAreSame(TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  if ((((__real_bef4f8b580000000 < dVar1) && (dVar1 < __real_3ef4f8b580000000)) &&
      (dVar1 = (param_1->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y,
      __real_bef4f8b580000000 < dVar1)) &&
     ((dVar1 < __real_3ef4f8b580000000 &&
      (dVar1 = (param_1->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z,
      __real_bef4f8b580000000 < dVar1)))) {
    return dVar1 < __real_3ef4f8b580000000;
  }
  return false;
}

// ProjectOnTo @ 1417eeb30

TVector<float> * __thiscall
UE::Math::TVector<float>::ProjectOnTo
          (TVector<float> *this,TVector<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (param_1->field0_0x0)._s_0.X;
  fVar2 = (param_1->field0_0x0)._s_0.Y;
  fVar3 = (param_1->field0_0x0)._s_0.Z;
  fVar4 = (fVar2 * (this->field0_0x0)._s_0.Y + fVar1 * (this->field0_0x0)._s_0.X +
          fVar3 * (this->field0_0x0)._s_0.Z) / (fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar4 * fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar4 * fVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar4 * fVar2;
  return __return_storage_ptr__;
}

// ProjectOnTo @ 1417eebc0

TVector<double> * __thiscall
UE::Math::TVector<double>::ProjectOnTo
          (TVector<double> *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  dVar4 = (dVar2 * (this->field0_0x0)._s_0.Y + dVar1 * (this->field0_0x0)._s_0.X +
          dVar3 * (this->field0_0x0)._s_0.Z) / (dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar4 * dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar4 * dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4 * dVar2;
  return __return_storage_ptr__;
}

// ProjectOnToNormal @ 1417eec50

TVector<float> * __thiscall
UE::Math::TVector<float>::ProjectOnToNormal
          (TVector<float> *this,TVector<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (param_1->field0_0x0)._s_0.X;
  fVar2 = (param_1->field0_0x0)._s_0.Y;
  fVar3 = (param_1->field0_0x0)._s_0.Z;
  fVar4 = fVar2 * (this->field0_0x0)._s_0.Y + fVar1 * (this->field0_0x0)._s_0.X +
          fVar3 * (this->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar4 * fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar4 * fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar4 * fVar3;
  return __return_storage_ptr__;
}

// ProjectOnToNormal @ 1417eecb0

TVector<double> * __thiscall
UE::Math::TVector<double>::ProjectOnToNormal
          (TVector<double> *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  
  dVar4 = (param_1->field0_0x0)._s_0.Y * (this->field0_0x0)._s_0.Y +
          (param_1->field0_0x0)._s_0.X * (this->field0_0x0)._s_0.X +
          (param_1->field0_0x0)._s_0.Z * (this->field0_0x0)._s_0.Z;
  dVar3 = (param_1->field0_0x0)._s_0.Y * dVar4;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = (param_1->field0_0x0)._s_0.X * dVar4;
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar4 * dVar1;
  return __return_storage_ptr__;
}

// Projection @ 1417eed00

TVector<float> * __thiscall
UE::Math::TVector<float>::Projection(TVector<float> *this,TVector<float> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  
  fVar2 = __real_3f800000 / (this->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 1.0;
  fVar1 = (this->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar2 * (this->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar2 * fVar1;
  return __return_storage_ptr__;
}

// Projection @ 1417eed40

TVector<double> * __thiscall
UE::Math::TVector<double>::Projection(TVector<double> *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = __real_3ff0000000000000 / (this->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 1.0;
  dVar1 = (this->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2 * (this->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 * dVar1;
  return __return_storage_ptr__;
}

// RadiansToDegrees @ 1417ef940

TVector<float> * __cdecl
UE::Math::TVector<float>::RadiansToDegrees
          (TVector<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = __real_42652ee0;
  fVar3 = (param_1->field0_0x0)._s_0.Z * __real_42652ee0;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X * __real_42652ee0;
  fVar1 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar1 * fVar2;
  return __return_storage_ptr__;
}

// RadiansToDegrees @ 1417ef980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __cdecl
UE::Math::TVector<double>::RadiansToDegrees
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = _UNK_1506896a8 * (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z * __real_404ca5dc00000000;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       ___xmm_404ca5dc00000000404ca5dc00000000 * (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// Reciprocal @ 1417f38e0

TVector<float> * __thiscall
UE::Math::TVector<float>::Reciprocal(TVector<float> *this,TVector<float> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = __real_7f7fc99e;
  fVar2 = __real_3f800000;
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar4 = __real_7f7fc99e;
  if (fVar1 != 0.0) {
    fVar4 = __real_3f800000 / fVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar4;
  fVar1 = (this->field0_0x0)._s_0.Y;
  fVar4 = fVar3;
  if (fVar1 != 0.0) {
    fVar4 = fVar2 / fVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar4;
  fVar1 = (this->field0_0x0)._s_0.Z;
  if (fVar1 == 0.0) {
    (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar3;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2 / fVar1;
  return __return_storage_ptr__;
}

// Reciprocal @ 1417f3950

TVector<double> * __thiscall
UE::Math::TVector<double>::Reciprocal(TVector<double> *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = __real_47eff933c0000000;
  dVar2 = __real_3ff0000000000000;
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar4 = __real_47eff933c0000000;
  if (dVar1 != 0.0) {
    dVar4 = __real_3ff0000000000000 / dVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar4;
  dVar1 = (this->field0_0x0)._s_0.Y;
  dVar4 = dVar3;
  if (dVar1 != 0.0) {
    dVar4 = dVar2 / dVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  dVar1 = (this->field0_0x0)._s_0.Z;
  if (dVar1 == 0.0) {
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2 / dVar1;
  return __return_storage_ptr__;
}

// RotateAngleAxis @ 1417f66c0

TVector<float> * __thiscall
UE::Math::TVector<float>::RotateAngleAxis
          (TVector<float> *this,TVector<float> *__return_storage_ptr__,float param_1,
          TVector<float> *param_2)

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
  float local_res8 [2];
  float local_res18 [2];
  
  FMath::SinCos<float>(local_res18,local_res8,param_1 * __real_3c8efa35);
  fVar1 = (param_2->field0_0x0)._s_0.Y;
  fVar2 = (param_2->field0_0x0)._s_0.X;
  fVar3 = (param_2->field0_0x0)._s_0.Z;
  fVar4 = (this->field0_0x0)._s_0.X;
  fVar10 = __real_3f800000 - local_res8[0];
  fVar9 = fVar3 * fVar2 * fVar10;
  fVar7 = fVar1 * fVar2 * fVar10;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (fVar2 * fVar2 * fVar10 + local_res8[0]) * fVar4 +
       (fVar7 - fVar3 * local_res18[0]) * (this->field0_0x0)._s_0.Y +
       (fVar9 + fVar1 * local_res18[0]) * (this->field0_0x0)._s_0.Z;
  fVar8 = fVar3 * fVar1 * fVar10;
  fVar5 = (this->field0_0x0)._s_0.Y;
  fVar6 = (this->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (fVar1 * fVar1 * fVar10 + local_res8[0]) * (this->field0_0x0)._s_0.Y +
       (fVar7 + fVar3 * local_res18[0]) * fVar4 +
       (fVar8 - fVar2 * local_res18[0]) * (this->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (fVar8 + fVar2 * local_res18[0]) * fVar5 + (fVar9 - fVar1 * local_res18[0]) * fVar4 +
       (fVar3 * fVar3 * fVar10 + local_res8[0]) * fVar6;
  return __return_storage_ptr__;
}

// RotateAngleAxis @ 1417f6880

TVector<double> * __thiscall
UE::Math::TVector<double>::RotateAngleAxis
          (TVector<double> *this,TVector<double> *__return_storage_ptr__,double param_1,
          TVector<double> *param_2)

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
  double extraout_XMM0_Qa;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar10;
  double dVar11;
  
  __libm_sse2_sincos_();
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar3 = (param_2->field0_0x0)._s_0.Z;
  dVar4 = (this->field0_0x0)._s_0.Y;
  dVar5 = (this->field0_0x0)._s_0.X;
  dVar9 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
  dVar8 = __real_3ff0000000000000 - dVar9;
  dVar7 = dVar3 * dVar1 * dVar8;
  dVar10 = dVar2 * dVar1 * dVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (dVar1 * dVar1 * dVar8 + dVar9) * dVar5 + (dVar10 - extraout_XMM0_Qa * dVar3) * dVar4 +
       (dVar7 + extraout_XMM0_Qa * dVar2) * (this->field0_0x0)._s_0.Z;
  dVar11 = dVar3 * dVar2 * dVar8;
  dVar6 = (this->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (dVar11 + extraout_XMM0_Qa * dVar1) * dVar4 + (dVar7 - extraout_XMM0_Qa * dVar2) * dVar5 +
       (dVar3 * dVar3 * dVar8 + dVar9) * (this->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (dVar2 * dVar2 * dVar8 + dVar9) * dVar4 + (dVar10 + extraout_XMM0_Qa * dVar3) * dVar5 +
       (dVar11 - extraout_XMM0_Qa * dVar1) * dVar6;
  return __return_storage_ptr__;
}

// RotateAngleAxisRad @ 1417f6a40

TVector<float> * __thiscall
UE::Math::TVector<float>::RotateAngleAxisRad
          (TVector<float> *this,TVector<float> *__return_storage_ptr__,float param_1,
          TVector<float> *param_2)

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
  float local_res8 [2];
  float local_res10 [2];
  
  FMath::SinCos<float>(local_res8,local_res10,param_1);
  fVar1 = (param_2->field0_0x0)._s_0.Y;
  fVar2 = (param_2->field0_0x0)._s_0.X;
  fVar3 = (param_2->field0_0x0)._s_0.Z;
  fVar4 = (this->field0_0x0)._s_0.X;
  fVar10 = __real_3f800000 - local_res10[0];
  fVar9 = fVar3 * fVar2 * fVar10;
  fVar7 = fVar1 * fVar2 * fVar10;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (fVar2 * fVar2 * fVar10 + local_res10[0]) * fVar4 +
       (fVar7 - fVar3 * local_res8[0]) * (this->field0_0x0)._s_0.Y +
       (fVar9 + fVar1 * local_res8[0]) * (this->field0_0x0)._s_0.Z;
  fVar8 = fVar3 * fVar1 * fVar10;
  fVar5 = (this->field0_0x0)._s_0.Y;
  fVar6 = (this->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (fVar1 * fVar1 * fVar10 + local_res10[0]) * (this->field0_0x0)._s_0.Y +
       (fVar7 + fVar3 * local_res8[0]) * fVar4 +
       (fVar8 - fVar2 * local_res8[0]) * (this->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (fVar8 + fVar2 * local_res8[0]) * fVar5 + (fVar9 - fVar1 * local_res8[0]) * fVar4 +
       (fVar3 * fVar3 * fVar10 + local_res10[0]) * fVar6;
  return __return_storage_ptr__;
}

// RotateAngleAxisRad @ 1417f6bf0

TVector<double> * __thiscall
UE::Math::TVector<double>::RotateAngleAxisRad
          (TVector<double> *this,TVector<double> *__return_storage_ptr__,double param_1,
          TVector<double> *param_2)

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
  double extraout_XMM0_Qa;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar10;
  double dVar11;
  
  __libm_sse2_sincos_();
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar3 = (param_2->field0_0x0)._s_0.Z;
  dVar4 = (this->field0_0x0)._s_0.Y;
  dVar5 = (this->field0_0x0)._s_0.X;
  dVar9 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
  dVar8 = __real_3ff0000000000000 - dVar9;
  dVar7 = dVar3 * dVar1 * dVar8;
  dVar10 = dVar2 * dVar1 * dVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (dVar1 * dVar1 * dVar8 + dVar9) * dVar5 + (dVar10 - extraout_XMM0_Qa * dVar3) * dVar4 +
       (dVar7 + extraout_XMM0_Qa * dVar2) * (this->field0_0x0)._s_0.Z;
  dVar11 = dVar3 * dVar2 * dVar8;
  dVar6 = (this->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (dVar11 + extraout_XMM0_Qa * dVar1) * dVar4 + (dVar7 - extraout_XMM0_Qa * dVar2) * dVar5 +
       (dVar3 * dVar3 * dVar8 + dVar9) * (this->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (dVar2 * dVar2 * dVar8 + dVar9) * dVar4 + (dVar10 + extraout_XMM0_Qa * dVar3) * dVar5 +
       (dVar11 - extraout_XMM0_Qa * dVar1) * dVar6;
  return __return_storage_ptr__;
}

// Rotation @ 1417f7210

TRotator<float> * __thiscall
UE::Math::TVector<float>::Rotation(TVector<float> *this,TRotator<float> *__return_storage_ptr__)

{
  ToOrientationRotator(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Rotation @ 1417f7230

TRotator<double> * __thiscall
UE::Math::TVector<double>::Rotation(TVector<double> *this,TRotator<double> *__return_storage_ptr__)

{
  ToOrientationRotator(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Serialize @ 1417f9200

bool __thiscall UE::Math::TVector<float>::Serialize(TVector<float> *this,FArchive *param_1)

{
  Math::operator<<(param_1,this);
  return true;
}

// Serialize @ 1417f9220

bool __thiscall
UE::Math::TVector<float>::Serialize(TVector<float> *this,FStructuredArchiveSlot param_1)

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
  if ((float *)(*(undefined8 **)&pFVar1->field_0x8)[1] < pfVar3 + 1) {
    if ((pFVar1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar3;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
  }
  pfVar2 = &(this->field0_0x0)._s_0.Z;
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

// Serialize @ 1417f9340

bool __thiscall UE::Math::TVector<double>::Serialize(TVector<double> *this,FArchive *param_1)

{
  Math::operator<<(param_1,this);
  return true;
}

// Serialize @ 1417f9360

bool __thiscall
UE::Math::TVector<double>::Serialize(TVector<double> *this,FStructuredArchiveSlot param_1)

{
  Math::operator<<(param_1,this);
  return true;
}

// SerializeFromMismatchedTag @ 1417fb380

bool __thiscall
UE::Math::TVector<float>::SerializeFromMismatchedTag
          (TVector<float> *this,FName param_1,FStructuredArchiveSlot param_2)

{
  uint uVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  bool bVar5;
  FNameEntryId FVar6;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  FArchive *pFVar7;
  uint local_res10 [2];
  FSlotBase local_res18;
  FNameEntryId local_res20;
  uint uStackX_24;
  TVector<double>_u_0 local_30;
  
  local_res18.StructuredArchive = (FStructuredArchive *)param_2;
  FVar6 = FNameEntryId::FromValidEName((EName)local_res10);
  uVar1 = *(uint *)CONCAT44(extraout_var,FVar6.Value);
  FVar6 = FNameEntryId::FromValidEName((EName)local_res10);
  uStackX_24 = 0;
  local_res20.Value = *(uint *)CONCAT44(extraout_var_00,FVar6.Value);
  FVar6 = FNameEntryId::FromValidEName((EName)local_res10);
  local_res10[0] = *(uint *)CONCAT44(extraout_var_01,FVar6.Value);
  local_res10[1] = 0;
  FVar3.Number = uStackX_24;
  FVar3.ComparisonIndex.Value = local_res20.Value;
  if (param_1 != FVar3) {
    FVar2.Number = 0;
    FVar2.ComparisonIndex.Value = local_res10[0];
    if (param_1 == FVar2) {
      pFVar7 = StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res18);
      if ((int)((ulonglong)*(undefined8 *)&pFVar7->field_0x40 >> 0x20) < 0x3ec) goto LAB_1417fb465;
    }
    FVar4.Number = 0;
    FVar4.ComparisonIndex.Value = uVar1;
    if ((param_1 != FVar4) && (param_1 != FVar2)) {
      return false;
    }
    Math::operator<<((FStructuredArchiveSlot)local_res18.StructuredArchive,
                     (TVector<double> *)&local_30._s_0);
    (this->field0_0x0)._s_0.X = (float)local_30._s_0.X;
    (this->field0_0x0)._s_0.Y = (float)local_30._s_0.Y;
    (this->field0_0x0)._s_0.Z = (float)local_30._s_0.Z;
    return true;
  }
LAB_1417fb465:
  bVar5 = Serialize(this,(FStructuredArchiveSlot)local_res18.StructuredArchive);
  return bVar5;
}

// SerializeFromMismatchedTag @ 1417fb480

bool __thiscall
UE::Math::TVector<double>::SerializeFromMismatchedTag
          (TVector<double> *this,FName param_1,FStructuredArchiveSlot param_2)

{
  uint uVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  bool bVar5;
  FNameEntryId FVar6;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  uint local_res10 [2];
  TVector<float>_u_0 local_18;
  
  FVar6 = FNameEntryId::FromValidEName((EName)local_res10);
  local_18._s_0.Y = 0.0;
  local_18._s_0.X = *(float *)CONCAT44(extraout_var,FVar6.Value);
  FVar6 = FNameEntryId::FromValidEName((EName)local_res10);
  uVar1 = *(uint *)CONCAT44(extraout_var_00,FVar6.Value);
  FVar6 = FNameEntryId::FromValidEName((EName)local_res10);
  local_res10[0] = *(uint *)CONCAT44(extraout_var_01,FVar6.Value);
  local_res10[1] = 0;
  FVar3.Number = 0;
  FVar3.ComparisonIndex.Value = uVar1;
  if ((param_1 != FVar3) &&
     (FVar2.Number = 0, FVar2.ComparisonIndex.Value = local_res10[0], param_1 != FVar2)) {
    FVar4.Number = (uint)local_18._s_0.Y;
    FVar4.ComparisonIndex.Value = (uint)local_18._s_0.X;
    if (param_1 != FVar4) {
      return false;
    }
    bVar5 = TVector<float>::Serialize((TVector<float> *)&local_18._s_0,param_2);
    (this->field0_0x0)._s_0.X = (double)local_18._s_0.X;
    (this->field0_0x0)._s_0.Y = (double)local_18._s_0.Y;
    (this->field0_0x0)._s_0.Z = (double)local_18._s_0.Z;
    return bVar5;
  }
  Math::operator<<(param_2,this);
  return true;
}

// Set @ 1417fc140

void __thiscall
UE::Math::TVector<float>::Set(TVector<float> *this,float param_1,float param_2,float param_3)

{
  (this->field0_0x0)._s_0.X = param_1;
  (this->field0_0x0)._s_0.Y = param_2;
  (this->field0_0x0)._s_0.Z = param_3;
  return;
}

// Set @ 1417fc160

void __thiscall
UE::Math::TVector<double>::Set(TVector<double> *this,double param_1,double param_2,double param_3)

{
  (this->field0_0x0)._s_0.X = param_1;
  (this->field0_0x0)._s_0.Y = param_2;
  (this->field0_0x0)._s_0.Z = param_3;
  return;
}

// SetComponentForAxis @ 1417fc570

void __thiscall
UE::Math::TVector<float>::SetComponentForAxis(TVector<float> *this,Type param_1,float param_2)

{
  if (param_1 == X) {
    (this->field0_0x0)._s_0.X = param_2;
  }
  else {
    if (param_1 == Y) {
      (this->field0_0x0)._s_0.Y = param_2;
      return;
    }
    if (param_1 == Z) {
      (this->field0_0x0)._s_0.Z = param_2;
      return;
    }
  }
  return;
}

// SetComponentForAxis @ 1417fc5a0

void __thiscall
UE::Math::TVector<double>::SetComponentForAxis(TVector<double> *this,Type param_1,double param_2)

{
  if (param_1 == X) {
    (this->field0_0x0)._s_0.X = param_2;
  }
  else {
    if (param_1 == Y) {
      (this->field0_0x0)._s_0.Y = param_2;
      return;
    }
    if (param_1 == Z) {
      (this->field0_0x0)._s_0.Z = param_2;
      return;
    }
  }
  return;
}

// Size2D @ 1417fea40

float __thiscall UE::Math::TVector<float>::Size2D(TVector<float> *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Y;
  return SQRT(fVar2 * fVar2 + fVar1 * fVar1);
}

// Size2D @ 1417fea70

double __thiscall UE::Math::TVector<double>::Size2D(TVector<double> *this)

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

// Size @ 1417fec40

float __thiscall UE::Math::TVector<float>::Size(TVector<float> *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Y;
  fVar3 = (this->field0_0x0)._s_0.Z;
  return SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
}

// Size @ 1417fec70

double __thiscall UE::Math::TVector<double>::Size(TVector<double> *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar2 = (this->field0_0x0)._s_0.Y;
  dVar3 = (this->field0_0x0)._s_0.Z;
  auVar4._0_8_ = dVar1 * dVar1;
  auVar4._8_8_ = 0;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar2 * dVar2 + auVar4._0_8_ + dVar3 * dVar3;
  auVar5 = sqrtpd(auVar4,auVar5);
  return auVar5._0_8_;
}

// SizeSquared2D @ 1417feca0

float __thiscall UE::Math::TVector<float>::SizeSquared2D(TVector<float> *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Y;
  return fVar2 * fVar2 + fVar1 * fVar1;
}

// SizeSquared2D @ 1417fecc0

double __thiscall UE::Math::TVector<double>::SizeSquared2D(TVector<double> *this)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar2 = (this->field0_0x0)._s_0.Y;
  return dVar2 * dVar2 + dVar1 * dVar1;
}

// SizeSquared @ 1417fee80

float __thiscall UE::Math::TVector<float>::SizeSquared(TVector<float> *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Y;
  fVar3 = (this->field0_0x0)._s_0.Z;
  return fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
}

// SizeSquared @ 1417feeb0

double __thiscall UE::Math::TVector<double>::SizeSquared(TVector<double> *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar2 = (this->field0_0x0)._s_0.Y;
  dVar3 = (this->field0_0x0)._s_0.Z;
  return dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
}

// SlerpNormals @ 1417ff3f0

TVector<float> * __cdecl
UE::Math::TVector<float>::SlerpNormals
          (TVector<float> *__return_storage_ptr__,TVector<float> *param_1,TVector<float> *param_2,
          float param_3)

{
  uint uVar1;
  TQuat<float> TVar2;
  TQuat<float> TVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  undefined1 auVar12 [16];
  float local_res8 [2];
  float local_res20 [2];
  TVector<float>_u_0 local_48;
  float local_3c;
  TQuat<float> local_38 [3];
  
  TQuat<float>::FindBetweenNormals((TQuat<float> *)&local_48._s_0,param_1,param_2);
  local_38[0].Y = local_48._s_0.Y;
  local_38[0].X = local_48._s_0.X;
  local_38[0].Z = local_48._s_0.Z;
  local_38[0].W = local_3c;
  auVar12 = insertps((undefined1  [16])local_38[0],(undefined1  [16])local_38[0],8);
  fVar11 = auVar12._0_4_;
  fVar13 = auVar12._4_4_;
  fVar14 = auVar12._8_4_;
  fVar7 = auVar12._12_4_ * auVar12._12_4_;
  fVar8 = fVar13 * fVar13 + fVar11 * fVar11;
  fVar9 = fVar11 * fVar11 + fVar13 * fVar13;
  fVar10 = fVar7 + fVar14 * fVar14;
  fVar7 = fVar14 * fVar14 + fVar7;
  auVar12._0_4_ = fVar10 + fVar8;
  auVar12._4_4_ = fVar7 + fVar9;
  auVar12._8_4_ = fVar8 + fVar10;
  auVar12._12_4_ = fVar9 + fVar7;
  uVar4 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar12._0_4_);
  uVar5 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar12._4_4_);
  uVar6 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar12._8_4_);
  auVar12 = sqrtps(auVar12,auVar12);
  auVar12 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar12);
  uVar1 = GlobalVectorConstants::Float1000.m128_u32[2];
  local_48._s_0.X =
       (float)((uint)(auVar12._0_4_ * fVar11) & uVar4 |
              ~uVar4 & GlobalVectorConstants::Float1000.m128_u32[0]);
  local_48._s_0.Y =
       (float)((uint)(auVar12._4_4_ * fVar13) & uVar5 |
              ~uVar5 & GlobalVectorConstants::Float1000.m128_u32[1]);
  fVar7 = __real_bf800000;
  if ((__real_bf800000 <= local_3c) && (fVar7 = local_3c, __real_3f800000 <= local_3c)) {
    fVar7 = __real_3f800000;
  }
  fVar7 = acosf(fVar7);
  FMath::SinCos<float>(local_res20,local_res8,fVar7 * param_3);
  TVar2 = local_38[0];
  local_48._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  local_38[0].X = local_48._s_0.X * local_res20[0];
  TVar3 = local_38[0];
  local_38[0].W = TVar2.W;
  local_38[0]._0_8_ = TVar3._0_8_;
  local_38[0].Z = (float)((uint)(auVar12._8_4_ * fVar14) & uVar6 | ~uVar6 & uVar1) * local_res20[0];
  local_38[0].Y = local_48._s_0.Y * local_res20[0];
  local_38[0].W = local_res8[0];
  local_48._s_0.X = (float)*(undefined8 *)&param_1->field0_0x0;
  local_48._s_0.Y = (float)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20);
  TQuat<float>::RotateVector(local_38,__return_storage_ptr__,(TVector<float> *)&local_48._s_0);
  return __return_storage_ptr__;
}

// SlerpNormals @ 1417ff560

TVector<double> * __cdecl
UE::Math::TVector<double>::SlerpNormals
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          ,double param_3)

{
  double dVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Db;
  double dVar8;
  double dVar9;
  undefined8 in_XMM3_Qb;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  TVector<double>_u_0 local_88;
  TQuat<double> local_68 [3];
  
  auVar10._8_8_ = in_XMM3_Qb;
  auVar10._0_8_ = param_3;
  TQuat<double>::FindBetweenNormals(local_68,param_1,param_2);
  dVar8 = local_68[0].Z * local_68[0].Z + local_68[0].X * local_68[0].X;
  dVar9 = local_68[0].Y * local_68[0].Y + 0.0;
  dVar1 = dVar9 + dVar8;
  dVar8 = dVar8 + dVar9;
  auVar11._8_4_ = SUB84(dVar8,0);
  auVar11._0_8_ = dVar1;
  auVar11._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar11 = sqrtpd(auVar10,auVar11);
  uVar3 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= dVar1);
  uVar5 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= dVar8);
  auVar12 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar11);
  uVar4 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= dVar1);
  auVar13._0_8_ = uVar3 & (ulonglong)(auVar12._0_8_ * local_68[0].X);
  uVar2 = uVar5 & (ulonglong)(auVar12._8_8_ * local_68[0].Y);
  auVar13._8_4_ = (undefined4)uVar2;
  auVar13._12_4_ = (undefined4)(uVar2 >> 0x20);
  auVar12._0_4_ = ~(uint)uVar3 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[0],0);
  auVar12._4_4_ =
       ~(uint)(uVar3 >> 0x20) &
       (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[0] >> 0x20);
  auVar12._8_4_ = ~(uint)uVar5 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[1],0);
  auVar12._12_4_ =
       ~(uint)(uVar5 >> 0x20) &
       (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[1] >> 0x20);
  auVar11 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar11);
  local_88._s_0.Z =
       (double)(CONCAT44(~(uint)(uVar4 >> 0x20) &
                         (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[2] >>
                               0x20),
                         ~(uint)uVar4 &
                         SUB84((double)GlobalVectorConstants::Float1000.m128_f32[2],0)) |
               uVar4 & (ulonglong)(auVar11._0_8_ * local_68[0].Z));
  uVar6 = SUB84(__real_bff0000000000000,0);
  uVar7 = (int)((ulonglong)__real_bff0000000000000 >> 0x20);
  if ((__real_bff0000000000000 <= local_68[0].W) &&
     (uVar6 = SUB84(local_68[0].W,0), uVar7 = (int)((ulonglong)local_68[0].W >> 0x20),
     __real_3ff0000000000000 <= local_68[0].W)) {
    uVar6 = SUB84(__real_3ff0000000000000,0);
    uVar7 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  }
  acos((double)CONCAT44(uVar7,uVar6));
  __libm_sse2_sincos_();
  local_68[0].X = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * SUB168(auVar13 | auVar12,0);
  local_68[0].Y = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * SUB168(auVar13 | auVar12,8);
  local_68[0].Z = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * local_88._s_0.Z;
  local_88._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_88._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_88._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  TQuat<double>::RotateVector(local_68,__return_storage_ptr__,(TVector<double> *)&local_88._s_0);
  return __return_storage_ptr__;
}

// SlerpVectorToDirection @ 1417ff700

TVector<float> * __cdecl
UE::Math::TVector<float>::SlerpVectorToDirection
          (TVector<float> *__return_storage_ptr__,TVector<float> *param_1,TVector<float> *param_2,
          float param_3)

{
  uint uVar1;
  TQuat<float> TVar2;
  TQuat<float> TVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  undefined1 auVar12 [16];
  float local_res8 [2];
  float local_res20 [2];
  TVector<float>_u_0 local_48;
  float local_3c;
  TQuat<float> local_38 [3];
  
  TQuat<float>::FindBetweenVectors((TQuat<float> *)&local_48._s_0,param_1,param_2);
  local_38[0].Y = local_48._s_0.Y;
  local_38[0].X = local_48._s_0.X;
  local_38[0].Z = local_48._s_0.Z;
  local_38[0].W = local_3c;
  auVar12 = insertps((undefined1  [16])local_38[0],(undefined1  [16])local_38[0],8);
  fVar11 = auVar12._0_4_;
  fVar13 = auVar12._4_4_;
  fVar14 = auVar12._8_4_;
  fVar7 = auVar12._12_4_ * auVar12._12_4_;
  fVar8 = fVar13 * fVar13 + fVar11 * fVar11;
  fVar9 = fVar11 * fVar11 + fVar13 * fVar13;
  fVar10 = fVar7 + fVar14 * fVar14;
  fVar7 = fVar14 * fVar14 + fVar7;
  auVar12._0_4_ = fVar10 + fVar8;
  auVar12._4_4_ = fVar7 + fVar9;
  auVar12._8_4_ = fVar8 + fVar10;
  auVar12._12_4_ = fVar9 + fVar7;
  uVar4 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar12._0_4_);
  uVar5 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar12._4_4_);
  uVar6 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar12._8_4_);
  auVar12 = sqrtps(auVar12,auVar12);
  auVar12 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar12);
  uVar1 = GlobalVectorConstants::Float1000.m128_u32[2];
  local_48._s_0.X =
       (float)((uint)(auVar12._0_4_ * fVar11) & uVar4 |
              ~uVar4 & GlobalVectorConstants::Float1000.m128_u32[0]);
  local_48._s_0.Y =
       (float)((uint)(auVar12._4_4_ * fVar13) & uVar5 |
              ~uVar5 & GlobalVectorConstants::Float1000.m128_u32[1]);
  fVar7 = __real_bf800000;
  if ((__real_bf800000 <= local_3c) && (fVar7 = local_3c, __real_3f800000 <= local_3c)) {
    fVar7 = __real_3f800000;
  }
  fVar7 = acosf(fVar7);
  FMath::SinCos<float>(local_res20,local_res8,fVar7 * param_3);
  TVar2 = local_38[0];
  local_48._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  local_38[0].X = local_48._s_0.X * local_res20[0];
  TVar3 = local_38[0];
  local_38[0].W = TVar2.W;
  local_38[0]._0_8_ = TVar3._0_8_;
  local_38[0].Z = (float)((uint)(auVar12._8_4_ * fVar14) & uVar6 | ~uVar6 & uVar1) * local_res20[0];
  local_38[0].Y = local_48._s_0.Y * local_res20[0];
  local_38[0].W = local_res8[0];
  local_48._s_0.X = (float)*(undefined8 *)&param_1->field0_0x0;
  local_48._s_0.Y = (float)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20);
  TQuat<float>::RotateVector(local_38,__return_storage_ptr__,(TVector<float> *)&local_48._s_0);
  return __return_storage_ptr__;
}

// SlerpVectorToDirection @ 1417ff870

TVector<double> * __cdecl
UE::Math::TVector<double>::SlerpVectorToDirection
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          ,double param_3)

{
  double dVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Db;
  double dVar8;
  double dVar9;
  undefined8 in_XMM3_Qb;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  TVector<double>_u_0 local_88;
  TQuat<double> local_68 [3];
  
  auVar10._8_8_ = in_XMM3_Qb;
  auVar10._0_8_ = param_3;
  TQuat<double>::FindBetweenVectors(local_68,param_1,param_2);
  dVar8 = local_68[0].Z * local_68[0].Z + local_68[0].X * local_68[0].X;
  dVar9 = local_68[0].Y * local_68[0].Y + 0.0;
  dVar1 = dVar9 + dVar8;
  dVar8 = dVar8 + dVar9;
  auVar11._8_4_ = SUB84(dVar8,0);
  auVar11._0_8_ = dVar1;
  auVar11._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar11 = sqrtpd(auVar10,auVar11);
  uVar3 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= dVar1);
  uVar5 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= dVar8);
  auVar12 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar11);
  uVar4 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= dVar1);
  auVar13._0_8_ = uVar3 & (ulonglong)(auVar12._0_8_ * local_68[0].X);
  uVar2 = uVar5 & (ulonglong)(auVar12._8_8_ * local_68[0].Y);
  auVar13._8_4_ = (undefined4)uVar2;
  auVar13._12_4_ = (undefined4)(uVar2 >> 0x20);
  auVar12._0_4_ = ~(uint)uVar3 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[0],0);
  auVar12._4_4_ =
       ~(uint)(uVar3 >> 0x20) &
       (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[0] >> 0x20);
  auVar12._8_4_ = ~(uint)uVar5 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[1],0);
  auVar12._12_4_ =
       ~(uint)(uVar5 >> 0x20) &
       (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[1] >> 0x20);
  auVar11 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar11);
  local_88._s_0.Z =
       (double)(CONCAT44(~(uint)(uVar4 >> 0x20) &
                         (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[2] >>
                               0x20),
                         ~(uint)uVar4 &
                         SUB84((double)GlobalVectorConstants::Float1000.m128_f32[2],0)) |
               uVar4 & (ulonglong)(auVar11._0_8_ * local_68[0].Z));
  uVar6 = SUB84(__real_bff0000000000000,0);
  uVar7 = (int)((ulonglong)__real_bff0000000000000 >> 0x20);
  if ((__real_bff0000000000000 <= local_68[0].W) &&
     (uVar6 = SUB84(local_68[0].W,0), uVar7 = (int)((ulonglong)local_68[0].W >> 0x20),
     __real_3ff0000000000000 <= local_68[0].W)) {
    uVar6 = SUB84(__real_3ff0000000000000,0);
    uVar7 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  }
  acos((double)CONCAT44(uVar7,uVar6));
  __libm_sse2_sincos_();
  local_68[0].X = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * SUB168(auVar13 | auVar12,0);
  local_68[0].Y = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * SUB168(auVar13 | auVar12,8);
  local_68[0].Z = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * local_88._s_0.Z;
  local_88._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_88._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_88._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  TQuat<double>::RotateVector(local_68,__return_storage_ptr__,(TVector<double> *)&local_88._s_0);
  return __return_storage_ptr__;
}

// SquaredLength @ 141800dc0

float __thiscall UE::Math::TVector<float>::SquaredLength(TVector<float> *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Y;
  fVar3 = (this->field0_0x0)._s_0.Z;
  return fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
}

// SquaredLength @ 141800df0

double __thiscall UE::Math::TVector<double>::SquaredLength(TVector<double> *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar2 = (this->field0_0x0)._s_0.Y;
  dVar3 = (this->field0_0x0)._s_0.Z;
  return dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
}

// ToCompactString @ 141802bf0

FString * __thiscall
UE::Math::TVector<float>::ToCompactString(TVector<float> *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  uint uVar2;
  FString *pFVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FString local_38;
  FString local_28 [2];
  
  uVar2 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  if (((__real_38d1b717 <
        (float)((uint)(this->field0_0x0)._s_0.X & __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
      (__real_38d1b717 <
       (float)((uint)(this->field0_0x0)._s_0.Y & __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
     (__real_38d1b717 <
      (float)((uint)(this->field0_0x0)._s_0.Z & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    ::FString::FString(&local_38,L"V(");
    bVar1 = true;
    iVar4 = 0;
    if (__real_322bcc77 < (float)((uint)(this->field0_0x0)._s_0.X & uVar2)) {
      ::FString::PrintfImpl(local_28,L"X=%.2f");
      iVar5 = local_28[0].Data.ArrayNum + -1;
      if (local_28[0].Data.ArrayNum == 0) {
        iVar5 = iVar4;
      }
      ::FString::AppendChars(&local_38,(wchar_t *)local_28[0].Data.AllocatorInstance.Data,iVar5);
      if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
      }
      bVar1 = false;
    }
    if (__real_322bcc77 < (float)((uint)(this->field0_0x0)._s_0.Y & uVar2)) {
      if (!bVar1) {
        pFVar3 = ::FString::FString(local_28,L", ");
        iVar5 = (pFVar3->Data).ArrayNum;
        iVar6 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar6 = iVar4;
        }
        ::FString::AppendChars(&local_38,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar6);
        if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
        }
      }
      ::FString::PrintfImpl(local_28,L"Y=%.2f");
      iVar5 = local_28[0].Data.ArrayNum + -1;
      if (local_28[0].Data.ArrayNum == 0) {
        iVar5 = iVar4;
      }
      ::FString::AppendChars(&local_38,(wchar_t *)local_28[0].Data.AllocatorInstance.Data,iVar5);
      if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
      }
      bVar1 = false;
    }
    if (__real_322bcc77 < (float)((uint)(this->field0_0x0)._s_0.Z & uVar2)) {
      if (!bVar1) {
        pFVar3 = ::FString::FString(local_28,L", ");
        iVar5 = (pFVar3->Data).ArrayNum;
        iVar6 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar6 = iVar4;
        }
        ::FString::AppendChars(&local_38,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar6);
        if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
        }
      }
      ::FString::PrintfImpl(local_28,L"Z=%.2f");
      iVar5 = local_28[0].Data.ArrayNum + -1;
      if (local_28[0].Data.ArrayNum == 0) {
        iVar5 = iVar4;
      }
      ::FString::AppendChars(&local_38,(wchar_t *)local_28[0].Data.AllocatorInstance.Data,iVar5);
      if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
      }
    }
    pFVar3 = ::FString::FString(local_28,L")");
    iVar5 = (pFVar3->Data).ArrayNum;
    iVar6 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar6 = iVar4;
    }
    ::FString::AppendChars(&local_38,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar6);
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_38.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_38.Data.ArrayMax;
  }
  else {
    ::FString::FString(__return_storage_ptr__,L"V(0)");
  }
  return __return_storage_ptr__;
}

// ToCompactString @ 141802e70

FString * __thiscall
UE::Math::TVector<double>::ToCompactString(TVector<double> *this,FString *__return_storage_ptr__)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FString *pFVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  FString local_38;
  FString local_28 [2];
  
  uVar4 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar3 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->field0_0x0 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)*(undefined8 *)&this->field0_0x0 &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (uVar1 = *(undefined8 *)((longlong)&this->field0_0x0 + 8),
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (uVar1 = *(undefined8 *)((longlong)&this->field0_0x0 + 0x10),
     __real_3f1a36e2e0000000 <
     (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    ::FString::FString(&local_38,L"V(");
    bVar2 = true;
    iVar6 = 0;
    if (__real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->field0_0x0 >> 0x20) & uVar4,
                         (uint)*(undefined8 *)&this->field0_0x0 & uVar3)) {
      ::FString::PrintfImpl(local_28,L"X=%.2f");
      iVar7 = local_28[0].Data.ArrayNum + -1;
      if (local_28[0].Data.ArrayNum == 0) {
        iVar7 = iVar6;
      }
      ::FString::AppendChars(&local_38,(wchar_t *)local_28[0].Data.AllocatorInstance.Data,iVar7);
      if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
      }
      bVar2 = false;
    }
    uVar1 = *(undefined8 *)((longlong)&this->field0_0x0 + 8);
    if (__real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) & uVar4,(uint)uVar1 & uVar3)) {
      if (!bVar2) {
        pFVar5 = ::FString::FString(local_28,L", ");
        iVar7 = (pFVar5->Data).ArrayNum;
        iVar8 = iVar7 + -1;
        if (iVar7 == 0) {
          iVar8 = iVar6;
        }
        ::FString::AppendChars(&local_38,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data,iVar8);
        if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
        }
      }
      ::FString::PrintfImpl(local_28,L"Y=%.2f");
      iVar7 = local_28[0].Data.ArrayNum + -1;
      if (local_28[0].Data.ArrayNum == 0) {
        iVar7 = iVar6;
      }
      ::FString::AppendChars(&local_38,(wchar_t *)local_28[0].Data.AllocatorInstance.Data,iVar7);
      if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
      }
      bVar2 = false;
    }
    uVar1 = *(undefined8 *)((longlong)&this->field0_0x0 + 0x10);
    if (__real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) & uVar4,(uint)uVar1 & uVar3)) {
      if (!bVar2) {
        pFVar5 = ::FString::FString(local_28,L", ");
        iVar7 = (pFVar5->Data).ArrayNum;
        iVar8 = iVar7 + -1;
        if (iVar7 == 0) {
          iVar8 = iVar6;
        }
        ::FString::AppendChars(&local_38,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data,iVar8);
        if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
        }
      }
      ::FString::PrintfImpl(local_28,L"Z=%.2f");
      iVar7 = local_28[0].Data.ArrayNum + -1;
      if (local_28[0].Data.ArrayNum == 0) {
        iVar7 = iVar6;
      }
      ::FString::AppendChars(&local_38,(wchar_t *)local_28[0].Data.AllocatorInstance.Data,iVar7);
      if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = ::FString::FString(local_28,L")");
    iVar7 = (pFVar5->Data).ArrayNum;
    iVar8 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar8 = iVar6;
    }
    ::FString::AppendChars(&local_38,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data,iVar8);
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_38.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_38.Data.ArrayMax;
  }
  else {
    ::FString::FString(__return_storage_ptr__,L"V(0)");
  }
  return __return_storage_ptr__;
}

// ToCompactText @ 1418030e0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
UE::Math::TVector<float>::ToCompactText(TVector<float> *this,FText *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FText *pFVar6;
  TTuple<FString,FFormatArgumentValue> *pTVar7;
  FTextFormat *pFVar8;
  float fVar9;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_218
  ;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  undefined4 local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  FText local_1c8;
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  FText local_1a8;
  undefined4 local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  FText local_188;
  FNumberFormattingOptions local_178;
  TSharedPtr<FCulture,1> local_160;
  TSharedPtr<FCulture,1> local_150;
  TSharedPtr<FCulture,1> local_140;
  FText local_130;
  FText local_120;
  FText local_110;
  FText local_100;
  FText local_f0;
  FText local_e0;
  FText local_d0;
  FText local_c0;
  FText local_b0;
  FText local_a0;
  FTextFormat local_90;
  FTextFormat local_80;
  FTextFormat local_70;
  FTextFormat local_60;
  FTextFormat local_50;
  FTextFormat local_40;
  FTextFormat local_30;
  
  fVar9 = (float)((uint)(this->field0_0x0)._s_0.X & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (((fVar9 <= __real_38d1b717) &&
      ((float)((uint)(this->field0_0x0)._s_0.Y & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
       __real_38d1b717)) &&
     ((float)((uint)(this->field0_0x0)._s_0.Z & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
      __real_38d1b717)) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"Core",L"Vector3_CompactZeroVector",L"V(0)");
    return __return_storage_ptr__;
  }
  bVar2 = fVar9 <= __real_322bcc77;
  bVar3 = (float)((uint)(this->field0_0x0)._s_0.Y & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
          __real_322bcc77;
  bVar4 = (float)((uint)(this->field0_0x0)._s_0.Z & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
          __real_322bcc77;
  FNumberFormattingOptions::FNumberFormattingOptions(&local_178);
  local_178.MinimumFractionalDigits = 2;
  local_178.MinimumIntegralDigits = 0;
  local_218.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.Pairs.ArrayNum = 0;
  local_218.Pairs.ArrayMax = 0;
  local_160.Object = (FCulture *)0x0;
  local_160.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar6 = FText::AsNumber(&local_130,(this->field0_0x0)._s_0.X,&local_178,&local_160);
  local_1d8 = 4;
  FText::FText(&local_1c8,pFVar6);
  if (local_1c8.TextData.Reference == (ITextData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FText *)(*pcVar1)();
      return pFVar6;
    }
  }
  ::FString::FString(&local_208,L"X");
  pTVar7 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<FString_&>(&local_218,&local_208);
  *(undefined8 *)pTVar7 = 0;
  *(FScriptContainerElement **)pTVar7 = local_208.Data.AllocatorInstance.Data;
  local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&pTVar7->field_0x8 = local_208.Data.ArrayNum;
  *(int *)&pTVar7->field_0xc = local_208.Data.ArrayMax;
  local_208.Data.ArrayNum = 0;
  local_208.Data.ArrayMax = 0;
  *(undefined4 *)&pTVar7->field_0x10 = local_1d8;
  *(ulonglong *)&pTVar7->field_0x18 = CONCAT44(uStack_1cc,local_1d0);
  *(ulonglong *)&pTVar7->field_0x18 = CONCAT44(uStack_1cc,local_1d0);
  *(undefined4 *)&pTVar7->field_0x18 = local_1d0;
  *(ulonglong *)&pTVar7->field_0x18 = CONCAT44(uStack_1cc,local_1d0);
  *(undefined8 *)&pTVar7->field_0x20 = 0;
  *(undefined4 *)&pTVar7->field_0x28 = 0;
  if (local_1c8.TextData.Reference != (ITextData *)0x0) {
    FText::FText((FText *)&pTVar7->field_0x20,&local_1c8);
  }
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  if (local_1c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1c8.TextData.Reference + 0x10))();
  }
  if (local_130.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_130.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_160.SharedReferenceCount.ReferenceController);
  local_150.Object = (FCulture *)0x0;
  local_150.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar6 = FText::AsNumber(&local_120,(this->field0_0x0)._s_0.Y,&local_178,&local_150);
  local_1b8 = 4;
  FText::FText(&local_1a8,pFVar6);
  if (local_1a8.TextData.Reference == (ITextData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FText *)(*pcVar1)();
      return pFVar6;
    }
  }
  ::FString::FString(&local_1f8,L"Y");
  pTVar7 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<FString_&>(&local_218,&local_1f8);
  *(undefined8 *)pTVar7 = 0;
  *(FScriptContainerElement **)pTVar7 = local_1f8.Data.AllocatorInstance.Data;
  local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&pTVar7->field_0x8 = local_1f8.Data.ArrayNum;
  *(int *)&pTVar7->field_0xc = local_1f8.Data.ArrayMax;
  local_1f8.Data.ArrayNum = 0;
  local_1f8.Data.ArrayMax = 0;
  *(undefined4 *)&pTVar7->field_0x10 = local_1b8;
  *(ulonglong *)&pTVar7->field_0x18 = CONCAT44(uStack_1ac,local_1b0);
  *(ulonglong *)&pTVar7->field_0x18 = CONCAT44(uStack_1ac,local_1b0);
  *(undefined4 *)&pTVar7->field_0x18 = local_1b0;
  *(ulonglong *)&pTVar7->field_0x18 = CONCAT44(uStack_1ac,local_1b0);
  *(undefined8 *)&pTVar7->field_0x20 = 0;
  *(undefined4 *)&pTVar7->field_0x28 = 0;
  if (local_1a8.TextData.Reference != (ITextData *)0x0) {
    FText::FText((FText *)&pTVar7->field_0x20,&local_1a8);
  }
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  if (local_1a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
  }
  if (local_120.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_120.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_150.SharedReferenceCount.ReferenceController);
  local_140.Object = (FCulture *)0x0;
  local_140.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar6 = FText::AsNumber(&local_110,(this->field0_0x0)._s_0.Z,&local_178,&local_140);
  local_198 = 4;
  FText::FText(&local_188,pFVar6);
  if (local_188.TextData.Reference == (ITextData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FText *)(*pcVar1)();
      return pFVar6;
    }
  }
  ::FString::FString(&local_1e8,L"Z");
  pTVar7 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<FString_&>(&local_218,&local_1e8);
  *(undefined8 *)pTVar7 = 0;
  *(FScriptContainerElement **)pTVar7 = local_1e8.Data.AllocatorInstance.Data;
  local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&pTVar7->field_0x8 = local_1e8.Data.ArrayNum;
  *(int *)&pTVar7->field_0xc = local_1e8.Data.ArrayMax;
  local_1e8.Data.ArrayNum = 0;
  local_1e8.Data.ArrayMax = 0;
  *(undefined4 *)&pTVar7->field_0x10 = local_198;
  *(ulonglong *)&pTVar7->field_0x18 = CONCAT44(uStack_18c,local_190);
  *(ulonglong *)&pTVar7->field_0x18 = CONCAT44(uStack_18c,local_190);
  *(undefined4 *)&pTVar7->field_0x18 = local_190;
  *(ulonglong *)&pTVar7->field_0x18 = CONCAT44(uStack_18c,local_190);
  *(undefined8 *)&pTVar7->field_0x20 = 0;
  *(undefined4 *)&pTVar7->field_0x28 = 0;
  if (local_188.TextData.Reference != (ITextData *)0x0) {
    FText::FText((FText *)&pTVar7->field_0x20,&local_188);
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (local_188.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
  }
  if (local_110.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_140.SharedReferenceCount.ReferenceController);
  if (bVar2) {
    if (bVar3) {
      if (bVar4) {
        FText::AsLocalizable_Advanced_LocText
                  (__return_storage_ptr__,L"Core",L"Vector3_CompactZeroVector",L"V(0)");
      }
      else {
        pFVar6 = FText::AsLocalizable_Advanced_LocText
                           (&local_a0,L"Core",L"Vector3_CompactZ",L"V(Z={Z})");
        pFVar8 = FTextFormat::FTextFormat(&local_30,pFVar6,Default);
        FText::Format(__return_storage_ptr__,pFVar8,&local_218);
        if (local_a0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
        }
      }
    }
    else if (bVar4) {
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_b0,L"Core",L"Vector3_CompactY",L"V(Y={Y})");
      pFVar8 = FTextFormat::FTextFormat(&local_40,pFVar6,Default);
      FText::Format(__return_storage_ptr__,pFVar8,&local_218);
      if (local_b0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
      }
    }
    else {
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_c0,L"Core",L"Vector3_CompactYZ",L"V(Y={Y}, Z={Z})");
      pFVar8 = FTextFormat::FTextFormat(&local_50,pFVar6,Default);
      FText::Format(__return_storage_ptr__,pFVar8,&local_218);
      if (local_c0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
      }
    }
  }
  else if (bVar3) {
    if (bVar4) {
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_d0,L"Core",L"Vector3_CompactX",L"V(X={X})");
      pFVar8 = FTextFormat::FTextFormat(&local_60,pFVar6,Default);
      FText::Format(__return_storage_ptr__,pFVar8,&local_218);
      if (local_d0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
      }
    }
    else {
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_e0,L"Core",L"Vector3_CompactXZ",L"V(X={X}, Z={Z})");
      pFVar8 = FTextFormat::FTextFormat(&local_70,pFVar6,Default);
      FText::Format(__return_storage_ptr__,pFVar8,&local_218);
      if (local_e0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
      }
    }
  }
  else if (bVar4) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_f0,L"Core",L"Vector3_CompactXY",L"V(X={X}, Y={Y})");
    pFVar8 = FTextFormat::FTextFormat(&local_80,pFVar6,Default);
    FText::Format(__return_storage_ptr__,pFVar8,&local_218);
    if (local_f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
    }
  }
  else {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_100,L"Core",L"Vector3_CompactXYZ",L"V(X={X}, Y={Y}, Z={Z})");
    pFVar8 = FTextFormat::FTextFormat(&local_90,pFVar6,Default);
    FText::Format(__return_storage_ptr__,pFVar8,&local_218);
    if (local_100.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
    }
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_218.Pairs.AllocatorInstance.Data,
             local_218.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_218.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_218.Pairs.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToCompactText @ 141803830

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
UE::Math::TVector<double>::ToCompactText(TVector<double> *this,FText *__return_storage_ptr__)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FText *pFVar7;
  TTuple<FString,FFormatArgumentValue> *pTVar8;
  FTextFormat *pFVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_218
  ;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  undefined4 local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  FText local_1c8;
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  FText local_1a8;
  undefined4 local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  FText local_188;
  FNumberFormattingOptions local_178;
  TSharedPtr<FCulture,1> local_160;
  TSharedPtr<FCulture,1> local_150;
  TSharedPtr<FCulture,1> local_140;
  FText local_130;
  FText local_120;
  FText local_110;
  FText local_100;
  FText local_f0;
  FText local_e0;
  FText local_d0;
  FText local_c0;
  FText local_b0;
  FText local_a0;
  FTextFormat local_90;
  FTextFormat local_80;
  FTextFormat local_70;
  FTextFormat local_60;
  FTextFormat local_50;
  FTextFormat local_40;
  FTextFormat local_30;
  
  dVar14 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->field0_0x0 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)*(undefined8 *)&this->field0_0x0 &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (((dVar14 <= __real_3f1a36e2e0000000) &&
      (uVar1 = *(undefined8 *)((longlong)&this->field0_0x0 + 8),
      uVar10 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar11 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      (double)CONCAT44(uVar11,uVar10) < __real_3f1a36e2e0000000 ||
      (double)CONCAT44(uVar11,uVar10) == __real_3f1a36e2e0000000)) &&
     (uVar1 = *(undefined8 *)((longlong)&this->field0_0x0 + 0x10),
     uVar10 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar11 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     (double)CONCAT44(uVar11,uVar10) < __real_3f1a36e2e0000000 ||
     (double)CONCAT44(uVar11,uVar10) == __real_3f1a36e2e0000000)) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"Core",L"Vector3_CompactZeroVector",L"V(0)");
    return __return_storage_ptr__;
  }
  uVar1 = *(undefined8 *)((longlong)&this->field0_0x0 + 8);
  uVar10 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar12 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  bVar3 = dVar14 <= __real_3e45798ee2308c3a;
  uVar1 = *(undefined8 *)((longlong)&this->field0_0x0 + 0x10);
  uVar11 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar13 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  bVar4 = (double)CONCAT44(uVar12,uVar10) < __real_3e45798ee2308c3a ||
          (double)CONCAT44(uVar12,uVar10) == __real_3e45798ee2308c3a;
  bVar5 = (double)CONCAT44(uVar13,uVar11) < __real_3e45798ee2308c3a ||
          (double)CONCAT44(uVar13,uVar11) == __real_3e45798ee2308c3a;
  FNumberFormattingOptions::FNumberFormattingOptions(&local_178);
  local_178.MinimumFractionalDigits = 2;
  local_178.MinimumIntegralDigits = 0;
  local_218.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.Pairs.ArrayNum = 0;
  local_218.Pairs.ArrayMax = 0;
  local_160.Object = (FCulture *)0x0;
  local_160.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar7 = FText::AsNumber(&local_130,(this->field0_0x0)._s_0.X,&local_178,&local_160);
  local_1d8 = 4;
  FText::FText(&local_1c8,pFVar7);
  if (local_1c8.TextData.Reference == (ITextData *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FText *)(*pcVar2)();
      return pFVar7;
    }
  }
  ::FString::FString(&local_208,L"X");
  pTVar8 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<FString_&>(&local_218,&local_208);
  *(undefined8 *)pTVar8 = 0;
  *(FScriptContainerElement **)pTVar8 = local_208.Data.AllocatorInstance.Data;
  local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&pTVar8->field_0x8 = local_208.Data.ArrayNum;
  *(int *)&pTVar8->field_0xc = local_208.Data.ArrayMax;
  local_208.Data.ArrayNum = 0;
  local_208.Data.ArrayMax = 0;
  *(undefined4 *)&pTVar8->field_0x10 = local_1d8;
  *(ulonglong *)&pTVar8->field_0x18 = CONCAT44(uStack_1cc,local_1d0);
  *(ulonglong *)&pTVar8->field_0x18 = CONCAT44(uStack_1cc,local_1d0);
  *(undefined4 *)&pTVar8->field_0x18 = local_1d0;
  *(ulonglong *)&pTVar8->field_0x18 = CONCAT44(uStack_1cc,local_1d0);
  *(undefined8 *)&pTVar8->field_0x20 = 0;
  *(undefined4 *)&pTVar8->field_0x28 = 0;
  if (local_1c8.TextData.Reference != (ITextData *)0x0) {
    FText::FText((FText *)&pTVar8->field_0x20,&local_1c8);
  }
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  if (local_1c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1c8.TextData.Reference + 0x10))();
  }
  if (local_130.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_130.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_160.SharedReferenceCount.ReferenceController);
  local_150.Object = (FCulture *)0x0;
  local_150.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar7 = FText::AsNumber(&local_120,(this->field0_0x0)._s_0.Y,&local_178,&local_150);
  local_1b8 = 4;
  FText::FText(&local_1a8,pFVar7);
  if (local_1a8.TextData.Reference == (ITextData *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FText *)(*pcVar2)();
      return pFVar7;
    }
  }
  ::FString::FString(&local_1f8,L"Y");
  pTVar8 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<FString_&>(&local_218,&local_1f8);
  *(undefined8 *)pTVar8 = 0;
  *(FScriptContainerElement **)pTVar8 = local_1f8.Data.AllocatorInstance.Data;
  local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&pTVar8->field_0x8 = local_1f8.Data.ArrayNum;
  *(int *)&pTVar8->field_0xc = local_1f8.Data.ArrayMax;
  local_1f8.Data.ArrayNum = 0;
  local_1f8.Data.ArrayMax = 0;
  *(undefined4 *)&pTVar8->field_0x10 = local_1b8;
  *(ulonglong *)&pTVar8->field_0x18 = CONCAT44(uStack_1ac,local_1b0);
  *(ulonglong *)&pTVar8->field_0x18 = CONCAT44(uStack_1ac,local_1b0);
  *(undefined4 *)&pTVar8->field_0x18 = local_1b0;
  *(ulonglong *)&pTVar8->field_0x18 = CONCAT44(uStack_1ac,local_1b0);
  *(undefined8 *)&pTVar8->field_0x20 = 0;
  *(undefined4 *)&pTVar8->field_0x28 = 0;
  if (local_1a8.TextData.Reference != (ITextData *)0x0) {
    FText::FText((FText *)&pTVar8->field_0x20,&local_1a8);
  }
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  if (local_1a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
  }
  if (local_120.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_120.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_150.SharedReferenceCount.ReferenceController);
  local_140.Object = (FCulture *)0x0;
  local_140.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar7 = FText::AsNumber(&local_110,(this->field0_0x0)._s_0.Z,&local_178,&local_140);
  local_198 = 4;
  FText::FText(&local_188,pFVar7);
  if (local_188.TextData.Reference == (ITextData *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FText *)(*pcVar2)();
      return pFVar7;
    }
  }
  ::FString::FString(&local_1e8,L"Z");
  pTVar8 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<FString_&>(&local_218,&local_1e8);
  *(undefined8 *)pTVar8 = 0;
  *(FScriptContainerElement **)pTVar8 = local_1e8.Data.AllocatorInstance.Data;
  local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&pTVar8->field_0x8 = local_1e8.Data.ArrayNum;
  *(int *)&pTVar8->field_0xc = local_1e8.Data.ArrayMax;
  local_1e8.Data.ArrayNum = 0;
  local_1e8.Data.ArrayMax = 0;
  *(undefined4 *)&pTVar8->field_0x10 = local_198;
  *(ulonglong *)&pTVar8->field_0x18 = CONCAT44(uStack_18c,local_190);
  *(ulonglong *)&pTVar8->field_0x18 = CONCAT44(uStack_18c,local_190);
  *(undefined4 *)&pTVar8->field_0x18 = local_190;
  *(ulonglong *)&pTVar8->field_0x18 = CONCAT44(uStack_18c,local_190);
  *(undefined8 *)&pTVar8->field_0x20 = 0;
  *(undefined4 *)&pTVar8->field_0x28 = 0;
  if (local_188.TextData.Reference != (ITextData *)0x0) {
    FText::FText((FText *)&pTVar8->field_0x20,&local_188);
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (local_188.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
  }
  if (local_110.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_140.SharedReferenceCount.ReferenceController);
  if (bVar3) {
    if (bVar4) {
      if (bVar5) {
        FText::AsLocalizable_Advanced_LocText
                  (__return_storage_ptr__,L"Core",L"Vector3_CompactZeroVector",L"V(0)");
      }
      else {
        pFVar7 = FText::AsLocalizable_Advanced_LocText
                           (&local_a0,L"Core",L"Vector3_CompactZ",L"V(Z={Z})");
        pFVar9 = FTextFormat::FTextFormat(&local_30,pFVar7,Default);
        FText::Format(__return_storage_ptr__,pFVar9,&local_218);
        if (local_a0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
        }
      }
    }
    else if (bVar5) {
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_b0,L"Core",L"Vector3_CompactY",L"V(Y={Y})");
      pFVar9 = FTextFormat::FTextFormat(&local_40,pFVar7,Default);
      FText::Format(__return_storage_ptr__,pFVar9,&local_218);
      if (local_b0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
      }
    }
    else {
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_c0,L"Core",L"Vector3_CompactYZ",L"V(Y={Y}, Z={Z})");
      pFVar9 = FTextFormat::FTextFormat(&local_50,pFVar7,Default);
      FText::Format(__return_storage_ptr__,pFVar9,&local_218);
      if (local_c0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
      }
    }
  }
  else if (bVar4) {
    if (bVar5) {
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_d0,L"Core",L"Vector3_CompactX",L"V(X={X})");
      pFVar9 = FTextFormat::FTextFormat(&local_60,pFVar7,Default);
      FText::Format(__return_storage_ptr__,pFVar9,&local_218);
      if (local_d0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
      }
    }
    else {
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_e0,L"Core",L"Vector3_CompactXZ",L"V(X={X}, Z={Z})");
      pFVar9 = FTextFormat::FTextFormat(&local_70,pFVar7,Default);
      FText::Format(__return_storage_ptr__,pFVar9,&local_218);
      if (local_e0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
      }
    }
  }
  else if (bVar5) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_f0,L"Core",L"Vector3_CompactXY",L"V(X={X}, Y={Y})");
    pFVar9 = FTextFormat::FTextFormat(&local_80,pFVar7,Default);
    FText::Format(__return_storage_ptr__,pFVar9,&local_218);
    if (local_f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
    }
  }
  else {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_100,L"Core",L"Vector3_CompactXYZ",L"V(X={X}, Y={Y}, Z={Z})");
    pFVar9 = FTextFormat::FTextFormat(&local_90,pFVar7,Default);
    FText::Format(__return_storage_ptr__,pFVar9,&local_218);
    if (local_100.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
    }
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_218.Pairs.AllocatorInstance.Data,
             local_218.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_218.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_218.Pairs.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToDirectionAndLength @ 141804050

void __thiscall
UE::Math::TVector<float>::ToDirectionAndLength
          (TVector<float> *this,TVector<float> *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = __real_322bcc77;
  fVar4 = (this->field0_0x0)._s_0.X;
  fVar1 = (this->field0_0x0)._s_0.Y;
  fVar2 = (this->field0_0x0)._s_0.Z;
  fVar4 = SQRT(fVar1 * fVar1 + fVar4 * fVar4 + fVar2 * fVar2);
  *param_2 = fVar4;
  if (fVar3 < fVar4) {
    fVar4 = __real_3f800000 / fVar4;
    fVar1 = (this->field0_0x0)._s_0.Y;
    fVar2 = (this->field0_0x0)._s_0.Z;
    (param_1->field0_0x0)._s_0.X = fVar4 * (this->field0_0x0)._s_0.X;
    (param_1->field0_0x0)._s_0.Y = fVar4 * fVar1;
    (param_1->field0_0x0)._s_0.Z = fVar4 * fVar2;
    return;
  }
  *(undefined8 *)&param_1->field0_0x0 = ZeroVector.field0_0x0._0_8_;
  (param_1->field0_0x0)._s_0.Z = ZeroVector.field0_0x0._s_0.Z;
  return;
}

// ToDirectionAndLength @ 1418040e0

void __thiscall
UE::Math::TVector<float>::ToDirectionAndLength
          (TVector<float> *this,TVector<float> *param_1,double *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  double dVar5;
  
  dVar3 = __real_3e45798ee0000000;
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Y;
  fVar4 = (this->field0_0x0)._s_0.Z;
  dVar5 = (double)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar4 * fVar4);
  *param_2 = dVar5;
  if (dVar3 < dVar5) {
    fVar4 = (float)(__real_3ff0000000000000 / dVar5);
    fVar1 = (this->field0_0x0)._s_0.Y;
    fVar2 = (this->field0_0x0)._s_0.Z;
    (param_1->field0_0x0)._s_0.X = fVar4 * (this->field0_0x0)._s_0.X;
    (param_1->field0_0x0)._s_0.Y = fVar4 * fVar1;
    (param_1->field0_0x0)._s_0.Z = fVar4 * fVar2;
    return;
  }
  *(undefined8 *)&param_1->field0_0x0 = ZeroVector.field0_0x0._0_8_;
  (param_1->field0_0x0)._s_0.Z = ZeroVector.field0_0x0._s_0.Z;
  return;
}

// ToDirectionAndLength @ 141804170

void __thiscall
UE::Math::TVector<double>::ToDirectionAndLength
          (TVector<double> *this,TVector<double> *param_1,float *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  float fVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  
  fVar5 = __real_322bcc77;
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar2 = (this->field0_0x0)._s_0.Y;
  dVar3 = (this->field0_0x0)._s_0.Z;
  auVar7._0_8_ = dVar1 * dVar1;
  auVar7._8_8_ = 0;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar2 * dVar2 + auVar7._0_8_ + dVar3 * dVar3;
  auVar8 = sqrtpd(auVar7,auVar8);
  fVar9 = (float)auVar8._0_8_;
  *param_2 = fVar9;
  uVar6 = ZeroVector.field0_0x0._s_0.Y;
  if (fVar5 < fVar9) {
    dVar2 = (double)(__real_3f800000 / fVar9);
    dVar1 = (this->field0_0x0)._s_0.Z;
    dVar3 = dVar2 * (this->field0_0x0)._s_0.Y;
    auVar4._8_4_ = SUB84(dVar3,0);
    auVar4._0_8_ = dVar2 * (this->field0_0x0)._s_0.X;
    auVar4._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    *(undefined1 (*) [16])&param_1->field0_0x0 = auVar4;
    (param_1->field0_0x0)._s_0.Z = dVar2 * dVar1;
    return;
  }
  (param_1->field0_0x0)._s_0.X = ZeroVector.field0_0x0._s_0.X;
  (param_1->field0_0x0)._s_0.Y = (double)uVar6;
  (param_1->field0_0x0)._s_0.Z = ZeroVector.field0_0x0._s_0.Z;
  return;
}

// ToDirectionAndLength @ 141804200

void __thiscall
UE::Math::TVector<double>::ToDirectionAndLength
          (TVector<double> *this,TVector<double> *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 in_XMM3 [16];
  undefined1 auVar7 [16];
  
  dVar4 = __real_3e45798ee0000000;
  dVar6 = (this->field0_0x0)._s_0.Y;
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar2 = (this->field0_0x0)._s_0.Z;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar6 * dVar6 + dVar1 * dVar1 + dVar2 * dVar2;
  auVar7 = sqrtpd(in_XMM3,auVar7);
  dVar6 = auVar7._0_8_;
  *param_2 = dVar6;
  uVar5 = ZeroVector.field0_0x0._s_0.Y;
  if (dVar4 < dVar6) {
    dVar6 = __real_3ff0000000000000 / dVar6;
    dVar1 = (this->field0_0x0)._s_0.Z;
    dVar2 = dVar6 * (this->field0_0x0)._s_0.Y;
    auVar3._8_4_ = SUB84(dVar2,0);
    auVar3._0_8_ = dVar6 * (this->field0_0x0)._s_0.X;
    auVar3._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])&param_1->field0_0x0 = auVar3;
    (param_1->field0_0x0)._s_0.Z = dVar6 * dVar1;
    return;
  }
  (param_1->field0_0x0)._s_0.X = ZeroVector.field0_0x0._s_0.X;
  (param_1->field0_0x0)._s_0.Y = (double)uVar5;
  (param_1->field0_0x0)._s_0.Z = ZeroVector.field0_0x0._s_0.Z;
  return;
}

// ToOrientationQuat @ 141805b80

TQuat<float> * __thiscall
UE::Math::TVector<float>::ToOrientationQuat
          (TVector<float> *this,TQuat<float> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  
  fVar2 = FGenericPlatformMath::Atan2((this->field0_0x0)._s_0.Y,(this->field0_0x0)._s_0.X);
  fVar3 = (this->field0_0x0)._s_0.X;
  fVar1 = (this->field0_0x0)._s_0.Y;
  fVar3 = FGenericPlatformMath::Atan2((this->field0_0x0)._s_0.Z,SQRT(fVar1 * fVar1 + fVar3 * fVar3))
  ;
  FMath::SinCos<float>(local_res10,local_res20,fVar3 * __real_3f000000);
  FMath::SinCos<float>(local_res8,local_res18,fVar2 * __real_3f000000);
  __return_storage_ptr__->Y =
       (float)((uint)(local_res18[0] * local_res10[0]) ^ __xmm_80000000800000008000000080000000);
  __return_storage_ptr__->X = local_res8[0] * local_res10[0];
  __return_storage_ptr__->Z = local_res8[0] * local_res20[0];
  __return_storage_ptr__->W = local_res18[0] * local_res20[0];
  return __return_storage_ptr__;
}

// ToOrientationQuat @ 141805c60

TQuat<double> * __thiscall
UE::Math::TVector<double>::ToOrientationQuat
          (TVector<double> *this,TQuat<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qb;
  double extraout_XMM0_Qb_00;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  FGenericPlatformMath::Atan2((this->field0_0x0)._s_0.Y,(this->field0_0x0)._s_0.X);
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar2 = (this->field0_0x0)._s_0.Y;
  auVar3._0_8_ = dVar1 * dVar1;
  auVar3._8_8_ = 0;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar2 * dVar2 + auVar3._0_8_;
  auVar4 = sqrtpd(auVar3,auVar4);
  FGenericPlatformMath::Atan2((this->field0_0x0)._s_0.Z,auVar4._0_8_);
  __libm_sse2_sincos_();
  __libm_sse2_sincos_();
  __return_storage_ptr__->Y =
       (double)CONCAT44((uint)((ulonglong)(extraout_XMM0_Qb_00 * extraout_XMM0_Qa) >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        SUB84(extraout_XMM0_Qb_00 * extraout_XMM0_Qa,0) ^
                        (uint)__xmm_80000000000000008000000000000000);
  __return_storage_ptr__->X = extraout_XMM0_Qa_00 * extraout_XMM0_Qa;
  __return_storage_ptr__->Z = extraout_XMM0_Qa_00 * extraout_XMM0_Qb;
  __return_storage_ptr__->W = extraout_XMM0_Qb_00 * extraout_XMM0_Qb;
  return __return_storage_ptr__;
}

// ToOrientationRotator @ 1418060e0

TRotator<float> * __thiscall
UE::Math::TVector<float>::ToOrientationRotator
          (TVector<float> *this,TRotator<float> *__return_storage_ptr__)

{
  float fVar1;
  int iVar2;
  float fVar3;
  FString local_28;
  undefined1 local_18 [16];
  
  fVar3 = FGenericPlatformMath::Atan2((this->field0_0x0)._s_0.Y,(this->field0_0x0)._s_0.X);
  __return_storage_ptr__->Yaw = fVar3 * __real_42652ee0;
  fVar3 = (this->field0_0x0)._s_0.X;
  fVar1 = (this->field0_0x0)._s_0.Y;
  fVar3 = FGenericPlatformMath::Atan2((this->field0_0x0)._s_0.Z,SQRT(fVar1 * fVar1 + fVar3 * fVar3))
  ;
  fVar3 = fVar3 * __real_42652ee0;
  __return_storage_ptr__->Roll = 0.0;
  __return_storage_ptr__->Pitch = fVar3;
  iVar2 = _finite((double)fVar3);
  if (((iVar2 == 0) || (iVar2 = _finite((double)__return_storage_ptr__->Yaw), iVar2 == 0)) ||
     (iVar2 = _finite((double)__return_storage_ptr__->Roll), iVar2 == 0)) {
    if (GEnsureOnNANDiagnostic == 0) {
      if (`public:_struct_UE::Math::TRotator<float>___cdecl_UE::Math::TVector<float>::ToOrientationRotator(void)const___ptr64'
          ::__l8::OnceOnly == false) {
        ::FString::PrintfImpl((FString *)local_18,L"X=%3.3f Y=%3.3f Z=%3.3f");
        ::FString::PrintfImpl(&local_28,L"P=%f Y=%f R=%f");
        UEAsserts_Private::InternalLogNANDiagnosticMessage
                  (L"TVector::Rotation(): Rotator result %s contains NaN! Input FVector = %s");
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_18._0_8_);
        }
        `public:_struct_UE::Math::TRotator<float>___cdecl_UE::Math::TVector<float>::ToOrientationRotator(void)const___ptr64'
        ::__l8::OnceOnly = true;
      }
    }
    else {
      local_18._0_8_ = __return_storage_ptr__;
      local_18._8_8_ = this;
      `UE::Math::TVector<float>::ToOrientationRotator'::__l13::<lambda_1>::operator()(local_18);
    }
    fVar3 = TRotator<float>::ZeroRotator.Yaw;
    __return_storage_ptr__->Pitch = TRotator<float>::ZeroRotator.Pitch;
    __return_storage_ptr__->Yaw = fVar3;
    __return_storage_ptr__->Roll = TRotator<float>::ZeroRotator.Roll;
  }
  return __return_storage_ptr__;
}

// ToOrientationRotator @ 1418062b0

TRotator<double> * __thiscall
UE::Math::TVector<double>::ToOrientationRotator
          (TVector<double> *this,TRotator<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  FString local_28;
  undefined1 local_18 [16];
  
  dVar2 = FGenericPlatformMath::Atan2((this->field0_0x0)._s_0.Y,(this->field0_0x0)._s_0.X);
  __return_storage_ptr__->Yaw = dVar2 * __real_404ca5dc1a63c1f8;
  dVar2 = (this->field0_0x0)._s_0.X;
  dVar1 = (this->field0_0x0)._s_0.Y;
  auVar4._0_8_ = dVar2 * dVar2;
  auVar4._8_8_ = 0;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar1 * dVar1 + auVar4._0_8_;
  auVar5 = sqrtpd(auVar4,auVar5);
  dVar2 = FGenericPlatformMath::Atan2((this->field0_0x0)._s_0.Z,auVar5._0_8_);
  dVar2 = dVar2 * __real_404ca5dc1a63c1f8;
  __return_storage_ptr__->Roll = 0.0;
  __return_storage_ptr__->Pitch = dVar2;
  iVar3 = _finite(dVar2);
  if (((iVar3 == 0) || (iVar3 = _finite(__return_storage_ptr__->Yaw), iVar3 == 0)) ||
     (iVar3 = _finite(__return_storage_ptr__->Roll), iVar3 == 0)) {
    if (GEnsureOnNANDiagnostic == 0) {
      if (`public:_struct_UE::Math::TRotator<double>___cdecl_UE::Math::TVector<double>::ToOrientationRotator(void)const___ptr64'
          ::__l8::OnceOnly == false) {
        ::FString::PrintfImpl((FString *)local_18,L"X=%3.3f Y=%3.3f Z=%3.3f");
        ::FString::PrintfImpl(&local_28,L"P=%f Y=%f R=%f");
        UEAsserts_Private::InternalLogNANDiagnosticMessage
                  (L"TVector::Rotation(): Rotator result %s contains NaN! Input FVector = %s");
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_18._0_8_);
        }
        `public:_struct_UE::Math::TRotator<double>___cdecl_UE::Math::TVector<double>::ToOrientationRotator(void)const___ptr64'
        ::__l8::OnceOnly = true;
      }
    }
    else {
      local_18._0_8_ = __return_storage_ptr__;
      local_18._8_8_ = this;
      `UE::Math::TVector<double>::ToOrientationRotator'::__l13::<lambda_1>::operator()(local_18);
    }
    dVar2 = TRotator<double>::ZeroRotator.Yaw;
    __return_storage_ptr__->Pitch = TRotator<double>::ZeroRotator.Pitch;
    __return_storage_ptr__->Yaw = dVar2;
    __return_storage_ptr__->Roll = TRotator<double>::ZeroRotator.Roll;
  }
  return __return_storage_ptr__;
}

// ToString @ 141806f70

FString * __thiscall
UE::Math::TVector<float>::ToString(TVector<float> *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"X=%3.3f Y=%3.3f Z=%3.3f");
  return __return_storage_ptr__;
}

// ToString @ 141806fc0

FString * __thiscall
UE::Math::TVector<double>::ToString(TVector<double> *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"X=%3.3f Y=%3.3f Z=%3.3f");
  return __return_storage_ptr__;
}

// ToText @ 141807890

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
UE::Math::TVector<float>::ToText(TVector<float> *this,FText *__return_storage_ptr__)

{
  TTuple<FString,FFormatArgumentValue> *pTVar1;
  FText *pFVar2;
  FTextFormat *pFVar3;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_48;
  FText local_38;
  FTextFormat local_28;
  FText local_18;
  
  local_28.TextFormatData.SharedReferenceCount.ReferenceController._0_4_ =
       *(undefined4 *)&this->field0_0x0;
  local_48.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Pairs.ArrayNum = 0;
  local_48.Pairs.ArrayMax = 0;
  local_18.TextData.Reference = (ITextData *)0x0;
  local_18.Flags = 0;
  local_28.TextFormatData.Object._0_4_ = 2;
  ::FString::FString((FString *)&local_38,L"X");
  pTVar1 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<FString_&>(&local_48,(FString *)&local_38);
  *(undefined8 *)pTVar1 = 0;
  *(ITextData **)pTVar1 = local_38.TextData.Reference;
  local_38.TextData.Reference = (ITextData *)0x0;
  *(uint *)&pTVar1->field_0x8 = local_38.Flags;
  *(undefined4 *)&pTVar1->field_0xc = local_38._12_4_;
  local_38.Flags = 0;
  local_38._12_4_ = 0;
  *(undefined4 *)&pTVar1->field_0x10 = local_28.TextFormatData.Object._0_4_;
  *(ulonglong *)&pTVar1->field_0x18 =
       CONCAT44(local_28.TextFormatData.SharedReferenceCount.ReferenceController._4_4_,
                local_28.TextFormatData.SharedReferenceCount.ReferenceController._0_4_);
  *(ulonglong *)&pTVar1->field_0x18 =
       CONCAT44(local_28.TextFormatData.SharedReferenceCount.ReferenceController._4_4_,
                local_28.TextFormatData.SharedReferenceCount.ReferenceController._0_4_);
  *(undefined4 *)&pTVar1->field_0x18 =
       local_28.TextFormatData.SharedReferenceCount.ReferenceController._0_4_;
  *(ulonglong *)&pTVar1->field_0x18 =
       CONCAT44(local_28.TextFormatData.SharedReferenceCount.ReferenceController._4_4_,
                local_28.TextFormatData.SharedReferenceCount.ReferenceController._0_4_);
  *(undefined8 *)&pTVar1->field_0x20 = 0;
  *(undefined4 *)&pTVar1->field_0x28 = 0;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    FText::FText((FText *)&pTVar1->field_0x20,&local_18);
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_38.TextData.Reference);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  local_28.TextFormatData.SharedReferenceCount.ReferenceController._0_4_ =
       *(undefined4 *)((longlong)&this->field0_0x0 + 4);
  local_28.TextFormatData.Object._0_4_ = 2;
  local_18.TextData.Reference = (ITextData *)0x0;
  local_18.Flags = 0;
  ::FString::FString((FString *)&local_38,L"Y");
  pTVar1 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<FString_&>(&local_48,(FString *)&local_38);
  *(undefined8 *)pTVar1 = 0;
  *(ITextData **)pTVar1 = local_38.TextData.Reference;
  local_38.TextData.Reference = (ITextData *)0x0;
  *(uint *)&pTVar1->field_0x8 = local_38.Flags;
  *(undefined4 *)&pTVar1->field_0xc = local_38._12_4_;
  local_38.Flags = 0;
  local_38._12_4_ = 0;
  *(undefined4 *)&pTVar1->field_0x10 = local_28.TextFormatData.Object._0_4_;
  *(ulonglong *)&pTVar1->field_0x18 =
       CONCAT44(local_28.TextFormatData.SharedReferenceCount.ReferenceController._4_4_,
                local_28.TextFormatData.SharedReferenceCount.ReferenceController._0_4_);
  *(ulonglong *)&pTVar1->field_0x18 =
       CONCAT44(local_28.TextFormatData.SharedReferenceCount.ReferenceController._4_4_,
                local_28.TextFormatData.SharedReferenceCount.ReferenceController._0_4_);
  *(undefined4 *)&pTVar1->field_0x18 =
       local_28.TextFormatData.SharedReferenceCount.ReferenceController._0_4_;
  *(ulonglong *)&pTVar1->field_0x18 =
       CONCAT44(local_28.TextFormatData.SharedReferenceCount.ReferenceController._4_4_,
                local_28.TextFormatData.SharedReferenceCount.ReferenceController._0_4_);
  *(undefined8 *)&pTVar1->field_0x20 = 0;
  *(undefined4 *)&pTVar1->field_0x28 = 0;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    FText::FText((FText *)&pTVar1->field_0x20,&local_18);
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_38.TextData.Reference);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  local_28.TextFormatData.SharedReferenceCount.ReferenceController._0_4_ =
       *(undefined4 *)((longlong)&this->field0_0x0 + 8);
  local_28.TextFormatData.Object._0_4_ = 2;
  local_18.TextData.Reference = (ITextData *)0x0;
  local_18.Flags = 0;
  ::FString::FString((FString *)&local_38,L"Z");
  pTVar1 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<FString_&>(&local_48,(FString *)&local_38);
  *(undefined8 *)pTVar1 = 0;
  *(ITextData **)pTVar1 = local_38.TextData.Reference;
  local_38.TextData.Reference = (ITextData *)0x0;
  *(uint *)&pTVar1->field_0x8 = local_38.Flags;
  *(undefined4 *)&pTVar1->field_0xc = local_38._12_4_;
  local_38.Flags = 0;
  local_38._12_4_ = 0;
  *(undefined4 *)&pTVar1->field_0x10 = local_28.TextFormatData.Object._0_4_;
  *(ulonglong *)&pTVar1->field_0x18 =
       CONCAT44(local_28.TextFormatData.SharedReferenceCount.ReferenceController._4_4_,
                local_28.TextFormatData.SharedReferenceCount.ReferenceController._0_4_);
  *(ulonglong *)&pTVar1->field_0x18 =
       CONCAT44(local_28.TextFormatData.SharedReferenceCount.ReferenceController._4_4_,
                local_28.TextFormatData.SharedReferenceCount.ReferenceController._0_4_);
  *(undefined4 *)&pTVar1->field_0x18 =
       local_28.TextFormatData.SharedReferenceCount.ReferenceController._0_4_;
  *(ulonglong *)&pTVar1->field_0x18 =
       CONCAT44(local_28.TextFormatData.SharedReferenceCount.ReferenceController._4_4_,
                local_28.TextFormatData.SharedReferenceCount.ReferenceController._0_4_);
  *(undefined8 *)&pTVar1->field_0x20 = 0;
  *(undefined4 *)&pTVar1->field_0x28 = 0;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    FText::FText((FText *)&pTVar1->field_0x20,&local_18);
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_38.TextData.Reference);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText(&local_38,L"Core",L"Vector3",L"X={X} Y={Y} Z={Z}");
  pFVar3 = FTextFormat::FTextFormat(&local_28,pFVar2,Default);
  FText::Format(__return_storage_ptr__,pFVar3,&local_48);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_48.Pairs.AllocatorInstance.Data,
             local_48.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_48.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_48.Pairs.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToText @ 141807b90

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
UE::Math::TVector<double>::ToText(TVector<double> *this,FText *__return_storage_ptr__)

{
  TTuple<FString,FFormatArgumentValue> *pTVar1;
  FText *pFVar2;
  FTextFormat *pFVar3;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_48;
  FText local_38;
  FTextFormat local_28;
  FText local_18;
  
  local_28.TextFormatData.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)(this->field0_0x0)._s_0.X;
  local_48.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Pairs.ArrayNum = 0;
  local_48.Pairs.ArrayMax = 0;
  local_18.TextData.Reference = (ITextData *)0x0;
  local_18.Flags = 0;
  local_28.TextFormatData.Object._0_4_ = 3;
  ::FString::FString((FString *)&local_38,L"X");
  pTVar1 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<FString_&>(&local_48,(FString *)&local_38);
  *(undefined8 *)pTVar1 = 0;
  *(ITextData **)pTVar1 = local_38.TextData.Reference;
  local_38.TextData.Reference = (ITextData *)0x0;
  *(uint *)&pTVar1->field_0x8 = local_38.Flags;
  *(undefined4 *)&pTVar1->field_0xc = local_38._12_4_;
  local_38.Flags = 0;
  local_38._12_4_ = 0;
  *(undefined4 *)&pTVar1->field_0x10 = local_28.TextFormatData.Object._0_4_;
  *(TReferenceControllerBase<1> **)&pTVar1->field_0x18 =
       local_28.TextFormatData.SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)&pTVar1->field_0x18 =
       local_28.TextFormatData.SharedReferenceCount.ReferenceController;
  *(undefined4 *)&pTVar1->field_0x18 =
       local_28.TextFormatData.SharedReferenceCount.ReferenceController._0_4_;
  *(TReferenceControllerBase<1> **)&pTVar1->field_0x18 =
       local_28.TextFormatData.SharedReferenceCount.ReferenceController;
  *(undefined8 *)&pTVar1->field_0x20 = 0;
  *(undefined4 *)&pTVar1->field_0x28 = 0;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    FText::FText((FText *)&pTVar1->field_0x20,&local_18);
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_38.TextData.Reference);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  local_28.TextFormatData.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)(this->field0_0x0)._s_0.Y;
  local_28.TextFormatData.Object._0_4_ = 3;
  local_18.TextData.Reference = (ITextData *)0x0;
  local_18.Flags = 0;
  ::FString::FString((FString *)&local_38,L"Y");
  pTVar1 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<FString_&>(&local_48,(FString *)&local_38);
  *(undefined8 *)pTVar1 = 0;
  *(ITextData **)pTVar1 = local_38.TextData.Reference;
  local_38.TextData.Reference = (ITextData *)0x0;
  *(uint *)&pTVar1->field_0x8 = local_38.Flags;
  *(undefined4 *)&pTVar1->field_0xc = local_38._12_4_;
  local_38.Flags = 0;
  local_38._12_4_ = 0;
  *(undefined4 *)&pTVar1->field_0x10 = local_28.TextFormatData.Object._0_4_;
  *(TReferenceControllerBase<1> **)&pTVar1->field_0x18 =
       local_28.TextFormatData.SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)&pTVar1->field_0x18 =
       local_28.TextFormatData.SharedReferenceCount.ReferenceController;
  *(undefined4 *)&pTVar1->field_0x18 =
       local_28.TextFormatData.SharedReferenceCount.ReferenceController._0_4_;
  *(TReferenceControllerBase<1> **)&pTVar1->field_0x18 =
       local_28.TextFormatData.SharedReferenceCount.ReferenceController;
  *(undefined8 *)&pTVar1->field_0x20 = 0;
  *(undefined4 *)&pTVar1->field_0x28 = 0;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    FText::FText((FText *)&pTVar1->field_0x20,&local_18);
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_38.TextData.Reference);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  local_28.TextFormatData.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)(this->field0_0x0)._s_0.Z;
  local_28.TextFormatData.Object._0_4_ = 3;
  local_18.TextData.Reference = (ITextData *)0x0;
  local_18.Flags = 0;
  ::FString::FString((FString *)&local_38,L"Z");
  pTVar1 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<FString_&>(&local_48,(FString *)&local_38);
  *(undefined8 *)pTVar1 = 0;
  *(ITextData **)pTVar1 = local_38.TextData.Reference;
  local_38.TextData.Reference = (ITextData *)0x0;
  *(uint *)&pTVar1->field_0x8 = local_38.Flags;
  *(undefined4 *)&pTVar1->field_0xc = local_38._12_4_;
  local_38.Flags = 0;
  local_38._12_4_ = 0;
  *(undefined4 *)&pTVar1->field_0x10 = local_28.TextFormatData.Object._0_4_;
  *(TReferenceControllerBase<1> **)&pTVar1->field_0x18 =
       local_28.TextFormatData.SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)&pTVar1->field_0x18 =
       local_28.TextFormatData.SharedReferenceCount.ReferenceController;
  *(undefined4 *)&pTVar1->field_0x18 =
       local_28.TextFormatData.SharedReferenceCount.ReferenceController._0_4_;
  *(TReferenceControllerBase<1> **)&pTVar1->field_0x18 =
       local_28.TextFormatData.SharedReferenceCount.ReferenceController;
  *(undefined8 *)&pTVar1->field_0x20 = 0;
  *(undefined4 *)&pTVar1->field_0x28 = 0;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    FText::FText((FText *)&pTVar1->field_0x20,&local_18);
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_38.TextData.Reference);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText(&local_38,L"Core",L"Vector3",L"X={X} Y={Y} Z={Z}");
  pFVar3 = FTextFormat::FTextFormat(&local_28,pFVar2,Default);
  FText::Format(__return_storage_ptr__,pFVar3,&local_48);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_48.Pairs.AllocatorInstance.Data,
             local_48.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_48.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_48.Pairs.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Triple @ 141809790

float __cdecl
UE::Math::TVector<float>::Triple
          (TVector<float> *param_1,TVector<float> *param_2,TVector<float> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (param_3->field0_0x0)._s_0.Z;
  fVar2 = (param_2->field0_0x0)._s_0.Z;
  fVar3 = (param_2->field0_0x0)._s_0.Y;
  fVar4 = (param_2->field0_0x0)._s_0.X;
  return (fVar2 * (param_3->field0_0x0)._s_0.X - fVar1 * fVar4) * (param_1->field0_0x0)._s_0.Y +
         (fVar1 * fVar3 - fVar2 * (param_3->field0_0x0)._s_0.Y) * (param_1->field0_0x0)._s_0.X +
         (fVar4 * (param_3->field0_0x0)._s_0.Y - fVar3 * (param_3->field0_0x0)._s_0.X) *
         (param_1->field0_0x0)._s_0.Z;
}

// Triple @ 141809810

double __cdecl
UE::Math::TVector<double>::Triple
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  dVar4 = (param_2->field0_0x0)._s_0.X;
  return (dVar2 * (param_3->field0_0x0)._s_0.X - dVar1 * dVar4) * (param_1->field0_0x0)._s_0.Y +
         (dVar1 * dVar3 - dVar2 * (param_3->field0_0x0)._s_0.Y) * (param_1->field0_0x0)._s_0.X +
         (dVar4 * (param_3->field0_0x0)._s_0.Y - dVar3 * (param_3->field0_0x0)._s_0.X) *
         (param_1->field0_0x0)._s_0.Z;
}

// UnitCartesianToSpherical @ 14180b210

TVector2<float> __thiscall UE::Math::TVector<float>::UnitCartesianToSpherical(TVector<float> *this)

{
  float fVar1;
  TVector2<float>_u_0 in_RDX;
  float fVar2;
  float fVar3;
  float _X;
  
  fVar3 = (this->field0_0x0)._s_0.Z;
  fVar2 = (this->field0_0x0)._s_0.X;
  fVar1 = (this->field0_0x0)._s_0.Y;
  fVar3 = fVar3 / SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
  _X = __real_bf800000;
  if ((__real_bf800000 <= fVar3) && (_X = fVar3, __real_3f800000 <= fVar3)) {
    _X = __real_3f800000;
  }
  fVar3 = FGenericPlatformMath::Atan2(fVar1,fVar2);
  fVar2 = acosf(_X);
  *(float *)((longlong)in_RDX + 4) = fVar3;
  *(float *)in_RDX = fVar2;
  return (TVector2<float>)in_RDX;
}

// UnitCartesianToSpherical @ 14180b2b0

TVector2<double> * __thiscall
UE::Math::TVector<double>::UnitCartesianToSpherical
          (TVector<double> *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  double dVar6;
  undefined4 uVar7;
  
  dVar6 = (this->field0_0x0)._s_0.Z;
  dVar2 = (this->field0_0x0)._s_0.X;
  dVar1 = (this->field0_0x0)._s_0.Y;
  auVar3._0_8_ = dVar2 * dVar2;
  auVar3._8_8_ = 0;
  uVar5 = SUB84(__real_bff0000000000000,0);
  uVar7 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar1 * dVar1 + auVar3._0_8_ + dVar6 * dVar6;
  auVar4 = sqrtpd(auVar3,auVar4);
  dVar6 = dVar6 / auVar4._0_8_;
  if (__real_bff0000000000000 <= dVar6) {
    if (__real_3ff0000000000000 <= dVar6) {
      dVar6 = __real_3ff0000000000000;
    }
    uVar5 = SUB84(dVar6,0);
    uVar7 = (undefined4)((ulonglong)dVar6 >> 0x20);
  }
  dVar6 = FGenericPlatformMath::Atan2(dVar1,dVar2);
  dVar2 = acos((double)CONCAT44(uVar7,uVar5));
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2;
  return __return_storage_ptr__;
}

// UnitX @ 14180b430

TVector<float> * __cdecl UE::Math::TVector<float>::UnitX(TVector<float> *__return_storage_ptr__)

{
  undefined4 uVar1;
  
  uVar1 = XAxisVector.field0_0x0._s_0.Z;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = XAxisVector.field0_0x0._0_8_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)uVar1;
  return __return_storage_ptr__;
}

// UnitX @ 14180b450

TVector<double> * __cdecl UE::Math::TVector<double>::UnitX(TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = XAxisVector.field0_0x0._s_0.Z;
  uVar1 = XAxisVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = XAxisVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)uVar2;
  return __return_storage_ptr__;
}

// UnitY @ 14180b4c0

TVector<float> * __cdecl UE::Math::TVector<float>::UnitY(TVector<float> *__return_storage_ptr__)

{
  undefined4 uVar1;
  
  uVar1 = YAxisVector.field0_0x0._s_0.Z;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = YAxisVector.field0_0x0._0_8_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)uVar1;
  return __return_storage_ptr__;
}

// UnitY @ 14180b4e0

TVector<double> * __cdecl UE::Math::TVector<double>::UnitY(TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = YAxisVector.field0_0x0._s_0.Z;
  uVar1 = YAxisVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = YAxisVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)uVar2;
  return __return_storage_ptr__;
}

// UnitZ @ 14180b510

TVector<float> * __cdecl UE::Math::TVector<float>::UnitZ(TVector<float> *__return_storage_ptr__)

{
  undefined4 uVar1;
  
  uVar1 = ZAxisVector.field0_0x0._s_0.Z;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = ZAxisVector.field0_0x0._0_8_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)uVar1;
  return __return_storage_ptr__;
}

// UnitZ @ 14180b530

TVector<double> * __cdecl UE::Math::TVector<double>::UnitZ(TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = ZAxisVector.field0_0x0._s_0.Z;
  uVar1 = ZAxisVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = ZAxisVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)uVar2;
  return __return_storage_ptr__;
}

// UnwindEuler @ 14180bbc0

void __thiscall UE::Math::TVector<float>::UnwindEuler(TVector<float> *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = __real_c3b40000;
  fVar3 = __real_c3340000;
  fVar2 = __real_43b40000;
  fVar1 = __real_43340000;
  for (fVar5 = (this->field0_0x0)._s_0.X; __real_43340000 < fVar5; fVar5 = fVar5 + __real_c3b40000)
  {
  }
  for (; fVar5 < __real_c3340000; fVar5 = fVar5 + __real_43b40000) {
  }
  (this->field0_0x0)._s_0.X = fVar5;
  for (fVar5 = (this->field0_0x0)._s_0.Y; fVar1 < fVar5; fVar5 = fVar5 + fVar4) {
  }
  for (; fVar5 < fVar3; fVar5 = fVar5 + fVar2) {
  }
  (this->field0_0x0)._s_0.Y = fVar5;
  for (fVar5 = (this->field0_0x0)._s_0.Z; fVar1 < fVar5; fVar5 = fVar5 + fVar4) {
  }
  for (; fVar5 < fVar3; fVar5 = fVar5 + fVar2) {
  }
  (this->field0_0x0)._s_0.Z = fVar5;
  return;
}

// UnwindEuler @ 14180bc70

void __thiscall UE::Math::TVector<double>::UnwindEuler(TVector<double> *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = __real_c076800000000000;
  dVar3 = __real_c066800000000000;
  dVar2 = __real_4076800000000000;
  dVar1 = __real_4066800000000000;
  for (dVar5 = (this->field0_0x0)._s_0.X; __real_4066800000000000 < dVar5;
      dVar5 = dVar5 + __real_c076800000000000) {
  }
  for (; dVar5 < __real_c066800000000000; dVar5 = dVar5 + __real_4076800000000000) {
  }
  (this->field0_0x0)._s_0.X = dVar5;
  for (dVar5 = (this->field0_0x0)._s_0.Y; dVar1 < dVar5; dVar5 = dVar5 + dVar4) {
  }
  for (; dVar5 < dVar3; dVar5 = dVar5 + dVar2) {
  }
  (this->field0_0x0)._s_0.Y = dVar5;
  for (dVar5 = (this->field0_0x0)._s_0.Z; dVar1 < dVar5; dVar5 = dVar5 + dVar4) {
  }
  for (; dVar5 < dVar3; dVar5 = dVar5 + dVar2) {
  }
  (this->field0_0x0)._s_0.Z = dVar5;
  return;
}

// VectorPlaneProject @ 14180cf20

TVector<float> * __cdecl
UE::Math::TVector<float>::VectorPlaneProject
          (TVector<float> *__return_storage_ptr__,TVector<float> *param_1,TVector<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (param_1->field0_0x0)._s_0.X;
  fVar2 = (param_1->field0_0x0)._s_0.Y;
  fVar3 = (param_1->field0_0x0)._s_0.Z;
  fVar6 = fVar2 * (param_2->field0_0x0)._s_0.Y + fVar1 * (param_2->field0_0x0)._s_0.X +
          fVar3 * (param_2->field0_0x0)._s_0.Z;
  fVar4 = (param_2->field0_0x0)._s_0.X;
  fVar5 = (param_2->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar3 - fVar6 * (param_2->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar1 - fVar6 * fVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar2 - fVar6 * fVar5;
  return __return_storage_ptr__;
}

// VectorPlaneProject @ 14180cfb0

TVector<double> * __cdecl
UE::Math::TVector<double>::VectorPlaneProject
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          )

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  dVar6 = dVar2 * (param_2->field0_0x0)._s_0.Y + dVar1 * (param_2->field0_0x0)._s_0.X +
          dVar3 * (param_2->field0_0x0)._s_0.Z;
  dVar4 = (param_2->field0_0x0)._s_0.X;
  dVar5 = (param_2->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 - dVar6 * (param_2->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1 - dVar6 * dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 - dVar6 * dVar5;
  return __return_storage_ptr__;
}

// Zero @ 14180e3e0

TVector<float> * __cdecl UE::Math::TVector<float>::Zero(TVector<float> *__return_storage_ptr__)

{
  undefined4 uVar1;
  
  uVar1 = ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = ZeroVector.field0_0x0._0_8_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)uVar1;
  return __return_storage_ptr__;
}

// Zero @ 14180e400

TVector<double> * __cdecl UE::Math::TVector<double>::Zero(TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = ZeroVector.field0_0x0._s_0.Z;
  uVar1 = ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)uVar2;
  return __return_storage_ptr__;
}

// operator() @ 15047c920

bool __thiscall
`UE::Math::TVector<float>::ToOrientationRotator'::__l13::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2863756258781954264>);
  if (bVar4) {
    ::FString::PrintfImpl(&local_18,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_28,L"P=%f Y=%f R=%f");
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2863756258781954264>,
                       &`public:___cdecl_`public:_struct_UE::Math::TRotator<float>___cdecl_UE::Math::TVector<float>::ToOrientationRotator(void)const___ptr64'::`13'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15047ca19;
    }
  }
  bVar4 = false;
LAB_15047ca19:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 15047ca70

bool __thiscall
`UE::Math::TVector<double>::ToOrientationRotator'::__l13::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2863756258781954264>);
  if (bVar4) {
    ::FString::PrintfImpl(&local_18,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_28,L"P=%f Y=%f R=%f");
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2863756258781954264>,
                       &`public:___cdecl_`public:_struct_UE::Math::TRotator<double>___cdecl_UE::Math::TVector<double>::ToOrientationRotator(void)const___ptr64'::`13'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15047cb57;
    }
  }
  bVar4 = false;
LAB_15047cb57:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

