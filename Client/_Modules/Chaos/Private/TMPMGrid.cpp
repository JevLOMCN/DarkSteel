// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 44

// TMPMGrid<float> @ 143eb0430

TMPMGrid<float> * __thiscall
Chaos::TMPMGrid<float>::TMPMGrid<float>
          (TMPMGrid<float> *this,TVector<float,3> *param_1,TVector<float,3> *param_2,
          TVector<int,3> *param_3,uint param_4)

{
  TUniformGridBase<float,3>::TUniformGridBase<float,3>
            ((TUniformGridBase<float,3> *)this,param_1,param_2,param_3,param_4);
  this->interp = linear;
  this->NPerDir = 2;
  return this;
}

// TMPMGrid<float> @ 143eb0470

TMPMGrid<float> * __thiscall
Chaos::TMPMGrid<float>::TMPMGrid<float>(TMPMGrid<float> *this,int param_1)

{
  float fVar1;
  
  fVar1 = __real_3f800000;
  this->interp = linear;
  this->NPerDir = 2;
  fVar1 = fVar1 / (float)param_1;
  *(float *)((longlong)&this->_padding_ + 4) = fVar1;
  *(float *)&this->_padding_ = fVar1;
  *(float *)((longlong)&this->_padding_ + 4) = fVar1;
  return this;
}

// TMPMGrid<float> @ 143eb04b0

TMPMGrid<float> * __thiscall
Chaos::TMPMGrid<float>::TMPMGrid<float>(TMPMGrid<float> *this,float param_1)

{
  this->interp = linear;
  this->NPerDir = 2;
  *(float *)((longlong)&this->_padding_ + 4) = param_1;
  *(float *)&this->_padding_ = param_1;
  *(float *)((longlong)&this->_padding_ + 4) = param_1;
  return this;
}

// TMPMGrid<float> @ 143eb04e0

TMPMGrid<float> * __thiscall Chaos::TMPMGrid<float>::TMPMGrid<float>(TMPMGrid<float> *this)

{
  this->interp = linear;
  this->NPerDir = 2;
  return this;
}

// TMPMGrid<double> @ 143eb0500

TMPMGrid<double> * __thiscall
Chaos::TMPMGrid<double>::TMPMGrid<double>
          (TMPMGrid<double> *this,TVector<double,3> *param_1,TVector<double,3> *param_2,
          TVector<int,3> *param_3,uint param_4)

{
  TUniformGridBase<double,3>::TUniformGridBase<double,3>
            ((TUniformGridBase<double,3> *)this,param_1,param_2,param_3,param_4);
  this->interp = linear;
  this->NPerDir = 2;
  return this;
}

// TMPMGrid<double> @ 143eb0540

TMPMGrid<double> * __thiscall
Chaos::TMPMGrid<double>::TMPMGrid<double>(TMPMGrid<double> *this,int param_1)

{
  double dVar1;
  
  dVar1 = __real_3ff0000000000000;
  this->interp = linear;
  this->NPerDir = 2;
  dVar1 = dVar1 / (double)param_1;
  this->_padding_ = (longlong)dVar1;
  this->_padding_ = (longlong)dVar1;
  this->_padding_ = (longlong)dVar1;
  return this;
}

// TMPMGrid<double> @ 143eb0580

TMPMGrid<double> * __thiscall
Chaos::TMPMGrid<double>::TMPMGrid<double>(TMPMGrid<double> *this,double param_1)

{
  this->interp = linear;
  this->NPerDir = 2;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)param_1;
  return this;
}

// TMPMGrid<double> @ 143eb05b0

TMPMGrid<double> * __thiscall Chaos::TMPMGrid<double>::TMPMGrid<double>(TMPMGrid<double> *this)

{
  this->interp = linear;
  this->NPerDir = 2;
  return this;
}

// ~TMPMGrid<float> @ 143eb2010

void __thiscall Chaos::TMPMGrid<float>::~TMPMGrid<float>(TMPMGrid<float> *this)

{
  return;
}

// ~TMPMGrid<double> @ 143eb2020

void __thiscall Chaos::TMPMGrid<double>::~TMPMGrid<double>(TMPMGrid<double> *this)

{
  return;
}

// BaseNodeIndex @ 143eb7740

void __thiscall
Chaos::TMPMGrid<float>::BaseNodeIndex
          (TMPMGrid<float> *this,TVector<float,3> *param_1,TVector<int,3> *param_2,
          TVector<float,3> *param_3)

