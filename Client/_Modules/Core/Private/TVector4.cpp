// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 104

// TVector4<float> @ 1417a02f0

TVector4<float> * __thiscall
UE::Math::TVector4<float>::TVector4<float>(TVector4<float> *this,TVector<float> *param_1)

{
  (this->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  (this->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  (this->field0_0x0)._s_0.W = 1.0;
  return this;
}

// TVector4<float> @ 1417a0320

TVector4<float> * __thiscall
UE::Math::TVector4<float>::TVector4<float>(TVector4<float> *this,FLinearColor *param_1)

{
  (this->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.R;
  (this->field0_0x0)._s_0.Y = (param_1->field0_0x0)._s_0.G;
  (this->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.B;
  (this->field0_0x0)._s_0.W = (param_1->field0_0x0)._s_0.A;
  return this;
}

// TVector4<float> @ 1417a0340

TVector4<float> * __thiscall
UE::Math::TVector4<float>::TVector4<float>
          (TVector4<float> *this,FLinearColor *param_1,float param_2)

{
  (this->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.R;
  (this->field0_0x0)._s_0.Y = (param_1->field0_0x0)._s_0.G;
  (this->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.B;
  (this->field0_0x0)._s_0.W = param_2;
  return this;
}

// TVector4<float> @ 1417a0360

TVector4<float> * __thiscall
UE::Math::TVector4<float>::TVector4<float>
          (TVector4<float> *this,float param_1,float param_2,float param_3,float param_4)

{
  (this->field0_0x0)._s_0.W = param_4;
  (this->field0_0x0)._s_0.X = param_1;
  (this->field0_0x0)._s_0.Y = param_2;
  (this->field0_0x0)._s_0.Z = param_3;
  return this;
}

// TVector4<float> @ 1417a0390

TVector4<float> * __thiscall
UE::Math::TVector4<float>::TVector4<float>
          (TVector4<float> *this,TVector2<float> param_1,TVector2<float> param_2)

{
  float local_res10;
  float fStackX_14;
  float local_res18;
  float fStackX_1c;
  
  local_res10 = param_1.field0_0x0._0_4_;
  fStackX_14 = param_1.field0_0x0._4_4_;
  (this->field0_0x0)._s_0.X = local_res10;
  local_res18 = param_2.field0_0x0._0_4_;
  (this->field0_0x0)._s_0.Y = fStackX_14;
  fStackX_1c = param_2.field0_0x0._4_4_;
  (this->field0_0x0)._s_0.Z = local_res18;
  (this->field0_0x0)._s_0.W = fStackX_1c;
  return this;
}

// TVector4<float> @ 1417a03d0

TVector4<float> * __thiscall
UE::Math::TVector4<float>::TVector4<float>(TVector4<float> *this,EForceInit param_1)

{
  *(undefined8 *)&this->field0_0x0 = 0;
  *(undefined8 *)((longlong)&this->field0_0x0 + 8) = 0;
  return this;
}

// TVector4<float> @ 1417a03f0

TVector4<float> * __thiscall
UE::Math::TVector4<float>::TVector4<float>(TVector4<float> *this,ENoInit param_1)

{
  return this;
}

// TVector4<double> @ 1417a0400

TVector4<double> * __thiscall
UE::Math::TVector4<double>::TVector4<double>(TVector4<double> *this,TVector<double> *param_1)

{
  (this->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  (this->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  (this->field0_0x0)._s_0.W = 1.0;
  return this;
}

// TVector4<double> @ 1417a0430

TVector4<double> * __thiscall
UE::Math::TVector4<double>::TVector4<double>(TVector4<double> *this,FLinearColor *param_1)

{
  (this->field0_0x0)._s_0.X = (double)(param_1->field0_0x0)._s_0.R;
  (this->field0_0x0)._s_0.Y = (double)(param_1->field0_0x0)._s_0.G;
  (this->field0_0x0)._s_0.Z = (double)(param_1->field0_0x0)._s_0.B;
  (this->field0_0x0)._s_0.W = (double)(param_1->field0_0x0)._s_0.A;
  return this;
}

// TVector4<double> @ 1417a0470

TVector4<double> * __thiscall
UE::Math::TVector4<double>::TVector4<double>
          (TVector4<double> *this,FLinearColor *param_1,double param_2)

{
  float fVar1;
  
  (this->field0_0x0)._s_0.X = (double)(param_1->field0_0x0)._s_0.R;
  (this->field0_0x0)._s_0.Y = (double)(param_1->field0_0x0)._s_0.G;
  fVar1 = (param_1->field0_0x0)._s_0.B;
  (this->field0_0x0)._s_0.W = param_2;
  (this->field0_0x0)._s_0.Z = (double)fVar1;
  return this;
}

// TVector4<double> @ 1417a04b0

TVector4<double> * __thiscall
UE::Math::TVector4<double>::TVector4<double>
          (TVector4<double> *this,double param_1,double param_2,double param_3,double param_4)

{
  (this->field0_0x0)._s_0.W = param_4;
  (this->field0_0x0)._s_0.X = param_1;
  (this->field0_0x0)._s_0.Y = param_2;
  (this->field0_0x0)._s_0.Z = param_3;
  return this;
}

// TVector4<double> @ 1417a04e0

TVector4<double> * __thiscall
UE::Math::TVector4<double>::TVector4<double>
          (TVector4<double> *this,TVector2<double> *param_1,TVector2<double> *param_2)

{
  (this->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  (this->field0_0x0)._s_0.Z = (param_2->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.W = (param_2->field0_0x0)._s_0.Y;
  return this;
}

// TVector4<double> @ 1417a0510

TVector4<double> * __thiscall
UE::Math::TVector4<double>::TVector4<double>(TVector4<double> *this,EForceInit param_1)

{
  (this->field0_0x0)._s_0.X = 0.0;
  (this->field0_0x0)._s_0.Y = 0.0;
  (this->field0_0x0)._s_0.Z = 0.0;
  (this->field0_0x0)._s_0.W = 0.0;
  return this;
}

// TVector4<double> @ 1417a0530

TVector4<double> * __thiscall
UE::Math::TVector4<double>::TVector4<double>(TVector4<double> *this,ENoInit param_1)

{
  return this;
}

// operator== @ 1417a9f50

bool __thiscall
UE::Math::TVector4<float>::operator==(TVector4<float> *this,TVector4<float> *param_1)

{
  if (((((param_1->field0_0x0)._s_0.X == (this->field0_0x0)._s_0.X) &&
       ((param_1->field0_0x0)._s_0.Y == (this->field0_0x0)._s_0.Y)) &&
      ((param_1->field0_0x0)._s_0.Z == (this->field0_0x0)._s_0.Z)) &&
     ((param_1->field0_0x0)._s_0.W == (this->field0_0x0)._s_0.W)) {
    return true;
  }
  return false;
}

// operator== @ 1417a9f90

bool __thiscall
UE::Math::TVector4<double>::operator==(TVector4<double> *this,TVector4<double> *param_1)

{
  if (((((param_1->field0_0x0)._s_0.X == (this->field0_0x0)._s_0.X) &&
       ((param_1->field0_0x0)._s_0.Y == (this->field0_0x0)._s_0.Y)) &&
      ((param_1->field0_0x0)._s_0.Z == (this->field0_0x0)._s_0.Z)) &&
     ((param_1->field0_0x0)._s_0.W == (this->field0_0x0)._s_0.W)) {
    return true;
  }
  return false;
}

// operator!= @ 1417aa3a0

bool __thiscall
UE::Math::TVector4<float>::operator!=(TVector4<float> *this,TVector4<float> *param_1)

{
  if (((((param_1->field0_0x0)._s_0.X == (this->field0_0x0)._s_0.X) &&
       ((param_1->field0_0x0)._s_0.Y == (this->field0_0x0)._s_0.Y)) &&
      ((param_1->field0_0x0)._s_0.Z == (this->field0_0x0)._s_0.Z)) &&
     ((param_1->field0_0x0)._s_0.W == (this->field0_0x0)._s_0.W)) {
    return false;
  }
  return true;
}

// operator!= @ 1417aa3e0

bool __thiscall
UE::Math::TVector4<double>::operator!=(TVector4<double> *this,TVector4<double> *param_1)

{
  if (((((param_1->field0_0x0)._s_0.X == (this->field0_0x0)._s_0.X) &&
       ((param_1->field0_0x0)._s_0.Y == (this->field0_0x0)._s_0.Y)) &&
      ((param_1->field0_0x0)._s_0.Z == (this->field0_0x0)._s_0.Z)) &&
     ((param_1->field0_0x0)._s_0.W == (this->field0_0x0)._s_0.W)) {
    return false;
  }
  return true;
}

// operator[] @ 1417aa750

float * __thiscall UE::Math::TVector4<float>::operator[](TVector4<float> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  float *pfVar3;
  
  if (3 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pfVar3 = (float *)(*pcVar1)();
      return pfVar3;
    }
  }
  return (float *)((longlong)&this->field0_0x0 + (longlong)param_1 * 4);
}

// operator[] @ 1417aa7a0

float __thiscall UE::Math::TVector4<float>::operator[](TVector4<float> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((uint)param_1 < 4) {
    return (this->field0_0x0).XYZW[param_1];
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidIndex(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                     ,0x319,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  return (this->field0_0x0).XYZW[param_1];
}

// operator[] @ 1417aa810

double * __thiscall UE::Math::TVector4<double>::operator[](TVector4<double> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  double *pdVar3;
  
  if (3 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pdVar3 = (double *)(*pcVar1)();
      return pdVar3;
    }
  }
  return (double *)((longlong)&this->field0_0x0 + (longlong)param_1 * 8);
}

// operator[] @ 1417aa860

double __thiscall UE::Math::TVector4<double>::operator[](TVector4<double> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  
  if ((uint)param_1 < 4) {
    return (this->field0_0x0).XYZW[param_1];
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidIndex(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                     ,0x319,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    dVar3 = (double)(*pcVar1)();
    return dVar3;
  }
  return (this->field0_0x0).XYZW[param_1];
}

// operator* @ 1417ab6b0

TVector4<float> * __thiscall
UE::Math::TVector4<float>::operator*
          (TVector4<float> *this,TVector4<float> *__return_storage_ptr__,TVector4<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (param_1->field0_0x0)._s_0.Y;
  fVar2 = (param_1->field0_0x0)._s_0.Z;
  fVar3 = (param_1->field0_0x0)._s_0.W;
  fVar4 = (this->field0_0x0)._s_0.Y;
  fVar5 = (this->field0_0x0)._s_0.Z;
  fVar6 = (this->field0_0x0)._s_0.W;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (param_1->field0_0x0)._s_0.X * (this->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar1 * fVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2 * fVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.W = fVar3 * fVar6;
  return __return_storage_ptr__;
}

// operator* @ 1417ab6d0

TVector4<double> * __thiscall
UE::Math::TVector4<double>::operator*
          (TVector4<double> *this,TVector4<double> *__return_storage_ptr__,TVector4<double> *param_1
          )

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar5 = (param_1->field0_0x0)._s_0.Z;
  dVar4 = (param_1->field0_0x0)._s_0.W;
  dVar2 = (param_1->field0_0x0)._s_0.Y * (this->field0_0x0)._s_0.Y;
  dVar6 = (this->field0_0x0)._s_0.Z;
  dVar7 = (this->field0_0x0)._s_0.W;
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = (param_1->field0_0x0)._s_0.X * (this->field0_0x0)._s_0.X;
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
  dVar4 = dVar4 * dVar7;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = dVar5 * dVar6;
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])((longlong)&__return_storage_ptr__->field0_0x0 + 0x10) = auVar3;
  return __return_storage_ptr__;
}

// operator- @ 1417abac0

TVector4<float> * __thiscall
UE::Math::TVector4<float>::operator-
          (TVector4<float> *this,TVector4<float> *__return_storage_ptr__,TVector4<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (param_1->field0_0x0)._s_0.Y;
  fVar2 = (param_1->field0_0x0)._s_0.Z;
  fVar3 = (param_1->field0_0x0)._s_0.W;
  fVar4 = (this->field0_0x0)._s_0.Y;
  fVar5 = (this->field0_0x0)._s_0.Z;
  fVar6 = (this->field0_0x0)._s_0.W;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (this->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar4 - fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar5 - fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.W = fVar6 - fVar3;
  return __return_storage_ptr__;
}

// operator- @ 1417abae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector4<float> * __thiscall
UE::Math::TVector4<float>::operator-(TVector4<float> *this,TVector4<float> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)((uint)(this->field0_0x0)._s_0.Y ^ _UNK_150651574);
  fVar2 = (float)((uint)(this->field0_0x0)._s_0.Z ^ _UNK_150651578);
  fVar3 = (float)((uint)(this->field0_0x0)._s_0.W ^ _UNK_15065157c);
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (float)((uint)(this->field0_0x0)._s_0.X ^ __xmm_80000000800000008000000080000000);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.W = fVar3;
  return __return_storage_ptr__;
}

// operator- @ 1417abb00

TVector4<double> * __thiscall
UE::Math::TVector4<double>::operator-
          (TVector4<double> *this,TVector4<double> *__return_storage_ptr__,TVector4<double> *param_1
          )

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar5 = (this->field0_0x0)._s_0.Z;
  dVar4 = (this->field0_0x0)._s_0.W;
  dVar2 = (this->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar6 = (param_1->field0_0x0)._s_0.Z;
  dVar7 = (param_1->field0_0x0)._s_0.W;
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = (this->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
  dVar4 = dVar4 - dVar7;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = dVar5 - dVar6;
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])((longlong)&__return_storage_ptr__->field0_0x0 + 0x10) = auVar3;
  return __return_storage_ptr__;
}

// operator- @ 1417abb30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector4<double> * __thiscall
UE::Math::TVector4<double>::operator-
          (TVector4<double> *this,TVector4<double> *__return_storage_ptr__)

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
  uVar1 = *(uint *)((longlong)&this->field0_0x0 + 0x14) ^
          __xmm_80000000000000008000000000000000._4_4_;
  uVar2 = *(uint *)((longlong)&this->field0_0x0 + 0x18) ^ _UNK_15066df78;
  uVar3 = *(uint *)((longlong)&this->field0_0x0 + 0x1c) ^ _UNK_15066df7c;
  *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x10) =
       *(uint *)((longlong)&this->field0_0x0 + 0x10) ^ (uint)__xmm_80000000000000008000000000000000;
  *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x14) = uVar1;
  *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x18) = uVar2;
  *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x1c) = uVar3;
  return __return_storage_ptr__;
}

// operator+ @ 1417abf50

TVector4<float> * __thiscall
UE::Math::TVector4<float>::operator+
          (TVector4<float> *this,TVector4<float> *__return_storage_ptr__,TVector4<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (param_1->field0_0x0)._s_0.Y;
  fVar2 = (param_1->field0_0x0)._s_0.Z;
  fVar3 = (param_1->field0_0x0)._s_0.W;
  fVar4 = (this->field0_0x0)._s_0.Y;
  fVar5 = (this->field0_0x0)._s_0.Z;
  fVar6 = (this->field0_0x0)._s_0.W;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (param_1->field0_0x0)._s_0.X + (this->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar1 + fVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2 + fVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.W = fVar3 + fVar6;
  return __return_storage_ptr__;
}

// operator+ @ 1417abf70

TVector4<double> * __thiscall
UE::Math::TVector4<double>::operator+
          (TVector4<double> *this,TVector4<double> *__return_storage_ptr__,TVector4<double> *param_1
          )

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar5 = (param_1->field0_0x0)._s_0.Z;
  dVar4 = (param_1->field0_0x0)._s_0.W;
  dVar2 = (param_1->field0_0x0)._s_0.Y + (this->field0_0x0)._s_0.Y;
  dVar6 = (this->field0_0x0)._s_0.Z;
  dVar7 = (this->field0_0x0)._s_0.W;
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = (param_1->field0_0x0)._s_0.X + (this->field0_0x0)._s_0.X;
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
  dVar4 = dVar4 + dVar7;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = dVar5 + dVar6;
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])((longlong)&__return_storage_ptr__->field0_0x0 + 0x10) = auVar3;
  return __return_storage_ptr__;
}

// operator/ @ 1417ac0c0

TVector4<float> * __thiscall
UE::Math::TVector4<float>::operator/
          (TVector4<float> *this,TVector4<float> *__return_storage_ptr__,TVector4<float> *param_1)

{
  TVector4<float>_u_0_s_0 TVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar7;
  float fVar8;
  undefined1 in_XMM2 [16];
  undefined1 auVar6 [16];
  float fVar9;
  
  TVar1 = (param_1->field0_0x0)._s_0;
  auVar6 = rcpps(in_XMM2,(undefined1  [16])TVar1);
  fVar5 = auVar6._0_4_;
  fVar7 = auVar6._4_4_;
  fVar8 = auVar6._8_4_;
  fVar9 = auVar6._12_4_;
  fVar2 = (this->field0_0x0)._s_0.Y;
  fVar3 = (this->field0_0x0)._s_0.Z;
  fVar4 = (this->field0_0x0)._s_0.W;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       ((fVar5 + fVar5) - fVar5 * fVar5 * TVar1.X) * (this->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = ((fVar7 + fVar7) - fVar7 * fVar7 * TVar1.Y) * fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = ((fVar8 + fVar8) - fVar8 * fVar8 * TVar1.Z) * fVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.W = ((fVar9 + fVar9) - fVar9 * fVar9 * TVar1.W) * fVar4;
  return __return_storage_ptr__;
}

// operator/ @ 1417ac0f0

TVector4<double> * __thiscall
UE::Math::TVector4<double>::operator/
          (TVector4<double> *this,TVector4<double> *__return_storage_ptr__,TVector4<double> *param_1
          )

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar3 = *(undefined1 (*) [16])((longlong)&this->field0_0x0 + 0x10);
  auVar2 = divpd(*(undefined1 (*) [16])&this->field0_0x0,*(undefined1 (*) [16])&param_1->field0_0x0)
  ;
  auVar1 = *(undefined1 (*) [16])((longlong)&param_1->field0_0x0 + 0x10);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
  auVar3 = divpd(auVar3,auVar1);
  *(undefined1 (*) [16])((longlong)&__return_storage_ptr__->field0_0x0 + 0x10) = auVar3;
  return __return_storage_ptr__;
}

// operator^ @ 1417aeef0

TVector4<float> * __thiscall
UE::Math::TVector4<float>::operator^
          (TVector4<float> *this,TVector4<float> *__return_storage_ptr__,TVector4<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (param_1->field0_0x0)._s_0.Z;
  fVar2 = (param_1->field0_0x0)._s_0.Y;
  fVar3 = (this->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 0.0;
  fVar4 = (this->field0_0x0)._s_0.X;
  fVar5 = (param_1->field0_0x0)._s_0.X;
  fVar6 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar1 * fVar3 - fVar2 * (this->field0_0x0)._s_0.Z;
  fVar2 = (this->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar5 * (this->field0_0x0)._s_0.Z - fVar4 * fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar4 * fVar6 - fVar5 * fVar2;
  return __return_storage_ptr__;
}

// operator^ @ 1417aef60

TVector4<double> * __thiscall
UE::Math::TVector4<double>::operator^
          (TVector4<double> *this,TVector4<double> *__return_storage_ptr__,TVector4<double> *param_1
          )

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar2 = (this->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 0.0;
  dVar3 = (this->field0_0x0)._s_0.X;
  dVar4 = (param_1->field0_0x0)._s_0.X;
  dVar5 = (param_1->field0_0x0)._s_0.Z;
  dVar6 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       dVar1 * dVar2 - (param_1->field0_0x0)._s_0.Y * (this->field0_0x0)._s_0.Z;
  dVar1 = (this->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4 * (this->field0_0x0)._s_0.Z - dVar3 * dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 * dVar6 - dVar4 * dVar1;
  return __return_storage_ptr__;
}

// operator*= @ 1417af710

TVector4<float> * __thiscall
UE::Math::TVector4<float>::operator*=
          (TVector4<float> *this,TVector4<float> *__return_storage_ptr__,TVector4<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  (this->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X * (this->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.Y = (param_1->field0_0x0)._s_0.Y * (this->field0_0x0)._s_0.Y;
  (this->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z * (this->field0_0x0)._s_0.Z;
  fVar4 = (param_1->field0_0x0)._s_0.W * (this->field0_0x0)._s_0.W;
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Y;
  fVar3 = (this->field0_0x0)._s_0.Z;
  (this->field0_0x0)._s_0.X = fVar1;
  (this->field0_0x0)._s_0.Y = fVar2;
  (this->field0_0x0)._s_0.Z = fVar3;
  (this->field0_0x0)._s_0.W = fVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.W = fVar4;
  return __return_storage_ptr__;
}

// operator*= @ 1417af770

TVector4<double> * __thiscall
UE::Math::TVector4<double>::operator*=
          (TVector4<double> *this,TVector4<double> *__return_storage_ptr__,TVector4<double> *param_1
          )

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  (this->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X * (this->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.Y = (param_1->field0_0x0)._s_0.Y * (this->field0_0x0)._s_0.Y;
  (this->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z * (this->field0_0x0)._s_0.Z;
  (this->field0_0x0)._s_0.W = (param_1->field0_0x0)._s_0.W * (this->field0_0x0)._s_0.W;
  dVar1 = (this->field0_0x0)._s_0.Y;
  dVar2 = (this->field0_0x0)._s_0.Z;
  dVar3 = (this->field0_0x0)._s_0.W;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.W = dVar3;
  return __return_storage_ptr__;
}

// operator+= @ 1417affd0

TVector4<float> * __thiscall
UE::Math::TVector4<float>::operator+=
          (TVector4<float> *this,TVector4<float> *__return_storage_ptr__,TVector4<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  (this->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X + (this->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.Y = (param_1->field0_0x0)._s_0.Y + (this->field0_0x0)._s_0.Y;
  (this->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z + (this->field0_0x0)._s_0.Z;
  fVar4 = (param_1->field0_0x0)._s_0.W + (this->field0_0x0)._s_0.W;
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Y;
  fVar3 = (this->field0_0x0)._s_0.Z;
  (this->field0_0x0)._s_0.X = fVar1;
  (this->field0_0x0)._s_0.Y = fVar2;
  (this->field0_0x0)._s_0.Z = fVar3;
  (this->field0_0x0)._s_0.W = fVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.W = fVar4;
  return __return_storage_ptr__;
}

// operator+= @ 1417b0030

TVector4<double> * __thiscall
UE::Math::TVector4<double>::operator+=
          (TVector4<double> *this,TVector4<double> *__return_storage_ptr__,TVector4<double> *param_1
          )

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  (this->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X + (this->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.Y = (param_1->field0_0x0)._s_0.Y + (this->field0_0x0)._s_0.Y;
  (this->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z + (this->field0_0x0)._s_0.Z;
  (this->field0_0x0)._s_0.W = (param_1->field0_0x0)._s_0.W + (this->field0_0x0)._s_0.W;
  dVar1 = (this->field0_0x0)._s_0.Y;
  dVar2 = (this->field0_0x0)._s_0.Z;
  dVar3 = (this->field0_0x0)._s_0.W;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.W = dVar3;
  return __return_storage_ptr__;
}

// operator-= @ 1417b0280

TVector4<float> * __thiscall
UE::Math::TVector4<float>::operator-=
          (TVector4<float> *this,TVector4<float> *__return_storage_ptr__,TVector4<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  (this->field0_0x0)._s_0.X = (this->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.Y = (this->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  (this->field0_0x0)._s_0.Z = (this->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  fVar4 = (this->field0_0x0)._s_0.W - (param_1->field0_0x0)._s_0.W;
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Y;
  fVar3 = (this->field0_0x0)._s_0.Z;
  (this->field0_0x0)._s_0.X = fVar1;
  (this->field0_0x0)._s_0.Y = fVar2;
  (this->field0_0x0)._s_0.Z = fVar3;
  (this->field0_0x0)._s_0.W = fVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.W = fVar4;
  return __return_storage_ptr__;
}

// operator-= @ 1417b02e0

TVector4<double> * __thiscall
UE::Math::TVector4<double>::operator-=
          (TVector4<double> *this,TVector4<double> *__return_storage_ptr__,TVector4<double> *param_1
          )

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  (this->field0_0x0)._s_0.X = (this->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.Y = (this->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  (this->field0_0x0)._s_0.Z = (this->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  (this->field0_0x0)._s_0.W = (this->field0_0x0)._s_0.W - (param_1->field0_0x0)._s_0.W;
  dVar1 = (this->field0_0x0)._s_0.Y;
  dVar2 = (this->field0_0x0)._s_0.Z;
  dVar3 = (this->field0_0x0)._s_0.W;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.W = dVar3;
  return __return_storage_ptr__;
}

// operator/= @ 1417b0480

TVector4<float> * __thiscall
UE::Math::TVector4<float>::operator/=
          (TVector4<float> *this,TVector4<float> *__return_storage_ptr__,TVector4<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  (this->field0_0x0)._s_0.X = (this->field0_0x0)._s_0.X / (param_1->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.Y = (this->field0_0x0)._s_0.Y / (param_1->field0_0x0)._s_0.Y;
  (this->field0_0x0)._s_0.Z = (this->field0_0x0)._s_0.Z / (param_1->field0_0x0)._s_0.Z;
  fVar4 = (this->field0_0x0)._s_0.W / (param_1->field0_0x0)._s_0.W;
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Y;
  fVar3 = (this->field0_0x0)._s_0.Z;
  (this->field0_0x0)._s_0.X = fVar1;
  (this->field0_0x0)._s_0.Y = fVar2;
  (this->field0_0x0)._s_0.Z = fVar3;
  (this->field0_0x0)._s_0.W = fVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.W = fVar4;
  return __return_storage_ptr__;
}

// operator/= @ 1417b04e0

TVector4<double> * __thiscall
UE::Math::TVector4<double>::operator/=
          (TVector4<double> *this,TVector4<double> *__return_storage_ptr__,TVector4<double> *param_1
          )

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  (this->field0_0x0)._s_0.X = (this->field0_0x0)._s_0.X / (param_1->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.Y = (this->field0_0x0)._s_0.Y / (param_1->field0_0x0)._s_0.Y;
  (this->field0_0x0)._s_0.Z = (this->field0_0x0)._s_0.Z / (param_1->field0_0x0)._s_0.Z;
  (this->field0_0x0)._s_0.W = (this->field0_0x0)._s_0.W / (param_1->field0_0x0)._s_0.W;
  dVar1 = (this->field0_0x0)._s_0.Y;
  dVar2 = (this->field0_0x0)._s_0.Z;
  dVar3 = (this->field0_0x0)._s_0.W;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.W = dVar3;
  return __return_storage_ptr__;
}

// Component @ 1417ba680

float * __thiscall UE::Math::TVector4<float>::Component(TVector4<float> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  float *pfVar3;
  
  if (3 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pfVar3 = (float *)(*pcVar1)();
      return pfVar3;
    }
  }
  return (float *)((longlong)&this->field0_0x0 + (longlong)param_1 * 4);
}

// Component @ 1417ba6d0

float * __thiscall UE::Math::TVector4<float>::Component(TVector4<float> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  float *pfVar3;
  
  if (3 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pfVar3 = (float *)(*pcVar1)();
      return pfVar3;
    }
  }
  return (float *)((longlong)&this->field0_0x0 + (longlong)param_1 * 4);
}

// Component @ 1417ba720

double * __thiscall UE::Math::TVector4<double>::Component(TVector4<double> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  double *pdVar3;
  
  if (3 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pdVar3 = (double *)(*pcVar1)();
      return pdVar3;
    }
  }
  return (double *)((longlong)&this->field0_0x0 + (longlong)param_1 * 8);
}

// Component @ 1417ba770

double * __thiscall UE::Math::TVector4<double>::Component(TVector4<double> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  double *pdVar3;
  
  if (3 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x319,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pdVar3 = (double *)(*pcVar1)();
      return pdVar3;
    }
  }
  return (double *)((longlong)&this->field0_0x0 + (longlong)param_1 * 8);
}

// ComponentMax @ 1417ba9a0

TVector4<float> * __thiscall
UE::Math::TVector4<float>::ComponentMax
          (TVector4<float> *this,TVector4<float> *__return_storage_ptr__,TVector4<float> *param_1)

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
  fVar3 = (param_1->field0_0x0)._s_0.W;
  fVar1 = (this->field0_0x0)._s_0.W;
  if (fVar3 <= fVar1) {
    fVar3 = fVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.W = fVar3;
  return __return_storage_ptr__;
}

// ComponentMax @ 1417ba9f0

TVector4<double> * __thiscall
UE::Math::TVector4<double>::ComponentMax
          (TVector4<double> *this,TVector4<double> *__return_storage_ptr__,TVector4<double> *param_1
          )

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
  dVar3 = (param_1->field0_0x0)._s_0.W;
  dVar1 = (this->field0_0x0)._s_0.W;
  if (dVar3 <= dVar1) {
    dVar3 = dVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.W = dVar3;
  return __return_storage_ptr__;
}

// ComponentMin @ 1417bab20

TVector4<float> * __thiscall
UE::Math::TVector4<float>::ComponentMin
          (TVector4<float> *this,TVector4<float> *__return_storage_ptr__,TVector4<float> *param_1)

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
  fVar3 = (param_1->field0_0x0)._s_0.W;
  fVar1 = (this->field0_0x0)._s_0.W;
  if (fVar1 <= fVar3) {
    fVar3 = fVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.W = fVar3;
  return __return_storage_ptr__;
}

// ComponentMin @ 1417bab70

TVector4<double> * __thiscall
UE::Math::TVector4<double>::ComponentMin
          (TVector4<double> *this,TVector4<double> *__return_storage_ptr__,TVector4<double> *param_1
          )

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
  dVar3 = (param_1->field0_0x0)._s_0.W;
  dVar1 = (this->field0_0x0)._s_0.W;
  if (dVar1 <= dVar3) {
    dVar3 = dVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.W = dVar3;
  return __return_storage_ptr__;
}

// ContainsNaN @ 1417bced0

bool __thiscall UE::Math::TVector4<float>::ContainsNaN(TVector4<float> *this)

{
  int iVar1;
  
  iVar1 = _finite((double)(this->field0_0x0)._s_0.X);
  if (iVar1 != 0) {
    iVar1 = _finite((double)(this->field0_0x0)._s_0.Y);
    if (iVar1 != 0) {
      iVar1 = _finite((double)(this->field0_0x0)._s_0.Z);
      if (iVar1 != 0) {
        iVar1 = _finite((double)(this->field0_0x0)._s_0.W);
        if (iVar1 != 0) {
          return false;
        }
      }
    }
  }
  return true;
}

// ContainsNaN @ 1417bcf40

bool __thiscall UE::Math::TVector4<double>::ContainsNaN(TVector4<double> *this)

{
  int iVar1;
  
  iVar1 = _finite((this->field0_0x0)._s_0.X);
  if (iVar1 != 0) {
    iVar1 = _finite((this->field0_0x0)._s_0.Y);
    if (iVar1 != 0) {
      iVar1 = _finite((this->field0_0x0)._s_0.Z);
      if (iVar1 != 0) {
        iVar1 = _finite((this->field0_0x0)._s_0.W);
        if (iVar1 != 0) {
          return false;
        }
      }
    }
  }
  return true;
}

// DiagnosticCheckNaN @ 1417c4430

void __thiscall UE::Math::TVector4<float>::DiagnosticCheckNaN(TVector4<float> *this)

{
  return;
}

// DiagnosticCheckNaN @ 1417c4440

void __thiscall UE::Math::TVector4<double>::DiagnosticCheckNaN(TVector4<double> *this)

{
  return;
}

// Equals @ 1417c5db0

bool __thiscall
UE::Math::TVector4<float>::Equals(TVector4<float> *this,TVector4<float> *param_1,float param_2)

{
  if (((((float)((uint)((this->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2) &&
       ((float)((uint)((this->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2)) &&
      ((float)((uint)((this->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z) &
              __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2)) &&
     ((float)((uint)((this->field0_0x0)._s_0.W - (param_1->field0_0x0)._s_0.W) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2)) {
    return true;
  }
  return false;
}

// Equals @ 1417c5e10

bool __thiscall
UE::Math::TVector4<double>::Equals(TVector4<double> *this,TVector4<double> *param_1,double param_2)

{
  double dVar1;
  
  dVar1 = (this->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  if (((((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_2)
       && (dVar1 = (this->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y,
          (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_2
          )) && (dVar1 = (this->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z,
                (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                param_2)) &&
     (dVar1 = (this->field0_0x0)._s_0.W - (param_1->field0_0x0)._s_0.W,
     (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_2)) {
    return true;
  }
  return false;
}

// FindBestAxisVectors3 @ 1417cd460

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Math::TVector4<float>::FindBestAxisVectors3
          (TVector4<float> *this,TVector4<float> *param_1,TVector4<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar4 = __real_3f800000;
  fVar1 = (float)((uint)(this->field0_0x0)._s_0.Z & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if ((fVar1 <= (float)((uint)(this->field0_0x0)._s_0.X & __xmm_7fffffff7fffffff7fffffff7fffffff))
     || (fVar1 <= (float)((uint)(this->field0_0x0)._s_0.Y & __xmm_7fffffff7fffffff7fffffff7fffffff))
     ) {
    fVar1 = 0.0;
    fVar8 = __real_3f800000;
  }
  else {
    fVar1 = __real_3f800000;
    fVar8 = 0.0;
  }
  (param_1->field0_0x0)._s_0.X = fVar1;
  (param_1->field0_0x0)._s_0.Y = 0.0;
  (param_1->field0_0x0)._s_0.Z = fVar8;
  (param_1->field0_0x0)._s_0.W = fVar4;
  fVar4 = (this->field0_0x0)._s_0.X;
  fVar5 = (this->field0_0x0)._s_0.Y;
  fVar3 = (this->field0_0x0)._s_0.Z;
  fVar6 = fVar4 * fVar1 + fVar5 * 0.0 + fVar3 * fVar8;
  fVar1 = fVar1 - fVar6 * fVar4;
  fVar7 = 0.0 - fVar6 * fVar5;
  fVar8 = fVar8 - fVar6 * fVar3;
  fVar2 = fVar7 * fVar7 + fVar1 * fVar1 + fVar8 * fVar8;
  fVar4 = ___xmm_3f800000000000000000000000000000;
  fVar5 = _UNK_150689644;
  fVar3 = _UNK_150689648;
  fVar6 = _UNK_15068964c;
  if (__real_322bcc77 < fVar2) {
    fVar3 = __real_3f800000 / SQRT(fVar2);
    fVar4 = fVar3 * fVar1;
    fVar5 = fVar3 * fVar7;
    fVar3 = fVar3 * fVar8;
    fVar6 = 0.0;
  }
  (param_1->field0_0x0)._s_0.X = fVar4;
  (param_1->field0_0x0)._s_0.Y = fVar5;
  (param_1->field0_0x0)._s_0.Z = fVar3;
  (param_1->field0_0x0)._s_0.W = fVar6;
  fVar4 = (this->field0_0x0)._s_0.Y;
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar8 = (param_1->field0_0x0)._s_0.Z;
  fVar5 = (param_1->field0_0x0)._s_0.Y;
  fVar3 = (this->field0_0x0)._s_0.Z;
  fVar6 = (param_1->field0_0x0)._s_0.X;
  (param_2->field0_0x0)._s_0.X = fVar3 * fVar5 - fVar4 * fVar8;
  (param_2->field0_0x0)._s_0.Y = fVar1 * fVar8 - fVar3 * fVar6;
  (param_2->field0_0x0)._s_0.Z = fVar4 * fVar6 - fVar1 * fVar5;
  (param_2->field0_0x0)._s_0.W = 0.0;
  return;
}

// FindBestAxisVectors3 @ 1417cd670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Math::TVector4<double>::FindBestAxisVectors3
          (TVector4<double> *this,TVector4<double> *param_1,TVector4<double> *param_2)

{
  undefined8 uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  dVar9 = __real_3ff0000000000000;
  uVar1 = *(undefined8 *)((longlong)&this->field0_0x0 + 0x10);
  uVar6 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar7 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar5 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->field0_0x0 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)*(undefined8 *)&this->field0_0x0 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  uVar13 = SUB84(__real_3ff0000000000000,0);
  uVar14 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  if (((double)CONCAT44(uVar7,uVar6) < dVar5 || (double)CONCAT44(uVar7,uVar6) == dVar5) ||
     (uVar1 = *(undefined8 *)((longlong)&this->field0_0x0 + 8),
     dVar5 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff),
     (double)CONCAT44(uVar7,uVar6) < dVar5 || (double)CONCAT44(uVar7,uVar6) == dVar5)) {
    uVar11 = 0;
    uVar12 = 0;
  }
  else {
    uVar11 = uVar13;
    uVar12 = uVar14;
    uVar13 = 0;
    uVar14 = 0;
  }
  (param_1->field0_0x0)._s_0.X = (double)CONCAT44(uVar12,uVar11);
  (param_1->field0_0x0)._s_0.Y = 0.0;
  (param_1->field0_0x0)._s_0.Z = (double)CONCAT44(uVar14,uVar13);
  *(double *)((longlong)&param_1->field0_0x0 + 0x18) = dVar9;
  dVar10 = (this->field0_0x0)._s_0.X * (double)CONCAT44(uVar12,uVar11) +
           (this->field0_0x0)._s_0.Y * 0.0 +
           (this->field0_0x0)._s_0.Z * (double)CONCAT44(uVar14,uVar13);
  dVar5 = (double)CONCAT44(uVar12,uVar11) - dVar10 * (this->field0_0x0)._s_0.X;
  dVar4 = 0.0 - dVar10 * (this->field0_0x0)._s_0.Y;
  dVar10 = (double)CONCAT44(uVar14,uVar13) - dVar10 * (this->field0_0x0)._s_0.Z;
  dVar8 = dVar4 * dVar4 + dVar5 * dVar5 + dVar10 * dVar10;
  if (dVar8 <= __real_3e45798ee0000000) {
    dVar5 = 0.0;
    dVar4 = 0.0;
    dVar9 = ___xmm_3ff00000000000000000000000000000;
    dVar10 = _UNK_15061cbc8;
  }
  else {
    dVar9 = dVar9 / SQRT(dVar8);
    dVar5 = dVar5 * dVar9;
    dVar4 = dVar4 * dVar9;
    dVar9 = dVar10 * dVar9;
    dVar10 = 0.0;
  }
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = dVar5;
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&param_1->field0_0x0 = auVar3;
  (param_1->field0_0x0)._s_0.Z = dVar9;
  (param_1->field0_0x0)._s_0.W = dVar10;
  dVar9 = (this->field0_0x0)._s_0.Y;
  dVar5 = (this->field0_0x0)._s_0.X;
  dVar4 = (param_1->field0_0x0)._s_0.Z;
  dVar10 = (param_1->field0_0x0)._s_0.Y;
  dVar8 = (this->field0_0x0)._s_0.Z;
  dVar2 = (param_1->field0_0x0)._s_0.X;
  (param_2->field0_0x0)._s_0.X = dVar8 * dVar10 - dVar9 * dVar4;
  (param_2->field0_0x0)._s_0.Y = dVar5 * dVar4 - dVar8 * dVar2;
  (param_2->field0_0x0)._s_0.Z = dVar9 * dVar2 - dVar5 * dVar10;
  (param_2->field0_0x0)._s_0.W = 0.0;
  return;
}

// GetSafeNormal @ 1417d6d40

TVector4<float> * __thiscall
UE::Math::TVector4<float>::GetSafeNormal
          (TVector4<float> *this,TVector4<float> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = __real_3f800000;
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Z;
  fVar4 = (this->field0_0x0)._s_0.Y;
  fVar4 = fVar4 * fVar4 + fVar1 * fVar1 + fVar2 * fVar2;
  if (param_1 < fVar4) {
    (__return_storage_ptr__->field0_0x0)._s_0.W = 0.0;
    fVar3 = fVar3 / SQRT(fVar4);
    fVar4 = (this->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = fVar3 * fVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar3 * fVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar3 * fVar2;
    return __return_storage_ptr__;
  }
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  return __return_storage_ptr__;
}

// GetSafeNormal @ 1417d6dd0

TVector4<double> * __thiscall
UE::Math::TVector4<double>::GetSafeNormal
          (TVector4<double> *this,TVector4<double> *__return_storage_ptr__,double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar4 = 0.0;
  dVar2 = (this->field0_0x0)._s_0.Y;
  dVar3 = (this->field0_0x0)._s_0.Z;
  dVar5 = dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
  if (dVar5 <= param_1) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
    dVar4 = 1.0;
  }
  else {
    dVar5 = __real_3ff0000000000000 / SQRT(dVar5);
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1 * dVar5;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 * dVar5;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 * dVar5;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.W = dVar4;
  return __return_storage_ptr__;
}

// GetUnsafeNormal3 @ 1417d8fe0

TVector4<float> * __thiscall
UE::Math::TVector4<float>::GetUnsafeNormal3
          (TVector4<float> *this,TVector4<float> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Y;
  fVar3 = (this->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 0.0;
  fVar4 = __real_3f800000 / SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar4 * fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar4 * fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar4 * fVar3;
  return __return_storage_ptr__;
}

// GetUnsafeNormal3 @ 1417d9050

TVector4<double> * __thiscall
UE::Math::TVector4<double>::GetUnsafeNormal3
          (TVector4<double> *this,TVector4<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar2 = (this->field0_0x0)._s_0.Y;
  dVar3 = (this->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 0.0;
  dVar4 = __real_3ff0000000000000 / SQRT(dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 * dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1 * dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 * dVar4;
  return __return_storage_ptr__;
}

// InitFromString @ 1417daa70

bool __thiscall UE::Math::TVector4<float>::InitFromString(TVector4<float> *this,FString *param_1)

{
  float *pfVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  
  (this->field0_0x0)._s_0.W = 1.0;
  pfVar1 = &(this->field0_0x0)._s_0.Z;
  (this->field0_0x0)._s_0.Y = 0.0;
  *pfVar1 = 0.0;
  (this->field0_0x0)._s_0.X = 0.0;
  pwVar4 = L"";
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar2 = FParse::Value(pwVar3,L"X=",(float *)this);
  if (bVar2) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar2 = FParse::Value(pwVar3,L"Y=",&(this->field0_0x0)._s_0.Y);
    if (bVar2) {
      if ((param_1->Data).ArrayNum == 0) {
        pwVar3 = L"";
      }
      else {
        pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      bVar2 = FParse::Value(pwVar3,L"Z=",pfVar1);
      if (bVar2) {
        bVar2 = true;
        goto LAB_1417dab1b;
      }
    }
  }
  bVar2 = false;
LAB_1417dab1b:
  if ((param_1->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  FParse::Value(pwVar4,L"W=",&(this->field0_0x0)._s_0.W);
  return bVar2;
}

// InitFromString @ 1417dab60

bool __thiscall UE::Math::TVector4<double>::InitFromString(TVector4<double> *this,FString *param_1)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  bool bVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  
  pdVar1 = &(this->field0_0x0)._s_0.Z;
  *pdVar1 = 0.0;
  pdVar2 = &(this->field0_0x0)._s_0.Y;
  *pdVar2 = 0.0;
  pdVar3 = &(this->field0_0x0)._s_0.W;
  (this->field0_0x0)._s_0.X = 0.0;
  pwVar6 = L"";
  *pdVar3 = 1.0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar4 = FParse::Value(pwVar5,L"X=",(double *)this);
  if (bVar4) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar4 = FParse::Value(pwVar5,L"Y=",pdVar2);
    if (bVar4) {
      if ((param_1->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      bVar4 = FParse::Value(pwVar5,L"Z=",pdVar1);
      if (bVar4) {
        bVar4 = true;
        goto LAB_1417dac13;
      }
    }
  }
  bVar4 = false;
LAB_1417dac13:
  if ((param_1->Data).ArrayNum != 0) {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  FParse::Value(pwVar6,L"W=",pdVar3);
  return bVar4;
}

// IsNearlyZero3 @ 1417de000

bool __thiscall UE::Math::TVector4<float>::IsNearlyZero3(TVector4<float> *this,float param_1)

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

// IsNearlyZero3 @ 1417de040

bool __thiscall UE::Math::TVector4<double>::IsNearlyZero3(TVector4<double> *this,double param_1)

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

// IsNearlyZero @ 1417de290

bool __thiscall UE::Math::TVector4<float>::IsNearlyZero(TVector4<float> *this,float param_1)

{
  if (((((float)((uint)(this->field0_0x0)._s_0.X & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
         param_1) &&
       ((float)((uint)(this->field0_0x0)._s_0.Y & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_1
       )) && ((float)((uint)(this->field0_0x0)._s_0.Z & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
              param_1)) &&
     ((float)((uint)(this->field0_0x0)._s_0.W & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_1))
  {
    return true;
  }
  return false;
}

// IsNearlyZero @ 1417de2e0

bool __thiscall UE::Math::TVector4<double>::IsNearlyZero(TVector4<double> *this,double param_1)

{
  undefined8 uVar1;
  
  if (((((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->field0_0x0 >> 0x20) &
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
                       (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_1)) &&
     (uVar1 = *(undefined8 *)((longlong)&this->field0_0x0 + 0x18),
     (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_1)) {
    return true;
  }
  return false;
}

// IsUnit3 @ 1417de740

bool __thiscall UE::Math::TVector4<float>::IsUnit3(TVector4<float> *this,float param_1)

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

// IsUnit3 @ 1417de790

bool __thiscall UE::Math::TVector4<double>::IsUnit3(TVector4<double> *this,double param_1)

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

// IsValidIndex @ 1417deaf0

bool __thiscall UE::Math::TVector4<float>::IsValidIndex(TVector4<float> *this,int param_1)

{
  return (uint)param_1 < 4;
}

// IsValidIndex @ 1417deb00

bool __thiscall UE::Math::TVector4<double>::IsValidIndex(TVector4<double> *this,int param_1)

{
  return (uint)param_1 < 4;
}

// One @ 1417e80d0

TVector4<float> * __cdecl UE::Math::TVector4<float>::One(TVector4<float> *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  return __return_storage_ptr__;
}

// One @ 1417e8100

TVector4<double> * __cdecl UE::Math::TVector4<double>::One(TVector4<double> *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  return __return_storage_ptr__;
}

// Reflect3 @ 1417f39c0

TVector4<float> * __thiscall
UE::Math::TVector4<float>::Reflect3
          (TVector4<float> *this,TVector4<float> *__return_storage_ptr__,TVector4<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = (this->field0_0x0)._s_0.Y;
  fVar2 = (this->field0_0x0)._s_0.Z;
  fVar4 = (this->field0_0x0)._s_0.Y;
  fVar5 = (this->field0_0x0)._s_0.Z;
  fVar6 = (this->field0_0x0)._s_0.W;
  fVar3 = (this->field0_0x0)._s_0.X;
  fVar7 = (fVar3 + fVar3) * (param_1->field0_0x0)._s_0.X +
          (fVar1 + fVar1) * (param_1->field0_0x0)._s_0.Y +
          (fVar2 + fVar2) * (param_1->field0_0x0)._s_0.Z;
  fVar1 = (param_1->field0_0x0)._s_0.W;
  fVar2 = (param_1->field0_0x0)._s_0.Y;
  fVar3 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       fVar7 * (param_1->field0_0x0)._s_0.X - (this->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar7 * fVar2 - fVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar7 * fVar3 - fVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.W = fVar7 * fVar1 - fVar6;
  return __return_storage_ptr__;
}

// Reflect3 @ 1417f3a60

TVector4<double> * __thiscall
UE::Math::TVector4<double>::Reflect3
          (TVector4<double> *this,TVector4<double> *__return_storage_ptr__,TVector4<double> *param_1
          )

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar8 = (param_1->field0_0x0)._s_0.Y * (this->field0_0x0)._s_0.Y +
          (param_1->field0_0x0)._s_0.X * (this->field0_0x0)._s_0.X;
  dVar8 = (dVar1 + dVar1) * (this->field0_0x0)._s_0.Z + dVar8 + dVar8;
  dVar2 = (param_1->field0_0x0)._s_0.W;
  dVar5 = dVar8 * (param_1->field0_0x0)._s_0.Y - (this->field0_0x0)._s_0.Y;
  dVar7 = (this->field0_0x0)._s_0.Z;
  dVar6 = (this->field0_0x0)._s_0.W;
  auVar3._8_4_ = SUB84(dVar5,0);
  auVar3._0_8_ = dVar8 * (param_1->field0_0x0)._s_0.X - (this->field0_0x0)._s_0.X;
  auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar3;
  dVar6 = dVar8 * dVar2 - dVar6;
  auVar4._8_4_ = SUB84(dVar6,0);
  auVar4._0_8_ = dVar8 * dVar1 - dVar7;
  auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])((longlong)&__return_storage_ptr__->field0_0x0 + 0x10) = auVar4;
  return __return_storage_ptr__;
}

// Rotation @ 1417f71d0

TRotator<float> * __thiscall
UE::Math::TVector4<float>::Rotation(TVector4<float> *this,TRotator<float> *__return_storage_ptr__)

{
  ToOrientationRotator(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Rotation @ 1417f71f0

TRotator<double> * __thiscall
UE::Math::TVector4<double>::Rotation
          (TVector4<double> *this,TRotator<double> *__return_storage_ptr__)

{
  ToOrientationRotator(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Serialize @ 1417f91c0

bool __thiscall UE::Math::TVector4<float>::Serialize(TVector4<float> *this,FArchive *param_1)

{
  Math::operator<<(param_1,this);
  return true;
}

// Serialize @ 1417f91e0

bool __thiscall UE::Math::TVector4<double>::Serialize(TVector4<double> *this,FArchive *param_1)

{
  Math::operator<<(param_1,this);
  return true;
}

// SerializeFromMismatchedTag @ 1417faf80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Math::TVector4<float>::SerializeFromMismatchedTag
          (TVector4<float> *this,FName param_1,FArchive *param_2)

{
  uint uVar1;
  FName FVar2;
  FName FVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  float fVar8;
  uint local_res10 [2];
  TVector4<double>_u_0 local_28;
  
  FVar4 = FNameEntryId::FromValidEName((EName)local_res10);
  FVar7.Number = 0;
  FVar7.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar4.Value);
  if (param_1 == FVar7) {
    Math::operator<<(param_2,(TVector<float> *)&local_28._s_0);
    (this->field0_0x0)._s_0.X = (float)local_28._0_4_;
  }
  else {
    FVar4 = FNameEntryId::FromValidEName((EName)local_res10);
    FVar5.Number = 0;
    FVar5.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar4.Value);
    if (param_1 != FVar5) {
      FVar4 = FNameEntryId::FromValidEName((EName)local_res10);
      FVar6.Number = 0;
      FVar6.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_01,FVar4.Value);
      if (param_1 != FVar6) {
        FVar4 = FNameEntryId::FromValidEName((EName)local_res10);
        local_28._4_4_ = 0;
        local_28._0_4_ = *(uint *)CONCAT44(extraout_var_02,FVar4.Value);
        FVar4 = FNameEntryId::FromValidEName((EName)local_res10);
        uVar1 = *(uint *)CONCAT44(extraout_var_03,FVar4.Value);
        FVar4 = FNameEntryId::FromValidEName((EName)local_res10);
        local_res10[0] = *(uint *)CONCAT44(extraout_var_04,FVar4.Value);
        local_res10[1] = 0;
        FVar3.Number = 0;
        FVar3.ComparisonIndex.Value = uVar1;
        if ((param_1 != FVar3) &&
           ((FVar2.Number = 0, FVar2.ComparisonIndex.Value = local_res10[0], param_1 != FVar2 ||
            (0x3eb < (int)((ulonglong)*(undefined8 *)&param_2->field_0x40 >> 0x20))))) {
          if ((param_1 != (FName)local_28._s_0.X) && (param_1 != FVar2)) {
            return false;
          }
          local_28._s_0.Z = ___xmm_3ff00000000000000000000000000000;
          local_28._s_0.W = _UNK_15061cbc8;
          local_28._s_0.X = 0.0;
          local_28._s_0.Y = 0.0;
          Math::operator<<(param_2,(TVector4<double> *)&local_28._s_0);
          (this->field0_0x0)._s_0.X = (float)local_28._s_0.X;
          (this->field0_0x0)._s_0.Y = (float)local_28._s_0.Y;
          (this->field0_0x0)._s_0.Z = (float)local_28._s_0.Z;
          (this->field0_0x0)._s_0.W = (float)local_28._s_0.W;
          return true;
        }
        Math::operator<<(param_2,this);
        return true;
      }
    }
    Math::operator<<(param_2,(TVector<double> *)&local_28._s_0);
    fVar8 = (float)local_28._s_0.X;
    local_28._4_4_ = (undefined4)local_28._s_0.Y;
    (this->field0_0x0)._s_0.X = fVar8;
    local_28._8_4_ = (undefined4)local_28._s_0.Z;
  }
  (this->field0_0x0)._s_0.Z = (float)local_28._8_4_;
  (this->field0_0x0)._s_0.Y = (float)local_28._4_4_;
  return true;
}

// SerializeFromMismatchedTag @ 1417fb1a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Math::TVector4<double>::SerializeFromMismatchedTag
          (TVector4<double> *this,FName param_1,FArchive *param_2)

{
  uint uVar1;
  FName FVar2;
  FName FVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  uint local_res10 [2];
  TVector<double>_u_0 local_28;
  
  FVar4 = FNameEntryId::FromValidEName((EName)local_res10);
  FVar7.Number = 0;
  FVar7.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar4.Value);
  if (param_1 == FVar7) {
    Math::operator<<(param_2,(TVector<float> *)&local_28._s_0);
    (this->field0_0x0)._s_0.X = (double)(float)local_28._0_4_;
    local_28._s_0.Z = (double)(float)local_28._8_4_;
    (this->field0_0x0)._s_0.Y = (double)(float)local_28._4_4_;
  }
  else {
    FVar4 = FNameEntryId::FromValidEName((EName)local_res10);
    FVar5.Number = 0;
    FVar5.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar4.Value);
    if (param_1 != FVar5) {
      FVar4 = FNameEntryId::FromValidEName((EName)local_res10);
      FVar6.Number = 0;
      FVar6.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_01,FVar4.Value);
      if (param_1 != FVar6) {
        FVar4 = FNameEntryId::FromValidEName((EName)local_res10);
        local_28._4_4_ = 0;
        local_28._0_4_ = *(uint *)CONCAT44(extraout_var_02,FVar4.Value);
        FVar4 = FNameEntryId::FromValidEName((EName)local_res10);
        uVar1 = *(uint *)CONCAT44(extraout_var_03,FVar4.Value);
        FVar4 = FNameEntryId::FromValidEName((EName)local_res10);
        local_res10[0] = *(uint *)CONCAT44(extraout_var_04,FVar4.Value);
        local_res10[1] = 0;
        FVar3.Number = 0;
        FVar3.ComparisonIndex.Value = uVar1;
        if ((param_1 != FVar3) &&
           (FVar2.Number = 0, FVar2.ComparisonIndex.Value = local_res10[0], param_1 != FVar2)) {
          if (param_1 != (FName)local_28._s_0.X) {
            return false;
          }
          local_28._s_0.X = ___xmm_3f800000000000000000000000000000;
          local_28._s_0.Y = _UNK_150689648;
          Math::operator<<(param_2,(TVector4<float> *)&local_28._s_0);
          (this->field0_0x0)._s_0.X = (double)(float)local_28._0_4_;
          (this->field0_0x0)._s_0.Y = (double)(float)local_28._4_4_;
          (this->field0_0x0)._s_0.Z = (double)(float)local_28._8_4_;
          (this->field0_0x0)._s_0.W = (double)(float)local_28._12_4_;
          return true;
        }
        Math::operator<<(param_2,this);
        return true;
      }
    }
    Math::operator<<(param_2,(TVector<double> *)&local_28._s_0);
    *(double *)&this->field0_0x0 = local_28._s_0.X;
    (this->field0_0x0)._s_0.Y = local_28._s_0.Y;
  }
  (this->field0_0x0)._s_0.Z = local_28._s_0.Z;
  return true;
}

// SerializeFromVector3 @ 1417fb580

bool __thiscall
UE::Math::TVector4<float>::SerializeFromVector3
          (TVector4<float> *this,FName param_1,FArchive *param_2)

{
  double dVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  undefined1 local_res10 [8];
  TVector<double>_u_0 local_28;
  
  FVar2 = FNameEntryId::FromValidEName((EName)local_res10);
  FVar5.Number = 0;
  FVar5.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar2.Value);
  if (param_1 == FVar5) {
    Math::operator<<(param_2,(TVector<float> *)&local_28._s_0);
    (this->field0_0x0)._s_0.X = (float)local_28._0_4_;
  }
  else {
    FVar2 = FNameEntryId::FromValidEName((EName)local_res10);
    FVar3.Number = 0;
    FVar3.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar2.Value);
    if (param_1 != FVar3) {
      FVar2 = FNameEntryId::FromValidEName((EName)local_res10);
      FVar4.Number = 0;
      FVar4.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_01,FVar2.Value);
      if (param_1 != FVar4) {
        return false;
      }
    }
    Math::operator<<(param_2,(TVector<double> *)&local_28._s_0);
    dVar1 = (double)CONCAT44(local_28._4_4_,local_28._0_4_);
    local_28._4_4_ = (undefined4)(double)CONCAT44(local_28._12_4_,local_28._8_4_);
    (this->field0_0x0)._s_0.X = (float)dVar1;
    local_28._8_4_ = (undefined4)local_28._s_0.Z;
  }
  (this->field0_0x0)._s_0.Z = (float)local_28._8_4_;
  (this->field0_0x0)._s_0.Y = (float)local_28._4_4_;
  return true;
}

// SerializeFromVector3 @ 1417fb670

bool __thiscall
UE::Math::TVector4<double>::SerializeFromVector3
          (TVector4<double> *this,FName param_1,FArchive *param_2)

{
  FNameEntryId FVar1;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  undefined1 local_res10 [8];
  TVector<double>_u_0 local_28;
  
  FVar1 = FNameEntryId::FromValidEName((EName)local_res10);
  FVar4.Number = 0;
  FVar4.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar1.Value);
  if (param_1 == FVar4) {
    Math::operator<<(param_2,(TVector<float> *)&local_28._s_0);
    (this->field0_0x0)._s_0.X = (double)(float)local_28._0_4_;
    local_28._s_0.Z = (double)(float)local_28._8_4_;
    (this->field0_0x0)._s_0.Y = (double)(float)local_28._4_4_;
  }
  else {
    FVar1 = FNameEntryId::FromValidEName((EName)local_res10);
    FVar2.Number = 0;
    FVar2.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar1.Value);
    if (param_1 != FVar2) {
      FVar1 = FNameEntryId::FromValidEName((EName)local_res10);
      FVar3.Number = 0;
      FVar3.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_01,FVar1.Value);
      if (param_1 != FVar3) {
        return false;
      }
    }
    Math::operator<<(param_2,(TVector<double> *)&local_28._s_0);
    (this->field0_0x0)._s_0.X = (double)CONCAT44(local_28._4_4_,local_28._0_4_);
    (this->field0_0x0)._s_0.Y = (double)CONCAT44(local_28._12_4_,local_28._8_4_);
  }
  (this->field0_0x0)._s_0.Z = local_28._s_0.Z;
  return true;
}

// Set @ 1417fc100

void __thiscall
UE::Math::TVector4<float>::Set
          (TVector4<float> *this,float param_1,float param_2,float param_3,float param_4)

{
  (this->field0_0x0)._s_0.W = param_4;
  (this->field0_0x0)._s_0.X = param_1;
  (this->field0_0x0)._s_0.Y = param_2;
  (this->field0_0x0)._s_0.Z = param_3;
  return;
}

// Set @ 1417fc120

void __thiscall
UE::Math::TVector4<double>::Set
          (TVector4<double> *this,double param_1,double param_2,double param_3,double param_4)

{
  (this->field0_0x0)._s_0.W = param_4;
  (this->field0_0x0)._s_0.X = param_1;
  (this->field0_0x0)._s_0.Y = param_2;
  (this->field0_0x0)._s_0.Z = param_3;
  return;
}

// Size3 @ 1417fea90

float __thiscall UE::Math::TVector4<float>::Size3(TVector4<float> *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Y;
  fVar3 = (this->field0_0x0)._s_0.Z;
  return SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
}

// Size3 @ 1417feac0

double __thiscall UE::Math::TVector4<double>::Size3(TVector4<double> *this)

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

// Size @ 1417febc0

float __thiscall UE::Math::TVector4<float>::Size(TVector4<float> *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.W;
  fVar3 = (this->field0_0x0)._s_0.Z;
  fVar4 = (this->field0_0x0)._s_0.Y;
  return SQRT(fVar4 * fVar4 + fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
}

// Size @ 1417fec00

double __thiscall UE::Math::TVector4<double>::Size(TVector4<double> *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar2 = (this->field0_0x0)._s_0.Y;
  dVar3 = (this->field0_0x0)._s_0.W;
  dVar4 = (this->field0_0x0)._s_0.Z;
  auVar5._0_8_ = dVar1 * dVar1;
  auVar5._8_8_ = 0;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar2 * dVar2 + auVar5._0_8_ + dVar4 * dVar4 + dVar3 * dVar3;
  auVar6 = sqrtpd(auVar5,auVar6);
  return auVar6._0_8_;
}

// SizeSquared3 @ 1417fece0

float __thiscall UE::Math::TVector4<float>::SizeSquared3(TVector4<float> *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Y;
  fVar3 = (this->field0_0x0)._s_0.Z;
  return fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
}

// SizeSquared3 @ 1417fed10

double __thiscall UE::Math::TVector4<double>::SizeSquared3(TVector4<double> *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar2 = (this->field0_0x0)._s_0.Y;
  dVar3 = (this->field0_0x0)._s_0.Z;
  return dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
}

// SizeSquared @ 1417fee00

float __thiscall UE::Math::TVector4<float>::SizeSquared(TVector4<float> *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (this->field0_0x0)._s_0.W;
  fVar2 = (this->field0_0x0)._s_0.Z;
  fVar3 = (this->field0_0x0)._s_0.X;
  fVar4 = (this->field0_0x0)._s_0.Y;
  return fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
}

// SizeSquared @ 1417fee40

double __thiscall UE::Math::TVector4<double>::SizeSquared(TVector4<double> *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (this->field0_0x0)._s_0.W;
  dVar2 = (this->field0_0x0)._s_0.Z;
  dVar3 = (this->field0_0x0)._s_0.X;
  dVar4 = (this->field0_0x0)._s_0.Y;
  return dVar4 * dVar4 + dVar3 * dVar3 + dVar2 * dVar2 + dVar1 * dVar1;
}

// ToOrientationQuat @ 1418059b0

TQuat<float> * __thiscall
UE::Math::TVector4<float>::ToOrientationQuat
          (TVector4<float> *this,TQuat<float> *__return_storage_ptr__)

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

// ToOrientationQuat @ 141805a90

TQuat<double> * __thiscall
UE::Math::TVector4<double>::ToOrientationQuat
          (TVector4<double> *this,TQuat<double> *__return_storage_ptr__)

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

// ToOrientationRotator @ 141805d50

TRotator<float> * __thiscall
UE::Math::TVector4<float>::ToOrientationRotator
          (TVector4<float> *this,TRotator<float> *__return_storage_ptr__)

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
      if (`public:_struct_UE::Math::TRotator<float>___cdecl_UE::Math::TVector4<float>::ToOrientationRotator(void)const___ptr64'
          ::__l8::OnceOnly == false) {
        ::FString::PrintfImpl((FString *)local_18,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
        ::FString::PrintfImpl(&local_28,L"P=%f Y=%f R=%f");
        UEAsserts_Private::InternalLogNANDiagnosticMessage
                  (L"TVector4::Rotation(): Rotator result %s contains NaN! Input FVector4 = %s");
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_18._0_8_);
        }
        `public:_struct_UE::Math::TRotator<float>___cdecl_UE::Math::TVector4<float>::ToOrientationRotator(void)const___ptr64'
        ::__l8::OnceOnly = true;
      }
    }
    else {
      local_18._0_8_ = __return_storage_ptr__;
      local_18._8_8_ = this;
      `UE::Math::TVector4<float>::ToOrientationRotator'::__l13::<lambda_1>::operator()(local_18);
    }
    fVar3 = TRotator<float>::ZeroRotator.Yaw;
    __return_storage_ptr__->Pitch = TRotator<float>::ZeroRotator.Pitch;
    __return_storage_ptr__->Yaw = fVar3;
    __return_storage_ptr__->Roll = TRotator<float>::ZeroRotator.Roll;
  }
  return __return_storage_ptr__;
}

// ToOrientationRotator @ 141805f30

TRotator<double> * __thiscall
UE::Math::TVector4<double>::ToOrientationRotator
          (TVector4<double> *this,TRotator<double> *__return_storage_ptr__)

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
      if (`public:_struct_UE::Math::TRotator<double>___cdecl_UE::Math::TVector4<double>::ToOrientationRotator(void)const___ptr64'
          ::__l8::OnceOnly == false) {
        ::FString::PrintfImpl((FString *)local_18,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
        ::FString::PrintfImpl(&local_28,L"P=%f Y=%f R=%f");
        UEAsserts_Private::InternalLogNANDiagnosticMessage
                  (L"TVector4::Rotation(): Rotator result %s contains NaN! Input FVector4 = %s");
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_18._0_8_);
        }
        `public:_struct_UE::Math::TRotator<double>___cdecl_UE::Math::TVector4<double>::ToOrientationRotator(void)const___ptr64'
        ::__l8::OnceOnly = true;
      }
    }
    else {
      local_18._0_8_ = __return_storage_ptr__;
      local_18._8_8_ = this;
      `UE::Math::TVector4<double>::ToOrientationRotator'::__l13::<lambda_1>::operator()(local_18);
    }
    dVar2 = TRotator<double>::ZeroRotator.Yaw;
    __return_storage_ptr__->Pitch = TRotator<double>::ZeroRotator.Pitch;
    __return_storage_ptr__->Yaw = dVar2;
    __return_storage_ptr__->Roll = TRotator<double>::ZeroRotator.Roll;
  }
  return __return_storage_ptr__;
}

// ToString @ 141806ec0

FString * __thiscall
UE::Math::TVector4<float>::ToString(TVector4<float> *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
  return __return_storage_ptr__;
}

// ToString @ 141806f20

FString * __thiscall
UE::Math::TVector4<double>::ToString(TVector4<double> *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
  return __return_storage_ptr__;
}

// Zero @ 14180e3a0

TVector4<float> * __cdecl UE::Math::TVector4<float>::Zero(TVector4<float> *__return_storage_ptr__)

{
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
  return __return_storage_ptr__;
}

// Zero @ 14180e3c0

TVector4<double> * __cdecl
UE::Math::TVector4<double>::Zero(TVector4<double> *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 0.0;
  return __return_storage_ptr__;
}

// operator() @ 15047c680

bool __thiscall
`UE::Math::TVector4<float>::ToOrientationRotator'::__l13::<lambda_1>::operator()(void *this)

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
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2863756258781954323>);
  if (bVar4) {
    ::FString::PrintfImpl(&local_18,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
    ::FString::PrintfImpl(&local_28,L"P=%f Y=%f R=%f");
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2863756258781954323>,
                       &`public:___cdecl_`public:_struct_UE::Math::TRotator<float>___cdecl_UE::Math::TVector4<float>::ToOrientationRotator(void)const___ptr64'::`13'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15047c787;
    }
  }
  bVar4 = false;
LAB_15047c787:
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

// operator() @ 15047c7e0

bool __thiscall
`UE::Math::TVector4<double>::ToOrientationRotator'::__l13::<lambda_1>::operator()(void *this)

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
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2863756258781954323>);
  if (bVar4) {
    ::FString::PrintfImpl(&local_18,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
    ::FString::PrintfImpl(&local_28,L"P=%f Y=%f R=%f");
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2863756258781954323>,
                       &`public:___cdecl_`public:_struct_UE::Math::TRotator<double>___cdecl_UE::Math::TVector4<double>::ToOrientationRotator(void)const___ptr64'::`13'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15047c8c5;
    }
  }
  bVar4 = false;
LAB_15047c8c5:
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

