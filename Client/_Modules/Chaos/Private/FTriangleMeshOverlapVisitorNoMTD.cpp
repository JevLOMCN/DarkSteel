// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 13

// FTriangleMeshOverlapVisitorNoMTD<Chaos::TBox<double,3>_> @ 143eac260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FTriangleMeshOverlapVisitorNoMTD<Chaos::TBox<double,3>_> * __thiscall
Chaos::FTriangleMeshOverlapVisitorNoMTD<Chaos::TBox<double,3>_>::
FTriangleMeshOverlapVisitorNoMTD<Chaos::TBox<double,3>_>
          (FTriangleMeshOverlapVisitorNoMTD<Chaos::TBox<double,3>_> *this,
          TRigidTransform<double,3> *param_1,TBox<double,3> *param_2,double param_3,
          TVector<float,3> *param_4,FTriangleMeshImplicitObject *param_5)

{
  __m128 _Var1;
  ulong64 uVar2;
  undefined8 uVar3;
  FAABBSimd *pFVar4;
  FBoxSimd *pFVar5;
  undefined1 auStack_168 [32];
  TVector<double,3> local_148;
  FAABBSimd local_128;
  FBoxSimd local_108;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_148._0_8_ = *(undefined8 *)param_1;
  local_148._8_8_ = *(undefined8 *)&param_1->field_0x8;
  this->bIsAxisAligned =
       (double)CONCAT44(*(uint *)&param_1->field_0x1c & __xmm_7fffffffffffffff7fffffffffffffff._4_4_
                        ,*(uint *)&param_1->field_0x18 &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff) == __real_3ff0000000000000;
  FBoxSimd::FBoxSimd(&(this->Box).BoxSimd);
  FAABBSimd::FAABBSimd(&(this->Box).AABBSimd);
  this->TriMesh = param_5;
  this->bFoundIntersection = false;
  if (this->bIsAxisAligned == false) {
    pFVar5 = FBoxSimd::FBoxSimd(&local_108,param_1,param_2);
    uVar2 = (pFVar5->Position).m128_u64[1];
    (this->Box).BoxSimd.Position.m128_u64[0] = (pFVar5->Position).m128_u64[0];
    (this->Box).BoxSimd.Position.m128_u64[1] = uVar2;
    uVar2 = (pFVar5->XAxis).m128_u64[1];
    (this->Box).BoxSimd.XAxis.m128_u64[0] = (pFVar5->XAxis).m128_u64[0];
    (this->Box).BoxSimd.XAxis.m128_u64[1] = uVar2;
    uVar2 = (pFVar5->YAxis).m128_u64[1];
    (this->Box).BoxSimd.YAxis.m128_u64[0] = (pFVar5->YAxis).m128_u64[0];
    (this->Box).BoxSimd.YAxis.m128_u64[1] = uVar2;
    uVar2 = (pFVar5->ZAxis).m128_u64[1];
    (this->Box).BoxSimd.ZAxis.m128_u64[0] = (pFVar5->ZAxis).m128_u64[0];
    (this->Box).BoxSimd.ZAxis.m128_u64[1] = uVar2;
    uVar2 = (pFVar5->XHalfExtent).m128_u64[1];
    (this->Box).BoxSimd.XHalfExtent.m128_u64[0] = (pFVar5->XHalfExtent).m128_u64[0];
    (this->Box).BoxSimd.XHalfExtent.m128_u64[1] = uVar2;
    uVar2 = (pFVar5->YHalfExtent).m128_u64[1];
    (this->Box).BoxSimd.YHalfExtent.m128_u64[0] = (pFVar5->YHalfExtent).m128_u64[0];
    (this->Box).BoxSimd.YHalfExtent.m128_u64[1] = uVar2;
    uVar2 = (pFVar5->ZHalfExtent).m128_u64[1];
    (this->Box).BoxSimd.ZHalfExtent.m128_u64[0] = (pFVar5->ZHalfExtent).m128_u64[0];
    (this->Box).BoxSimd.ZHalfExtent.m128_u64[1] = uVar2;
    uVar2 = (pFVar5->XAxisHalfExtent).m128_u64[1];
    (this->Box).BoxSimd.XAxisHalfExtent.m128_u64[0] = (pFVar5->XAxisHalfExtent).m128_u64[0];
    (this->Box).BoxSimd.XAxisHalfExtent.m128_u64[1] = uVar2;
    uVar2 = (pFVar5->YAxisHalfExtent).m128_u64[1];
    (this->Box).BoxSimd.YAxisHalfExtent.m128_u64[0] = (pFVar5->YAxisHalfExtent).m128_u64[0];
    (this->Box).BoxSimd.YAxisHalfExtent.m128_u64[1] = uVar2;
    uVar2 = (pFVar5->ZAxisHalfExtent).m128_u64[1];
    (this->Box).BoxSimd.ZAxisHalfExtent.m128_u64[0] = (pFVar5->ZAxisHalfExtent).m128_u64[0];
    (this->Box).BoxSimd.ZAxisHalfExtent.m128_u64[1] = uVar2;
    uVar2 = pFVar5->Edges[0].m128_u64[1];
    (this->Box).BoxSimd.Edges[0].m128_u64[0] = pFVar5->Edges[0].m128_u64[0];
    (this->Box).BoxSimd.Edges[0].m128_u64[1] = uVar2;
    uVar3 = *(undefined8 *)((longlong)pFVar5->Edges + 0x18);
    (this->Box).BoxSimd.Edges[1].m128_u64[0] = pFVar5->Edges[1].m128_u64[0];
    *(undefined8 *)((longlong)(this->Box).BoxSimd.Edges + 0x18) = uVar3;
    uVar3 = *(undefined8 *)((longlong)pFVar5->Edges + 0x28);
    (this->Box).BoxSimd.Edges[2].m128_u64[0] = pFVar5->Edges[2].m128_u64[0];
    *(undefined8 *)((longlong)(this->Box).BoxSimd.Edges + 0x28) = uVar3;
  }
  else {
    local_148._0_8_ = *(undefined8 *)&param_1->field_0x20;
    local_148._8_8_ = *(undefined8 *)&param_1->field_0x28;
    local_148._16_8_ = *(undefined8 *)&param_1->field_0x30;
    pFVar4 = FAABBSimd::FAABBSimd(&local_128,&local_148,param_2);
    uVar2 = (pFVar4->Position).m128_u64[1];
    (this->Box).AABBSimd.Position.m128_u64[0] = (pFVar4->Position).m128_u64[0];
    (this->Box).AABBSimd.Position.m128_u64[1] = uVar2;
    uVar2 = (pFVar4->HalfExtents).m128_u64[1];
    (this->Box).AABBSimd.HalfExtents.m128_u64[0] = (pFVar4->HalfExtents).m128_u64[0];
    (this->Box).AABBSimd.HalfExtents.m128_u64[1] = uVar2;
  }
  _Var1.m128_f32[3] = 0.0;
  _Var1._0_12_ = (undefined1  [12])*param_4;
  this->TriMeshScale = _Var1;
  return this;
}

// FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_> @ 143eac3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_> *
__thiscall
Chaos::FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>::
FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
          (FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
           *this,TRigidTransform<double,3> *param_1,
          TImplicitObjectScaled<Chaos::TBox<double,3>,1> *param_2,double param_3,
          TVector<float,3> *param_4,FTriangleMeshImplicitObject *param_5)