{
  undefined1 in_XMM0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1 = roundps(in_XMM0,ZEXT416((uint)((*(float *)param_1 - *(float *)&this->_padding_) /
                                         *(float *)((longlong)&this->_padding_ + 4))),1);
  (param_2->field0_0x0)._s_0.X = (int)auVar1._0_4_;
  auVar2 = roundps(auVar1,ZEXT416((uint)((*(float *)&param_1->field_0x4 -
                                         *(float *)((longlong)&this->_padding_ + 4)) /
                                        *(float *)&this->_padding_)),1);
  (param_2->field0_0x0)._s_0.Y = (int)auVar2._0_4_;
  auVar2 = roundps(auVar2,ZEXT416((uint)((*(float *)&param_1->field_0x8 - *(float *)&this->_padding_
                                         ) / *(float *)((longlong)&this->_padding_ + 4))),1);
  (param_2->field0_0x0)._s_0.Z = (int)auVar2._0_4_;
  *(float *)param_3 =
       (*(float *)param_1 - *(float *)&this->_padding_) / *(float *)((longlong)&this->_padding_ + 4)
       - (float)(int)auVar1._0_4_;
  *(float *)&param_3->field_0x4 =
       (*(float *)&param_1->field_0x4 - *(float *)((longlong)&this->_padding_ + 4)) /
       *(float *)&this->_padding_ - (float)(param_2->field0_0x0)._s_0.Y;
  *(float *)&param_3->field_0x8 =
       (*(float *)&param_1->field_0x8 - *(float *)&this->_padding_) /
       *(float *)((longlong)&this->_padding_ + 4) - (float)(param_2->field0_0x0)._s_0.Z;
  return;
}

// BaseNodeIndex @ 143eb7810

void __thiscall
Chaos::TMPMGrid<double>::BaseNodeIndex
          (TMPMGrid<double> *this,TVector<double,3> *param_1,TVector<int,3> *param_2,
          TVector<double,3> *param_3)

{
  undefined1 auVar1 [16];
  undefined1 in_XMM0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (*(double *)param_1 - (double)this->_padding_) / (double)this->_padding_;
  auVar2 = roundpd(in_XMM0,auVar2,1);
  (param_2->field0_0x0)._s_0.X = (int)auVar2._0_8_;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (*(double *)&param_1->field_0x8 - (double)this->_padding_) /
                 (double)this->_padding_;
  auVar3 = roundpd(auVar2,auVar3,1);
  (param_2->field0_0x0)._s_0.Y = (int)auVar3._0_8_;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (*(double *)&param_1->field_0x10 - (double)this->_padding_) /
                 (double)this->_padding_;
  auVar3 = roundpd(auVar3,auVar1,1);
  (param_2->field0_0x0)._s_0.Z = (int)auVar3._0_8_;
  *(double *)param_3 =
       (*(double *)param_1 - (double)this->_padding_) / (double)this->_padding_ -
       (double)(int)auVar2._0_8_;
  *(double *)&param_3->field_0x8 =
       (*(double *)&param_1->field_0x8 - (double)this->_padding_) / (double)this->_padding_ -
       (double)(param_2->field0_0x0)._s_0.Y;
  *(double *)&param_3->field_0x10 =
       (*(double *)&param_1->field_0x10 - (double)this->_padding_) / (double)this->_padding_ -
       (double)(param_2->field0_0x0)._s_0.Z;
  return;
}

// FlatIndex @ 143ebf6b0

int __thiscall Chaos::TMPMGrid<float>::FlatIndex(TMPMGrid<float> *this,TVector<int,3> *param_1)

{
  if (this->interp == linear) {
    return (*(int *)((longlong)&this->_padding_ + 4) * (param_1->field0_0x0)._s_0.X +
           (param_1->field0_0x0)._s_0.Y) * (int)this->_padding_ + (param_1->field0_0x0)._s_0.Z;
  }
  return (param_1->field0_0x0)._s_0.Z + 1 +
         ((*(int *)((longlong)&this->_padding_ + 4) + 1) * ((param_1->field0_0x0)._s_0.X + 1) +
         (param_1->field0_0x0)._s_0.Y + 1) * ((int)this->_padding_ + 1);
}

// FlatIndex @ 143ebf700

int __thiscall Chaos::TMPMGrid<double>::FlatIndex(TMPMGrid<double> *this,TVector<int,3> *param_1)

{
  if (this->interp == linear) {
    return (*(int *)((longlong)&this->_padding_ + 4) * (param_1->field0_0x0)._s_0.X +
           (param_1->field0_0x0)._s_0.Y) * (int)this->_padding_ + (param_1->field0_0x0)._s_0.Z;
  }
  return (param_1->field0_0x0)._s_0.Z + 1 +
         ((*(int *)((longlong)&this->_padding_ + 4) + 1) * ((param_1->field0_0x0)._s_0.X + 1) +
         (param_1->field0_0x0)._s_0.Y + 1) * ((int)this->_padding_ + 1);
}

// GetCells @ 143ec07a0

TVector<int,3> * __thiscall
Chaos::TMPMGrid<float>::GetCells(TMPMGrid<float> *this,TVector<int,3> *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  *(longlong *)&__return_storage_ptr__->field0_0x0 = this->_padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (int)lVar1;
  return __return_storage_ptr__;
}

// GetCells @ 143ec07c0

