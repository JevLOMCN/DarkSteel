// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 9

// TAttrBasedQuadricError<double> @ 14c6dbd60

TAttrBasedQuadricError<double> * __thiscall
UE::Geometry::TAttrBasedQuadricError<double>::TAttrBasedQuadricError<double>
          (TAttrBasedQuadricError<double> *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4,TVector<double> *param_5,
          TVector<double> *param_6,TVector<double> *param_7,TVector<double> *param_8,double param_9)

{
  double dVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  TVector<double>_u_0 local_128;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  TVector<double>_u_0 local_d8;
  double local_c0;
  double local_b8;
  double local_a8;
  double local_a0;
  
  TVolPresQuadricError<double>::TVolPresQuadricError<double>
            ((TVolPresQuadricError<double> *)this,param_7,param_8);
  lVar6 = 0;
  this->attrweight = param_9;
  this->a = 0.0;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar1 = __real_3fd5555555555555;
  local_f8 = (param_7->field0_0x0)._s_0.X;
  dStack_f0 = (param_7->field0_0x0)._s_0.Y;
  local_e8 = (param_7->field0_0x0)._s_0.Z;
  local_128._s_0.Y = (param_3->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  local_128._s_0.Z = (param_3->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  local_108 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  local_100 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  local_110 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  local_128._s_0.X = (param_3->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar9 = (local_128._s_0.Z * dStack_f0 - local_128._s_0.Y * local_e8) * local_110 +
          (local_108 * local_e8 - local_100 * dStack_f0) * local_128._s_0.X +
          (local_128._s_0.Y * local_100 - local_128._s_0.Z * local_108) * local_f8;
  if ((double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3e45798ee2308c3a) {
    this->grad[0].field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this->grad[0].field0_0x0._s_0.Y = (double)uVar3;
    this->grad[0].field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    this->d[0] = ((param_4->field0_0x0)._s_0.X + (param_5->field0_0x0)._s_0.X +
                 (param_6->field0_0x0)._s_0.X) * param_9 * dVar1;
    uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this->grad[1].field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this->grad[1].field0_0x0._s_0.Y = (double)uVar3;
    this->grad[1].field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    this->d[1] = ((param_4->field0_0x0)._s_0.Y + (param_5->field0_0x0)._s_0.Y +
                 (param_6->field0_0x0)._s_0.Y) * param_9 * dVar1;
    uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this->grad[2].field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this->grad[2].field0_0x0._s_0.Y = (double)uVar3;
    this->grad[2].field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    this->d[2] = ((param_4->field0_0x0)._s_0.Z + (param_5->field0_0x0)._s_0.Z +
                 (param_6->field0_0x0)._s_0.Z) * param_9 * dVar1;
  }
  else {
    TMatrix3<double>::Inverse
              ((TMatrix3<double> *)&local_128._s_0,(TMatrix3<double> *)&local_d8._s_0);
    lVar4 = 200;
    lVar5 = 3;
    do {
      dVar10 = param_9 * *(double *)((longlong)param_4 + lVar4 + -200);
      dVar9 = param_9 * *(double *)((longlong)param_6 + lVar4 + -200) - dVar10;
      dVar1 = param_9 * *(double *)((longlong)param_5 + lVar4 + -200) - dVar10;
      dVar8 = dVar1 * local_d8._s_0.Y + dVar9 * local_d8._s_0.X;
      *(double *)((longlong)&this->grad[0].field0_0x0 + lVar6) = dVar8;
      dVar7 = dVar1 * local_b8 + dVar9 * local_c0;
      dVar1 = dVar1 * local_a0 + dVar9 * local_a8;
      *(double *)((longlong)&this->grad[0].field0_0x0 + lVar6 + 8) = dVar7;
      *(double *)((longlong)&this->grad[0].field0_0x0 + lVar6 + 0x10) = dVar1;
      *(double *)((longlong)this->grad + lVar4 + -0x80) =
           dVar10 - (dVar7 * (param_1->field0_0x0)._s_0.Y + dVar8 * (param_1->field0_0x0)._s_0.X +
                    dVar1 * (param_1->field0_0x0)._s_0.Z);
      dVar1 = *(double *)((longlong)&this->grad[0].field0_0x0 + lVar6);
      this->_padding_ = (longlong)(dVar1 * dVar1 + (double)this->_padding_);
      this->_padding_ =
           (longlong)
           (*(double *)((longlong)&this->grad[0].field0_0x0 + lVar6 + 8) *
            *(double *)((longlong)&this->grad[0].field0_0x0 + lVar6) + (double)this->_padding_);
      this->_padding_ =
           (longlong)
           (*(double *)((longlong)&this->grad[0].field0_0x0 + lVar6 + 0x10) *
            *(double *)((longlong)&this->grad[0].field0_0x0 + lVar6) + (double)this->_padding_);
      dVar1 = *(double *)((longlong)&this->grad[0].field0_0x0 + lVar6 + 8);
      this->_padding_ = (longlong)(dVar1 * dVar1 + (double)this->_padding_);
      this->_padding_ =
           (longlong)
           (*(double *)((longlong)&this->grad[0].field0_0x0 + lVar6 + 0x10) *
            *(double *)((longlong)&this->grad[0].field0_0x0 + lVar6 + 8) + (double)this->_padding_);
      dVar1 = *(double *)((longlong)&this->grad[0].field0_0x0 + lVar6 + 0x10);
      this->_padding_ = (longlong)(dVar1 * dVar1 + (double)this->_padding_);
      this->_padding_ =
           (longlong)
           (*(double *)((longlong)this->grad + lVar4 + -0x80) *
            *(double *)((longlong)&this->grad[0].field0_0x0 + lVar6) + (double)this->_padding_);
      this->_padding_ =
           (longlong)
           (*(double *)((longlong)&this->grad[0].field0_0x0 + lVar6 + 8) *
            *(double *)((longlong)this->grad + lVar4 + -0x80) + (double)this->_padding_);
      lVar2 = lVar6 + 0x10;
      lVar6 = lVar6 + 0x18;
      this->_padding_ =
           (longlong)
           (*(double *)((longlong)&this->grad[0].field0_0x0 + lVar2) *
            *(double *)((longlong)this->grad + lVar4 + -0x80) + (double)this->_padding_);
      dVar1 = *(double *)((longlong)this->grad + lVar4 + -0x80);
      lVar4 = lVar4 + 8;
      this->_padding_ = (longlong)(dVar1 * dVar1 + (double)this->_padding_);
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return this;
}

// TAttrBasedQuadricError<double> @ 14c6dc1f0

TAttrBasedQuadricError<double> * __thiscall
UE::Geometry::TAttrBasedQuadricError<double>::TAttrBasedQuadricError<double>
          (TAttrBasedQuadricError<double> *this,TAttrBasedQuadricError<double> *param_1,
          TAttrBasedQuadricError<double> *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  
  TVolPresQuadricError<double>::TVolPresQuadricError<double>
            ((TVolPresQuadricError<double> *)this,(TVolPresQuadricError<double> *)param_1,
             (TVolPresQuadricError<double> *)param_2);
  this->attrweight = 1.0;
  this->a = param_1->a + param_2->a;
  this->attrweight = (param_1->attrweight + param_2->attrweight) * __real_3fe0000000000000;
  dVar5 = param_1->grad[0].field0_0x0._s_0.Y;
  dVar6 = param_2->grad[0].field0_0x0._s_0.Y;
  dVar4 = param_2->grad[0].field0_0x0._s_0.Z + param_1->grad[0].field0_0x0._s_0.Z;
  this->grad[0].field0_0x0._s_0.X =
       param_1->grad[0].field0_0x0._s_0.X + param_2->grad[0].field0_0x0._s_0.X;
  auVar1._8_4_ = SUB84(dVar4,0);
  auVar1._0_8_ = dVar6 + dVar5;
  auVar1._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])((longlong)&this->grad[0].field0_0x0 + 8) = auVar1;
  dVar5 = param_2->grad[1].field0_0x0._s_0.Y;
  dVar6 = param_1->grad[1].field0_0x0._s_0.Y;
  dVar4 = param_1->grad[1].field0_0x0._s_0.Z + param_2->grad[1].field0_0x0._s_0.Z;
  this->grad[1].field0_0x0._s_0.X =
       param_2->grad[1].field0_0x0._s_0.X + param_1->grad[1].field0_0x0._s_0.X;
  auVar2._8_4_ = SUB84(dVar4,0);
  auVar2._0_8_ = dVar6 + dVar5;
  auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])((longlong)&this->grad[1].field0_0x0 + 8) = auVar2;
  dVar5 = param_1->grad[2].field0_0x0._s_0.Y;
  dVar6 = param_2->grad[2].field0_0x0._s_0.Y;
  dVar4 = param_2->grad[2].field0_0x0._s_0.Z + param_1->grad[2].field0_0x0._s_0.Z;
  this->grad[2].field0_0x0._s_0.X =
       param_2->grad[2].field0_0x0._s_0.X + param_1->grad[2].field0_0x0._s_0.X;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = dVar6 + dVar5;
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])((longlong)&this->grad[2].field0_0x0 + 8) = auVar3;
  this->d[0] = param_1->d[0] + param_2->d[0];
  this->d[1] = param_1->d[1] + param_2->d[1];
  this->d[2] = param_1->d[2] + param_2->d[2];
  return this;
}