{
  __m128 _Var1;
  ulong64 uVar2;
  undefined8 uVar3;
  FAABBSimd *pFVar4;
  FBoxSimd *pFVar5;
  undefined1 auStack_168 [32];
  TVector<double,3> local_148;
  FAABBSimd local_128;
  FBoxSimd local_108;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_148._0_8_ = *(undefined8 *)param_1;
  local_148._8_8_ = *(undefined8 *)&param_1->field_0x8;
  this->bIsAxisAligned =
       (double)CONCAT44(*(uint *)&param_1->field_0x1c & __xmm_7fffffffffffffff7fffffffffffffff._4_4_
                        ,*(uint *)&param_1->field_0x18 &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff) == __real_3ff0000000000000;
  FBoxSimd::FBoxSimd(&(this->Box).BoxSimd);
  FAABBSimd::FAABBSimd(&(this->Box).AABBSimd);
  this->TriMesh = param_5;
  this->bFoundIntersection = false;
  if (this->bIsAxisAligned == false) {
    pFVar5 = FBoxSimd::FBoxSimd(&local_108,param_1,param_2);
    uVar2 = (pFVar5->Position).m128_u64[1];
    (this->Box).BoxSimd.Position.m128_u64[0] = (pFVar5->Position).m128_u64[0];
    (this->Box).BoxSimd.Position.m128_u64[1] = uVar2;
    uVar2 = (pFVar5->XAxis).m128_u64[1];
    (this->Box).BoxSimd.XAxis.m128_u64[0] = (pFVar5->XAxis).m128_u64[0];
    (this->Box).BoxSimd.XAxis.m128_u64[1] = uVar2;
    uVar2 = (pFVar5->YAxis).m128_u64[1];
    (this->Box).BoxSimd.YAxis.m128_u64[0] = (pFVar5->YAxis).m128_u64[0];
    (this->Box).BoxSimd.YAxis.m128_u64[1] = uVar2;
    uVar2 = (pFVar5->ZAxis).m128_u64[1];
    (this->Box).BoxSimd.ZAxis.m128_u64[0] = (pFVar5->ZAxis).m128_u64[0];
    (this->Box).BoxSimd.ZAxis.m128_u64[1] = uVar2;
    uVar2 = (pFVar5->XHalfExtent).m128_u64[1];
    (this->Box).BoxSimd.XHalfExtent.m128_u64[0] = (pFVar5->XHalfExtent).m128_u64[0];
    (this->Box).BoxSimd.XHalfExtent.m128_u64[1] = uVar2;
    uVar2 = (pFVar5->YHalfExtent).m128_u64[1];
    (this->Box).BoxSimd.YHalfExtent.m128_u64[0] = (pFVar5->YHalfExtent).m128_u64[0];
    (this->Box).BoxSimd.YHalfExtent.m128_u64[1] = uVar2;
    uVar2 = (pFVar5->ZHalfExtent).m128_u64[1];
    (this->Box).BoxSimd.ZHalfExtent.m128_u64[0] = (pFVar5->ZHalfExtent).m128_u64[0];
    (this->Box).BoxSimd.ZHalfExtent.m128_u64[1] = uVar2;
    uVar2 = (pFVar5->XAxisHalfExtent).m128_u64[1];
    (this->Box).BoxSimd.XAxisHalfExtent.m128_u64[0] = (pFVar5->XAxisHalfExtent).m128_u64[0];
    (this->Box).BoxSimd.XAxisHalfExtent.m128_u64[1] = uVar2;
    uVar2 = (pFVar5->YAxisHalfExtent).m128_u64[1];
    (this->Box).BoxSimd.YAxisHalfExtent.m128_u64[0] = (pFVar5->YAxisHalfExtent).m128_u64[0];
    (this->Box).BoxSimd.YAxisHalfExtent.m128_u64[1] = uVar2;
    uVar2 = (pFVar5->ZAxisHalfExtent).m128_u64[1];
    (this->Box).BoxSimd.ZAxisHalfExtent.m128_u64[0] = (pFVar5->ZAxisHalfExtent).m128_u64[0];
    (this->Box).BoxSimd.ZAxisHalfExtent.m128_u64[1] = uVar2;
    uVar2 = pFVar5->Edges[0].m128_u64[1];
    (this->Box).BoxSimd.Edges[0].m128_u64[0] = pFVar5->Edges[0].m128_u64[0];
    (this->Box).BoxSimd.Edges[0].m128_u64[1] = uVar2;
    uVar3 = *(undefined8 *)((longlong)pFVar5->Edges + 0x18);
    (this->Box).BoxSimd.Edges[1].m128_u64[0] = pFVar5->Edges[1].m128_u64[0];
    *(undefined8 *)((longlong)(this->Box).BoxSimd.Edges + 0x18) = uVar3;
    uVar3 = *(undefined8 *)((longlong)pFVar5->Edges + 0x28);
    (this->Box).BoxSimd.Edges[2].m128_u64[0] = pFVar5->Edges[2].m128_u64[0];
    *(undefined8 *)((longlong)(this->Box).BoxSimd.Edges + 0x28) = uVar3;
  }
  else {
    local_148._0_8_ = *(undefined8 *)&param_1->field_0x20;
    local_148._8_8_ = *(undefined8 *)&param_1->field_0x28;
    local_148._16_8_ = *(undefined8 *)&param_1->field_0x30;
    pFVar4 = FAABBSimd::FAABBSimd(&local_128,&local_148,param_2);
    uVar2 = (pFVar4->Position).m128_u64[1];
    (this->Box).AABBSimd.Position.m128_u64[0] = (pFVar4->Position).m128_u64[0];
    (this->Box).AABBSimd.Position.m128_u64[1] = uVar2;
    uVar2 = (pFVar4->HalfExtents).m128_u64[1];
    (this->Box).AABBSimd.HalfExtents.m128_u64[0] = (pFVar4->HalfExtents).m128_u64[0];
    (this->Box).AABBSimd.HalfExtents.m128_u64[1] = uVar2;
  }
  _Var1.m128_f32[3] = 0.0;
  _Var1._0_12_ = (undefined1  [12])*param_4;
  this->TriMeshScale = _Var1;
  return this;
}

// FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_> @ 143eac580

FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_> *
__thiscall
Chaos::FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>::
FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
          (FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
           *this,TRigidTransform<double,3> *param_1,
          TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *param_2,double param_3,
          TVector<float,3> *param_4,FTriangleMeshImplicitObject *param_5)

