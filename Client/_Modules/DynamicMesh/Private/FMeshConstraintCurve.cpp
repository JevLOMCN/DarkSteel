// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// Project @ 14c757f10

TVector<double> * __thiscall
UE::Geometry::FMeshConstraintCurve::Project
          (FMeshConstraintCurve *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,int param_2)

{
  undefined1 *this_00;
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TVector<double> *pTVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  uint local_res8 [2];
  double local_res10;
  TVector<double>_u_0 local_80;
  undefined8 local_68;
  
  this_00 = &this->field_0x8;
  TPolyline<double,3>::DistanceSquared
            ((TPolyline<double,3> *)this_00,param_1,(int *)local_res8,&local_res10);
  lVar8 = (longlong)(int)local_res8[0];
  uVar9 = local_res8[0] + 1;
  uVar7 = 0;
  if ((int)uVar9 < *(int *)&this->field_0x10) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TVector<double> *)(*pcVar3)();
      return pTVar5;
    }
  }
  lVar1 = *(longlong *)this_00;
  lVar6 = (longlong)(int)uVar9;
  uVar7 = 0;
  if ((int)local_res8[0] < *(int *)&this->field_0x10) {
    uVar7 = ~local_res8[0] >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TVector<double> *)(*pcVar3)();
      return pTVar5;
    }
  }
  lVar2 = *(longlong *)this_00;
  dVar10 = *(double *)(lVar1 + lVar6 * 0x18);
  dVar11 = *(double *)(lVar1 + 8 + lVar6 * 0x18);
  local_80._s_0.X = dVar10 - *(double *)(lVar2 + lVar8 * 0x18);
  dVar12 = *(double *)(lVar1 + 0x10 + lVar6 * 0x18);
  local_68 = 0;
  local_80._s_0.Z = dVar12 - *(double *)(lVar2 + 0x10 + lVar8 * 0x18);
  dVar10 = (*(double *)(lVar2 + lVar8 * 0x18) + dVar10) * __real_3fe0000000000000;
  dVar12 = (*(double *)(lVar2 + 0x10 + lVar8 * 0x18) + dVar12) * __real_3fe0000000000000;
  local_80._s_0.Y = dVar11 - *(double *)(lVar2 + 8 + lVar8 * 0x18);
  dVar11 = (*(double *)(lVar2 + 8 + lVar8 * 0x18) + dVar11) * __real_3fe0000000000000;
  Normalize<double>((TVector<double> *)&local_80._s_0,0.0);
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_80._s_0.X * local_res10 + dVar10;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = local_80._s_0.Y * local_res10 + dVar11;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_80._s_0.Z * local_res10 + dVar12;
  return __return_storage_ptr__;
}