// TAttrBasedQuadricError<double> @ 14c6dc340

TAttrBasedQuadricError<double> * __thiscall
UE::Geometry::TAttrBasedQuadricError<double>::TAttrBasedQuadricError<double>
          (TAttrBasedQuadricError<double> *this)

{
  undefined8 uVar1;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar1;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->_padding_ = 0;
  this->attrweight = 1.0;
  this->a = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->grad[0].field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->grad[0].field0_0x0._s_0.Y = (double)uVar1;
  this->grad[0].field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->grad[1].field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->grad[1].field0_0x0._s_0.Y = (double)uVar1;
  this->grad[1].field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->grad[2].field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->grad[2].field0_0x0._s_0.Y = (double)uVar1;
  this->grad[2].field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->d[0] = 0.0;
  this->d[1] = 0.0;
  this->d[2] = 0.0;
  return this;
}

// operator= @ 14c6e1ca0

TAttrBasedQuadricError<double> * __thiscall
UE::Geometry::TAttrBasedQuadricError<double>::operator=
          (TAttrBasedQuadricError<double> *this,TAttrBasedQuadricError<double> *param_1)

{
  longlong lVar1;
  double dVar2;
  
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->a = param_1->a;
  this->attrweight = param_1->attrweight;
  dVar2 = param_1->grad[0].field0_0x0._s_0.Y;
  this->grad[0].field0_0x0._s_0.X = param_1->grad[0].field0_0x0._s_0.X;
  this->grad[0].field0_0x0._s_0.Y = dVar2;
  this->grad[0].field0_0x0._s_0.Z = param_1->grad[0].field0_0x0._s_0.Z;
  dVar2 = param_1->grad[1].field0_0x0._s_0.Y;
  this->grad[1].field0_0x0._s_0.X = param_1->grad[1].field0_0x0._s_0.X;
  this->grad[1].field0_0x0._s_0.Y = dVar2;
  this->grad[1].field0_0x0._s_0.Z = param_1->grad[1].field0_0x0._s_0.Z;
  dVar2 = param_1->grad[2].field0_0x0._s_0.Y;
  this->grad[2].field0_0x0._s_0.X = param_1->grad[2].field0_0x0._s_0.X;
  this->grad[2].field0_0x0._s_0.Y = dVar2;
  this->grad[2].field0_0x0._s_0.Z = param_1->grad[2].field0_0x0._s_0.Z;
  this->d[0] = param_1->d[0];
  this->d[1] = param_1->d[1];
  this->d[2] = param_1->d[2];
  return this;
}

