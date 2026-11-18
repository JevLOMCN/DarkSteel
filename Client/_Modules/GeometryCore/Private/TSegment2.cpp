// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 8

// GetSide @ 1433a9700

int __cdecl
UE::Geometry::TSegment2<double>::GetSide
          (TVector2<double> *param_1,TVector2<double> *param_2,TVector2<double> *param_3,
          double param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar5 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  auVar2._0_8_ = ((param_3->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y) * dVar3;
  auVar2._8_8_ = 0;
  dVar4 = ((param_3->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X) * dVar5 - auVar2._0_8_;
  if (param_4 == 0.0) {
    if (dVar4 <= 0.0) {
      return (int)(dVar4 < 0.0);
    }
  }
  else {
    dVar3 = dVar3 * dVar3 + dVar5 * dVar5;
    if (dVar3 == 0.0) {
      return 0;
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = dVar3;
    auVar2 = sqrtpd(auVar2,auVar1);
    dVar3 = auVar2._0_8_ * param_4;
    if (dVar4 <= dVar3) {
      return (int)(dVar4 < (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^
                                            __xmm_80000000000000008000000000000000._4_4_,
                                            SUB84(dVar3,0) ^
                                            (uint)__xmm_80000000000000008000000000000000));
    }
  }
  return -1;
}

// IsOnSegment @ 1433bc4e0

bool __cdecl
UE::Geometry::TSegment2<double>::IsOnSegment
          (TVector2<double> *param_1,TVector2<double> *param_2,TVector2<double> *param_3,
          double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  undefined1 in_XMM2 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar2 = (param_3->field0_0x0)._s_0.Y;
  dVar10 = dVar2 - dVar1;
  dVar3 = (param_3->field0_0x0)._s_0.X;
  dVar4 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar9 = dVar3 - (param_1->field0_0x0)._s_0.X;
  dVar1 = (param_2->field0_0x0)._s_0.Y - dVar1;
  dVar6 = dVar1 * dVar1 + dVar4 * dVar4;
  if (dVar6 == 0.0) {
    bVar5 = dVar9 * dVar9 + dVar10 * dVar10 <= param_4 * param_4;
  }
  else {
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar6;
    auVar8 = sqrtpd(in_XMM2,auVar8);
    dVar7 = auVar8._0_8_ * param_4;
    dVar6 = dVar10 * dVar4 - dVar9 * dVar1;
    if (((dVar7 < (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
        || (dVar9 * dVar4 + dVar10 * dVar1 <
            (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) ^
                             __xmm_80000000000000008000000000000000._4_4_,
                             SUB84(dVar7,0) ^ (uint)__xmm_80000000000000008000000000000000))) ||
       (dVar7 < (dVar2 - (param_2->field0_0x0)._s_0.Y) * dVar1 +
                (dVar3 - (param_2->field0_0x0)._s_0.X) * dVar4)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
  }
  return bVar5;
}

// TSegment2<float> @ 1435671f0

TSegment2<float> * __thiscall
UE::Geometry::TSegment2<float>::TSegment2<float>
          (TSegment2<float> *this,TVector2<float> *param_1,TVector2<float> *param_2)

{
  TVector2<float>_u_0 TVar1;
  TVector2<float>_u_0 TVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = __real_3f000000;
  fVar5 = 0.0;
  (this->Center).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  (this->Direction).field0_0x0 = (TVector2<float>_u_0)0x3f800000;
  this->Extent = 0.0;
  TVar1._s_0.Y = ((param_2->field0_0x0)._s_0.Y + (param_1->field0_0x0)._s_0.Y) * fVar3;
  TVar1._s_0.X = ((param_1->field0_0x0)._s_0.X + (param_2->field0_0x0)._s_0.X) * fVar3;
  (this->Center).field0_0x0 = TVar1;
  TVar2._s_0.Y = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  TVar2._s_0.X = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  (this->Direction).field0_0x0 = TVar2;
  fVar4 = (this->Direction).field0_0x0._s_0.X;
  fVar6 = (this->Direction).field0_0x0._s_0.Y;
  fVar6 = SQRT(fVar6 * fVar6 + fVar4 * fVar4);
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
    fVar4 = 0.0;
  }
  else {
    fVar4 = (__real_3f800000 / fVar6) * fVar4;
    fVar5 = (__real_3f800000 / fVar6) * (this->Direction).field0_0x0._s_0.Y;
  }
  (this->Direction).field0_0x0._s_0.X = fVar4;
  (this->Direction).field0_0x0._s_0.Y = fVar5;
  this->Extent = fVar6 * fVar3;
  return this;
}

// TSegment2<double> @ 1435672d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSegment2<double> * __thiscall
UE::Geometry::TSegment2<double>::TSegment2<double>
          (TSegment2<double> *this,TVector2<double> *param_1,TVector2<double> *param_2)

{
  TVector2<double>_u_0 TVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 in_XMM3 [16];
  undefined1 auVar5 [16];
  double dVar6;
  
  dVar3 = 0.0;
  (this->Center).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->Direction).field0_0x0._s_0.X = 1.0;
  (this->Direction).field0_0x0._s_0.Y = 0.0;
  this->Extent = 0.0;
  dVar2 = ((param_1->field0_0x0)._s_0.Y + (param_2->field0_0x0)._s_0.Y) * _UNK_150689678;
  TVar1._8_4_ = SUB84(dVar2,0);
  TVar1._s_0.X = ((param_1->field0_0x0)._s_0.X + (param_2->field0_0x0)._s_0.X) *
                 ___xmm_3fe00000000000003fe0000000000000;
  TVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  (this->Center).field0_0x0 = TVar1;
  dVar6 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  (this->Direction).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  (this->Direction).field0_0x0._s_0.Y = dVar6;
  dVar2 = (this->Direction).field0_0x0._s_0.X;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar2 * dVar2 + dVar6 * dVar6;
  auVar5 = sqrtpd(in_XMM3,auVar5);
  dVar4 = auVar5._0_8_;
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
    dVar2 = 0.0;
  }
  else {
    dVar2 = (__real_3ff0000000000000 / dVar4) * dVar2;
    dVar3 = (__real_3ff0000000000000 / dVar4) * dVar6;
  }
  (this->Direction).field0_0x0._s_0.X = dVar2;
  (this->Direction).field0_0x0._s_0.Y = dVar3;
  this->Extent = dVar4 * __real_3fe0000000000000;
  return this;
}

// DistanceSquared @ 14358cd90

float __thiscall
UE::Geometry::TSegment2<float>::DistanceSquared(TSegment2<float> *this,TVector2<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = (param_1->field0_0x0)._s_0.Y;
  fVar1 = (this->Center).field0_0x0._s_0.X;
  fVar2 = (this->Center).field0_0x0._s_0.Y;
  fVar3 = (this->Direction).field0_0x0._s_0.X;
  fVar4 = (this->Direction).field0_0x0._s_0.Y;
  fVar7 = (param_1->field0_0x0)._s_0.X;
  fVar5 = this->Extent;
  fVar8 = (fVar6 - fVar2) * fVar4 + (fVar7 - fVar1) * fVar3;
  if (fVar5 <= fVar8) {
    fVar6 = (fVar4 * fVar5 + fVar2) - fVar6;
    fVar7 = (fVar3 * fVar5 + fVar1) - fVar7;
    return fVar6 * fVar6 + fVar7 * fVar7;
  }
  if (fVar8 <= (float)((uint)fVar5 ^ __xmm_80000000800000008000000080000000)) {
    fVar7 = (fVar1 - fVar3 * fVar5) - fVar7;
    fVar6 = (fVar2 - fVar4 * fVar5) - fVar6;
    return fVar6 * fVar6 + fVar7 * fVar7;
  }
  fVar7 = fVar7 - (fVar3 * fVar8 + fVar1);
  fVar6 = fVar6 - (fVar4 * fVar8 + fVar2);
  return fVar6 * fVar6 + fVar7 * fVar7;
}

// DistanceSquared @ 14358ceb0

double __thiscall
UE::Geometry::TSegment2<double>::DistanceSquared(TSegment2<double> *this,TVector2<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar7 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (this->Center).field0_0x0._s_0.X;
  dVar2 = (this->Center).field0_0x0._s_0.Y;
  dVar3 = (this->Direction).field0_0x0._s_0.X;
  dVar4 = (this->Direction).field0_0x0._s_0.Y;
  dVar8 = (param_1->field0_0x0)._s_0.X;
  dVar5 = this->Extent;
  dVar6 = (dVar7 - dVar2) * dVar4 + (dVar8 - dVar1) * dVar3;
  if (dVar5 <= dVar6) {
    dVar7 = (dVar4 * dVar5 + dVar2) - dVar7;
    dVar8 = (dVar3 * dVar5 + dVar1) - dVar8;
    return dVar7 * dVar7 + dVar8 * dVar8;
  }
  if (dVar6 <= (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) ^
                                __xmm_80000000000000008000000000000000._4_4_,
                                SUB84(dVar5,0) ^ (uint)__xmm_80000000000000008000000000000000)) {
    dVar8 = (dVar1 - dVar3 * dVar5) - dVar8;
    dVar7 = (dVar2 - dVar4 * dVar5) - dVar7;
    return dVar7 * dVar7 + dVar8 * dVar8;
  }
  dVar8 = dVar8 - (dVar3 * dVar6 + dVar1);
  dVar7 = dVar7 - (dVar4 * dVar6 + dVar2);
  return dVar7 * dVar7 + dVar8 * dVar8;
}

// Intersects @ 1435b94a0

bool __thiscall
UE::Geometry::TSegment2<float>::Intersects
          (TSegment2<float> *this,TSegment2<float> *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  char cVar6;
  TSegment2<float> *this_00;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar11 = 0.0;
  fVar7 = this->Extent;
  fVar9 = param_1->Extent;
  cVar6 = (fVar7 == 0.0) + (fVar9 == 0.0);
  if (cVar6 == '\x02') {
    fVar9 = (param_1->Center).field0_0x0._s_0.Y - (this->Center).field0_0x0._s_0.Y;
    fVar7 = (param_1->Center).field0_0x0._s_0.X - (this->Center).field0_0x0._s_0.X;
    bVar5 = fVar9 * fVar9 + fVar7 * fVar7 <= param_3 * param_3;
  }
  else if (cVar6 == '\x01') {
    this_00 = param_1;
    if (fVar7 != 0.0) {
      this_00 = this;
      this = param_1;
    }
    fVar7 = DistanceSquared(this_00,&this->Center);
    bVar5 = fVar7 <= param_3 * param_3;
  }
  else {
    fVar1 = (param_1->Direction).field0_0x0._s_0.Y;
    fVar2 = (this->Direction).field0_0x0._s_0.Y;
    fVar3 = (this->Direction).field0_0x0._s_0.X;
    fVar12 = (param_1->Center).field0_0x0._s_0.X - (this->Center).field0_0x0._s_0.X;
    fVar13 = (param_1->Center).field0_0x0._s_0.Y - (this->Center).field0_0x0._s_0.Y;
    fVar4 = (param_1->Direction).field0_0x0._s_0.X;
    fVar10 = fVar1 * fVar3 - fVar4 * fVar2;
    if ((float)((uint)fVar10 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2) {
      fVar10 = SQRT(fVar12 * fVar12 + fVar13 * fVar13);
      if (fVar10 <= 0.0) {
        fVar8 = 0.0;
      }
      else {
        fVar10 = __real_3f800000 / fVar10;
        fVar8 = fVar10 * fVar13;
        fVar11 = fVar10 * fVar12;
      }
      if ((float)((uint)(fVar1 * fVar11 - fVar4 * fVar8) & __xmm_7fffffff7fffffff7fffffff7fffffff)
          <= param_2) {
        fVar11 = fVar3 * fVar12 + fVar2 * fVar13;
        if ((fVar11 - fVar9 <= fVar7) &&
           ((float)((uint)fVar7 ^ __xmm_80000000800000008000000080000000) <= fVar11 + fVar9)) {
          return true;
        }
      }
    }
    else {
      fVar10 = __real_3f800000 / fVar10;
      if (((float)((uint)((fVar1 * fVar12 - fVar4 * fVar13) * fVar10) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar7 + param_3) &&
         ((float)((uint)((fVar2 * fVar12 - fVar3 * fVar13) * fVar10) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar9 + param_3)) {
        return true;
      }
    }
    bVar5 = false;
  }
  return bVar5;
}

// Intersects @ 1435b96f0

bool __thiscall
UE::Geometry::TSegment2<double>::Intersects
          (TSegment2<double> *this,TSegment2<double> *param_1,double param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  char cVar8;
  TSegment2<double> *this_00;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  
  dVar13 = 0.0;
  dVar9 = this->Extent;
  dVar10 = param_1->Extent;
  cVar8 = (dVar9 == 0.0) + (dVar10 == 0.0);
  if (cVar8 == '\x02') {
    dVar10 = (param_1->Center).field0_0x0._s_0.Y - (this->Center).field0_0x0._s_0.Y;
    dVar9 = (param_1->Center).field0_0x0._s_0.X - (this->Center).field0_0x0._s_0.X;
    bVar7 = dVar10 * dVar10 + dVar9 * dVar9 <= param_3 * param_3;
  }
  else if (cVar8 == '\x01') {
    this_00 = param_1;
    if (dVar9 != 0.0) {
      this_00 = this;
      this = param_1;
    }
    dVar9 = DistanceSquared(this_00,&this->Center);
    bVar7 = dVar9 <= param_3 * param_3;
  }
  else {
    dVar1 = (param_1->Direction).field0_0x0._s_0.Y;
    dVar2 = (this->Direction).field0_0x0._s_0.Y;
    dVar3 = (this->Direction).field0_0x0._s_0.X;
    dVar5 = (param_1->Center).field0_0x0._s_0.X - (this->Center).field0_0x0._s_0.X;
    dVar6 = (param_1->Center).field0_0x0._s_0.Y - (this->Center).field0_0x0._s_0.Y;
    dVar4 = (param_1->Direction).field0_0x0._s_0.X;
    dVar11 = dVar1 * dVar3 - dVar4 * dVar2;
    if ((double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_2)
    {
      auVar12._0_8_ = dVar5 * dVar5 + dVar6 * dVar6;
      auVar12._8_8_ = 0;
      auVar12 = sqrtpd(auVar12,auVar12);
      if (auVar12._0_8_ <= 0.0) {
        dVar11 = 0.0;
      }
      else {
        dVar13 = __real_3ff0000000000000 / auVar12._0_8_;
        dVar11 = dVar13 * dVar6;
        dVar13 = dVar13 * dVar5;
      }
      dVar13 = dVar1 * dVar13 - dVar4 * dVar11;
      if ((double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
          param_2) {
        dVar13 = dVar3 * dVar5 + dVar2 * dVar6;
        if ((dVar13 - dVar10 <= dVar9) &&
           ((double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) ^
                             __xmm_80000000000000008000000000000000._4_4_,
                             SUB84(dVar9,0) ^ (uint)__xmm_80000000000000008000000000000000) <=
            dVar13 + dVar10)) {
          return true;
        }
      }
    }
    else {
      dVar13 = (dVar1 * dVar5 - dVar4 * dVar6) * (__real_3ff0000000000000 / dVar11);
      if (((double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
           dVar9 + param_3) &&
         (dVar9 = (dVar2 * dVar5 - dVar3 * dVar6) * (__real_3ff0000000000000 / dVar11),
         (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
         dVar10 + param_3)) {
        return true;
      }
    }
    bVar7 = false;
  }
  return bVar7;
}