{
  TSphere<double,3> *pTVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  __m128 _Var13;
  __m128 _Var14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  if (*(float *)&((param_2->MObject).Reference)->_padding_ <= 0.0) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = *(float *)&param_2->_padding_;
  }
  this->TriMesh = param_5;
  this->bFoundIntersection = false;
  this->Radius = (float)((double)fVar7 + param_3);
  pTVar1 = (param_2->MObject).Reference;
  dVar6 = *(double *)&param_1->field_0x18;
  auVar9 = *(undefined1 (*) [16])&param_1->field_0x10;
  auVar8 = *(undefined1 (*) [16])param_1;
  dVar3 = *(double *)&param_1->field_0x40 *
          (double)*(float *)&param_2->_padding_ * (double)*(float *)&pTVar1->Center;
  dVar4 = *(double *)&param_1->field_0x48 *
          (double)*(float *)((longlong)&param_2->_padding_ + 4) *
          (double)*(float *)&(pTVar1->Center).field_0x4;
  uVar19 = (undefined4)((ulonglong)dVar4 >> 0x20);
  dVar5 = (double)*(float *)&param_2->_padding_ * (double)*(float *)&(pTVar1->Center).field_0x8 *
          *(double *)&param_1->field_0x50;
  dVar17 = *(double *)&param_1->field_0x58 * 0.0;
  auVar10 = blendpd(auVar8,auVar9,2);
  auVar20._8_4_ = SUB84(dVar4,0);
  auVar20._0_8_ = dVar3;
  auVar20._12_4_ = uVar19;
  dVar2 = auVar9._0_8_;
  auVar21._0_8_ = auVar20._8_8_ * auVar8._0_8_ - auVar8._8_8_ * dVar3;
  auVar21._8_8_ = dVar5 * auVar8._8_8_ - dVar2 * dVar4;
  auVar22._8_4_ = SUB84(dVar4,0);
  auVar22._0_8_ = dVar3;
  auVar22._12_4_ = uVar19;
  auVar8._8_4_ = SUB84(dVar17,0);
  auVar8._0_8_ = dVar5;
  auVar8._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  auVar8 = blendpd(auVar22,auVar8,2);
  auVar11._0_8_ = auVar8._0_8_ * dVar2 - auVar10._0_8_ * dVar5;
  auVar11._8_8_ = auVar8._8_8_ * auVar9._8_8_ - auVar10._8_8_ * dVar17;
  auVar8 = *(undefined1 (*) [16])param_1;
  auVar22 = blendpd(auVar21,auVar11,2);
  dVar17 = auVar21._8_8_ + auVar21._8_8_;
  dVar18 = auVar11._0_8_ + auVar11._0_8_;
  auVar23._0_8_ = auVar22._0_8_ + auVar22._0_8_;
  auVar23._8_8_ = auVar22._8_8_ + auVar22._8_8_;
  auVar15._8_4_ = SUB84(dVar18,0);
  auVar15._0_8_ = dVar17;
  uVar19 = (undefined4)((ulonglong)dVar18 >> 0x20);
  auVar15._12_4_ = uVar19;
  auVar10._8_4_ = SUB84(dVar18,0);
  auVar10._0_8_ = dVar17;
  auVar10._12_4_ = uVar19;
  auVar11 = blendpd(auVar10,auVar23,2);
  auVar22 = blendpd(auVar8,auVar9,2);
  auVar12._0_8_ = auVar11._0_8_ * dVar2 - auVar22._0_8_ * auVar23._0_8_;
  auVar12._8_8_ = auVar11._8_8_ * auVar9._8_8_ - auVar22._8_8_ * auVar23._8_8_;
  auVar16._0_8_ = auVar15._8_8_ * auVar8._0_8_ - auVar8._8_8_ * dVar17;
  auVar16._8_8_ = auVar23._0_8_ * auVar8._8_8_ - dVar2 * dVar18;
  auVar9._8_4_ = SUB84(auVar16._8_8_,0);
  auVar9._0_8_ = auVar16._0_8_;
  auVar9._12_4_ = (int)((ulonglong)auVar16._8_8_ >> 0x20);
  auVar8 = blendpd(auVar16,auVar12,2);
  _Var13._0_4_ = (float)(dVar17 * dVar6 + dVar3 + auVar9._8_8_ + *(double *)&param_1->field_0x20);
  _Var13.m128_f32[1] =
       (float)(dVar18 * dVar6 + dVar4 + auVar12._0_8_ + *(double *)&param_1->field_0x28);
  _Var13.m128_f32[2] =
       (float)(auVar23._0_8_ * dVar6 + dVar5 + auVar8._0_8_ + *(double *)&param_1->field_0x30);
  _Var13.m128_f32[3] = 0.0;
  this->X = _Var13;
  _Var14.m128_f32[3] = 0.0;
  _Var14._0_12_ = (undefined1  [12])*param_4;
  this->TriMeshScale = _Var14;
  return this;
}

// FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_> @ 143eac770

FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_> * __thiscall
Chaos::FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>::
FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
          (FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_> *this,
          TRigidTransform<double,3> *param_1,TImplicitObjectScaled<Chaos::FCapsule,1> *param_2,
          double param_3,TVector<float,3> *param_4,FTriangleMeshImplicitObject *param_5)

