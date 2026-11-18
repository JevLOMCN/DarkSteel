// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// SupportCore @ 1438d7000

TVector<double,3> * __thiscall
Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>::SupportCore
          (TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_> *this,
          TVector<double,3> *__return_storage_ptr__,TVector<double,3> *param_1,double param_2,
          double *param_3,int *param_4)

{
  double *pdVar1;
  double *pdVar2;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *pTVar3;
  bool bVar4;
  longlong lVar5;
  double *pdVar6;
  uint *puVar7;
  TAABB<double,3> *pTVar8;
  double dVar9;
  uint local_48 [4];
  double local_38 [4];
  double local_18 [2];
  
  puVar7 = local_48;
  pTVar3 = this->Shape;
  lVar5 = 0;
  local_38[1] = (double)*(float *)((longlong)&pTVar3->_padding_ + 4);
  pTVar8 = &((pTVar3->MObject).Reference)->AABB;
  local_38[0] = (double)*(float *)&pTVar3->_padding_;
  local_38[2] = (double)*(float *)&pTVar3->_padding_;
  local_18[0] = local_38[1] * *(double *)&param_1->field_0x8;
  local_38[3] = (double)*(float *)&pTVar3->_padding_ * *(double *)param_1;
  local_18[1] = (double)*(float *)&pTVar3->_padding_ * *(double *)&param_1->field_0x10;
  do {
    pdVar6 = (double *)((longlong)local_38 + lVar5);
    pdVar1 = (double *)(((longlong)pTVar8 - (longlong)local_38) + (longlong)pdVar6);
    pdVar2 = (double *)((longlong)pdVar1 + (longlong)local_38 + (0x18 - (longlong)pTVar8));
    bVar4 = 0.0 < *pdVar2 || *pdVar2 == 0.0;
    if (bVar4) {
      dVar9 = *pdVar6 * *(double *)(&(pTVar8->MMax).field_0x0 + lVar5) - param_2;
    }
    else {
      dVar9 = *pdVar6 * *pdVar1 + param_2;
    }
    *(double *)(((longlong)__return_storage_ptr__ - (longlong)local_38) + (longlong)pdVar6) = dVar9;
    lVar5 = lVar5 + 8;
    *puVar7 = (uint)bVar4;
    puVar7 = puVar7 + 1;
  } while (lVar5 < 0x18);
  *param_4 = local_48[0] + (local_48[1] + local_48[2] * 2) * 2;
  if (param_3 != (double *)0x0) {
    *param_3 = param_2 * __real_3fe76cf5d0b09954;
  }
  return __return_storage_ptr__;
}

// SupportCore @ 1438d7140

TVector<double,3> * __thiscall
Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>::SupportCore
          (TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_> *this,
          TVector<double,3> *__return_storage_ptr__,TVector<double,3> *param_1,double param_2,
          double *param_3,int *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  TImplicitObjectScaled<Chaos::FCapsule,1> *pTVar6;
  FCapsule *pFVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float local_48;
  
  pTVar6 = this->Shape;
  pFVar7 = (pTVar6->MObject).Reference;
  fVar1 = *(float *)((longlong)&pTVar6->_padding_ + 4);
  fVar2 = *(float *)&pTVar6->_padding_;
  fVar3 = *(float *)&pTVar6->_padding_;
  fVar10 = *(float *)&(pFVar7->MSegment).MAxis.field_0x8;
  bVar8 = 0.0 <= (float)((double)fVar1 * *(double *)&param_1->field_0x8) *
                 *(float *)&(pFVar7->MSegment).MAxis.field_0x4 +
                 (float)((double)fVar2 * *(double *)param_1) * *(float *)&(pFVar7->MSegment).MAxis +
                 (float)((double)fVar3 * *(double *)&param_1->field_0x10) * fVar10;
  if (bVar8) {
    fVar4 = (pFVar7->MSegment).MLength;
    local_48 = fVar4 * *(float *)&(pFVar7->MSegment).MAxis + *(float *)&(pFVar7->MSegment).MPoint;
    fVar9 = fVar4 * *(float *)&(pFVar7->MSegment).MAxis.field_0x4 +
            *(float *)&(pFVar7->MSegment).MPoint.field_0x4;
    fVar10 = fVar4 * fVar10 + *(float *)&(pFVar7->MSegment).MPoint.field_0x8;
  }
  else {
    uVar5 = *(undefined8 *)&(pFVar7->MSegment).MPoint;
    fVar10 = *(float *)&(pFVar7->MSegment).MPoint.field_0x8;
    fVar9 = (float)((ulonglong)uVar5 >> 0x20);
    local_48 = (float)uVar5;
  }
  *param_4 = (uint)bVar8;
  *(double *)&__return_storage_ptr__->field_0x8 = (double)(fVar1 * fVar9);
  *(double *)__return_storage_ptr__ = (double)(fVar2 * local_48);
  *(double *)&__return_storage_ptr__->field_0x10 = (double)(fVar3 * fVar10);
  if (param_3 != (double *)0x0) {
    *param_3 = (double)param_4._0_4_;
  }
  return __return_storage_ptr__;
}

