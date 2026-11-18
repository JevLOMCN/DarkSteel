// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 18

// SupportCore<Chaos::TBox<double,3>_> @ 1438856d0

TVector<double> * __cdecl
Chaos::FGeomGJKHelper::SupportCore<Chaos::TBox<double,3>_>
          (TVector<double> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2,
          double *param_3,int *param_4)

{
  undefined1 auVar1 [16];
  double dVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  iVar5 = 0;
  dVar7 = (double)*(float *)((longlong)param_1 + 0x10);
  bVar3 = 0.0 < *(double *)param_2 || *(double *)param_2 == 0.0;
  iVar4 = 0;
  if (bVar3) {
    dVar2 = *(double *)((longlong)param_1 + 0x38) - dVar7;
  }
  else {
    dVar2 = dVar7 + *(double *)((longlong)param_1 + 0x20);
  }
  if (0.0 < *(double *)&param_2->field_0x8 || *(double *)&param_2->field_0x8 == 0.0) {
    iVar5 = 2;
    dVar8 = *(double *)((longlong)param_1 + 0x40) - dVar7;
  }
  else {
    dVar8 = dVar7 + *(double *)((longlong)param_1 + 0x28);
  }
  if (0.0 < *(double *)&param_2->field_0x10 || *(double *)&param_2->field_0x10 == 0.0) {
    iVar4 = 4;
    dVar6 = *(double *)((longlong)param_1 + 0x48) - dVar7;
  }
  else {
    dVar6 = dVar7 + *(double *)((longlong)param_1 + 0x30);
  }
  *param_4 = iVar5 + iVar4 + (uint)bVar3;
  if (param_3 != (double *)0x0) {
    *param_3 = dVar7 * __real_3fe76cf5d0b09954;
  }
  auVar1._8_4_ = SUB84(dVar8,0);
  auVar1._0_8_ = dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar6;
  return __return_storage_ptr__;
}

// SupportCore<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_> @ 1438857a0

TVector<double> * __cdecl
Chaos::FGeomGJKHelper::SupportCore<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
          (TVector<double> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2,
          double *param_3,int *param_4)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  bool bVar4;
  longlong lVar5;
  uint *puVar6;
  longlong lVar7;
  double dVar8;
  double adStack_78 [2];
  uint local_68 [4];
  double local_58 [4];
  double local_38 [6];
  
  puVar6 = local_68;
  lVar7 = *(longlong *)((longlong)param_1 + 0x70) + 0x20;
  lVar5 = 0;
  local_58[1] = (double)*(float *)((longlong)param_1 + 0x24);
  local_58[0] = (double)*(float *)((longlong)param_1 + 0x20);
  local_58[2] = (double)*(float *)((longlong)param_1 + 0x28);
  local_38[0] = (double)*(float *)((longlong)param_1 + 0x24) * *(double *)&param_2->field_0x8;
  local_58[3] = (double)*(float *)((longlong)param_1 + 0x20) * *(double *)param_2;
  dVar8 = (double)*(float *)((longlong)param_1 + 0x10);
  local_38[1] = (double)*(float *)((longlong)param_1 + 0x28) * *(double *)&param_2->field_0x10;
  do {
    dVar3 = *(double *)((longlong)local_58 + lVar5);
    pdVar1 = (double *)((lVar7 - (longlong)local_58) + (longlong)local_58 + lVar5);
    pdVar2 = (double *)((longlong)pdVar1 + (longlong)local_58 + (0x18 - lVar7));
    bVar4 = 0.0 < *pdVar2 || *pdVar2 == 0.0;
    if (bVar4) {
      dVar3 = dVar3 * *(double *)(lVar5 + 0x18 + lVar7) - dVar8;
    }
    else {
      dVar3 = dVar3 * *pdVar1 + dVar8;
    }
    *(double *)((longlong)local_38 + lVar5 + 0x10) = dVar3;
    lVar5 = lVar5 + 8;
    *puVar6 = (uint)bVar4;
    puVar6 = puVar6 + 1;
  } while (lVar5 < 0x18);
  *param_4 = local_68[0] + (local_68[1] + local_68[2] * 2) * 2;
  if (param_3 != (double *)0x0) {
    *param_3 = dVar8 * __real_3fe76cf5d0b09954;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_38[2];
  (__return_storage_ptr__->field0_0x0)._s_0.Y = local_38[3];
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_38[4];
  return __return_storage_ptr__;
}

