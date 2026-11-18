// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// operator() @ 14c7b90b0

void __thiscall
`UE::Geometry::FMeshTriInfoCache::BuildTriInfoCache<UE::MeshAutoRepair::FComponentMesh>'::__l2::
<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  FDynamicMesh3 *this_00;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  TVector<double> *pTVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  TVector<double> local_98;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_60;
  TVector<double>_u_0 local_48;
  
  bVar7 = UE::MeshAutoRepair::FComponentMesh::IsTriangle(*(FComponentMesh **)this,param_1);
  if (bVar7) {
    lVar2 = *(longlong *)((longlong)this + 8);
    uVar10 = (ulonglong)((uint)param_1 >> 9);
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 8) + uVar10 * 8);
    uVar11 = (ulonglong)(param_1 & 0x1ff);
    lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + uVar10 * 8);
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + uVar10 * 8);
    plVar5 = (longlong *)(*(undefined8 **)this)[1];
    this_00 = (FDynamicMesh3 *)**(undefined8 **)this;
    uVar8 = 0;
    if (param_1 < (int)plVar5[1]) {
      uVar8 = (uint)~param_1 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
              (this_00,*(int *)(*plVar5 + (longlong)param_1 * 4),(TVector<double> *)&local_78._s_0,
               (TVector<double> *)&local_60._s_0,(TVector<double> *)&local_48._s_0);
    dVar13 = (local_78._s_0.Y + local_60._s_0.Y + local_48._s_0.Y) * __real_3fd5555555555555;
    dVar12 = (local_78._s_0.Z + local_60._s_0.Z + local_48._s_0.Z) * __real_3fd5555555555555;
    *(double *)(lVar3 + uVar11 * 0x18) =
         (local_78._s_0.X + local_60._s_0.X + local_48._s_0.X) * __real_3fd5555555555555;
    *(double *)(lVar3 + 8 + uVar11 * 0x18) = dVar13;
    *(double *)(lVar3 + 0x10 + uVar11 * 0x18) = dVar12;
    pTVar9 = UE::Geometry::VectorUtil::NormalArea<double>
                       (&local_98,(TVector<double> *)&local_78._s_0,
                        (TVector<double> *)&local_60._s_0,(TVector<double> *)&local_48._s_0,
                        (double *)(lVar4 + uVar11 * 8));
    dVar12 = (pTVar9->field0_0x0)._s_0.Y;
    pdVar1 = (double *)(lVar2 + uVar11 * 0x18);
    *pdVar1 = (pTVar9->field0_0x0)._s_0.X;
    pdVar1[1] = dVar12;
    *(double *)(lVar2 + 0x10 + uVar11 * 0x18) = (pTVar9->field0_0x0)._s_0.Z;
  }
  return;
}