// SupportCore @ 1438d7290

TVector<double,3> * __thiscall
Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>::SupportCore
          (TGJKCoreShape<Chaos::TTriangle<double>_> *this,TVector<double,3> *__return_storage_ptr__,
          TVector<double,3> *param_1,double param_2,double *param_3,int *param_4)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  TTriangle<double> *pTVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  
  pTVar4 = this->Shape;
  dVar7 = *(double *)param_1;
  dVar1 = *(double *)&param_1->field_0x8;
  dVar2 = *(double *)&param_1->field_0x10;
  dVar5 = dVar1 * *(double *)&pTVar4->ABC[0].field_0x8 + dVar7 * *(double *)pTVar4->ABC +
          dVar2 * *(double *)&pTVar4->ABC[0].field_0x10;
  dVar8 = dVar1 * *(double *)&pTVar4->ABC[1].field_0x8 + dVar7 * *(double *)(pTVar4->ABC + 1) +
          dVar2 * *(double *)&pTVar4->ABC[1].field_0x10;
  dVar7 = dVar1 * *(double *)&pTVar4->ABC[2].field_0x8 + dVar7 * *(double *)(pTVar4->ABC + 2) +
          dVar2 * *(double *)&pTVar4->ABC[2].field_0x10;
  if ((dVar8 <= dVar5) && (dVar7 <= dVar5)) {
    *param_4 = 0;
    uVar6 = *(undefined8 *)&pTVar4->ABC[0].field_0x8;
    uVar3 = *(undefined8 *)&pTVar4->ABC[0].field_0x10;
    *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)pTVar4->ABC;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar6;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar3;
    return __return_storage_ptr__;
  }
  if ((dVar5 <= dVar8) && (dVar7 <= dVar8)) {
    *param_4 = 1;
    uVar6 = *(undefined8 *)&pTVar4->ABC[1].field_0x8;
    uVar3 = *(undefined8 *)&pTVar4->ABC[1].field_0x10;
    *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)(pTVar4->ABC + 1);
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar6;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar3;
    return __return_storage_ptr__;
  }
  *param_4 = 2;
  uVar6 = *(undefined8 *)&pTVar4->ABC[2].field_0x8;
  uVar3 = *(undefined8 *)&pTVar4->ABC[2].field_0x10;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)(pTVar4->ABC + 2);
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar6;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar3;
  return __return_storage_ptr__;
}

// SupportCore @ 1438d73b0

TVector<double,3> * __thiscall
Chaos::TGJKCoreShape<Chaos::FCapsule>::SupportCore
          (TGJKCoreShape<Chaos::FCapsule> *this,TVector<double,3> *__return_storage_ptr__,
          TVector<double,3> *param_1,double param_2,double *param_3,int *param_4)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  FCapsule *pFVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float local_18;
  
  pFVar4 = this->Shape;
  fVar6 = *(float *)&(pFVar4->MSegment).MAxis;
  fVar7 = *(float *)&(pFVar4->MSegment).MAxis.field_0x4;
  fVar1 = *(float *)&(pFVar4->MSegment).MAxis.field_0x8;
  bVar5 = 0.0 <= (float)*(double *)&param_1->field_0x8 * fVar7 + (float)*(double *)param_1 * fVar6 +
                 (float)*(double *)&param_1->field_0x10 * fVar1;
  if (bVar5) {
    fVar2 = (pFVar4->MSegment).MLength;
    local_18 = fVar2 * fVar6 + *(float *)&(pFVar4->MSegment).MPoint;
    fVar7 = fVar2 * fVar7 + *(float *)&(pFVar4->MSegment).MPoint.field_0x4;
    fVar6 = fVar2 * fVar1 + *(float *)&(pFVar4->MSegment).MPoint.field_0x8;
  }
  else {
    uVar3 = *(undefined8 *)&(pFVar4->MSegment).MPoint;
    fVar6 = *(float *)&(pFVar4->MSegment).MPoint.field_0x8;
    fVar7 = (float)((ulonglong)uVar3 >> 0x20);
    local_18 = (float)uVar3;
  }
  *param_4 = (uint)bVar5;
  *(double *)__return_storage_ptr__ = (double)local_18;
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar7;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar6;
  return __return_storage_ptr__;
}