// SupportCore<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_> @ 1438858d0

TVector<double> * __cdecl
Chaos::FGeomGJKHelper::SupportCore<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
          (TVector<double> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2,
          double *param_3,int *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)((longlong)param_1 + 0x70);
  fVar1 = *(float *)((longlong)param_1 + 0x24);
  fVar2 = *(float *)((longlong)param_1 + 0x20);
  fVar3 = *(float *)((longlong)param_1 + 0x28);
  *param_4 = 0;
  fVar4 = *(float *)(lVar6 + 0x24);
  fVar5 = *(float *)(lVar6 + 0x28);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(fVar2 * *(float *)(lVar6 + 0x20));
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(fVar1 * fVar4);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)(fVar3 * fVar5);
  return __return_storage_ptr__;
}

// SupportCore<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_> @ 143885940

TVector<double> * __cdecl
Chaos::FGeomGJKHelper::SupportCore<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
          (TVector<double> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2,
          double *param_3,int *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float local_48;
  
  lVar4 = *(longlong *)((longlong)param_1 + 0x70);
  fVar1 = *(float *)((longlong)param_1 + 0x20);
  fVar2 = *(float *)((longlong)param_1 + 0x24);
  fVar3 = *(float *)((longlong)param_1 + 0x28);
  bVar5 = 0.0 <= (float)((double)fVar2 * *(double *)&param_2->field_0x8) * *(float *)(lVar4 + 0x30)
                 + (float)((double)fVar1 * *(double *)param_2) * *(float *)(lVar4 + 0x2c) +
                 (float)((double)fVar3 * *(double *)&param_2->field_0x10) * *(float *)(lVar4 + 0x34)
  ;
  if (bVar5) {
    fVar7 = *(float *)(lVar4 + 0x38);
    local_48 = fVar7 * *(float *)(lVar4 + 0x2c) + *(float *)(lVar4 + 0x20);
    fVar6 = fVar7 * *(float *)(lVar4 + 0x30) + *(float *)(lVar4 + 0x24);
    fVar7 = fVar7 * *(float *)(lVar4 + 0x34) + *(float *)(lVar4 + 0x28);
  }
  else {
    fVar7 = *(float *)(lVar4 + 0x28);
    fVar6 = (float)((ulonglong)*(undefined8 *)(lVar4 + 0x20) >> 0x20);
    local_48 = (float)*(undefined8 *)(lVar4 + 0x20);
  }
  *param_4 = (uint)bVar5;
  if (param_3 != (double *)0x0) {
    *param_3 = (double)param_4._0_4_;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(fVar1 * local_48);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(fVar2 * fVar6);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)(fVar3 * fVar7);
  return __return_storage_ptr__;
}

// SupportCore<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_> @ 143885a90

TVector<double> * __cdecl
Chaos::FGeomGJKHelper::SupportCore<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
          (TVector<double> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2,
          double *param_3,int *param_4)

{
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double dStack_18;
  double local_10;
  
  local_38 = (double)*(float *)((longlong)param_1 + 0x20);
  local_30 = (double)*(float *)((longlong)param_1 + 0x24);
  local_28 = (double)*(float *)((longlong)param_1 + 0x28);
  FConvex::SupportCoreScaled
            (*(FConvex **)((longlong)param_1 + 0x70),(TVector<double,3> *)&local_20,param_2,
             (double)*(float *)((longlong)param_1 + 0x10),(TVector<double,3> *)&local_38,param_3,
             param_4);
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_20;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_18;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_10;
  return __return_storage_ptr__;
}

// SupportCore<Chaos::TSphere<double,3>_> @ 143885b20

TVector<double> * __cdecl
Chaos::FGeomGJKHelper::SupportCore<Chaos::TSphere<double,3>_>
          (TVector<double> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2,
          double *param_3,int *param_4)

{
  float fVar1;
  float fVar2;
  
  *param_4 = 0;
  fVar1 = *(float *)((longlong)param_1 + 0x24);
  fVar2 = *(float *)((longlong)param_1 + 0x28);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)*(float *)((longlong)param_1 + 0x20);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar2;
  return __return_storage_ptr__;
}

// SupportCore<Chaos::FCapsule> @ 143885b60