{
  float fVar1;
  undefined8 uVar2;
  double dVar3;
  FCapsule *pFVar4;
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
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  __m128 _Var27;
  __m128 _Var28;
  __m128 _Var29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  undefined4 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  
  if (*(float *)&((param_2->MObject).Reference)->_padding_ <= 0.0) {
    fVar16 = 0.0;
  }
  else {
    fVar16 = *(float *)&param_2->_padding_;
  }
  this->TriMesh = param_5;
  this->bFoundIntersection = false;
  this->Radius = (float)((double)fVar16 + param_3);
  pFVar4 = (param_2->MObject).Reference;
  fVar16 = *(float *)((longlong)&param_2->_padding_ + 4);
  uVar2 = *(undefined8 *)&(pFVar4->MSegment).MPoint;
  dVar14 = *(double *)&param_1->field_0x18;
  auVar17 = *(undefined1 (*) [16])param_1;
  dVar5 = *(double *)&param_1->field_0x40 * (double)(*(float *)&param_2->_padding_ * (float)uVar2);
  dVar6 = *(double *)&param_1->field_0x48 * (double)(fVar16 * (float)((ulonglong)uVar2 >> 0x20));
  uVar37 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar19 = *(undefined1 (*) [16])&param_1->field_0x10;
  auVar41._8_4_ = SUB84(dVar6,0);
  auVar41._0_8_ = dVar5;
  auVar41._12_4_ = uVar37;
  dVar7 = (double)(*(float *)&param_2->_padding_ * *(float *)&(pFVar4->MSegment).MPoint.field_0x8) *
          *(double *)&param_1->field_0x50;
  dVar9 = *(double *)&param_1->field_0x58 * 0.0;
  auVar22 = blendpd(auVar17,auVar19,2);
  dVar3 = auVar19._0_8_;
  auVar42._0_8_ = auVar41._8_8_ * auVar17._0_8_ - auVar17._8_8_ * dVar5;
  auVar42._8_8_ = dVar7 * auVar17._8_8_ - dVar3 * dVar6;
  auVar43._8_4_ = SUB84(dVar6,0);
  auVar43._0_8_ = dVar5;
  auVar43._12_4_ = uVar37;
  auVar17._8_4_ = SUB84(dVar9,0);
  auVar17._0_8_ = dVar7;
  auVar17._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  auVar17 = blendpd(auVar43,auVar17,2);
  auVar25._0_8_ = auVar17._0_8_ * dVar3 - auVar22._0_8_ * dVar7;
  auVar25._8_8_ = auVar17._8_8_ * auVar19._8_8_ - auVar22._8_8_ * dVar9;
  auVar17 = *(undefined1 (*) [16])param_1;
  auVar43 = blendpd(auVar42,auVar25,2);
  dVar12 = auVar42._8_8_ + auVar42._8_8_;
  dVar13 = auVar25._0_8_ + auVar25._0_8_;
  uVar37 = (undefined4)((ulonglong)dVar13 >> 0x20);
  auVar44._0_8_ = auVar43._0_8_ + auVar43._0_8_;
  auVar44._8_8_ = auVar43._8_8_ + auVar43._8_8_;
  auVar30._8_4_ = SUB84(dVar13,0);
  auVar30._0_8_ = dVar12;
  auVar30._12_4_ = uVar37;
  auVar32._8_4_ = SUB84(dVar13,0);
  auVar32._0_8_ = dVar12;
  auVar32._12_4_ = uVar37;
  auVar43 = blendpd(auVar32,auVar44,2);
  auVar31._0_8_ = auVar30._8_8_ * auVar17._0_8_ - auVar17._8_8_ * dVar12;
  auVar31._8_8_ = auVar44._0_8_ * auVar17._8_8_ - dVar3 * dVar13;
  auVar17 = blendpd(auVar17,auVar19,2);
  auVar23._0_8_ = auVar43._0_8_ * dVar3 - auVar17._0_8_ * auVar44._0_8_;
  auVar23._8_8_ = auVar43._8_8_ * auVar19._8_8_ - auVar17._8_8_ * auVar44._8_8_;
  auVar22._8_4_ = SUB84(auVar31._8_8_,0);
  auVar22._0_8_ = auVar31._0_8_;
  auVar22._12_4_ = (int)((ulonglong)auVar31._8_8_ >> 0x20);
  auVar32 = blendpd(auVar31,auVar23,2);
  fVar1 = (pFVar4->MSegment).MLength;
  dVar15 = *(double *)&param_1->field_0x18;
  auVar17 = *(undefined1 (*) [16])&param_1->field_0x10;
  dVar8 = (double)((fVar1 * *(float *)&(pFVar4->MSegment).MAxis +
                   *(float *)&(pFVar4->MSegment).MPoint) * *(float *)&param_2->_padding_) *
          *(double *)&param_1->field_0x40;
  dVar10 = (double)((fVar1 * *(float *)&(pFVar4->MSegment).MAxis.field_0x4 +
                    *(float *)&(pFVar4->MSegment).MPoint.field_0x4) * fVar16) *
           *(double *)&param_1->field_0x48;
  uVar37 = (undefined4)((ulonglong)dVar10 >> 0x20);
  dVar11 = (double)((fVar1 * *(float *)&(pFVar4->MSegment).MAxis.field_0x8 +
                    *(float *)&(pFVar4->MSegment).MPoint.field_0x8) * *(float *)&param_2->_padding_)
           * *(double *)&param_1->field_0x50;
  dVar9 = *(double *)&param_1->field_0x58 * 0.0;
  auVar19 = *(undefined1 (*) [16])param_1;
  auVar38._8_4_ = SUB84(dVar10,0);
  auVar38._0_8_ = dVar8;
  auVar38._12_4_ = uVar37;
  dVar3 = auVar17._0_8_;
  auVar43 = blendpd(auVar19,auVar17,2);
  auVar39._0_8_ = auVar38._8_8_ * auVar19._0_8_ - auVar19._8_8_ * dVar8;
  auVar39._8_8_ = dVar11 * auVar19._8_8_ - dVar3 * dVar10;
  auVar18._8_4_ = SUB84(dVar10,0);
  auVar18._0_8_ = dVar8;
  auVar18._12_4_ = uVar37;
  auVar19._8_4_ = SUB84(dVar9,0);
  auVar19._0_8_ = dVar11;
  auVar19._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  auVar19 = blendpd(auVar18,auVar19,2);
  auVar20._0_8_ = auVar19._0_8_ * dVar3 - auVar43._0_8_ * dVar11;
  auVar20._8_8_ = auVar19._8_8_ * auVar17._8_8_ - auVar43._8_8_ * dVar9;
  auVar19 = *(undefined1 (*) [16])param_1;
  auVar43 = blendpd(auVar39,auVar20,2);
  dVar35 = auVar39._8_8_ + auVar39._8_8_;
  dVar36 = auVar20._0_8_ + auVar20._0_8_;
  auVar40._0_8_ = auVar43._0_8_ + auVar43._0_8_;
  auVar40._8_8_ = auVar43._8_8_ + auVar43._8_8_;
  auVar33._8_4_ = SUB84(dVar36,0);
  auVar33._0_8_ = dVar35;
  uVar37 = (undefined4)((ulonglong)dVar36 >> 0x20);
  auVar33._12_4_ = uVar37;
  auVar24._8_4_ = SUB84(dVar36,0);
  auVar24._0_8_ = dVar35;
  auVar24._12_4_ = uVar37;
  auVar25 = blendpd(auVar24,auVar40,2);
  auVar43 = blendpd(auVar19,auVar17,2);
  auVar26._0_8_ = auVar25._0_8_ * dVar3 - auVar43._0_8_ * auVar40._0_8_;
  auVar26._8_8_ = auVar25._8_8_ * auVar17._8_8_ - auVar43._8_8_ * auVar40._8_8_;
  auVar34._0_8_ = auVar33._8_8_ * auVar19._0_8_ - auVar19._8_8_ * dVar35;
  auVar34._8_8_ = auVar40._0_8_ * auVar19._8_8_ - dVar3 * dVar36;
  auVar21._8_4_ = SUB84(auVar34._8_8_,0);
  auVar21._0_8_ = auVar34._0_8_;
  auVar21._12_4_ = (int)((ulonglong)auVar34._8_8_ >> 0x20);
  auVar17 = blendpd(auVar34,auVar26,2);
  _Var27._0_4_ = (float)(dVar12 * dVar14 + dVar5 + auVar22._8_8_ + *(double *)&param_1->field_0x20);
  dVar3 = *(double *)&param_1->field_0x20;
  dVar9 = *(double *)&param_1->field_0x28;
  _Var27.m128_f32[1] =
       (float)(dVar13 * dVar14 + dVar6 + auVar23._0_8_ + *(double *)&param_1->field_0x28);
  dVar5 = *(double *)&param_1->field_0x30;
  _Var27.m128_f32[2] =
       (float)(auVar44._0_8_ * dVar14 + dVar7 + auVar32._0_8_ + *(double *)&param_1->field_0x30);
  _Var27.m128_f32[3] = 0.0;
  this->X1 = _Var27;
  _Var28._0_4_ = (float)(dVar35 * dVar15 + dVar8 + auVar21._8_8_ + dVar3);
  _Var28.m128_f32[1] = (float)(dVar36 * dVar15 + dVar10 + auVar26._0_8_ + dVar9);
  _Var28.m128_f32[2] = (float)(auVar40._0_8_ * dVar15 + dVar11 + auVar17._0_8_ + dVar5);
  _Var28.m128_f32[3] = 0.0;
  this->X2 = _Var28;
  _Var29.m128_f32[3] = 0.0;
  _Var29._0_12_ = (undefined1  [12])*param_4;
  this->TriMeshScale = _Var29;
  return this;
}

// FTriangleMeshOverlapVisitorNoMTD<Chaos::FCapsule> @ 143eacad0

FTriangleMeshOverlapVisitorNoMTD<Chaos::FCapsule> * __thiscall
Chaos::FTriangleMeshOverlapVisitorNoMTD<Chaos::FCapsule>::
FTriangleMeshOverlapVisitorNoMTD<Chaos::FCapsule>
          (FTriangleMeshOverlapVisitorNoMTD<Chaos::FCapsule> *this,
          TRigidTransform<double,3> *param_1,FCapsule *param_2,double param_3,
          TVector<float,3> *param_4,FTriangleMeshImplicitObject *param_5)

