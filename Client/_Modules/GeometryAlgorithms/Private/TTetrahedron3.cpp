// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 1

// Bounds @ 1495ba480

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::TTetrahedron3<double>::Bounds
          (TTetrahedron3<double> *this,TAxisAlignedBox3<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 1.7976931348623157e+308;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = -1.7976931348623157e+308;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = -1.7976931348623157e+308;
  dVar2 = *(double *)&(__return_storage_ptr__->Min).field0_0x0;
  dVar3 = this->V[0].field0_0x0._s_0.X;
  uVar7 = SUB84(dVar2,0);
  uVar8 = (int)((ulonglong)dVar2 >> 0x20);
  if (dVar3 < dVar2) {
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar3;
    uVar7 = SUB84(dVar3,0);
    uVar8 = (int)((ulonglong)dVar3 >> 0x20);
  }
  dVar2 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
  if (dVar2 < dVar3) {
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar3;
    dVar2 = dVar3;
  }
  dVar3 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
  dVar6 = this->V[0].field0_0x0._s_0.Y;
  if (dVar6 < dVar3) {
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar6;
    dVar3 = dVar6;
  }
  dVar4 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
  if (dVar4 < dVar6) {
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar6;
    dVar4 = dVar6;
  }
  dVar6 = (__return_storage_ptr__->Min).field0_0x0._s_0.Z;
  dVar1 = this->V[0].field0_0x0._s_0.Z;
  if (dVar1 < dVar6) {
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar1;
    dVar6 = dVar1;
  }
  dVar5 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
  if (dVar5 < dVar1) {
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar1;
    dVar5 = dVar1;
  }
  dVar1 = this->V[1].field0_0x0._s_0.X;
  if (dVar1 < (double)CONCAT44(uVar8,uVar7)) {
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar1;
    uVar7 = SUB84(dVar1,0);
    uVar8 = (int)((ulonglong)dVar1 >> 0x20);
  }
  if (dVar2 < dVar1) {
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar1;
    dVar2 = dVar1;
  }
  dVar1 = this->V[1].field0_0x0._s_0.Y;
  if (dVar1 < dVar3) {
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
    dVar3 = dVar1;
  }
  if (dVar4 < dVar1) {
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar1;
    dVar4 = dVar1;
  }
  dVar1 = this->V[1].field0_0x0._s_0.Z;
  if (dVar1 < dVar6) {
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar1;
    dVar6 = dVar1;
  }
  if (dVar5 < dVar1) {
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar1;
    dVar5 = dVar1;
  }
  dVar1 = this->V[2].field0_0x0._s_0.X;
  if (dVar1 < (double)CONCAT44(uVar8,uVar7)) {
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar1;
    uVar7 = SUB84(dVar1,0);
    uVar8 = (int)((ulonglong)dVar1 >> 0x20);
  }
  if (dVar2 < dVar1) {
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar1;
    dVar2 = dVar1;
  }
  dVar1 = this->V[2].field0_0x0._s_0.Y;
  if (dVar1 < dVar3) {
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
    dVar3 = dVar1;
  }
  if (dVar4 < dVar1) {
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar1;
    dVar4 = dVar1;
  }
  dVar1 = this->V[2].field0_0x0._s_0.Z;
  if (dVar1 < dVar6) {
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar1;
    dVar6 = dVar1;
  }
  if (dVar5 < dVar1) {
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar1;
    dVar5 = dVar1;
  }
  dVar1 = this->V[3].field0_0x0._s_0.X;
  if (dVar1 < (double)CONCAT44(uVar8,uVar7)) {
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar1;
  }
  if (dVar2 < dVar1) {
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar1;
  }
  dVar2 = this->V[3].field0_0x0._s_0.Y;
  if (dVar2 < dVar3) {
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar2;
  }
  if (dVar4 < dVar2) {
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar2;
  }
  dVar2 = this->V[3].field0_0x0._s_0.Z;
  if (dVar2 < dVar6) {
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar2;
  }
  if (dVar5 < dVar2) {
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar2;
  }
  return __return_storage_ptr__;
}