TVector<double> * __cdecl
Chaos::FGeomGJKHelper::SupportCore<Chaos::FCapsule>
          (TVector<double> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2,
          double *param_3,int *param_4)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float local_18;
  
  bVar1 = 0.0 <= (float)*(double *)&param_2->field_0x8 * *(float *)((longlong)param_1 + 0x30) +
                 (float)*(double *)param_2 * *(float *)((longlong)param_1 + 0x2c) +
                 (float)*(double *)&param_2->field_0x10 * *(float *)((longlong)param_1 + 0x34);
  if (bVar1) {
    fVar2 = *(float *)((longlong)param_1 + 0x38);
    local_18 = fVar2 * *(float *)((longlong)param_1 + 0x2c) + *(float *)((longlong)param_1 + 0x20);
    fVar3 = fVar2 * *(float *)((longlong)param_1 + 0x30) + *(float *)((longlong)param_1 + 0x24);
    fVar2 = fVar2 * *(float *)((longlong)param_1 + 0x34) + *(float *)((longlong)param_1 + 0x28);
  }
  else {
    fVar2 = *(float *)((longlong)param_1 + 0x28);
    fVar3 = (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x20) >> 0x20);
    local_18 = (float)*(undefined8 *)((longlong)param_1 + 0x20);
  }
  *param_4 = (uint)bVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_18;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar2;
  return __return_storage_ptr__;
}

// SupportCore<Chaos::FConvex> @ 143885c30

TVector<double> * __cdecl
Chaos::FGeomGJKHelper::SupportCore<Chaos::FConvex>
          (TVector<double> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2,
          double *param_3,int *param_4)

{
  double dVar1;
  double dVar2;
  TVector<double,3> *pTVar3;
  TVector<double,3> local_28;
  
  pTVar3 = FConvex::SupportCore
                     (param_1,&local_28,param_2,(double)*(float *)((longlong)param_1 + 0x10),param_3
                      ,param_4);
  dVar2 = *(double *)&pTVar3->field_0x8;
  dVar1 = *(double *)&pTVar3->field_0x10;
  (__return_storage_ptr__->field0_0x0).XYZ[0] = *(double *)pTVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// SupportFunction @ 1438d8830

TVector<double> * __thiscall
Chaos::FGeomGJKHelper::SupportFunction
          (FGeomGJKHelper *this,TVector<double> *__return_storage_ptr__,
          TRigidTransform<double,3> *param_1,TRotation<double,3> *param_2,TVector<double,3> *param_3
          ,int *param_4)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  double dVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68 [4];
  
  local_a8._s_0.X = (double)*(undefined8 *)param_3;
  local_a8._s_0.Y = (double)*(undefined8 *)&param_3->field_0x8;
  local_a8._s_0.Z = (double)*(undefined8 *)&param_3->field_0x10;
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)param_2,(TVector<double> *)&local_88._s_0,
             (TVector<double> *)&local_a8._s_0);
  local_a8._s_0.X = local_88._s_0.X;
  local_a8._s_0.Y = local_88._s_0.Y;
  local_a8._s_0.Z = local_88._s_0.Z;
  (*this->Func)((TVector<double> *)&local_68[0]._s_0,this->Geometry,
                (TVector<double,3> *)&local_a8._s_0,(double *)0x0,param_4);
  auVar1 = *(undefined1 (*) [16])&param_1->field_0x10;
  auVar7 = *(undefined1 (*) [16])param_1;
  dVar5 = *(double *)&param_1->field_0x18;
  dVar17 = local_68[0]._8_8_;
  dVar4 = auVar1._0_8_;
  auVar8 = blendpd(auVar7,auVar1,2);
  auVar15._0_8_ = dVar17 * auVar7._0_8_ - auVar7._8_8_ * local_68[0]._0_8_;
  auVar15._8_8_ = (double)local_68[0]._16_8_ * auVar7._8_8_ - dVar4 * dVar17;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = local_68[0]._s_0.Z;
  auVar7 = blendpd(local_68[0]._0_16_,auVar7,2);
  auVar10._0_8_ = auVar7._0_8_ * dVar4 - auVar8._0_8_ * (double)local_68[0]._16_8_;
  auVar10._8_8_ = auVar7._8_8_ * auVar1._8_8_ - auVar8._8_8_ * 0.0;
  auVar7 = *(undefined1 (*) [16])param_1;
  auVar8 = blendpd(auVar15,auVar10,2);
  dVar2 = auVar15._8_8_ + auVar15._8_8_;
  dVar3 = auVar10._0_8_ + auVar10._0_8_;
  uVar14 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar16._0_8_ = auVar8._0_8_ + auVar8._0_8_;
  auVar16._8_8_ = auVar8._8_8_ + auVar8._8_8_;
  auVar12._8_4_ = SUB84(dVar3,0);
  auVar12._0_8_ = dVar2;
  auVar12._12_4_ = uVar14;
  auVar9._8_4_ = SUB84(dVar3,0);
  auVar9._0_8_ = dVar2;
  auVar9._12_4_ = uVar14;
  auVar10 = blendpd(auVar9,auVar16,2);
  auVar13._0_8_ = auVar12._8_8_ * auVar7._0_8_ - auVar7._8_8_ * dVar2;
  auVar13._8_8_ = auVar16._0_8_ * auVar7._8_8_ - dVar4 * dVar3;
  auVar7 = blendpd(auVar7,auVar1,2);
  dVar6 = *(double *)&param_1->field_0x30;
  auVar8._8_4_ = SUB84(auVar13._8_8_,0);
  auVar8._0_8_ = auVar13._0_8_;
  auVar8._12_4_ = (int)((ulonglong)auVar13._8_8_ >> 0x20);
  auVar11._0_8_ = auVar10._0_8_ * dVar4 - auVar7._0_8_ * auVar16._0_8_;
  auVar11._8_8_ = auVar10._8_8_ * auVar1._8_8_ - auVar7._8_8_ * auVar16._8_8_;
  auVar7 = blendpd(auVar13,auVar11,2);
  dVar4 = dVar3 * dVar5 + dVar17 + auVar11._0_8_ + *(double *)&param_1->field_0x28;
  auVar1._8_4_ = SUB84(dVar4,0);
  auVar1._0_8_ = dVar2 * dVar5 + local_68[0]._0_8_ + auVar8._8_8_ + *(double *)&param_1->field_0x20;
  auVar1._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       auVar16._0_8_ * dVar5 + (double)local_68[0]._16_8_ + auVar7._0_8_ + dVar6;
  return __return_storage_ptr__;
}