{
  float fVar1;
  undefined8 uVar2;
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
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  __m128 _Var25;
  __m128 _Var26;
  __m128 _Var27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  undefined4 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  
  fVar1 = *(float *)&param_2->_padding_;
  this->TriMesh = param_5;
  this->bFoundIntersection = false;
  this->Radius = (float)param_3 + fVar1;
  uVar2 = *(undefined8 *)&(param_2->MSegment).MPoint;
  dVar13 = *(double *)&param_1->field_0x18;
  auVar15 = *(undefined1 (*) [16])param_1;
  dVar6 = (double)*(float *)&(param_2->MSegment).MPoint.field_0x8 * *(double *)&param_1->field_0x50;
  dVar8 = *(double *)&param_1->field_0x58 * 0.0;
  auVar17 = *(undefined1 (*) [16])&param_1->field_0x10;
  dVar4 = (double)(float)uVar2 * *(double *)&param_1->field_0x40;
  dVar5 = (double)(float)((ulonglong)uVar2 >> 0x20) * *(double *)&param_1->field_0x48;
  uVar35 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar20 = blendpd(auVar15,auVar17,2);
  auVar39._8_4_ = SUB84(dVar5,0);
  auVar39._0_8_ = dVar4;
  auVar39._12_4_ = uVar35;
  dVar3 = auVar17._0_8_;
  auVar40._0_8_ = auVar39._8_8_ * auVar15._0_8_ - auVar15._8_8_ * dVar4;
  auVar40._8_8_ = dVar6 * auVar15._8_8_ - dVar3 * dVar5;
  auVar41._8_4_ = SUB84(dVar5,0);
  auVar41._0_8_ = dVar4;
  auVar41._12_4_ = uVar35;
  auVar15._8_4_ = SUB84(dVar8,0);
  auVar15._0_8_ = dVar6;
  auVar15._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar15 = blendpd(auVar41,auVar15,2);
  auVar21._0_8_ = auVar15._0_8_ * dVar3 - auVar20._0_8_ * dVar6;
  auVar21._8_8_ = auVar15._8_8_ * auVar17._8_8_ - auVar20._8_8_ * dVar8;
  auVar15 = *(undefined1 (*) [16])param_1;
  auVar41 = blendpd(auVar40,auVar21,2);
  dVar11 = auVar40._8_8_ + auVar40._8_8_;
  dVar12 = auVar21._0_8_ + auVar21._0_8_;
  uVar35 = (undefined4)((ulonglong)dVar12 >> 0x20);
  auVar42._0_8_ = auVar41._0_8_ + auVar41._0_8_;
  auVar42._8_8_ = auVar41._8_8_ + auVar41._8_8_;
  auVar28._8_4_ = SUB84(dVar12,0);
  auVar28._0_8_ = dVar11;
  auVar28._12_4_ = uVar35;
  auVar30._8_4_ = SUB84(dVar12,0);
  auVar30._0_8_ = dVar11;
  auVar30._12_4_ = uVar35;
  auVar21 = blendpd(auVar30,auVar42,2);
  auVar41 = blendpd(auVar15,auVar17,2);
  auVar29._0_8_ = auVar28._8_8_ * auVar15._0_8_ - auVar15._8_8_ * dVar11;
  auVar29._8_8_ = auVar42._0_8_ * auVar15._8_8_ - dVar3 * dVar12;
  auVar22._0_8_ = auVar21._0_8_ * dVar3 - auVar41._0_8_ * auVar42._0_8_;
  auVar22._8_8_ = auVar21._8_8_ * auVar17._8_8_ - auVar41._8_8_ * auVar42._8_8_;
  fVar1 = (param_2->MSegment).MLength;
  auVar20._8_4_ = SUB84(auVar29._8_8_,0);
  auVar20._0_8_ = auVar29._0_8_;
  auVar20._12_4_ = (int)((ulonglong)auVar29._8_8_ >> 0x20);
  auVar30 = blendpd(auVar29,auVar22,2);
  dVar14 = *(double *)&param_1->field_0x18;
  auVar15 = *(undefined1 (*) [16])&param_1->field_0x10;
  dVar7 = (double)(fVar1 * *(float *)&(param_2->MSegment).MAxis +
                  *(float *)&(param_2->MSegment).MPoint) * *(double *)&param_1->field_0x40;
  dVar9 = (double)(fVar1 * *(float *)&(param_2->MSegment).MAxis.field_0x4 +
                  *(float *)&(param_2->MSegment).MPoint.field_0x4) * *(double *)&param_1->field_0x48
  ;
  uVar35 = (undefined4)((ulonglong)dVar9 >> 0x20);
  auVar17 = *(undefined1 (*) [16])param_1;
  dVar10 = (double)(fVar1 * *(float *)&(param_2->MSegment).MAxis.field_0x8 +
                   *(float *)&(param_2->MSegment).MPoint.field_0x8) *
           *(double *)&param_1->field_0x50;
  dVar8 = *(double *)&param_1->field_0x58 * 0.0;
  auVar41 = blendpd(auVar17,auVar15,2);
  auVar36._8_4_ = SUB84(dVar9,0);
  auVar36._0_8_ = dVar7;
  auVar36._12_4_ = uVar35;
  dVar3 = auVar15._0_8_;
  auVar37._0_8_ = auVar36._8_8_ * auVar17._0_8_ - auVar17._8_8_ * dVar7;
  auVar37._8_8_ = dVar10 * auVar17._8_8_ - dVar3 * dVar9;
  auVar16._8_4_ = SUB84(dVar9,0);
  auVar16._0_8_ = dVar7;
  auVar16._12_4_ = uVar35;
  auVar17._8_4_ = SUB84(dVar8,0);
  auVar17._0_8_ = dVar10;
  auVar17._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar17 = blendpd(auVar16,auVar17,2);
  auVar18._0_8_ = auVar17._0_8_ * dVar3 - auVar41._0_8_ * dVar10;
  auVar18._8_8_ = auVar17._8_8_ * auVar15._8_8_ - auVar41._8_8_ * dVar8;
  auVar17 = *(undefined1 (*) [16])param_1;
  auVar41 = blendpd(auVar37,auVar18,2);
  dVar33 = auVar37._8_8_ + auVar37._8_8_;
  dVar34 = auVar18._0_8_ + auVar18._0_8_;
  auVar38._0_8_ = auVar41._0_8_ + auVar41._0_8_;
  auVar38._8_8_ = auVar41._8_8_ + auVar41._8_8_;
  auVar31._8_4_ = SUB84(dVar34,0);
  auVar31._0_8_ = dVar33;
  uVar35 = (undefined4)((ulonglong)dVar34 >> 0x20);
  auVar31._12_4_ = uVar35;
  auVar23._8_4_ = SUB84(dVar34,0);
  auVar23._0_8_ = dVar33;
  auVar23._12_4_ = uVar35;
  auVar21 = blendpd(auVar23,auVar38,2);
  auVar41 = blendpd(auVar17,auVar15,2);
  auVar24._0_8_ = auVar21._0_8_ * dVar3 - auVar41._0_8_ * auVar38._0_8_;
  auVar24._8_8_ = auVar21._8_8_ * auVar15._8_8_ - auVar41._8_8_ * auVar38._8_8_;
  auVar32._0_8_ = auVar31._8_8_ * auVar17._0_8_ - auVar17._8_8_ * dVar33;
  auVar32._8_8_ = auVar38._0_8_ * auVar17._8_8_ - dVar3 * dVar34;
  auVar19._8_4_ = SUB84(auVar32._8_8_,0);
  auVar19._0_8_ = auVar32._0_8_;
  auVar19._12_4_ = (int)((ulonglong)auVar32._8_8_ >> 0x20);
  auVar15 = blendpd(auVar32,auVar24,2);
  _Var25._0_4_ = (float)(dVar11 * dVar13 + dVar4 + auVar20._8_8_ + *(double *)&param_1->field_0x20);
  dVar3 = *(double *)&param_1->field_0x20;
  dVar8 = *(double *)&param_1->field_0x28;
  _Var25.m128_f32[1] =
       (float)(dVar12 * dVar13 + dVar5 + auVar22._0_8_ + *(double *)&param_1->field_0x28);
  dVar4 = *(double *)&param_1->field_0x30;
  _Var25.m128_f32[2] =
       (float)(auVar42._0_8_ * dVar13 + dVar6 + auVar30._0_8_ + *(double *)&param_1->field_0x30);
  _Var25.m128_f32[3] = 0.0;
  this->X1 = _Var25;
  _Var26._0_4_ = (float)(dVar33 * dVar14 + dVar7 + auVar19._8_8_ + dVar3);
  _Var26.m128_f32[1] = (float)(dVar34 * dVar14 + dVar9 + auVar24._0_8_ + dVar8);
  _Var26.m128_f32[2] = (float)(auVar38._0_8_ * dVar14 + dVar10 + auVar15._0_8_ + dVar4);
  _Var26.m128_f32[3] = 0.0;
  this->X2 = _Var26;
  _Var27.m128_f32[3] = 0.0;
  _Var27._0_12_ = (undefined1  [12])*param_4;
  this->TriMeshScale = _Var27;
  return this;
}

// VisitOverlap @ 143ed6eb0

bool __thiscall
Chaos::FTriangleMeshOverlapVisitorNoMTD<Chaos::TBox<double,3>_>::VisitOverlap
          (FTriangleMeshOverlapVisitorNoMTD<Chaos::TBox<double,3>_> *this,int param_1)