TVector<int,3> * __thiscall
Chaos::TMPMGrid<double>::GetCells(TMPMGrid<double> *this,TVector<int,3> *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  *(longlong *)&__return_storage_ptr__->field0_0x0 = this->_padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (int)lVar1;
  return __return_storage_ptr__;
}

// GetDx @ 143ec0be0

TVector<float,3> * __thiscall Chaos::TMPMGrid<float>::GetDx(TMPMGrid<float> *this)

{
  return (TVector<float,3> *)((longlong)&this->_padding_ + 4);
}

// GetDx @ 143ec0bf0

TVector<double,3> * __thiscall Chaos::TMPMGrid<double>::GetDx(TMPMGrid<double> *this)

{
  return (TVector<double,3> *)&this->_padding_;
}

// GetMinCorner @ 143ec34e0

TVector<float,3> * __thiscall
Chaos::TMPMGrid<float>::GetMinCorner(TMPMGrid<float> *this,TVector<float,3> *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  *(longlong *)__return_storage_ptr__ = this->_padding_;
  *(int *)&__return_storage_ptr__->field_0x8 = (int)lVar1;
  return __return_storage_ptr__;
}

// GetMinCorner @ 143ec3500

TVector<double,3> * __thiscall
Chaos::TMPMGrid<double>::GetMinCorner
          (TMPMGrid<double> *this,TVector<double,3> *__return_storage_ptr__)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = this->_padding_;
  lVar1 = this->_padding_;
  *(longlong *)__return_storage_ptr__ = this->_padding_;
  *(longlong *)&__return_storage_ptr__->field_0x8 = lVar2;
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  return __return_storage_ptr__;
}

// GradNi @ 143ec4140

void __thiscall
Chaos::TMPMGrid<float>::GradNi
          (TMPMGrid<float> *this,TVector<float,3> *param_1,TVector<float,3> *param_2,
          TVector<float,3> *param_3)

{
  *(float *)param_3 =
       *(float *)param_2 * *(float *)&param_1->field_0x4 * *(float *)&param_1->field_0x8;
  *(float *)&param_3->field_0x4 =
       *(float *)&param_2->field_0x4 * *(float *)param_1 * *(float *)&param_1->field_0x8;
  *(float *)&param_3->field_0x8 =
       *(float *)param_1 * *(float *)&param_1->field_0x4 * *(float *)&param_2->field_0x8;
  return;
}

// GradNi @ 143ec4190

void __thiscall
Chaos::TMPMGrid<double>::GradNi
          (TMPMGrid<double> *this,TVector<double,3> *param_1,TVector<double,3> *param_2,
          TVector<double,3> *param_3)

{
  *(double *)param_3 =
       *(double *)param_2 * *(double *)&param_1->field_0x8 * *(double *)&param_1->field_0x10;
  *(double *)&param_3->field_0x8 =
       *(double *)&param_2->field_0x8 * *(double *)param_1 * *(double *)&param_1->field_0x10;
  *(double *)&param_3->field_0x10 =
       *(double *)param_1 * *(double *)&param_1->field_0x8 * *(double *)&param_2->field_0x10;
  return;
}

// Lin2MultiIndex @ 143ec4b70

TVector<int,3> * __thiscall
Chaos::TMPMGrid<float>::Lin2MultiIndex
          (TMPMGrid<float> *this,TVector<int,3> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar1 = (int)this->_padding_;
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  if (this->interp == linear) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = param_1 / (iVar1 * iVar2);
    uVar3 = (longlong)param_1 / (longlong)(int)this->_padding_;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (int)((longlong)((ulonglong)(uint)((int)uVar3 >> 0x1f) << 0x20 | uVar3 & 0xffffffff) %
              (longlong)*(int *)((longlong)&this->_padding_ + 4));
    (__return_storage_ptr__->field0_0x0)._s_0.Z = param_1 % (int)this->_padding_;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = param_1 / ((iVar1 + 1) * (iVar2 + 1)) + -1;
  uVar3 = (longlong)param_1 / (longlong)((int)this->_padding_ + 1);
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (int)((longlong)((ulonglong)(uint)((int)uVar3 >> 0x1f) << 0x20 | uVar3 & 0xffffffff) %
            (longlong)(*(int *)((longlong)&this->_padding_ + 4) + 1)) + -1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = param_1 % ((int)this->_padding_ + 1) + -1;
  return __return_storage_ptr__;
}

// Lin2MultiIndex @ 143ec4c00

TVector<int,3> * __thiscall
Chaos::TMPMGrid<double>::Lin2MultiIndex
          (TMPMGrid<double> *this,TVector<int,3> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar1 = (int)this->_padding_;
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  if (this->interp == linear) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = param_1 / (iVar1 * iVar2);
    uVar3 = (longlong)param_1 / (longlong)(int)this->_padding_;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (int)((longlong)((ulonglong)(uint)((int)uVar3 >> 0x1f) << 0x20 | uVar3 & 0xffffffff) %
              (longlong)*(int *)((longlong)&this->_padding_ + 4));
    (__return_storage_ptr__->field0_0x0)._s_0.Z = param_1 % (int)this->_padding_;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = param_1 / ((iVar1 + 1) * (iVar2 + 1)) + -1;
  uVar3 = (longlong)param_1 / (longlong)((int)this->_padding_ + 1);
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (int)((longlong)((ulonglong)(uint)((int)uVar3 >> 0x1f) << 0x20 | uVar3 & 0xffffffff) %
            (longlong)(*(int *)((longlong)&this->_padding_ + 4) + 1)) + -1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = param_1 % ((int)this->_padding_ + 1) + -1;
  return __return_storage_ptr__;
}

