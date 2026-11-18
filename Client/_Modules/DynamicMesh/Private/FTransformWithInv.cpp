// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 2

// FTransformWithInv @ 14c7b4ec0

FTransformWithInv * __thiscall
`UE::Geometry::TRemoveOccludedTriangles<UE::MeshAutoRepair::FComponentMesh>::Select'::__l2::
FTransformWithInv::FTransformWithInv(void *this,TTransformSRT3<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  double dVar15;
  
  dVar2 = __real_3ff0000000000000;
  dVar15 = (param_1->Rotation).field0_0x0._s_0.Y;
  *(double *)this = (param_1->Rotation).field0_0x0._s_0.X;
  *(double *)((longlong)this + 8) = dVar15;
  dVar15 = (param_1->Rotation).field0_0x0._s_0.W;
  *(double *)((longlong)this + 0x10) = (param_1->Rotation).field0_0x0._s_0.Z;
  *(double *)((longlong)this + 0x18) = dVar15;
  dVar15 = (param_1->Translation).field0_0x0._s_0.Y;
  *(double *)((longlong)this + 0x20) = (param_1->Translation).field0_0x0._s_0.X;
  *(double *)((longlong)this + 0x28) = dVar15;
  dVar15 = (param_1->Scale3D).field0_0x0._s_0.X;
  *(double *)((longlong)this + 0x30) = (param_1->Translation).field0_0x0._s_0.Z;
  *(double *)((longlong)this + 0x38) = dVar15;
  dVar15 = (param_1->Scale3D).field0_0x0._s_0.Z;
  *(double *)((longlong)this + 0x40) = (param_1->Scale3D).field0_0x0._s_0.Y;
  *(double *)((longlong)this + 0x48) = dVar15;
  dVar6 = __real_412e848000000000;
  uVar5 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar4 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar3 = __real_3eb0c6f7a0b5ed8d;
  dVar15 = *(double *)((longlong)this + 0x18);
  dVar10 = *(double *)((longlong)this + 8) * *(double *)((longlong)this + 8) +
           *(double *)this * *(double *)this +
           *(double *)((longlong)this + 0x10) * *(double *)((longlong)this + 0x10) + dVar15 * dVar15
  ;
  if (dVar10 <= 0.0) {
    uVar13 = 0;
    uVar14 = 0;
    uVar9 = 0;
    uVar12 = 0;
    uVar7 = 0;
    uVar8 = 0;
    dVar15 = 0.0;
  }
  else {
    uVar9 = (uint)__xmm_80000000000000008000000000000000;
    uVar12 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    dVar10 = dVar2 / dVar10;
    dVar1 = dVar10 * *(double *)((longlong)this + 0x10);
    dVar11 = dVar10 * *(double *)((longlong)this + 8);
    uVar7 = SUB84(dVar1,0) ^ uVar9;
    uVar8 = (uint)((ulonglong)dVar1 >> 0x20) ^ uVar12;
    dVar15 = dVar10 * dVar15;
    uVar13 = SUB84(dVar10 * *(double *)this,0) ^ uVar9;
    uVar14 = (uint)((ulonglong)(dVar10 * *(double *)this) >> 0x20) ^ uVar12;
    uVar9 = SUB84(dVar11,0) ^ uVar9;
    uVar12 = (uint)((ulonglong)dVar11 >> 0x20) ^ uVar12;
  }
  *(uint *)((longlong)this + 0x50) = uVar13;
  *(uint *)((longlong)this + 0x54) = uVar14;
  *(uint *)((longlong)this + 0x58) = uVar9;
  *(uint *)((longlong)this + 0x5c) = uVar12;
  *(uint *)((longlong)this + 0x60) = uVar7;
  *(uint *)((longlong)this + 100) = uVar8;
  *(double *)((longlong)this + 0x68) = dVar15;
  *(undefined8 *)((longlong)this + 0x70) = *(undefined8 *)((longlong)this + 0x38);
  *(undefined8 *)((longlong)this + 0x78) = *(undefined8 *)((longlong)this + 0x40);
  *(undefined8 *)((longlong)this + 0x80) = *(undefined8 *)((longlong)this + 0x48);
  dVar10 = __real_c12e848000000000;
  dVar15 = *(double *)((longlong)this + 0x70);
  if (dVar3 <= (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar5,SUB84(dVar15,0) & uVar4))
  {
    dVar1 = dVar2 / dVar15;
  }
  else {
    dVar1 = dVar6;
    if (dVar15 < 0.0) {
      dVar1 = __real_c12e848000000000;
    }
  }
  *(double *)((longlong)this + 0x70) = dVar1;
  if (dVar3 <= (double)CONCAT44((uint)((ulonglong)*(undefined8 *)((longlong)this + 0x78) >> 0x20) &
                                uVar5,(uint)*(undefined8 *)((longlong)this + 0x78) & uVar4)) {
    dVar15 = dVar2 / *(double *)((longlong)this + 0x78);
  }
  else {
    dVar15 = dVar6;
    if (*(double *)((longlong)this + 0x78) <= 0.0 && *(double *)((longlong)this + 0x78) != 0.0) {
      dVar15 = dVar10;
    }
  }
  *(double *)((longlong)this + 0x78) = dVar15;
  if (dVar3 <= (double)CONCAT44((uint)((ulonglong)*(undefined8 *)((longlong)this + 0x80) >> 0x20) &
                                uVar5,(uint)*(undefined8 *)((longlong)this + 0x80) & uVar4)) {
    *(double *)((longlong)this + 0x80) = dVar2 / *(double *)((longlong)this + 0x80);
    return this;
  }
  if (0.0 < *(double *)((longlong)this + 0x80) || *(double *)((longlong)this + 0x80) == 0.0) {
    dVar10 = dVar6;
  }
  *(double *)((longlong)this + 0x80) = dVar10;
  return this;
}

// FTransformWithInv @ 14c7b5080

FTransformWithInv * __thiscall
`UE::Geometry::TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::Select'::__l2::
FTransformWithInv::FTransformWithInv(void *this,TTransformSRT3<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  double dVar15;
  
  dVar2 = __real_3ff0000000000000;
  dVar15 = (param_1->Rotation).field0_0x0._s_0.Y;
  *(double *)this = (param_1->Rotation).field0_0x0._s_0.X;
  *(double *)((longlong)this + 8) = dVar15;
  dVar15 = (param_1->Rotation).field0_0x0._s_0.W;
  *(double *)((longlong)this + 0x10) = (param_1->Rotation).field0_0x0._s_0.Z;
  *(double *)((longlong)this + 0x18) = dVar15;
  dVar15 = (param_1->Translation).field0_0x0._s_0.Y;
  *(double *)((longlong)this + 0x20) = (param_1->Translation).field0_0x0._s_0.X;
  *(double *)((longlong)this + 0x28) = dVar15;
  dVar15 = (param_1->Scale3D).field0_0x0._s_0.X;
  *(double *)((longlong)this + 0x30) = (param_1->Translation).field0_0x0._s_0.Z;
  *(double *)((longlong)this + 0x38) = dVar15;
  dVar15 = (param_1->Scale3D).field0_0x0._s_0.Z;
  *(double *)((longlong)this + 0x40) = (param_1->Scale3D).field0_0x0._s_0.Y;
  *(double *)((longlong)this + 0x48) = dVar15;
  dVar6 = __real_412e848000000000;
  uVar5 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar4 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar3 = __real_3eb0c6f7a0b5ed8d;
  dVar15 = *(double *)((longlong)this + 0x18);
  dVar10 = *(double *)((longlong)this + 8) * *(double *)((longlong)this + 8) +
           *(double *)this * *(double *)this +
           *(double *)((longlong)this + 0x10) * *(double *)((longlong)this + 0x10) + dVar15 * dVar15
  ;
  if (dVar10 <= 0.0) {
    uVar13 = 0;
    uVar14 = 0;
    uVar9 = 0;
    uVar12 = 0;
    uVar7 = 0;
    uVar8 = 0;
    dVar15 = 0.0;
  }
  else {
    uVar9 = (uint)__xmm_80000000000000008000000000000000;
    uVar12 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    dVar10 = dVar2 / dVar10;
    dVar1 = dVar10 * *(double *)((longlong)this + 0x10);
    dVar11 = dVar10 * *(double *)((longlong)this + 8);
    uVar7 = SUB84(dVar1,0) ^ uVar9;
    uVar8 = (uint)((ulonglong)dVar1 >> 0x20) ^ uVar12;
    dVar15 = dVar10 * dVar15;
    uVar13 = SUB84(dVar10 * *(double *)this,0) ^ uVar9;
    uVar14 = (uint)((ulonglong)(dVar10 * *(double *)this) >> 0x20) ^ uVar12;
    uVar9 = SUB84(dVar11,0) ^ uVar9;
    uVar12 = (uint)((ulonglong)dVar11 >> 0x20) ^ uVar12;
  }
  *(uint *)((longlong)this + 0x50) = uVar13;
  *(uint *)((longlong)this + 0x54) = uVar14;
  *(uint *)((longlong)this + 0x58) = uVar9;
  *(uint *)((longlong)this + 0x5c) = uVar12;
  *(uint *)((longlong)this + 0x60) = uVar7;
  *(uint *)((longlong)this + 100) = uVar8;
  *(double *)((longlong)this + 0x68) = dVar15;
  *(undefined8 *)((longlong)this + 0x70) = *(undefined8 *)((longlong)this + 0x38);
  *(undefined8 *)((longlong)this + 0x78) = *(undefined8 *)((longlong)this + 0x40);
  *(undefined8 *)((longlong)this + 0x80) = *(undefined8 *)((longlong)this + 0x48);
  dVar10 = __real_c12e848000000000;
  dVar15 = *(double *)((longlong)this + 0x70);
  if (dVar3 <= (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar5,SUB84(dVar15,0) & uVar4))
  {
    dVar1 = dVar2 / dVar15;
  }
  else {
    dVar1 = dVar6;
    if (dVar15 < 0.0) {
      dVar1 = __real_c12e848000000000;
    }
  }
  *(double *)((longlong)this + 0x70) = dVar1;
  if (dVar3 <= (double)CONCAT44((uint)((ulonglong)*(undefined8 *)((longlong)this + 0x78) >> 0x20) &
                                uVar5,(uint)*(undefined8 *)((longlong)this + 0x78) & uVar4)) {
    dVar15 = dVar2 / *(double *)((longlong)this + 0x78);
  }
  else {
    dVar15 = dVar6;
    if (*(double *)((longlong)this + 0x78) <= 0.0 && *(double *)((longlong)this + 0x78) != 0.0) {
      dVar15 = dVar10;
    }
  }
  *(double *)((longlong)this + 0x78) = dVar15;
  if (dVar3 <= (double)CONCAT44((uint)((ulonglong)*(undefined8 *)((longlong)this + 0x80) >> 0x20) &
                                uVar5,(uint)*(undefined8 *)((longlong)this + 0x80) & uVar4)) {
    *(double *)((longlong)this + 0x80) = dVar2 / *(double *)((longlong)this + 0x80);
    return this;
  }
  if (0.0 < *(double *)((longlong)this + 0x80) || *(double *)((longlong)this + 0x80) == 0.0) {
    dVar10 = dVar6;
  }
  *(double *)((longlong)this + 0x80) = dVar10;
  return this;
}