{
  FTriangleMeshImplicitObject *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  __m128 local_38;
  __m128 local_28;
  __m128 local_18;
  
  pFVar1 = this->TriMesh;
  if ((pFVar1->MElements).bRequiresLargeIndices == false) {
    Chaos::`anonymous_namespace'::
    TriangleMeshTransformVertsHelperSimd<unsigned_short,Chaos::TParticles<float,3>_>
              (&this->TriMeshScale,param_1,&pFVar1->MParticles,&(pFVar1->MElements).SmallIdxBuffer,
               &local_18,&local_28,&local_38);
  }
  else {
    if ((pFVar1->MElements).bRequiresLargeIndices == false) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bRequiresLargeIndices",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMeshImplicitObject.h"
                         ,0x19a,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    Chaos::`anonymous_namespace'::
    TriangleMeshTransformVertsHelperSimd<int,Chaos::TParticles<float,3>_>
              (&this->TriMeshScale,param_1,&this->TriMesh->MParticles,
               &(pFVar1->MElements).LargeIdxBuffer,&local_18,&local_28,&local_38);
  }
  if (this->bIsAxisAligned != false) {
    bVar3 = FAABBSimd::OverlapTriangle(&(this->Box).AABBSimd,&local_18,&local_28,&local_38);
    this->bFoundIntersection = bVar3;
    return !bVar3;
  }
  bVar3 = FBoxSimd::OverlapTriangle(&(this->Box).BoxSimd,&local_18,&local_28,&local_38);
  this->bFoundIntersection = bVar3;
  return !bVar3;
}

// VisitOverlap @ 143ed6fd0

bool __thiscall
Chaos::FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>::
VisitOverlap(FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
             *this,int param_1)

{
  FTriangleMeshImplicitObject *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  __m128 local_38;
  __m128 local_28;
  __m128 local_18;
  
  pFVar1 = this->TriMesh;
  if ((pFVar1->MElements).bRequiresLargeIndices == false) {
    Chaos::`anonymous_namespace'::
    TriangleMeshTransformVertsHelperSimd<unsigned_short,Chaos::TParticles<float,3>_>
              (&this->TriMeshScale,param_1,&pFVar1->MParticles,&(pFVar1->MElements).SmallIdxBuffer,
               &local_18,&local_28,&local_38);
  }
  else {
    if ((pFVar1->MElements).bRequiresLargeIndices == false) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bRequiresLargeIndices",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMeshImplicitObject.h"
                         ,0x19a,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    Chaos::`anonymous_namespace'::
    TriangleMeshTransformVertsHelperSimd<int,Chaos::TParticles<float,3>_>
              (&this->TriMeshScale,param_1,&this->TriMesh->MParticles,
               &(pFVar1->MElements).LargeIdxBuffer,&local_18,&local_28,&local_38);
  }
  if (this->bIsAxisAligned != false) {
    bVar3 = FAABBSimd::OverlapTriangle(&(this->Box).AABBSimd,&local_18,&local_28,&local_38);
    this->bFoundIntersection = bVar3;
    return !bVar3;
  }
  bVar3 = FBoxSimd::OverlapTriangle(&(this->Box).BoxSimd,&local_18,&local_28,&local_38);
  this->bFoundIntersection = bVar3;
  return !bVar3;
}

// VisitOverlap @ 143ed70f0

bool __thiscall
Chaos::FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>::
VisitOverlap(FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
             *this,int param_1)

{
  FTriangleMeshImplicitObject *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  __m128 local_38;
  __m128 local_28;
  __m128 local_18;
  
  pFVar1 = this->TriMesh;
  if ((pFVar1->MElements).bRequiresLargeIndices == false) {
    Chaos::`anonymous_namespace'::
    TriangleMeshTransformVertsHelperSimd<unsigned_short,Chaos::TParticles<float,3>_>
              (&this->TriMeshScale,param_1,&pFVar1->MParticles,&(pFVar1->MElements).SmallIdxBuffer,
               &local_18,&local_28,&local_38);
  }
  else {
    if ((pFVar1->MElements).bRequiresLargeIndices == false) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bRequiresLargeIndices",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMeshImplicitObject.h"
                         ,0x19a,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    Chaos::`anonymous_namespace'::
    TriangleMeshTransformVertsHelperSimd<int,Chaos::TParticles<float,3>_>
              (&this->TriMeshScale,param_1,&this->TriMesh->MParticles,
               &(pFVar1->MElements).LargeIdxBuffer,&local_18,&local_28,&local_38);
  }
  bVar3 = ComputeSphereTriangleOverlapSimd(&local_18,&local_28,&local_38,&this->X,this->Radius);
  this->bFoundIntersection = bVar3;
  return !bVar3;
}

// VisitOverlap @ 143ed71f0

bool __thiscall
Chaos::FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>::
VisitOverlap(FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
             *this,int param_1)

{
  FTriangleMeshImplicitObject *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  __m128 local_38;
  __m128 local_28;
  __m128 local_18;
  
  pFVar1 = this->TriMesh;
  if ((pFVar1->MElements).bRequiresLargeIndices == false) {
    Chaos::`anonymous_namespace'::
    TriangleMeshTransformVertsHelperSimd<unsigned_short,Chaos::TParticles<float,3>_>
              (&this->TriMeshScale,param_1,&pFVar1->MParticles,&(pFVar1->MElements).SmallIdxBuffer,
               &local_18,&local_28,&local_38);
  }
  else {
    if ((pFVar1->MElements).bRequiresLargeIndices == false) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bRequiresLargeIndices",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMeshImplicitObject.h"
                         ,0x19a,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    Chaos::`anonymous_namespace'::
    TriangleMeshTransformVertsHelperSimd<int,Chaos::TParticles<float,3>_>
              (&this->TriMeshScale,param_1,&this->TriMesh->MParticles,
               &(pFVar1->MElements).LargeIdxBuffer,&local_18,&local_28,&local_38);
  }
  bVar3 = ComputeCapsuleTriangleOverlapSimd
                    (&local_18,&local_28,&local_38,&this->X1,&this->X2,this->Radius);
  this->bFoundIntersection = bVar3;
  return !bVar3;
}

