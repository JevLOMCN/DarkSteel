// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// CalcLevelAndLocation @ 145498ba0

TLocation<__int64> * __thiscall
THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::CalcLevelAndLocation
          (THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits> *this,
          TLocation<__int64> *__return_storage_ptr__,TBoxSphereBounds<double,double> *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  double dVar7;
  
  dVar4 = __real_3fe0000000000000;
  iVar3 = 0x1f;
  uVar5 = (uint)(longlong)((float)param_1->SphereRadius + (float)param_1->SphereRadius);
  if (uVar5 != 0) {
    for (; uVar5 >> iVar3 == 0; iVar3 = iVar3 + -1) {
    }
  }
  iVar6 = 0;
  if (uVar5 != 0) {
    iVar6 = iVar3;
  }
  if (iVar6 < this->FirstLevel) {
    iVar6 = this->FirstLevel;
  }
  __return_storage_ptr__->Level = iVar6;
  dVar7 = this->RecCellSizes[iVar6] + this->RecCellSizes[iVar6];
  dVar1 = (param_1->Origin).field0_0x0._s_0.Y;
  dVar2 = (param_1->Origin).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Coord).field0_0x0._s_0.X =
       (longlong)ROUND(dVar7 * (param_1->Origin).field0_0x0._s_0.X - dVar4) >> 1;
  (__return_storage_ptr__->Coord).field0_0x0._s_0.Y = (longlong)ROUND(dVar7 * dVar1 - dVar4) >> 1;
  (__return_storage_ptr__->Coord).field0_0x0._s_0.Z = (longlong)ROUND(dVar7 * dVar2 - dVar4) >> 1;
  return __return_storage_ptr__;
}

// CalcLevelAndLocation @ 145498c40

TLocation<__int64> * __thiscall
THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::CalcLevelAndLocation
          (THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits> *this,
          TLocation<__int64> *__return_storage_ptr__,TVector4<double> *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  double dVar8;
  
  dVar4 = __real_3fe0000000000000;
  fVar7 = (float)(param_1->field0_0x0)._s_0.W;
  iVar3 = 0x1f;
  uVar5 = (uint)(longlong)(fVar7 + fVar7);
  if (uVar5 != 0) {
    for (; uVar5 >> iVar3 == 0; iVar3 = iVar3 + -1) {
    }
  }
  iVar6 = 0;
  if (uVar5 != 0) {
    iVar6 = iVar3;
  }
  if (iVar6 < this->FirstLevel) {
    iVar6 = this->FirstLevel;
  }
  __return_storage_ptr__->Level = iVar6;
  dVar8 = this->RecCellSizes[iVar6] + this->RecCellSizes[iVar6];
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->Coord).field0_0x0._s_0.X =
       (longlong)ROUND(dVar8 * (param_1->field0_0x0)._s_0.X - dVar4) >> 1;
  (__return_storage_ptr__->Coord).field0_0x0._s_0.Y = (longlong)ROUND(dVar8 * dVar1 - dVar4) >> 1;
  (__return_storage_ptr__->Coord).field0_0x0._s_0.Z = (longlong)ROUND(dVar8 * dVar2 - dVar4) >> 1;
  return __return_storage_ptr__;
}