// SupportCore<Chaos::TGJKCoreShape<Chaos::FCapsule>_> @ 14394ecc0

TVector<double> * __cdecl
Chaos::FGeomGJKHelper::SupportCore<Chaos::TGJKCoreShape<Chaos::FCapsule>_>
          (TVector<double> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2,
          double *param_3,int *param_4)

{
  longlong lVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float local_28;
  
  lVar1 = *(longlong *)param_1;
  bVar2 = 0.0 <= (float)*(double *)&param_2->field_0x8 * *(float *)(lVar1 + 0x30) +
                 (float)*(double *)param_2 * *(float *)(lVar1 + 0x2c) +
                 (float)*(double *)&param_2->field_0x10 * *(float *)(lVar1 + 0x34);
  if (bVar2) {
    fVar3 = *(float *)(lVar1 + 0x38);
    fVar4 = fVar3 * *(float *)(lVar1 + 0x30) + *(float *)(lVar1 + 0x24);
    local_28 = fVar3 * *(float *)(lVar1 + 0x2c) + *(float *)(lVar1 + 0x20);
    fVar3 = fVar3 * *(float *)(lVar1 + 0x34) + *(float *)(lVar1 + 0x28);
  }
  else {
    fVar3 = *(float *)(lVar1 + 0x28);
    fVar4 = (float)((ulonglong)*(undefined8 *)(lVar1 + 0x20) >> 0x20);
    local_28 = (float)*(undefined8 *)(lVar1 + 0x20);
  }
  *param_4 = (uint)bVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_28;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar3;
  return __return_storage_ptr__;
}

// SupportCore<Chaos::TGJKShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>_> @ 14394eda0

TVector<double> * __cdecl
Chaos::FGeomGJKHelper::
SupportCore<Chaos::TGJKShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>_>
          (TVector<double> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2,
          double *param_3,int *param_4)

