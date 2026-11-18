// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 3

// operator() @ 14cad3440

void __thiscall
`UE::Geometry::FMeshTriInfoCache::
BuildTriInfoCache<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  TVector<double> *pTVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  TVector<double> local_88;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_50;
  TVector<double>_u_0 local_38;
  
  bVar5 = UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter::IsTriangle
                    (*(FMeshDescriptionTriangleMeshSurfaceAdapter **)this,param_1);
  if (bVar5) {
    lVar2 = *(longlong *)((longlong)this + 8);
    uVar8 = (ulonglong)(param_1 & 0x1ff);
    uVar7 = (ulonglong)((uint)param_1 >> 9);
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 8) + uVar7 * 8);
    lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + uVar7 * 8);
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + uVar7 * 8);
    FMeshDescriptionTriangleMeshAdapter::GetTriVertices
              (*(FMeshDescriptionTriangleMeshAdapter **)this,param_1,
               (TVector<double> *)&local_68._s_0,(TVector<double> *)&local_50._s_0,
               (TVector<double> *)&local_38._s_0);
    dVar10 = (local_68._s_0.Y + local_50._s_0.Y + local_38._s_0.Y) * __real_3fd5555555555555;
    dVar9 = (local_68._s_0.Z + local_50._s_0.Z + local_38._s_0.Z) * __real_3fd5555555555555;
    *(double *)(lVar3 + uVar8 * 0x18) =
         (local_68._s_0.X + local_50._s_0.X + local_38._s_0.X) * __real_3fd5555555555555;
    *(double *)(lVar3 + 8 + uVar8 * 0x18) = dVar10;
    *(double *)(lVar3 + 0x10 + uVar8 * 0x18) = dVar9;
    pTVar6 = UE::Geometry::VectorUtil::NormalArea<double>
                       (&local_88,(TVector<double> *)&local_68._s_0,
                        (TVector<double> *)&local_50._s_0,(TVector<double> *)&local_38._s_0,
                        (double *)(lVar4 + uVar8 * 8));
    dVar9 = (pTVar6->field0_0x0)._s_0.Y;
    pdVar1 = (double *)(lVar2 + uVar8 * 0x18);
    *pdVar1 = (pTVar6->field0_0x0)._s_0.X;
    pdVar1[1] = dVar9;
    *(double *)(lVar2 + 0x10 + uVar8 * 0x18) = (pTVar6->field0_0x0)._s_0.Z;
  }
  return;
}

// operator() @ 14cad35b0

void __thiscall
`UE::Geometry::FMeshTriInfoCache::
BuildTriInfoCache<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  double *pdVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  TVector<double> *pTVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  TVector<double> local_88;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_50;
  TVector<double>_u_0 local_38;
  
  if (-1 < param_1) {
    plVar2 = *(longlong **)this;
    lVar3 = *plVar2;
    if (((lVar3 != 0) &&
        (cVar6 = (**(code **)(*(longlong *)(lVar3 + 0x250) + 0x30))(), cVar6 != '\0')) &&
       (param_1 < (int)plVar2[0xc])) {
      lVar3 = *(longlong *)((longlong)this + 8);
      uVar9 = (ulonglong)(param_1 & 0x1ff);
      uVar8 = (ulonglong)((uint)param_1 >> 9);
      lVar4 = *(longlong *)(*(longlong *)(lVar3 + 8) + uVar8 * 8);
      lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + uVar8 * 8);
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x20) + uVar8 * 8);
      FStaticMeshLODResourcesMeshAdapter::GetTriVertices
                (*(FStaticMeshLODResourcesMeshAdapter **)this,param_1,
                 (TVector<double> *)&local_68._s_0,(TVector<double> *)&local_50._s_0,
                 (TVector<double> *)&local_38._s_0);
      dVar11 = (local_68._s_0.Y + local_50._s_0.Y + local_38._s_0.Y) * __real_3fd5555555555555;
      dVar10 = (local_68._s_0.Z + local_50._s_0.Z + local_38._s_0.Z) * __real_3fd5555555555555;
      *(double *)(lVar4 + uVar9 * 0x18) =
           (local_68._s_0.X + local_50._s_0.X + local_38._s_0.X) * __real_3fd5555555555555;
      *(double *)(lVar4 + 8 + uVar9 * 0x18) = dVar11;
      *(double *)(lVar4 + 0x10 + uVar9 * 0x18) = dVar10;
      pTVar7 = UE::Geometry::VectorUtil::NormalArea<double>
                         (&local_88,(TVector<double> *)&local_68._s_0,
                          (TVector<double> *)&local_50._s_0,(TVector<double> *)&local_38._s_0,
                          (double *)(lVar5 + uVar9 * 8));
      dVar10 = (pTVar7->field0_0x0)._s_0.Y;
      pdVar1 = (double *)(lVar3 + uVar9 * 0x18);
      *pdVar1 = (pTVar7->field0_0x0)._s_0.X;
      pdVar1[1] = dVar10;
      *(double *)(lVar3 + 0x10 + uVar9 * 0x18) = (pTVar7->field0_0x0)._s_0.Z;
    }
  }
  return;
}

// operator() @ 14cad3730

void __thiscall
`UE::Geometry::FMeshTriInfoCache::BuildTriInfoCache<UE::Geometry::FColliderMesh>'::__l2::<lambda_1>
::operator()(void *this,int param_1)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  TVector<double> *pTVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  TVector<double> local_78;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_40;
  TVector<double>_u_0 local_28;
  
  if ((-1 < param_1) && (param_1 < ((*(FColliderMesh **)this)->Triangles).ArrayNum)) {
    lVar2 = *(longlong *)((longlong)this + 8);
    uVar7 = (ulonglong)(param_1 & 0x1ff);
    uVar6 = (ulonglong)((uint)param_1 >> 9);
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 8) + uVar6 * 8);
    lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + uVar6 * 8);
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + uVar6 * 8);
    UE::Geometry::FColliderMesh::GetTriVertices
              (*(FColliderMesh **)this,param_1,(TVector<double> *)&local_58._s_0,
               (TVector<double> *)&local_40._s_0,(TVector<double> *)&local_28._s_0);
    dVar9 = (local_58._s_0.Y + local_40._s_0.Y + local_28._s_0.Y) * __real_3fd5555555555555;
    dVar8 = (local_58._s_0.Z + local_40._s_0.Z + local_28._s_0.Z) * __real_3fd5555555555555;
    *(double *)(lVar3 + uVar7 * 0x18) =
         (local_58._s_0.X + local_40._s_0.X + local_28._s_0.X) * __real_3fd5555555555555;
    *(double *)(lVar3 + 8 + uVar7 * 0x18) = dVar9;
    *(double *)(lVar3 + 0x10 + uVar7 * 0x18) = dVar8;
    pTVar5 = UE::Geometry::VectorUtil::NormalArea<double>
                       (&local_78,(TVector<double> *)&local_58._s_0,
                        (TVector<double> *)&local_40._s_0,(TVector<double> *)&local_28._s_0,
                        (double *)(lVar4 + uVar7 * 8));
    dVar8 = (pTVar5->field0_0x0)._s_0.Y;
    pdVar1 = (double *)(lVar2 + uVar7 * 0x18);
    *pdVar1 = (pTVar5->field0_0x0)._s_0.X;
    pdVar1[1] = dVar8;
    *(double *)(lVar2 + 0x10 + uVar7 * 0x18) = (pTVar5->field0_0x0)._s_0.Z;
  }
  return;
}