// Loc2GlobIndex @ 143ec5260

TVector<int,3> * __thiscall
Chaos::TMPMGrid<float>::Loc2GlobIndex
          (TMPMGrid<float> *this,TVector<int,3> *__return_storage_ptr__,TVector<int,3> *param_1,
          TVector<int,3> *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_1->field0_0x0)._s_0.X;
  iVar2 = (param_2->field0_0x0)._s_0.X;
  if (this->interp == linear) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = iVar1 + iVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (param_2->field0_0x0)._s_0.Y + (param_1->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         (param_2->field0_0x0)._s_0.Z + (param_1->field0_0x0)._s_0.Z;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = iVar1 + -1 + iVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (param_2->field0_0x0)._s_0.Y + (param_1->field0_0x0)._s_0.Y + -1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (param_2->field0_0x0)._s_0.Z + (param_1->field0_0x0)._s_0.Z + -1;
  return __return_storage_ptr__;
}

// Loc2GlobIndex @ 143ec52c0

int __thiscall
Chaos::TMPMGrid<float>::Loc2GlobIndex(TMPMGrid<float> *this,int param_1,TVector<int,3> *param_2)

{
  if (this->interp == linear) {
    return (*(int *)((longlong)&this->_padding_ + 4) * (param_2->field0_0x0)._s_0.X +
           (param_2->field0_0x0)._s_0.Y) * (int)this->_padding_ + param_1 +
           (param_2->field0_0x0)._s_0.Z;
  }
  return (param_2->field0_0x0)._s_0.Z + -1 +
         ((param_2->field0_0x0)._s_0.Y + -1 +
         ((param_2->field0_0x0)._s_0.X + -1) * (*(int *)((longlong)&this->_padding_ + 4) + 1)) *
         ((int)this->_padding_ + 1) + param_1;
}

// Loc2GlobIndex @ 143ec5320

TVector<int,3> * __thiscall
Chaos::TMPMGrid<double>::Loc2GlobIndex
          (TMPMGrid<double> *this,TVector<int,3> *__return_storage_ptr__,TVector<int,3> *param_1,
          TVector<int,3> *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_1->field0_0x0)._s_0.X;
  iVar2 = (param_2->field0_0x0)._s_0.X;
  if (this->interp == linear) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = iVar1 + iVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (param_2->field0_0x0)._s_0.Y + (param_1->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         (param_2->field0_0x0)._s_0.Z + (param_1->field0_0x0)._s_0.Z;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = iVar1 + -1 + iVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (param_2->field0_0x0)._s_0.Y + (param_1->field0_0x0)._s_0.Y + -1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (param_2->field0_0x0)._s_0.Z + (param_1->field0_0x0)._s_0.Z + -1;
  return __return_storage_ptr__;
}

// Loc2GlobIndex @ 143ec5380

int __thiscall
Chaos::TMPMGrid<double>::Loc2GlobIndex(TMPMGrid<double> *this,int param_1,TVector<int,3> *param_2)

{
  if (this->interp == linear) {
    return (*(int *)((longlong)&this->_padding_ + 4) * (param_2->field0_0x0)._s_0.X +
           (param_2->field0_0x0)._s_0.Y) * (int)this->_padding_ + param_1 +
           (param_2->field0_0x0)._s_0.Z;
  }
  return (param_2->field0_0x0)._s_0.Z + -1 +
         ((param_2->field0_0x0)._s_0.Y + -1 +
         ((param_2->field0_0x0)._s_0.X + -1) * (*(int *)((longlong)&this->_padding_ + 4) + 1)) *
         ((int)this->_padding_ + 1) + param_1;
}

// Nijk @ 143ec6ec0

float __thiscall Chaos::TMPMGrid<float>::Nijk(TMPMGrid<float> *this,float param_1,int param_2)

{
  float fVar1;
  
  if (this->interp == linear) {
    return ((param_1 + param_1) - __real_3f800000) * (float)param_2 + (__real_3f800000 - param_1);
  }
  fVar1 = (float)param_2 - __real_3f800000;
  return ((((param_1 * param_1 - param_1) * __real_3fc00000 - __real_3e800000) * fVar1 +
          (param_1 * __real_3f000000 - __real_3e800000)) * fVar1 - param_1 * param_1) + param_1 +
         __real_3f000000;
}

// Nijk @ 143ec6f70

double __thiscall Chaos::TMPMGrid<double>::Nijk(TMPMGrid<double> *this,double param_1,int param_2)