// operator= @ 14c6e1d80

TAttrBasedQuadricError<double> * __thiscall
UE::Geometry::TAttrBasedQuadricError<double>::operator=
          (TAttrBasedQuadricError<double> *this,TAttrBasedQuadricError<double> *param_1)

{
  longlong lVar1;
  double dVar2;
  
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->a = param_1->a;
  this->attrweight = param_1->attrweight;
  dVar2 = param_1->grad[0].field0_0x0._s_0.Y;
  this->grad[0].field0_0x0._s_0.X = param_1->grad[0].field0_0x0._s_0.X;
  this->grad[0].field0_0x0._s_0.Y = dVar2;
  this->grad[0].field0_0x0._s_0.Z = param_1->grad[0].field0_0x0._s_0.Z;
  dVar2 = param_1->grad[1].field0_0x0._s_0.Y;
  this->grad[1].field0_0x0._s_0.X = param_1->grad[1].field0_0x0._s_0.X;
  this->grad[1].field0_0x0._s_0.Y = dVar2;
  this->grad[1].field0_0x0._s_0.Z = param_1->grad[1].field0_0x0._s_0.Z;
  dVar2 = param_1->grad[2].field0_0x0._s_0.Y;
  this->grad[2].field0_0x0._s_0.X = param_1->grad[2].field0_0x0._s_0.X;
  this->grad[2].field0_0x0._s_0.Y = dVar2;
  this->grad[2].field0_0x0._s_0.Z = param_1->grad[2].field0_0x0._s_0.Z;
  this->d[0] = param_1->d[0];
  this->d[1] = param_1->d[1];
  this->d[2] = param_1->d[2];
  return this;
}

