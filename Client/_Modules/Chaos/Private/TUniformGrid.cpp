// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 21

// ClampIndex @ 143b17ea0

TVector<int,2> __thiscall
Chaos::TUniformGrid<double,2>::ClampIndex(TUniformGrid<double,2> *this,TVector<int,2> *param_1)

{
  int iVar1;
  int *in_R8;
  
  iVar1 = *in_R8;
  if (iVar1 < *(int *)&this->field_0x20) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = *(int *)&this->field_0x20 + -1;
  }
  (param_1->field0_0x0)._s_0.X = iVar1;
  iVar1 = in_R8[1];
  if (*(int *)&this->field_0x24 <= iVar1) {
    (param_1->field0_0x0)._s_0.Y = *(int *)&this->field_0x24 + -1;
    return (TVector<int,2>)(TVector<int,2>_u_0)param_1;
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  (param_1->field0_0x0)._s_0.Y = iVar1;
  return (TVector<int,2>)(TVector<int,2>_u_0)param_1;
}

// TUniformGrid<double,2> @ 143eb05d0

TUniformGrid<double,2> * __thiscall
Chaos::TUniformGrid<double,2>::TUniformGrid<double,2>
          (TUniformGrid<double,2> *this,TVector<double,2> *param_1,TVector<double,2> *param_2,
          TVector<int,2> *param_3,uint param_4)

{
  TUniformGridBase<double,2>::TUniformGridBase<double,2>
            ((TUniformGridBase<double,2> *)this,param_1,param_2,param_3,param_4);
  return this;
}

// TUniformGrid<double,2> @ 143eb0600

TUniformGrid<double,2> * __thiscall
Chaos::TUniformGrid<double,2>::TUniformGrid<double,2>(TUniformGrid<double,2> *this)

{
  return this;
}

// TUniformGrid<double,3> @ 143eb0610

TUniformGrid<double,3> * __thiscall
Chaos::TUniformGrid<double,3>::TUniformGrid<double,3>
          (TUniformGrid<double,3> *this,TVector<double,3> *param_1,TVector<double,3> *param_2,
          TVector<int,3> *param_3,uint param_4)

{
  TUniformGridBase<double,3>::TUniformGridBase<double,3>
            ((TUniformGridBase<double,3> *)this,param_1,param_2,param_3,param_4);
  return this;
}

// TUniformGrid<double,3> @ 143eb0640

TUniformGrid<double,3> * __thiscall
Chaos::TUniformGrid<double,3>::TUniformGrid<double,3>(TUniformGrid<double,3> *this)

{
  return this;
}

// ~TUniformGrid<double,2> @ 143eb2030

void __thiscall Chaos::TUniformGrid<double,2>::~TUniformGrid<double,2>(TUniformGrid<double,2> *this)

{
  return;
}

// ~TUniformGrid<double,3> @ 143eb2040

void __thiscall Chaos::TUniformGrid<double,3>::~TUniformGrid<double,3>(TUniformGrid<double,3> *this)

{
  return;
}

// Center @ 143eb8d00

TVector<double,2> * __thiscall
Chaos::TUniformGrid<double,2>::Center
          (TUniformGrid<double,2> *this,TVector<double,2> *__return_storage_ptr__,int param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  double dVar6;
  
  dVar6 = *(double *)&this->field_0x30 * __real_3fe0000000000000;
  uVar4 = (longlong)(*(int *)&this->field_0x24 * *(int *)&this->field_0x20) /
          (longlong)*(int *)&this->field_0x20;
  iVar5 = (int)uVar4;
  iVar3 = *(int *)&this->field_0x24;
  dVar1 = *(double *)&this->field_0x30;
  dVar2 = *(double *)&this->field_0x8;
  *(double *)__return_storage_ptr__ =
       ((double)(param_1 / iVar5) + __real_3fe0000000000000) * *(double *)&this->field_0x28 +
       *(double *)this;
  *(double *)&__return_storage_ptr__->field_0x8 =
       (double)((param_1 - (param_1 / iVar5) * iVar5) /
               (int)((longlong)((ulonglong)(uint)(iVar5 >> 0x1f) << 0x20 | uVar4 & 0xffffffff) /
                    (longlong)iVar3)) * dVar1 + dVar2 + dVar6;
  return __return_storage_ptr__;
}