{
  double dVar1;
  
  if (this->interp == linear) {
    return ((param_1 + param_1) - __real_3ff0000000000000) * (double)param_2 +
           (__real_3ff0000000000000 - param_1);
  }
  dVar1 = (double)param_2 - __real_3ff0000000000000;
  return ((((param_1 * param_1 - param_1) * __real_3ff8000000000000 - __real_3fd0000000000000) *
           dVar1 + (param_1 * __real_3fe0000000000000 - __real_3fd0000000000000)) * dVar1 -
         param_1 * param_1) + param_1 + __real_3fe0000000000000;
}

// Node @ 143ec7020

TVector<float,3> * __thiscall
Chaos::TMPMGrid<float>::Node
          (TMPMGrid<float> *this,TVector<float,3> *__return_storage_ptr__,TVector<int,3> *param_1)

{
  float fVar1;
  float fVar2;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
  fVar1 = __real_3f000000;
  fVar2 = (float)(param_1->field0_0x0)._s_0.X;
  if (this->interp == linear) {
    *(float *)__return_storage_ptr__ =
         fVar2 * *(float *)((longlong)&this->_padding_ + 4) + *(float *)&this->_padding_;
    *(float *)&__return_storage_ptr__->field_0x4 =
         (float)(param_1->field0_0x0)._s_0.Y * *(float *)&this->_padding_ +
         *(float *)((longlong)&this->_padding_ + 4);
    *(float *)&__return_storage_ptr__->field_0x8 =
         (float)(param_1->field0_0x0)._s_0.Z * *(float *)((longlong)&this->_padding_ + 4) +
         *(float *)&this->_padding_;
    return __return_storage_ptr__;
  }
  *(float *)__return_storage_ptr__ =
       (fVar2 + __real_3f000000) * *(float *)((longlong)&this->_padding_ + 4) +
       *(float *)&this->_padding_;
  *(float *)&__return_storage_ptr__->field_0x4 =
       ((float)(param_1->field0_0x0)._s_0.Y + fVar1) * *(float *)&this->_padding_ +
       *(float *)((longlong)&this->_padding_ + 4);
  *(float *)&__return_storage_ptr__->field_0x8 =
       ((float)(param_1->field0_0x0)._s_0.Z + fVar1) * *(float *)((longlong)&this->_padding_ + 4) +
       *(float *)&this->_padding_;
  return __return_storage_ptr__;
}

// Node @ 143ec70e0

TVector<float,3> * __thiscall
Chaos::TMPMGrid<float>::Node
          (TMPMGrid<float> *this,TVector<float,3> *__return_storage_ptr__,int param_1)

{
  ulonglong uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  fVar2 = __real_3f000000;
  if (this->interp == linear) {
    iVar3 = (int)this->_padding_;
    uVar1 = (longlong)param_1 / (longlong)iVar3;
    iVar4 = *(int *)((longlong)&this->_padding_ + 4);
    *(float *)__return_storage_ptr__ =
         (float)(param_1 / (*(int *)((longlong)&this->_padding_ + 4) * (int)this->_padding_)) *
         *(float *)((longlong)&this->_padding_ + 4) + *(float *)&this->_padding_;
    *(float *)&__return_storage_ptr__->field_0x4 =
         (float)(int)((longlong)((ulonglong)(uint)((int)uVar1 >> 0x1f) << 0x20 | uVar1 & 0xffffffff)
                     % (longlong)iVar4) * *(float *)&this->_padding_ +
         *(float *)((longlong)&this->_padding_ + 4);
    *(float *)&__return_storage_ptr__->field_0x8 =
         (float)(param_1 % iVar3) * *(float *)((longlong)&this->_padding_ + 4) +
         *(float *)&this->_padding_;
    return __return_storage_ptr__;
  }
  iVar3 = (int)this->_padding_ + 1;
  iVar4 = *(int *)((longlong)&this->_padding_ + 4) + 1;
  fVar5 = (float)(param_1 % iVar3 + -1) + __real_3f000000;
  *(float *)__return_storage_ptr__ =
       ((float)(param_1 / (iVar3 * iVar4) + -1) + __real_3f000000) *
       *(float *)((longlong)&this->_padding_ + 4) + *(float *)&this->_padding_;
  *(float *)&__return_storage_ptr__->field_0x4 =
       ((float)((int)((longlong)
                      ((ulonglong)(uint)((int)((longlong)param_1 / (longlong)iVar3) >> 0x1f) << 0x20
                      | (longlong)param_1 / (longlong)iVar3 & 0xffffffffU) % (longlong)iVar4) + -1)
       + fVar2) * *(float *)&this->_padding_ + *(float *)((longlong)&this->_padding_ + 4);
  *(float *)&__return_storage_ptr__->field_0x8 =
       fVar5 * *(float *)((longlong)&this->_padding_ + 4) + *(float *)&this->_padding_;
  return __return_storage_ptr__;
}

// Node @ 143ec7220

