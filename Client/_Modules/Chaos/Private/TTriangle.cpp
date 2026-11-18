// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// TTriangle<double> @ 14373bf30

TTriangle<double> * __thiscall Chaos::TTriangle<double>::TTriangle<double>(TTriangle<double> *this)

{
  return this;
}

// GetClosestEdge @ 1438b9db0

TVector<double,3> * __thiscall
Chaos::TTriangle<double>::GetClosestEdge
          (TTriangle<double> *this,TVector<double,3> *__return_storage_ptr__,int param_1,
          TVector<double,3> *param_2,TVector<double,3> *param_3,TVector<double,3> *param_4)

{
  double dVar1;
  undefined8 uVar2;
  TVector<double> *pTVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TVector<double>_u_0 local_78;
  TVector<double> local_60 [3];
  
  local_78._s_0.X = (double)*(undefined8 *)(this->ABC + 2);
  local_78._s_0.Y = (double)*(undefined8 *)&this->ABC[2].field_0x8;
  local_78._s_0.Z = (double)*(undefined8 *)&this->ABC[2].field_0x10;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  dVar1 = __real_7fefffffffffffff;
  pTVar3 = FMath::ClosestPointOnLine<double>
                     (local_60,(TVector<double> *)&local_78._s_0,(TVector<double> *)this,
                      (TVector<double> *)param_2);
  dVar4 = (pTVar3->field0_0x0)._s_0.Z - *(double *)&param_2->field_0x10;
  dVar5 = (pTVar3->field0_0x0)._s_0.X - *(double *)param_2;
  dVar6 = (pTVar3->field0_0x0)._s_0.Y - *(double *)&param_2->field_0x8;
  dVar6 = dVar5 * dVar5 + dVar6 * dVar6 + dVar4 * dVar4;
  if (dVar6 < dVar1) {
    dVar4 = (pTVar3->field0_0x0)._s_0.Y;
    dVar1 = (pTVar3->field0_0x0)._s_0.Z;
    *(double *)__return_storage_ptr__ = (pTVar3->field0_0x0)._s_0.X;
    *(double *)&__return_storage_ptr__->field_0x8 = dVar4;
    *(double *)&__return_storage_ptr__->field_0x10 = dVar1;
    *(double *)param_3 = local_78._s_0.X;
    *(double *)&param_3->field_0x8 = local_78._s_0.Y;
    *(double *)&param_3->field_0x10 = local_78._s_0.Z;
    uVar2 = *(undefined8 *)&this->ABC[0].field_0x8;
    *(undefined8 *)param_4 = *(undefined8 *)this->ABC;
    *(undefined8 *)&param_4->field_0x8 = uVar2;
    *(undefined8 *)&param_4->field_0x10 = *(undefined8 *)&this->ABC[0].field_0x10;
    dVar1 = dVar6;
  }
  local_78._s_0.X = (double)*(undefined8 *)this->ABC;
  local_78._s_0.Y = (double)*(undefined8 *)&this->ABC[0].field_0x8;
  local_78._s_0.Z = (double)*(undefined8 *)&this->ABC[0].field_0x10;
  pTVar3 = FMath::ClosestPointOnLine<double>
                     (local_60,(TVector<double> *)&local_78._s_0,(TVector<double> *)(this->ABC + 1),
                      (TVector<double> *)param_2);
  dVar4 = (pTVar3->field0_0x0)._s_0.Z - *(double *)&param_2->field_0x10;
  dVar5 = (pTVar3->field0_0x0)._s_0.X - *(double *)param_2;
  dVar6 = (pTVar3->field0_0x0)._s_0.Y - *(double *)&param_2->field_0x8;
  dVar6 = dVar5 * dVar5 + dVar6 * dVar6 + dVar4 * dVar4;
  if (dVar6 < dVar1) {
    dVar4 = (pTVar3->field0_0x0)._s_0.Y;
    dVar1 = (pTVar3->field0_0x0)._s_0.Z;
    *(double *)__return_storage_ptr__ = (pTVar3->field0_0x0)._s_0.X;
    *(double *)&__return_storage_ptr__->field_0x8 = dVar4;
    *(double *)&__return_storage_ptr__->field_0x10 = dVar1;
    *(double *)param_3 = local_78._s_0.X;
    *(double *)&param_3->field_0x8 = local_78._s_0.Y;
    *(double *)&param_3->field_0x10 = local_78._s_0.Z;
    uVar2 = *(undefined8 *)&this->ABC[1].field_0x8;
    *(undefined8 *)param_4 = *(undefined8 *)(this->ABC + 1);
    *(undefined8 *)&param_4->field_0x8 = uVar2;
    *(undefined8 *)&param_4->field_0x10 = *(undefined8 *)&this->ABC[1].field_0x10;
    dVar1 = dVar6;
  }
  local_78._s_0.X = (double)*(undefined8 *)(this->ABC + 1);
  local_78._s_0.Y = (double)*(undefined8 *)&this->ABC[1].field_0x8;
  local_78._s_0.Z = (double)*(undefined8 *)&this->ABC[1].field_0x10;
  pTVar3 = FMath::ClosestPointOnLine<double>
                     (local_60,(TVector<double> *)&local_78._s_0,(TVector<double> *)(this->ABC + 2),
                      (TVector<double> *)param_2);
  dVar4 = (pTVar3->field0_0x0)._s_0.Z - *(double *)&param_2->field_0x10;
  dVar5 = (pTVar3->field0_0x0)._s_0.X - *(double *)param_2;
  dVar6 = (pTVar3->field0_0x0)._s_0.Y - *(double *)&param_2->field_0x8;
  if (dVar5 * dVar5 + dVar6 * dVar6 + dVar4 * dVar4 < dVar1) {
    dVar1 = (pTVar3->field0_0x0)._s_0.Y;
    dVar6 = (pTVar3->field0_0x0)._s_0.Z;
    *(double *)__return_storage_ptr__ = (pTVar3->field0_0x0)._s_0.X;
    *(double *)&__return_storage_ptr__->field_0x8 = dVar1;
    *(double *)&__return_storage_ptr__->field_0x10 = dVar6;
    *(double *)param_3 = local_78._s_0.X;
    *(double *)&param_3->field_0x8 = local_78._s_0.Y;
    *(double *)&param_3->field_0x10 = local_78._s_0.Z;
    uVar2 = *(undefined8 *)&this->ABC[2].field_0x8;
    *(undefined8 *)param_4 = *(undefined8 *)(this->ABC + 2);
    *(undefined8 *)&param_4->field_0x8 = uVar2;
    *(undefined8 *)&param_4->field_0x10 = *(undefined8 *)&this->ABC[2].field_0x10;
  }
  return __return_storage_ptr__;
}