// Center @ 143eb8da0

TVector<double,3> * __thiscall
Chaos::TUniformGrid<double,3>::Center
          (TUniformGrid<double,3> *this,TVector<double,3> *__return_storage_ptr__,int param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  dVar1 = __real_3fe0000000000000;
  iVar4 = *(int *)&this->field_0x38 * *(int *)&this->field_0x34;
  iVar2 = param_1 / iVar4;
  iVar3 = param_1 - iVar2 * iVar4;
  iVar4 = iVar3 / *(int *)&this->field_0x38;
  *(double *)__return_storage_ptr__ =
       ((double)iVar2 + __real_3fe0000000000000) * *(double *)&this->field_0x40 + *(double *)this;
  iVar2 = *(int *)&this->field_0x38;
  *(double *)&__return_storage_ptr__->field_0x8 =
       ((double)iVar4 + dVar1) * *(double *)&this->field_0x48 + *(double *)&this->field_0x8;
  *(double *)&__return_storage_ptr__->field_0x10 =
       ((double)(iVar3 - iVar4 * iVar2) + dVar1) * *(double *)&this->field_0x50 +
       *(double *)&this->field_0x10;
  return __return_storage_ptr__;
}

// Clamp @ 143eb8e40

TVector<double,2> * __thiscall
Chaos::TUniformGrid<double,2>::Clamp
          (TUniformGrid<double,2> *this,TVector<double,2> *__return_storage_ptr__,
          TVector<double,2> *param_1)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  
  lVar3 = (longlong)param_1 - (longlong)this;
  lVar4 = (longlong)__return_storage_ptr__ - (longlong)this;
  lVar2 = 2;
  do {
    dVar1 = *(double *)(lVar3 + (longlong)this);
    dVar5 = *(double *)&this->field_0x10;
    if ((dVar1 <= *(double *)&this->field_0x10) &&
       (dVar5 = *(double *)this, *(double *)this <= dVar1)) {
      dVar5 = dVar1;
    }
    *(double *)(lVar4 + (longlong)this) = dVar5;
    this = (TUniformGrid<double,2> *)&this->field_0x8;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return __return_storage_ptr__;
}

// Clamp @ 143eb8e90

TVector<double,3> * __thiscall
Chaos::TUniformGrid<double,3>::Clamp
          (TUniformGrid<double,3> *this,TVector<double,3> *__return_storage_ptr__,
          TVector<double,3> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = *(double *)param_1;
  dVar1 = *(double *)&this->field_0x18;
  if ((dVar2 <= *(double *)&this->field_0x18) && (dVar1 = *(double *)this, *(double *)this <= dVar2)
     ) {
    dVar1 = dVar2;
  }
  *(double *)__return_storage_ptr__ = dVar1;
  dVar2 = *(double *)&param_1->field_0x8;
  dVar1 = *(double *)&this->field_0x20;
  if ((dVar2 <= *(double *)&this->field_0x20) &&
     (dVar1 = *(double *)&this->field_0x8, *(double *)&this->field_0x8 <= dVar2)) {
    dVar1 = dVar2;
  }
  *(double *)&__return_storage_ptr__->field_0x8 = dVar1;
  dVar2 = *(double *)&this->field_0x28;
  dVar1 = *(double *)&param_1->field_0x10;
  if ((dVar1 <= dVar2) && (dVar2 = *(double *)&this->field_0x10, dVar2 <= dVar1)) {
    *(double *)&__return_storage_ptr__->field_0x10 = dVar1;
    return __return_storage_ptr__;
  }
  *(double *)&__return_storage_ptr__->field_0x10 = dVar2;
  return __return_storage_ptr__;
}

// ClampIndex @ 143eb8f10

TVector<int,3> * __thiscall
Chaos::TUniformGrid<double,3>::ClampIndex
          (TUniformGrid<double,3> *this,TVector<int,3> *__return_storage_ptr__,
          TVector<int,3> *param_1)