TVector<double,3> * __thiscall
Chaos::TMPMGrid<double>::Node
          (TMPMGrid<double> *this,TVector<double,3> *__return_storage_ptr__,TVector<int,3> *param_1)

{
  double dVar1;
  double dVar2;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  dVar1 = __real_3fe0000000000000;
  dVar2 = (double)(param_1->field0_0x0)._s_0.X;
  if (this->interp == linear) {
    *(double *)__return_storage_ptr__ = dVar2 * (double)this->_padding_ + (double)this->_padding_;
    *(double *)&__return_storage_ptr__->field_0x8 =
         (double)(param_1->field0_0x0)._s_0.Y * (double)this->_padding_ + (double)this->_padding_;
    *(double *)&__return_storage_ptr__->field_0x10 =
         (double)(param_1->field0_0x0)._s_0.Z * (double)this->_padding_ + (double)this->_padding_;
    return __return_storage_ptr__;
  }
  *(double *)__return_storage_ptr__ =
       (dVar2 + __real_3fe0000000000000) * (double)this->_padding_ + (double)this->_padding_;
  *(double *)&__return_storage_ptr__->field_0x8 =
       ((double)(param_1->field0_0x0)._s_0.Y + dVar1) * (double)this->_padding_ +
       (double)this->_padding_;
  *(double *)&__return_storage_ptr__->field_0x10 =
       ((double)(param_1->field0_0x0)._s_0.Z + dVar1) * (double)this->_padding_ +
       (double)this->_padding_;
  return __return_storage_ptr__;
}

// Node @ 143ec72e0

TVector<double,3> * __thiscall
Chaos::TMPMGrid<double>::Node
          (TMPMGrid<double> *this,TVector<double,3> *__return_storage_ptr__,int param_1)

{
  ulonglong uVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  
  dVar2 = __real_3fe0000000000000;
  if (this->interp == linear) {
    iVar3 = (int)this->_padding_;
    uVar1 = (longlong)param_1 / (longlong)iVar3;
    iVar4 = *(int *)((longlong)&this->_padding_ + 4);
    *(double *)__return_storage_ptr__ =
         (double)(param_1 / (*(int *)((longlong)&this->_padding_ + 4) * (int)this->_padding_)) *
         (double)this->_padding_ + (double)this->_padding_;
    *(double *)&__return_storage_ptr__->field_0x8 =
         (double)(int)((longlong)
                       ((ulonglong)(uint)((int)uVar1 >> 0x1f) << 0x20 | uVar1 & 0xffffffff) %
                      (longlong)iVar4) * (double)this->_padding_ + (double)this->_padding_;
    *(double *)&__return_storage_ptr__->field_0x10 =
         (double)(param_1 % iVar3) * (double)this->_padding_ + (double)this->_padding_;
    return __return_storage_ptr__;
  }
  iVar3 = (int)this->_padding_ + 1;
  iVar4 = *(int *)((longlong)&this->_padding_ + 4) + 1;
  dVar5 = (double)(param_1 % iVar3 + -1) + __real_3fe0000000000000;
  *(double *)__return_storage_ptr__ =
       ((double)(param_1 / (iVar3 * iVar4) + -1) + __real_3fe0000000000000) *
       (double)this->_padding_ + (double)this->_padding_;
  *(double *)&__return_storage_ptr__->field_0x8 =
       ((double)((int)((longlong)
                       ((ulonglong)(uint)((int)((longlong)param_1 / (longlong)iVar3) >> 0x1f) <<
                        0x20 | (longlong)param_1 / (longlong)iVar3 & 0xffffffffU) % (longlong)iVar4)
                + -1) + dVar2) * (double)this->_padding_ + (double)this->_padding_;
  *(double *)&__return_storage_ptr__->field_0x10 =
       dVar5 * (double)this->_padding_ + (double)this->_padding_;
  return __return_storage_ptr__;
}

// SetDx @ 143ecca20

void __thiscall Chaos::TMPMGrid<float>::SetDx(TMPMGrid<float> *this,TVector<float,3> *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)&param_1->field_0x8;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = *(undefined8 *)param_1;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar1;
  return;
}

// SetDx @ 143ecca40

void __thiscall Chaos::TMPMGrid<double>::SetDx(TMPMGrid<double> *this,TVector<double,3> *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  this->_padding_ = *(longlong *)param_1;
  this->_padding_ = lVar2;
  this->_padding_ = lVar1;
  return;
}

// SetInterp @ 143ecdf60

void __thiscall Chaos::TMPMGrid<float>::SetInterp(TMPMGrid<float> *this,InterpType param_1)

{
  this->interp = param_1;
  this->NPerDir = (param_1 != linear) + 2;
  return;
}

// SetInterp @ 143ecdf80

void __thiscall Chaos::TMPMGrid<double>::SetInterp(TMPMGrid<double> *this,InterpType param_1)

{
  this->interp = param_1;
  this->NPerDir = (param_1 != linear) + 2;
  return;
}