// VisitOverlap @ 143ed7300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>::
VisitOverlap(FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_> *this
            ,int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FTriangleMeshImplicitObject *pFVar3;
  code *pcVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  bool bVar12;
  undefined1 uVar13;
  float fVar17;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStackY_178 [32];
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  FGeomGJKHelperSIMD local_f0;
  FGeomGJKHelperSIMD local_d8;
  __m128 local_b8 [4];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar3 = this->TriMesh;
  if ((pFVar3->MElements).bRequiresLargeIndices == false) {
    TriangleMeshTransformVertsHelper<unsigned_short,Chaos::TParticles<float,3>_>
              (&this->TriMeshScale,param_1,&pFVar3->MParticles,&(pFVar3->MElements).SmallIdxBuffer,
               (TVector<double,3> *)&local_138,(TVector<double,3> *)&local_120,
               (TVector<double,3> *)&local_108);
  }
  else {
    if (((pFVar3->MElements).bRequiresLargeIndices == false) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("bRequiresLargeIndices",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMeshImplicitObject.h"
                            ,0x19a,L""), bVar12)) {
      pcVar4 = (code *)swi(3);
      uVar13 = (*pcVar4)();
      return (bool)uVar13;
    }
    TriangleMeshTransformVertsHelper<int,Chaos::TParticles<float,3>_>
              (&this->TriMeshScale,param_1,&this->TriMesh->MParticles,
               &(pFVar3->MElements).LargeIdxBuffer,(TVector<double,3> *)&local_138,
               (TVector<double,3> *)&local_120,(TVector<double,3> *)&local_108);
  }
  local_f0.Geometry = this->QueryGeom;
  local_78._0_4_ = (float)local_138;
  local_78._4_4_ = (float)dStack_130;
  fVar18 = (float)local_128;
  local_78._8_4_ = fVar18;
  local_78._12_4_ = 0;
  fVar25 = (float)local_120;
  fVar26 = (float)dStack_118;
  fVar19 = (float)local_110;
  local_68._4_4_ = fVar26;
  local_68._0_4_ = fVar25;
  local_68._8_4_ = fVar19;
  local_68._12_4_ = 0;
  fVar27 = (float)local_108;
  fVar28 = (float)dStack_100;
  fVar20 = (float)local_f8;
  local_58._4_4_ = fVar28;
  local_58._0_4_ = fVar27;
  local_58._8_4_ = fVar20;
  local_58._12_4_ = 0;
  dVar21 = (double)((TImplicitObjectScaled<Chaos::FConvex,1> *)local_f0.Geometry)->_padding_ -
           (double)((TImplicitObjectScaled<Chaos::FConvex,1> *)local_f0.Geometry)->_padding_;
  fVar17 = (fVar25 - local_78._0_4_) * (fVar20 - fVar18);
  uVar1 = ((TImplicitObjectScaled<Chaos::FConvex,1> *)local_f0.Geometry)->_padding_;
  uVar2 = ((TImplicitObjectScaled<Chaos::FConvex,1> *)local_f0.Geometry)->_padding_;
  auVar15._0_8_ = CONCAT44(fVar17,(int)((ulonglong)uVar1 >> 0x20)) << 0x20;
  auVar15._8_4_ = (int)uVar2;
  auVar15._12_4_ = (int)((ulonglong)uVar2 >> 0x20);
  local_b8[0].m128_f32[1] = (fVar27 - local_78._0_4_) * (fVar19 - fVar18) - fVar17;
  local_b8[0].m128_f32[0] =
       (fVar20 - fVar18) * (fVar26 - local_78._4_4_) - (fVar19 - fVar18) * (fVar28 - local_78._4_4_)
  ;
  local_b8[0].m128_f32[2] =
       (fVar28 - local_78._4_4_) * (fVar25 - local_78._0_4_) -
       (fVar26 - local_78._4_4_) * (fVar27 - local_78._0_4_);
  local_b8[0].m128_f32[3] = 0;
  dVar7 = (double)((TImplicitObjectScaled<Chaos::FConvex,1> *)local_f0.Geometry)->_padding_ -
          (double)uVar1;
  dVar5 = (double)((TImplicitObjectScaled<Chaos::FConvex,1> *)local_f0.Geometry)->_padding_ -
          auVar15._8_8_;
  if (((dVar7 <= dVar5) || (dVar7 <= dVar21)) && (dVar7 = dVar5, dVar5 <= dVar21)) {
    dVar7 = dVar21;
  }
  auVar14._4_4_ = local_78._4_4_;
  auVar14._0_4_ = local_78._0_4_;
  auVar14._8_4_ = fVar18;
  auVar14._12_4_ = 0;
  auVar23._4_4_ = fVar26;
  auVar23._0_4_ = fVar25;
  auVar23._8_4_ = fVar19;
  auVar23._12_4_ = 0;
  auVar23 = maxps(local_78,auVar23);
  auVar6._4_4_ = fVar26;
  auVar6._0_4_ = fVar25;
  auVar6._8_4_ = fVar19;
  auVar6._12_4_ = 0;
  auVar15 = minps(auVar14,auVar6);
  auVar8._4_4_ = fVar28;
  auVar8._0_4_ = fVar27;
  auVar8._8_4_ = fVar20;
  auVar8._12_4_ = 0;
  auVar23 = maxps(auVar23,auVar8);
  auVar9._4_4_ = fVar28;
  auVar9._0_4_ = fVar27;
  auVar9._8_4_ = fVar20;
  auVar9._12_4_ = 0;
  auVar15 = minps(auVar15,auVar9);
  auVar10._4_8_ = auVar23._8_8_;
  auVar10._0_4_ = (int)((ulonglong)(double)auVar23._0_4_ >> 0x20);
  auVar24._0_8_ = auVar10._0_8_ << 0x20;
  auVar24._8_4_ = SUB84((double)auVar23._4_4_,0);
  auVar24._12_4_ = (int)((ulonglong)(double)auVar23._4_4_ >> 0x20);
  auVar11._4_8_ = auVar15._8_8_;
  auVar11._0_4_ = (int)((ulonglong)(double)auVar15._0_4_ >> 0x20);
  auVar16._0_8_ = auVar11._0_8_ << 0x20;
  auVar16._8_4_ = SUB84((double)auVar15._4_4_,0);
  auVar16._12_4_ = (int)((ulonglong)(double)auVar15._4_4_ >> 0x20);
  dVar21 = (double)auVar23._0_4_ - (double)auVar15._0_4_;
  dVar22 = auVar24._8_8_ - auVar16._8_8_;
  dVar5 = (double)auVar23._8_4_ - (double)auVar15._8_4_;
  if (((dVar21 <= dVar22) || (dVar21 <= dVar5)) && (dVar21 = dVar22, dVar22 <= dVar5)) {
    dVar21 = dVar5;
  }
  local_f0.Margin =
       *(float *)&((TImplicitObjectScaled<Chaos::FConvex,1> *)local_f0.Geometry)->_padding_;
  if (dVar21 <= dVar7) {
    dVar21 = dVar7;
  }
  local_f0.Func =
       FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>;
  local_d8.Geometry = local_78;
  local_f0.Radius = 0.0;
  local_d8.Margin = 0.0;
  local_d8.Radius = 0.0;
  local_d8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
  bVar12 = GJKIntersectionSimd(&local_d8,&local_f0,(float)dVar21,&this->Translation,&this->Rotation,
                               this->Thickness,local_b8);
  if (bVar12) {
    this->bFoundIntersection = true;
  }
  return !bVar12;
}

// VisitOverlap @ 143ed75f0

bool __thiscall
Chaos::FTriangleMeshOverlapVisitorNoMTD<Chaos::TSphere<double,3>_>::VisitOverlap
          (FTriangleMeshOverlapVisitorNoMTD<Chaos::TSphere<double,3>_> *this,int param_1)

{
  FTriangleMeshImplicitObject *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  __m128 local_38;
  __m128 local_28;
  __m128 local_18;
  
  pFVar1 = this->TriMesh;
  if ((pFVar1->MElements).bRequiresLargeIndices == false) {
    Chaos::`anonymous_namespace'::
    TriangleMeshTransformVertsHelperSimd<unsigned_short,Chaos::TParticles<float,3>_>
              (&this->TriMeshScale,param_1,&pFVar1->MParticles,&(pFVar1->MElements).SmallIdxBuffer,
               &local_18,&local_28,&local_38);
  }
  else {
    if ((pFVar1->MElements).bRequiresLargeIndices == false) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bRequiresLargeIndices",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMeshImplicitObject.h"
                         ,0x19a,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    Chaos::`anonymous_namespace'::
    TriangleMeshTransformVertsHelperSimd<int,Chaos::TParticles<float,3>_>
              (&this->TriMeshScale,param_1,&this->TriMesh->MParticles,
               &(pFVar1->MElements).LargeIdxBuffer,&local_18,&local_28,&local_38);
  }
  bVar3 = ComputeSphereTriangleOverlapSimd(&local_18,&local_28,&local_38,&this->X,this->Radius);
  this->bFoundIntersection = bVar3;
  return !bVar3;
}

// VisitOverlap @ 143ed76f0

bool __thiscall
Chaos::FTriangleMeshOverlapVisitorNoMTD<Chaos::FCapsule>::VisitOverlap
          (FTriangleMeshOverlapVisitorNoMTD<Chaos::FCapsule> *this,int param_1)