{
  int iVar1;
  
  iVar1 = (param_1->field0_0x0)._s_0.X;
  if (iVar1 < *(int *)&this->field_0x30) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = *(int *)&this->field_0x30 + -1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = iVar1;
  iVar1 = (param_1->field0_0x0)._s_0.Y;
  if (iVar1 < *(int *)&this->field_0x34) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = *(int *)&this->field_0x34 + -1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = iVar1;
  iVar1 = (param_1->field0_0x0)._s_0.Z;
  if (*(int *)&this->field_0x38 <= iVar1) {
    (__return_storage_ptr__->field0_0x0)._s_0.Z = *(int *)&this->field_0x38 + -1;
    return __return_storage_ptr__;
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = iVar1;
  return __return_storage_ptr__;
}

// ClampMinusHalf @ 143eb8f70

TVector<double,2> * __thiscall
Chaos::TUniformGrid<double,2>::ClampMinusHalf
          (TUniformGrid<double,2> *this,TVector<double,2> *__return_storage_ptr__,
          TVector<double,2> *param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double local_28 [5];
  
  lVar1 = 0;
  dVar3 = *(double *)&this->field_0x28 * __real_3fe0000000000000;
  dVar2 = *(double *)&this->field_0x30 * __real_3fe0000000000000;
  local_28[0] = *(double *)&this->field_0x10 - dVar3;
  local_28[2] = dVar3 + *(double *)this;
  local_28[1] = *(double *)&this->field_0x18 - dVar2;
  local_28[3] = dVar2 + *(double *)&this->field_0x8;
  do {
    dVar2 = *(double *)(&param_1->field_0x0 + lVar1);
    dVar3 = *(double *)((longlong)local_28 + lVar1);
    if ((dVar2 <= *(double *)((longlong)local_28 + lVar1)) &&
       (dVar3 = *(double *)((longlong)local_28 + lVar1 + 0x10), dVar3 <= dVar2)) {
      dVar3 = dVar2;
    }
    *(double *)(&__return_storage_ptr__->field_0x0 + lVar1) = dVar3;
    lVar1 = lVar1 + 8;
  } while (lVar1 < 0x10);
  return __return_storage_ptr__;
}

// ClampMinusHalf @ 143eb9010

TVector<double,3> * __thiscall
Chaos::TUniformGrid<double,3>::ClampMinusHalf
          (TUniformGrid<double,3> *this,TVector<double,3> *__return_storage_ptr__,
          TVector<double,3> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar5 = *(double *)&this->field_0x40 * __real_3fe0000000000000;
  dVar4 = *(double *)&this->field_0x50 * __real_3fe0000000000000;
  dVar6 = *(double *)&this->field_0x48 * __real_3fe0000000000000;
  dVar3 = *(double *)&this->field_0x18 - dVar5;
  dVar5 = dVar5 + *(double *)this;
  dVar7 = *(double *)&this->field_0x28 - dVar4;
  dVar1 = *(double *)param_1;
  dVar2 = *(double *)&this->field_0x20 - dVar6;
  dVar4 = dVar4 + *(double *)&this->field_0x10;
  dVar6 = dVar6 + *(double *)&this->field_0x8;
  if ((dVar1 <= dVar3) && (dVar3 = dVar1, dVar1 < dVar5)) {
    dVar3 = dVar5;
  }
  *(double *)__return_storage_ptr__ = dVar3;
  dVar1 = *(double *)&param_1->field_0x8;
  if ((dVar1 <= dVar2) && (dVar2 = dVar1, dVar1 < dVar6)) {
    dVar2 = dVar6;
  }
  *(double *)&__return_storage_ptr__->field_0x8 = dVar2;
  dVar1 = *(double *)&param_1->field_0x10;
  if (dVar1 <= dVar7) {
    if (dVar4 <= dVar1) {
      *(double *)&__return_storage_ptr__->field_0x10 = dVar1;
      return __return_storage_ptr__;
    }
    *(double *)&__return_storage_ptr__->field_0x10 = dVar4;
    return __return_storage_ptr__;
  }
  *(double *)&__return_storage_ptr__->field_0x10 = dVar7;
  return __return_storage_ptr__;
}

// GetFaceIndex @ 143ec2df0

Pair<int,Chaos::TVector<int,3>_> * __thiscall
Chaos::TUniformGrid<double,3>::GetFaceIndex
          (TUniformGrid<double,3> *this,Pair<int,Chaos::TVector<int,3>_> *__return_storage_ptr__,
          int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int aiStack_18 [4];
  
  iVar2 = *(int *)&this->field_0x34;
  iVar5 = *(int *)&this->field_0x38;
  iVar4 = (*(int *)&this->field_0x30 + 1) * iVar5 * iVar2;
  iVar3 = (iVar2 + 1) * iVar5 * *(int *)&this->field_0x30;
  uVar1 = 0;
  if (iVar4 < param_1) {
    param_1 = param_1 - iVar4;
    uVar1 = 1;
    if (iVar3 < param_1) {
      uVar1 = 2;
      param_1 = param_1 - iVar3;
    }
  }
  aiStack_18[1] = 0;
  aiStack_18[2] = 0;
  __return_storage_ptr__->First = uVar1;
  aiStack_18[uVar1] = 1;
  iVar5 = iVar5 + aiStack_18[2];
  iVar3 = (aiStack_18[1] + iVar2) * iVar5;
  iVar2 = param_1 / iVar3;
  (__return_storage_ptr__->Second).field0_0x0._s_0.X = iVar2;
  iVar3 = param_1 - iVar2 * iVar3;
  iVar2 = iVar3 / iVar5;
  (__return_storage_ptr__->Second).field0_0x0._s_0.Y = iVar2;
  (__return_storage_ptr__->Second).field0_0x0._s_0.Z = iVar3 - iVar2 * iVar5;
  return __return_storage_ptr__;
}

// GetIndex @ 143ec3020

TVector<int,2> __thiscall
Chaos::TUniformGrid<double,2>::GetIndex(TUniformGrid<double,2> *this,int param_1)

{
  ulonglong uVar1;
  undefined4 in_register_00000014;
  TVector<int,2>_u_0 TVar2;
  int in_R8D;
  int iVar3;
  
  TVar2._s_0.Y = in_register_00000014;
  TVar2._s_0.X = param_1;
  uVar1 = (longlong)(*(int *)&this->field_0x20 * *(int *)&this->field_0x24) /
          (longlong)*(int *)&this->field_0x20;
  iVar3 = (int)uVar1;
  *(int *)TVar2 = in_R8D / iVar3;
  *(int *)((longlong)TVar2 + 4) =
       (in_R8D - (in_R8D / iVar3) * iVar3) /
       (int)((longlong)((ulonglong)(uint)(iVar3 >> 0x1f) << 0x20 | uVar1 & 0xffffffff) /
            (longlong)*(int *)&this->field_0x24);
  return (TVector<int,2>)TVar2;
}

// GetIndex @ 143ec3060

TVector<int,3> * __thiscall
Chaos::TUniformGrid<double,3>::GetIndex
          (TUniformGrid<double,3> *this,TVector<int,3> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 / (*(int *)&this->field_0x34 * *(int *)&this->field_0x38);
  (__return_storage_ptr__->field0_0x0)._s_0.X = iVar1;
  iVar2 = param_1 - iVar1 * *(int *)&this->field_0x34 * *(int *)&this->field_0x38;
  iVar1 = iVar2 / *(int *)&this->field_0x38;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = iVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = iVar2 - iVar1 * *(int *)&this->field_0x38;
  return __return_storage_ptr__;
}

// GetNumFaces @ 143ec3630

int __thiscall Chaos::TUniformGrid<double,3>::GetNumFaces(TUniformGrid<double,3> *this)

{
  int iVar1;
  
  iVar1 = *(int *)&this->field_0x34;
  return (*(int *)&this->field_0x38 * iVar1 * 3 + *(int *)&this->field_0x3c + iVar1) *
         *(int *)&this->field_0x30 + iVar1 * *(int *)&this->field_0x38;
}

// IsValid @ 143ec4aa0

bool __thiscall
Chaos::TUniformGrid<double,2>::IsValid(TUniformGrid<double,2> *this,TVector<int,2> *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (param_1->field0_0x0)._s_0.X;
  if (iVar1 < *(int *)&this->field_0x20) {
    iVar4 = iVar1;
    if (iVar1 < 0) {
      iVar4 = 0;
    }
  }
  else {
    iVar4 = *(int *)&this->field_0x20 + -1;
  }
  iVar2 = (param_1->field0_0x0)._s_0.Y;
  if (iVar2 < *(int *)&this->field_0x24) {
    iVar3 = iVar2;
    if (iVar2 < 0) {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = *(int *)&this->field_0x24 + -1;
  }
  if ((iVar1 == iVar4) && (iVar2 == iVar3)) {
    return true;
  }
  return false;
}

// IsValid @ 143ec4af0

bool __thiscall
Chaos::TUniformGrid<double,3>::IsValid(TUniformGrid<double,3> *this,TVector<int,3> *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = (param_1->field0_0x0)._s_0.X;
  if (iVar1 < *(int *)&this->field_0x30) {
    iVar5 = iVar1;
    if (iVar1 < 0) {
      iVar5 = 0;
    }
  }
  else {
    iVar5 = *(int *)&this->field_0x30 + -1;
  }
  iVar2 = (param_1->field0_0x0)._s_0.Y;
  if (iVar2 < *(int *)&this->field_0x34) {
    iVar6 = iVar2;
    if (iVar2 < 0) {
      iVar6 = 0;
    }
  }
  else {
    iVar6 = *(int *)&this->field_0x34 + -1;
  }
  iVar3 = (param_1->field0_0x0)._s_0.Z;
  if (iVar3 < *(int *)&this->field_0x38) {
    iVar4 = iVar3;
    if (iVar3 < 0) {
      iVar4 = 0;
    }
  }
  else {
    iVar4 = *(int *)&this->field_0x38 + -1;
  }
  if (((iVar1 == iVar5) && (iVar2 == iVar6)) && (iVar3 == iVar4)) {
    return true;
  }
  return false;
}

// SubGrid @ 143ed1d50

TUniformGrid<double,3> * __thiscall
Chaos::TUniformGrid<double,3>::SubGrid
          (TUniformGrid<double,3> *this,TUniformGrid<double,3> *__return_storage_ptr__,
          TVector<int,3> *param_1,TVector<int,3> *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  double dVar10;
  
  dVar1 = *(double *)&this->field_0x10;
  dVar10 = *(double *)&this->field_0x8 +
           (double)(param_1->field0_0x0)._s_0.Y * *(double *)&this->field_0x48;
  iVar3 = (param_1->field0_0x0)._s_0.Z;
  dVar2 = *(double *)&this->field_0x50;
  auVar7._8_4_ = SUB84(dVar10,0);
  auVar7._0_8_ = *(double *)this +
                 (double)(param_1->field0_0x0)._s_0.X * *(double *)&this->field_0x40;
  auVar7._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__ = auVar7;
  *(double *)&__return_storage_ptr__->field_0x10 = dVar1 + (double)iVar3 * dVar2;
  dVar1 = *(double *)&this->field_0x10;
  iVar3 = (param_2->field0_0x0)._s_0.Z;
  dVar10 = *(double *)&this->field_0x8 +
           (double)((param_2->field0_0x0)._s_0.Y + 1) * *(double *)&this->field_0x48;
  dVar2 = *(double *)&this->field_0x50;
  auVar8._8_4_ = SUB84(dVar10,0);
  auVar8._0_8_ = *(double *)this +
                 (double)((param_2->field0_0x0)._s_0.X + 1) * *(double *)&this->field_0x40;
  auVar8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field_0x18 = auVar8;
  *(double *)&__return_storage_ptr__->field_0x28 = dVar1 + (double)(iVar3 + 1) * dVar2;
  iVar3 = (param_2->field0_0x0)._s_0.Y;
  iVar4 = (param_1->field0_0x0)._s_0.Y;
  iVar5 = (param_2->field0_0x0)._s_0.Z;
  iVar6 = (param_1->field0_0x0)._s_0.Z;
  *(int *)&__return_storage_ptr__->field_0x30 =
       ((param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X) + 1;
  *(int *)&__return_storage_ptr__->field_0x34 = (iVar3 - iVar4) + 1;
  *(int *)&__return_storage_ptr__->field_0x38 = (iVar5 - iVar6) + 1;
  uVar9 = *(undefined8 *)&this->field_0x48;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = *(undefined8 *)&this->field_0x40;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = uVar9;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = *(undefined8 *)&this->field_0x50;
  return __return_storage_ptr__;
}