// Size @ 143ecf950

int __thiscall Chaos::TMPMGrid<float>::Size(TMPMGrid<float> *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)this->_padding_;
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  iVar3 = (int)this->_padding_;
  if (this->interp == linear) {
    return iVar1 * iVar2 * iVar3;
  }
  return (iVar1 + 1) * (iVar2 + 1) * (iVar3 + 1);
}

// Size @ 143ecf980

int __thiscall Chaos::TMPMGrid<double>::Size(TMPMGrid<double> *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)this->_padding_;
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  iVar3 = (int)this->_padding_;
  if (this->interp == linear) {
    return iVar1 * iVar2 * iVar3;
  }
  return (iVar1 + 1) * (iVar2 + 1) * (iVar3 + 1);
}

// UpdateGridFromPositions @ 143ed5fd0

void __thiscall
Chaos::TMPMGrid<float>::UpdateGridFromPositions
          (TMPMGrid<float> *this,TDynamicParticles<float,3> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  float *pfVar14;
  ulonglong uVar15;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  float local_50;
  float local_48 [4];
  
  if ((int)param_1->_padding_ != 0) {
    uVar15 = 0;
    if (((int)param_1->_padding_ < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_60 = *(float *)((undefined8 *)param_1->_padding_ + 1);
    local_68 = *(undefined8 *)param_1->_padding_;
    if (((int)param_1->_padding_ < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_58 = *(undefined8 *)param_1->_padding_;
    local_50 = *(float *)((undefined8 *)param_1->_padding_ + 1);
    uVar11 = uVar15;
    if ((int)param_1->_padding_ != 0) {
      do {
        uVar13 = (uint)uVar11;
        uVar12 = ~uVar13 >> 0x1f;
        lVar10 = (longlong)(int)uVar13 * 0xc;
        uVar11 = uVar15;
        do {
          uVar7 = 0;
          if ((int)uVar13 < (int)param_1->_padding_) {
            uVar7 = uVar12;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pfVar14 = (float *)((longlong)&local_68 + uVar11);
          uVar7 = 0;
          if (*(float *)((longlong)pfVar14 + param_1->_padding_ + (lVar10 - (longlong)&local_68)) <
              *pfVar14) {
            uVar8 = uVar7;
            if ((int)uVar13 < (int)param_1->_padding_) {
              uVar8 = uVar12;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            *pfVar14 = *(float *)(uVar11 + lVar10 + param_1->_padding_);
          }
          uVar8 = uVar7;
          if ((int)uVar13 < (int)param_1->_padding_) {
            uVar8 = uVar12;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          fVar1 = *(float *)(uVar11 + lVar10 + param_1->_padding_);
          if (*(float *)((longlong)&local_58 + uVar11) <= fVar1 &&
              fVar1 != *(float *)((longlong)&local_58 + uVar11)) {
            if ((int)uVar13 < (int)param_1->_padding_) {
              uVar7 = uVar12;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            *(undefined4 *)((longlong)&local_58 + uVar11) =
                 *(undefined4 *)(uVar11 + lVar10 + param_1->_padding_);
          }
          uVar11 = uVar11 + 4;
        } while ((longlong)uVar11 < 0xc);
        uVar11 = (ulonglong)(uVar13 + 1);
      } while (uVar13 + 1 < (uint)param_1->_padding_);
    }
    fVar1 = __real_bf000000;
    local_48[0] = (float)local_58 - (float)local_68;
    local_48[1] = local_58._4_4_ - local_68._4_4_;
    local_48[2] = local_50 - local_60;
    do {
      lVar10 = (longlong)(int)uVar15;
      uVar12 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar12;
      fVar2 = *(float *)((longlong)&this->_padding_ + lVar10 * 4 + 4);
      fVar3 = *(float *)((longlong)&local_68 + lVar10 * 4);
      fVar4 = local_48[lVar10];
      *(float *)((longlong)&this->_padding_ + lVar10 * 4) =
           (float)-((int)ROUND(fVar1 - (fVar3 + fVar3) / fVar2) >> 1) * fVar2 - (fVar2 + fVar2);
      iVar9 = 4 - ((int)ROUND(fVar1 - (fVar4 + fVar4) / fVar2) >> 1);
      *(int *)((longlong)&this->_padding_ + lVar10 * 4) = iVar9;
      *(float *)((longlong)&this->_padding_ + lVar10 * 4 + 4) =
           (float)iVar9 * fVar2 + *(float *)((longlong)&this->_padding_ + lVar10 * 4);
    } while (uVar12 < 3);
  }
  return;
}

// UpdateGridFromPositions @ 143ed6360

void __thiscall
Chaos::TMPMGrid<double>::UpdateGridFromPositions
          (TMPMGrid<double> *this,TDynamicParticles<double,3> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  double *pdVar13;
  ulonglong uVar14;
  double local_88 [10];
  
  if ((int)param_1->_padding_ != 0) {
    uVar14 = 0;
    if (((int)param_1->_padding_ < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pdVar13 = (double *)param_1->_padding_;
    local_88[2] = pdVar13[2];
    local_88[0] = *pdVar13;
    local_88[1] = pdVar13[1];
    if (((int)param_1->_padding_ < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pdVar13 = (double *)param_1->_padding_;
    local_88[3] = *pdVar13;
    local_88[4] = pdVar13[1];
    local_88[5] = pdVar13[2];
    uVar10 = uVar14;
    if ((int)param_1->_padding_ != 0) {
      do {
        uVar12 = (uint)uVar10;
        uVar11 = ~uVar12 >> 0x1f;
        lVar9 = (longlong)(int)uVar12 * 0x18;
        uVar10 = uVar14;
        do {
          uVar6 = 0;
          if ((int)uVar12 < (int)param_1->_padding_) {
            uVar6 = uVar11;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pdVar13 = (double *)((longlong)local_88 + uVar10);
          uVar6 = 0;
          if (*(double *)((longlong)pdVar13 + param_1->_padding_ + (lVar9 - (longlong)local_88)) <
              *pdVar13) {
            uVar7 = uVar6;
            if ((int)uVar12 < (int)param_1->_padding_) {
              uVar7 = uVar11;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            *pdVar13 = *(double *)(uVar10 + lVar9 + param_1->_padding_);
          }
          uVar7 = uVar6;
          if ((int)uVar12 < (int)param_1->_padding_) {
            uVar7 = uVar11;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          dVar1 = *(double *)(uVar10 + lVar9 + param_1->_padding_);
          pdVar13 = (double *)((longlong)local_88 + uVar10 + 0x18);
          if (*pdVar13 <= dVar1 && dVar1 != *pdVar13) {
            if ((int)uVar12 < (int)param_1->_padding_) {
              uVar6 = uVar11;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            *(undefined8 *)((longlong)local_88 + uVar10 + 0x18) =
                 *(undefined8 *)(uVar10 + lVar9 + param_1->_padding_);
          }
          uVar10 = uVar10 + 8;
        } while ((longlong)uVar10 < 0x18);
        uVar10 = (ulonglong)(uVar12 + 1);
      } while (uVar12 + 1 < (uint)param_1->_padding_);
    }
    dVar1 = __real_bfe0000000000000;
    local_88[6] = local_88[3] - local_88[0];
    local_88[7] = local_88[4] - local_88[1];
    local_88[8] = local_88[5] - local_88[2];
    do {
      lVar9 = (longlong)(int)uVar14;
      uVar11 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar11;
      dVar2 = (double)(&this->_padding_)[lVar9];
      dVar3 = local_88[lVar9 + 6];
      (&this->_padding_)[lVar9] =
           (longlong)
           ((double)-((longlong)ROUND(dVar1 - (local_88[lVar9] + local_88[lVar9]) / dVar2) >> 1) *
            dVar2 - (dVar2 + dVar2));
      iVar8 = 4 - (int)((longlong)ROUND(dVar1 - (dVar3 + dVar3) / dVar2) >> 1);
      *(int *)((longlong)&this->_padding_ + lVar9 * 4) = iVar8;
      (&this->_padding_)[lVar9] =
           (longlong)((double)iVar8 * dVar2 + (double)(&this->_padding_)[lVar9]);
    } while (uVar11 < 3);
  }
  return;
}

// dNijk @ 143ee67e0

float __thiscall
Chaos::TMPMGrid<float>::dNijk(TMPMGrid<float> *this,float param_1,int param_2,float param_3)

{
  float fVar1;
  
  fVar1 = (float)param_2;
  if (this->interp == linear) {
    return ((fVar1 + fVar1) - __real_3f800000) * (__real_3f800000 / param_3);
  }
  return (((param_1 - __real_3f800000) * (fVar1 - __real_3f800000) * (fVar1 - __real_40000000) +
          fVar1 * param_1 * (fVar1 - __real_3f800000)) * __real_3f000000 +
         ((param_1 + param_1) - __real_3f800000) * fVar1 * (fVar1 - __real_40000000)) *
         (__real_3f800000 / param_3);
}

// dNijk @ 143ee68a0

double __thiscall
Chaos::TMPMGrid<double>::dNijk(TMPMGrid<double> *this,double param_1,int param_2,double param_3)

{
  double dVar1;
  
  dVar1 = (double)param_2;
  if (this->interp == linear) {
    return ((dVar1 + dVar1) - __real_3ff0000000000000) * (__real_3ff0000000000000 / param_3);
  }
  return (((param_1 - __real_3ff0000000000000) * (dVar1 - __real_3ff0000000000000) *
           (dVar1 - __real_4000000000000000) + dVar1 * param_1 * (dVar1 - __real_3ff0000000000000))
          * __real_3fe0000000000000 +
         ((param_1 + param_1) - __real_3ff0000000000000) * dVar1 * (dVar1 - __real_4000000000000000)
         ) * (__real_3ff0000000000000 / param_3);
}