// Add @ 14c6fd610

void __thiscall
UE::Geometry::TAttrBasedQuadricError<double>::Add
          (TAttrBasedQuadricError<double> *this,double param_1,
          TAttrBasedQuadricError<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  TVolPresQuadricError<double>::Add
            ((TVolPresQuadricError<double> *)this,param_1,(TVolPresQuadricError<double> *)param_2);
  this->a = param_1 + this->a;
  this->attrweight = param_2->attrweight;
  dVar1 = param_2->grad[0].field0_0x0._s_0.Z;
  dVar2 = param_2->grad[0].field0_0x0._s_0.Y;
  dVar3 = this->grad[0].field0_0x0._s_0.Z;
  dVar4 = this->grad[0].field0_0x0._s_0.Y;
  this->grad[0].field0_0x0._s_0.X =
       param_1 * param_2->grad[0].field0_0x0._s_0.X + this->grad[0].field0_0x0._s_0.X;
  this->grad[0].field0_0x0._s_0.Z = param_1 * dVar1 + dVar3;
  this->grad[0].field0_0x0._s_0.Y = param_1 * dVar2 + dVar4;
  dVar1 = param_2->grad[1].field0_0x0._s_0.Y;
  dVar2 = param_2->grad[1].field0_0x0._s_0.Z;
  dVar3 = this->grad[1].field0_0x0._s_0.Y;
  dVar4 = this->grad[1].field0_0x0._s_0.Z;
  this->grad[1].field0_0x0._s_0.X =
       param_1 * param_2->grad[1].field0_0x0._s_0.X + this->grad[1].field0_0x0._s_0.X;
  this->grad[1].field0_0x0._s_0.Y = param_1 * dVar1 + dVar3;
  this->grad[1].field0_0x0._s_0.Z = param_1 * dVar2 + dVar4;
  dVar1 = param_2->grad[2].field0_0x0._s_0.Y;
  dVar2 = param_2->grad[2].field0_0x0._s_0.Z;
  dVar3 = this->grad[2].field0_0x0._s_0.Y;
  dVar4 = this->grad[2].field0_0x0._s_0.Z;
  this->grad[2].field0_0x0._s_0.X =
       param_1 * param_2->grad[2].field0_0x0._s_0.X + this->grad[2].field0_0x0._s_0.X;
  this->grad[2].field0_0x0._s_0.Y = param_1 * dVar1 + dVar3;
  this->grad[2].field0_0x0._s_0.Z = param_1 * dVar2 + dVar4;
  this->d[0] = param_1 * param_2->d[0] + this->d[0];
  this->d[1] = param_1 * param_2->d[1] + this->d[1];
  this->d[2] = param_1 * param_2->d[2] + this->d[2];
  return;
}