{
  double dVar1;
  double dVar2;
  TVector<double,3> *pTVar3;
  TVector<double,3> local_48;
  TVector<double,3> local_28;
  
  local_48._0_8_ = *(undefined8 *)param_2;
  local_48._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_48._16_8_ = *(undefined8 *)&param_2->field_0x10;
  pTVar3 = TGJKShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>::SupportCore
                     (param_1,&local_28,&local_48,0.0,param_3,param_4);
  dVar2 = *(double *)&pTVar3->field_0x8;
  dVar1 = *(double *)&pTVar3->field_0x10;
  (__return_storage_ptr__->field0_0x0).XYZ[0] = *(double *)pTVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// SupportCore<Chaos::TGJKShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>_> @ 14394ee10

TVector<double> * __cdecl
Chaos::FGeomGJKHelper::
SupportCore<Chaos::TGJKShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>_>
          (TVector<double> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2,
          double *param_3,int *param_4)

{
  double dVar1;
  double dVar2;
  TVector<double,3> *pTVar3;
  TVector<double,3> local_48;
  TVector<double,3> local_28;
  
  local_48._0_8_ = *(undefined8 *)param_2;
  local_48._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_48._16_8_ = *(undefined8 *)&param_2->field_0x10;
  pTVar3 = TGJKShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>::SupportCore
                     (param_1,&local_28,&local_48,0.0,param_3,param_4);
  dVar2 = *(double *)&pTVar3->field_0x8;
  dVar1 = *(double *)&pTVar3->field_0x10;
  (__return_storage_ptr__->field0_0x0).XYZ[0] = *(double *)pTVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// SupportCore<Chaos::TGJKShape<Chaos::FConvex>_> @ 14394ee80

TVector<double> * __cdecl
Chaos::FGeomGJKHelper::SupportCore<Chaos::TGJKShape<Chaos::FConvex>_>
          (TVector<double> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2,
          double *param_3,int *param_4)

{
  double dVar1;
  double dVar2;
  TVector<double,3> *pTVar3;
  TVector<double,3> local_48;
  TVector<double,3> local_28;
  
  local_48._0_8_ = *(undefined8 *)param_2;
  local_48._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_48._16_8_ = *(undefined8 *)&param_2->field_0x10;
  pTVar3 = TGJKShape<Chaos::FConvex>::SupportCore(param_1,&local_28,&local_48,0.0,param_3,param_4);
  dVar2 = *(double *)&pTVar3->field_0x8;
  dVar1 = *(double *)&pTVar3->field_0x10;
  (__return_storage_ptr__->field0_0x0).XYZ[0] = *(double *)pTVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// SupportCore<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_> @ 14394eef0

TVector<double> * __cdecl
Chaos::FGeomGJKHelper::SupportCore<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>
          (TVector<double> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2,
          double *param_3,int *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  double dVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  lVar1 = *(longlong *)((longlong)param_1 + 0x28);
  iVar5 = 0;
  iVar6 = 0;
  dVar8 = (double)*(float *)((longlong)param_1 + 0x10);
  bVar4 = 0.0 < *(double *)param_2 || *(double *)param_2 == 0.0;
  if (bVar4) {
    dVar3 = *(double *)(lVar1 + 0x38) - dVar8;
  }
  else {
    dVar3 = dVar8 + *(double *)(lVar1 + 0x20);
  }
  if (0.0 < *(double *)&param_2->field_0x8 || *(double *)&param_2->field_0x8 == 0.0) {
    iVar5 = 2;
    dVar9 = *(double *)(lVar1 + 0x40) - dVar8;
  }
  else {
    dVar9 = dVar8 + *(double *)(lVar1 + 0x28);
  }
  if (0.0 < *(double *)&param_2->field_0x10 || *(double *)&param_2->field_0x10 == 0.0) {
    iVar6 = 4;
    dVar7 = *(double *)(lVar1 + 0x48) - dVar8;
  }
  else {
    dVar7 = dVar8 + *(double *)(lVar1 + 0x30);
  }
  *param_4 = iVar5 + iVar6 + (uint)bVar4;
  if (param_3 != (double *)0x0) {
    *param_3 = dVar8 * __real_3fe76cf5d0b09954;
  }
  auVar2._8_4_ = SUB84(dVar9,0);
  auVar2._0_8_ = dVar3;
  auVar2._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar7;
  return __return_storage_ptr__;
}

// SupportCore<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_> @ 14394efc0

TVector<double> * __cdecl
Chaos::FGeomGJKHelper::SupportCore<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_>
          (TVector<double> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2,
          double *param_3,int *param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)((longlong)param_1 + 0x28);
  *param_4 = 0;
  fVar1 = *(float *)(lVar3 + 0x24);
  fVar2 = *(float *)(lVar3 + 0x28);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)*(float *)(lVar3 + 0x20);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar2;
  return __return_storage_ptr__;
}

// SupportCore<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_> @ 14394f010

TVector<double> * __cdecl
Chaos::FGeomGJKHelper::SupportCore<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>
          (TVector<double> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2,
          double *param_3,int *param_4)

{
  longlong lVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float local_18;
  
  lVar1 = *(longlong *)((longlong)param_1 + 0x28);
  bVar2 = 0.0 <= (float)*(double *)&param_2->field_0x8 * *(float *)(lVar1 + 0x30) +
                 (float)*(double *)param_2 * *(float *)(lVar1 + 0x2c) +
                 (float)*(double *)&param_2->field_0x10 * *(float *)(lVar1 + 0x34);
  if (bVar2) {
    fVar3 = *(float *)(lVar1 + 0x38);
    local_18 = fVar3 * *(float *)(lVar1 + 0x2c) + *(float *)(lVar1 + 0x20);
    fVar4 = fVar3 * *(float *)(lVar1 + 0x30) + *(float *)(lVar1 + 0x24);
    fVar3 = fVar3 * *(float *)(lVar1 + 0x34) + *(float *)(lVar1 + 0x28);
  }
  else {
    fVar3 = *(float *)(lVar1 + 0x28);
    fVar4 = (float)((ulonglong)*(undefined8 *)(lVar1 + 0x20) >> 0x20);
    local_18 = (float)*(undefined8 *)(lVar1 + 0x20);
  }
  *param_4 = (uint)bVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_18;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar3;
  return __return_storage_ptr__;
}

// SupportCore<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_> @ 14394f0f0

TVector<double> * __cdecl
Chaos::FGeomGJKHelper::SupportCore<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>
          (TVector<double> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2,
          double *param_3,int *param_4)

{
  double local_28;
  double dStack_20;
  double local_18;
  
  FConvex::SupportCore
            (*(FConvex **)((longlong)param_1 + 0x28),(TVector<double,3> *)&local_28,param_2,
             (double)*(float *)((longlong)param_1 + 0x10),param_3,param_4);
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_28;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_20;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_18;
  return __return_storage_ptr__;
}

// SupportCore<Chaos::TTriangle<double>_> @ 143ae9ed0

TVector<double> * __cdecl
Chaos::FGeomGJKHelper::SupportCore<Chaos::TTriangle<double>_>
          (TVector<double> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2,
          double *param_3,int *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = *(double *)param_2;
  dVar1 = *(double *)&param_2->field_0x8;
  dVar2 = *(double *)&param_2->field_0x10;
  dVar3 = dVar1 * *(double *)((longlong)param_1 + 8) + dVar4 * *(double *)param_1 +
          dVar2 * *(double *)((longlong)param_1 + 0x10);
  dVar5 = dVar1 * *(double *)((longlong)param_1 + 0x20) +
          dVar4 * *(double *)((longlong)param_1 + 0x18) +
          dVar2 * *(double *)((longlong)param_1 + 0x28);
  dVar4 = dVar1 * *(double *)((longlong)param_1 + 0x38) +
          dVar4 * *(double *)((longlong)param_1 + 0x30) +
          dVar2 * *(double *)((longlong)param_1 + 0x40);
  if ((dVar5 <= dVar3) && (dVar4 <= dVar3)) {
    *param_4 = 0;
    dVar1 = *(double *)((longlong)param_1 + 8);
    dVar4 = *(double *)((longlong)param_1 + 0x10);
    (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)param_1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar4;
    return __return_storage_ptr__;
  }
  if ((dVar3 <= dVar5) && (dVar4 <= dVar5)) {
    *param_4 = 1;
    dVar1 = *(double *)((longlong)param_1 + 0x20);
    dVar4 = *(double *)((longlong)param_1 + 0x28);
    (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)((longlong)param_1 + 0x18);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar4;
    return __return_storage_ptr__;
  }
  *param_4 = 2;
  dVar1 = *(double *)((longlong)param_1 + 0x38);
  dVar4 = *(double *)((longlong)param_1 + 0x40);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)((longlong)param_1 + 0x30);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar4;
  return __return_storage_ptr__;
}