{
  FTriangleMeshImplicitObject *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  __m128 local_38;
  __m128 local_28;
  __m128 local_18;
  
  pFVar1 = this->TriMesh;
  if ((pFVar1->MElements).bRequiresLargeIndices == false) {
    Chaos::`anonymous_namespace'::
    TriangleMeshTransformVertsHelperSimd<unsigned_short,Chaos::TParticles<float,3>_>
              (&this->TriMeshScale,param_1,&pFVar1->MParticles,&(pFVar1->MElements).SmallIdxBuffer,
               &local_18,&local_28,&local_38);
  }
  else {
    if ((pFVar1->MElements).bRequiresLargeIndices == false) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bRequiresLargeIndices",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMeshImplicitObject.h"
                         ,0x19a,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    Chaos::`anonymous_namespace'::
    TriangleMeshTransformVertsHelperSimd<int,Chaos::TParticles<float,3>_>
              (&this->TriMeshScale,param_1,&this->TriMesh->MParticles,
               &(pFVar1->MElements).LargeIdxBuffer,&local_18,&local_28,&local_38);
  }
  bVar3 = ComputeCapsuleTriangleOverlapSimd
                    (&local_18,&local_28,&local_38,&this->X1,&this->X2,this->Radius);
  this->bFoundIntersection = bVar3;
  return !bVar3;
}

// VisitOverlap @ 143ed7800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTriangleMeshOverlapVisitorNoMTD<Chaos::FConvex>::VisitOverlap
          (FTriangleMeshOverlapVisitorNoMTD<Chaos::FConvex> *this,int param_1)

{
  FTriangleMeshImplicitObject *pFVar1;
  code *pcVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  bool bVar7;
  undefined1 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  float fVar23;
  float fVar24;
  undefined1 auStackY_138 [32];
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  FGeomGJKHelperSIMD local_b0;
  FGeomGJKHelperSIMD local_98;
  __m128 local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  pFVar1 = this->TriMesh;
  if ((pFVar1->MElements).bRequiresLargeIndices == false) {
    TriangleMeshTransformVertsHelper<unsigned_short,Chaos::TParticles<float,3>_>
              (&this->TriMeshScale,param_1,&pFVar1->MParticles,&(pFVar1->MElements).SmallIdxBuffer,
               (TVector<double,3> *)&local_f8,(TVector<double,3> *)&local_e0,
               (TVector<double,3> *)&local_c8);
  }
  else {
    if (((pFVar1->MElements).bRequiresLargeIndices == false) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("bRequiresLargeIndices",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMeshImplicitObject.h"
                           ,0x19a,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
    TriangleMeshTransformVertsHelper<int,Chaos::TParticles<float,3>_>
              (&this->TriMeshScale,param_1,&this->TriMesh->MParticles,
               &(pFVar1->MElements).LargeIdxBuffer,(TVector<double,3> *)&local_f8,
               (TVector<double,3> *)&local_e0,(TVector<double,3> *)&local_c8);
  }
  local_b0.Geometry = this->QueryGeom;
  local_68._0_4_ = (float)local_f8;
  local_68._4_4_ = (float)dStack_f0;
  fVar12 = (float)local_e8;
  local_68._8_4_ = fVar12;
  local_68._12_4_ = 0;
  fVar16 = (float)local_e0;
  fVar17 = (float)dStack_d8;
  fVar13 = (float)local_d0;
  local_58._4_4_ = fVar17;
  local_58._0_4_ = fVar16;
  local_58._8_4_ = fVar13;
  local_58._12_4_ = 0;
  fVar23 = (float)local_c8;
  fVar24 = (float)dStack_c0;
  fVar14 = (float)local_b8;
  local_48._4_4_ = fVar24;
  local_48._0_4_ = fVar23;
  local_48._8_4_ = fVar14;
  local_48._12_4_ = 0;
  dVar15 = (double)*(float *)&(((FConvex *)local_b0.Geometry)->LocalBoundingBox).MMax.field_0x8 -
           (double)*(float *)&(((FConvex *)local_b0.Geometry)->LocalBoundingBox).MMin.field_0x8;
  local_78.m128_f32[1] =
       (fVar23 - local_68._0_4_) * (fVar13 - fVar12) - (fVar16 - local_68._0_4_) * (fVar14 - fVar12)
  ;
  local_78.m128_f32[0] =
       (fVar14 - fVar12) * (fVar17 - local_68._4_4_) - (fVar13 - fVar12) * (fVar24 - local_68._4_4_)
  ;
  local_78.m128_f32[2] =
       (fVar24 - local_68._4_4_) * (fVar16 - local_68._0_4_) -
       (fVar17 - local_68._4_4_) * (fVar23 - local_68._0_4_);
  local_78.m128_f32[3] = 0.0;
  dVar3 = (double)*(float *)&(((FConvex *)local_b0.Geometry)->LocalBoundingBox).MMax.field_0x4 -
          (double)*(float *)&(((FConvex *)local_b0.Geometry)->LocalBoundingBox).MMin.field_0x4;
  dVar22 = (double)*(float *)&(((FConvex *)local_b0.Geometry)->LocalBoundingBox).MMax -
           (double)*(float *)&(((FConvex *)local_b0.Geometry)->LocalBoundingBox).MMin;
  if (((dVar22 <= dVar3) || (dVar22 <= dVar15)) && (dVar22 = dVar15, dVar15 <= dVar3)) {
    dVar22 = dVar3;
  }
  auVar9._4_4_ = local_68._4_4_;
  auVar9._0_4_ = local_68._0_4_;
  auVar9._8_4_ = fVar12;
  auVar9._12_4_ = 0;
  auVar10._4_4_ = fVar17;
  auVar10._0_4_ = fVar16;
  auVar10._8_4_ = fVar13;
  auVar10._12_4_ = 0;
  auVar19 = maxps(local_68,auVar10);
  auVar20._4_4_ = fVar17;
  auVar20._0_4_ = fVar16;
  auVar20._8_4_ = fVar13;
  auVar20._12_4_ = 0;
  auVar10 = minps(auVar9,auVar20);
  auVar4._4_4_ = fVar24;
  auVar4._0_4_ = fVar23;
  auVar4._8_4_ = fVar14;
  auVar4._12_4_ = 0;
  auVar20 = maxps(auVar19,auVar4);
  auVar19._4_4_ = fVar24;
  auVar19._0_4_ = fVar23;
  auVar19._8_4_ = fVar14;
  auVar19._12_4_ = 0;
  auVar10 = minps(auVar10,auVar19);
  auVar5._4_8_ = auVar20._8_8_;
  auVar5._0_4_ = (int)((ulonglong)(double)auVar20._0_4_ >> 0x20);
  auVar21._0_8_ = auVar5._0_8_ << 0x20;
  auVar21._8_4_ = SUB84((double)auVar20._4_4_,0);
  auVar21._12_4_ = (int)((ulonglong)(double)auVar20._4_4_ >> 0x20);
  auVar6._4_8_ = auVar10._8_8_;
  auVar6._0_4_ = (int)((ulonglong)(double)auVar10._0_4_ >> 0x20);
  auVar11._0_8_ = auVar6._0_8_ << 0x20;
  auVar11._8_4_ = SUB84((double)auVar10._4_4_,0);
  auVar11._12_4_ = (int)((ulonglong)(double)auVar10._4_4_ >> 0x20);
  dVar3 = (double)auVar20._0_4_ - (double)auVar10._0_4_;
  dVar18 = auVar21._8_8_ - auVar11._8_8_;
  dVar15 = (double)auVar20._8_4_ - (double)auVar10._8_4_;
  if (((dVar3 <= dVar18) || (dVar3 <= dVar15)) && (dVar3 = dVar18, dVar18 <= dVar15)) {
    dVar3 = dVar15;
  }
  local_b0.Margin = *(float *)&((FConvex *)local_b0.Geometry)->_padding_;
  if (dVar3 <= dVar22) {
    dVar3 = dVar22;
  }
  local_b0.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FConvex>;
  local_98.Geometry = local_68;
  local_b0.Radius = 0.0;
  local_98.Margin = 0.0;
  local_98.Radius = 0.0;
  local_98.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
  bVar7 = GJKIntersectionSimd(&local_98,&local_b0,(float)dVar3,&this->Translation,&this->Rotation,
                              this->Thickness,&local_78);
  if (bVar7) {
    this->bFoundIntersection = true;
  }
  return !bVar7;
}