// ComputeAttributes @ 14c71fb00

void __thiscall
UE::Geometry::TAttrBasedQuadricError<double>::ComputeAttributes
          (TAttrBasedQuadricError<double> *this,TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = __real_3ff0000000000000;
  dVar2 = this->a;
  if ((double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3ee4f8b588e368f1) {
    dVar4 = 0.0;
    dVar5 = 0.0;
    dVar1 = 0.0;
  }
  else {
    dVar2 = __real_3ff0000000000000 / dVar2;
    dVar4 = this->grad[0].field0_0x0._s_0.Y * (param_1->field0_0x0)._s_0.Y +
            this->grad[0].field0_0x0._s_0.X * (param_1->field0_0x0)._s_0.X +
            this->grad[0].field0_0x0._s_0.Z * (param_1->field0_0x0)._s_0.Z + this->d[0];
    (param_2->field0_0x0)._s_0.X = dVar4;
    dVar4 = dVar4 * dVar2;
    dVar5 = this->grad[1].field0_0x0._s_0.Y * (param_1->field0_0x0)._s_0.Y +
            this->grad[1].field0_0x0._s_0.X * (param_1->field0_0x0)._s_0.X +
            this->grad[1].field0_0x0._s_0.Z * (param_1->field0_0x0)._s_0.Z + this->d[1];
    (param_2->field0_0x0)._s_0.Y = dVar5;
    dVar5 = dVar5 * dVar2;
    dVar1 = this->grad[2].field0_0x0._s_0.Y * (param_1->field0_0x0)._s_0.Y +
            this->grad[2].field0_0x0._s_0.X * (param_1->field0_0x0)._s_0.X +
            this->grad[2].field0_0x0._s_0.Z * (param_1->field0_0x0)._s_0.Z + this->d[2];
    (param_2->field0_0x0)._s_0.Z = dVar1;
    dVar1 = dVar1 * dVar2;
  }
  (param_2->field0_0x0)._s_0.X = dVar4;
  (param_2->field0_0x0)._s_0.Y = dVar5;
  (param_2->field0_0x0)._s_0.Z = dVar1;
  dVar3 = dVar3 / this->attrweight;
  (param_2->field0_0x0)._s_0.Z = dVar3 * dVar1;
  (param_2->field0_0x0)._s_0.X = dVar3 * dVar4;
  (param_2->field0_0x0)._s_0.Y = dVar3 * dVar5;
  return;
}

// Evaluate @ 14c72f640

double __thiscall
UE::Geometry::TAttrBasedQuadricError<double>::Evaluate
          (TAttrBasedQuadricError<double> *this,TVector<double> *param_1)

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
  TVector<double>_u_0 local_a8 [6];
  
  ComputeAttributes(this,param_1,(TVector<double> *)&local_a8[0]._s_0);
  dVar1 = this->attrweight;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar5 = dVar1 * (double)local_a8[0]._0_8_;
  dVar8 = dVar1 * (double)local_a8[0]._8_8_;
  dVar3 = (param_1->field0_0x0)._s_0.X;
  dVar4 = (param_1->field0_0x0)._s_0.Z;
  dVar1 = dVar1 * (double)local_a8[0]._16_8_;
  dVar7 = dVar8 * this->grad[1].field0_0x0._s_0.Z + dVar5 * this->grad[0].field0_0x0._s_0.Z;
  dVar6 = (dVar8 * this->grad[1].field0_0x0._s_0.Y + dVar5 * this->grad[0].field0_0x0._s_0.Y +
          dVar1 * this->grad[2].field0_0x0._s_0.Y) * dVar2 +
          (dVar8 * this->grad[1].field0_0x0._s_0.X + dVar5 * this->grad[0].field0_0x0._s_0.X +
          dVar1 * this->grad[2].field0_0x0._s_0.X) * dVar3;
  dVar9 = (dVar2 * (double)this->_padding_ + dVar3 * (double)this->_padding_ +
          dVar4 * (double)this->_padding_) -
          (dVar8 * this->d[1] + dVar5 * this->d[0] + dVar1 * this->d[2]);
  return (((dVar4 * (double)this->_padding_ +
           dVar2 * (double)this->_padding_ + dVar3 * (double)this->_padding_) * dVar3 +
           (dVar8 * dVar8 + dVar5 * dVar5 + dVar1 * dVar1) * this->a +
          ((double)this->_padding_ * dVar2 + dVar3 * (double)this->_padding_ +
          dVar4 * (double)this->_padding_) * dVar4 +
          (dVar2 * (double)this->_padding_ + (double)this->_padding_ * dVar3 +
          (double)this->_padding_ * dVar4) * dVar2) -
         (((dVar1 + dVar1) * this->grad[2].field0_0x0._s_0.Z + dVar7 + dVar7) * dVar4 + dVar6 +
         dVar6)) + (double)this->_padding_ + dVar9 + dVar9;
}

// OptimalPoint @ 14c753210

bool __thiscall
UE::Geometry::TAttrBasedQuadricError<double>::OptimalPoint
          (TAttrBasedQuadricError<double> *this,TVector<double> *param_1,double param_2)

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
  uint uVar16;
  uint uVar19;
  double dVar17;
  double dVar18;
  double local_f8;
  double local_e8;
  
  dVar17 = this->grad[2].field0_0x0._s_0.X;
  dVar1 = this->grad[1].field0_0x0._s_0.Y;
  dVar10 = this->grad[1].field0_0x0._s_0.Z;
  dVar2 = this->grad[2].field0_0x0._s_0.Y;
  dVar15 = this->grad[0].field0_0x0._s_0.X;
  dVar3 = this->grad[2].field0_0x0._s_0.Z;
  uVar16 = (uint)__xmm_80000000000000008000000000000000;
  uVar19 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar18 = this->grad[0].field0_0x0._s_0.Y;
  dVar4 = this->grad[1].field0_0x0._s_0.X;
  dVar5 = this->grad[0].field0_0x0._s_0.Z;
  dVar6 = this->a;
  if ((double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3e7ad7f29abcaf48) {
    dVar6 = 0.0;
  }
  else {
    dVar6 = __real_3ff0000000000000 / dVar6;
  }
  dVar11 = (((double)CONCAT44((uint)((ulonglong)(dVar18 * dVar5) >> 0x20) ^ uVar19,
                              SUB84(dVar18 * dVar5,0) ^ uVar16) - dVar1 * dVar10) - dVar2 * dVar3) *
           dVar6 + (double)this->_padding_;
  dVar14 = (((double)CONCAT44((uint)((ulonglong)(dVar15 * dVar15) >> 0x20) ^ uVar19,
                              SUB84(dVar15 * dVar15,0) ^ uVar16) - dVar4 * dVar4) - dVar17 * dVar17)
           * dVar6 + (double)this->_padding_;
  dVar7 = (((double)CONCAT44((uint)((ulonglong)(dVar5 * dVar5) >> 0x20) ^ uVar19,
                             SUB84(dVar5 * dVar5,0) ^ uVar16) - dVar10 * dVar10) - dVar3 * dVar3) *
          dVar6 + (double)this->_padding_;
  dVar13 = (((double)CONCAT44((uint)((ulonglong)(dVar15 * dVar5) >> 0x20) ^ uVar19,
                              SUB84(dVar15 * dVar5,0) ^ uVar16) - dVar4 * dVar10) - dVar17 * dVar3)
           * dVar6 + (double)this->_padding_;
  dVar10 = (((double)CONCAT44((uint)((ulonglong)(dVar18 * dVar18) >> 0x20) ^ uVar19,
                              SUB84(dVar18 * dVar18,0) ^ uVar16) - dVar1 * dVar1) - dVar2 * dVar2) *
           dVar6 + (double)this->_padding_;
  dVar17 = (((double)CONCAT44((uint)((ulonglong)(dVar18 * dVar15) >> 0x20) ^ uVar19,
                              SUB84(dVar18 * dVar15,0) ^ uVar16) - dVar1 * dVar4) - dVar2 * dVar17)
           * dVar6 + (double)this->_padding_;
  dVar1 = dVar7 * dVar10 - dVar11 * dVar11;
  dVar2 = dVar11 * dVar13 - dVar7 * dVar17;
  dVar3 = dVar11 * dVar17 - dVar10 * dVar13;
  local_f8 = dVar7 * dVar14 - dVar13 * dVar13;
  dVar7 = dVar13 * dVar17 - dVar11 * dVar14;
  local_e8 = dVar10 * dVar14 - dVar17 * dVar17;
  dVar17 = dVar17 * dVar2 + dVar14 * dVar1 + dVar13 * dVar3;
  dVar10 = (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (param_2 < dVar10) {
    dVar17 = __real_3ff0000000000000 / dVar17;
    dVar1 = dVar1 * dVar17;
    dVar2 = dVar2 * dVar17;
    dVar7 = dVar7 * dVar17;
    local_e8 = local_e8 * dVar17;
    dVar3 = dVar3 * dVar17;
    local_f8 = local_f8 * dVar17;
  }
  dVar17 = this->d[1];
  dVar11 = this->d[0];
  dVar13 = this->d[2];
  dVar14 = (double)this->_padding_ * __real_3fd5555555555555;
  dVar12 = (double)this->_padding_ * __real_3fd5555555555555;
  dVar8 = (double)this->_padding_ * __real_3fd5555555555555;
  dVar9 = (double)this->_padding_ * __real_3fd5555555555555;
  dVar18 = (dVar17 * this->grad[1].field0_0x0._s_0.Y + dVar11 * dVar18 +
           dVar13 * this->grad[2].field0_0x0._s_0.Y) * dVar6 - (double)this->_padding_;
  dVar15 = (dVar11 * dVar15 + dVar17 * dVar4 + dVar13 * this->grad[2].field0_0x0._s_0.X) * dVar6 -
           (double)this->_padding_;
  dVar17 = (dVar11 * dVar5 + dVar17 * this->grad[1].field0_0x0._s_0.Z +
           dVar13 * this->grad[2].field0_0x0._s_0.Z) * dVar6 - (double)this->_padding_;
  if (param_2 < dVar10) {
    dVar4 = dVar18 * dVar2 + dVar15 * dVar1 + dVar17 * dVar3;
    (param_1->field0_0x0)._s_0.X = dVar4;
    dVar5 = dVar18 * local_f8 + dVar15 * dVar2 + dVar17 * dVar7;
    dVar18 = dVar18 * dVar7 + dVar15 * dVar3 + dVar17 * local_e8;
    (param_1->field0_0x0)._s_0.Y = dVar5;
    (param_1->field0_0x0)._s_0.Z = dVar18;
    dVar17 = dVar8 * dVar2 + dVar14 * dVar1 + dVar9 * dVar3;
    dVar1 = dVar8 * local_f8 + dVar14 * dVar2 + dVar9 * dVar7;
    dVar2 = dVar8 * dVar7 + dVar14 * dVar3 + dVar9 * local_e8;
    dVar15 = (dVar5 * dVar8 + dVar4 * dVar14 + dVar18 * dVar9 + dVar12) /
             (dVar1 * dVar8 + dVar17 * dVar14 + dVar2 * dVar9);
    if ((double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_40f86a0000000000) {
      (param_1->field0_0x0)._s_0.X = dVar4 - dVar17 * dVar15;
      (param_1->field0_0x0)._s_0.Y = dVar5 - dVar1 * dVar15;
      (param_1->field0_0x0)._s_0.Z = dVar18 - dVar2 * dVar15;
    }
  }
  return param_2 < dVar10;
}

