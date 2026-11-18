// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 2

// operator() @ 14336b980

void __thiscall
`UE::Geometry::FMeshTriInfoCache::
BuildTriInfoCache<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>'::__l2
::<lambda_1>::operator()(void *this,int param_1)

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
  
  lVar2 = *(longlong *)((longlong)this + 8);
  uVar6 = (ulonglong)((uint)param_1 >> 9);
  uVar7 = (ulonglong)(param_1 & 0x1ff);
  lVar3 = *(longlong *)(*(longlong *)(lVar2 + 8) + uVar6 * 8);
  lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + uVar6 * 8);
  lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + uVar6 * 8);
  FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper::GetTriVertices
            (*(void **)this,param_1,(TVector<double> *)&local_58._s_0,
             (TVector<double> *)&local_40._s_0,(TVector<double> *)&local_28._s_0);
  dVar9 = (local_58._s_0.Y + local_40._s_0.Y + local_28._s_0.Y) * __real_3fd5555555555555;
  dVar8 = (local_58._s_0.Z + local_40._s_0.Z + local_28._s_0.Z) * __real_3fd5555555555555;
  *(double *)(lVar3 + uVar7 * 0x18) =
       (local_58._s_0.X + local_40._s_0.X + local_28._s_0.X) * __real_3fd5555555555555;
  *(double *)(lVar3 + 8 + uVar7 * 0x18) = dVar9;
  *(double *)(lVar3 + 0x10 + uVar7 * 0x18) = dVar8;
  pTVar5 = UE::Geometry::VectorUtil::NormalArea<double>
                     (&local_78,(TVector<double> *)&local_58._s_0,(TVector<double> *)&local_40._s_0,
                      (TVector<double> *)&local_28._s_0,(double *)(lVar4 + uVar7 * 8));
  dVar8 = (pTVar5->field0_0x0)._s_0.Y;
  pdVar1 = (double *)(lVar2 + uVar7 * 0x18);
  *pdVar1 = (pTVar5->field0_0x0)._s_0.X;
  pdVar1[1] = dVar8;
  *(double *)(lVar2 + 0x10 + uVar7 * 0x18) = (pTVar5->field0_0x0)._s_0.Z;
  return;
}

// operator() @ 14336bab0

void __thiscall
`UE::Geometry::FMeshTriInfoCache::BuildTriInfoCache<UE::Geometry::FDynamicMesh3>'::__l2::<lambda_1>
::operator()(void *this,int param_1)

{
  double *pdVar1;
  FDynamicMesh3 *this_00;
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
  
  this_00 = *(FDynamicMesh3 **)this;
  if ((-1 < param_1) &&
     (param_1 < (int)((this_00->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                     (this_00->TriangleRefCounts).RefCounts.CurBlockUsed))) {
    uVar7 = (ulonglong)(param_1 & 0x1ff);
    uVar6 = (ulonglong)((uint)param_1 >> 9);
    if ((ushort)(*(short *)(*(longlong *)
                             ((this_00->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             uVar6 * 8) + uVar7 * 2) - 1U) < 0xfffe) {
      lVar2 = *(longlong *)((longlong)this + 8);
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 8) + uVar6 * 8);
      lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + uVar6 * 8);
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + uVar6 * 8);
      UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                (this_00,param_1,(TVector<double> *)&local_58._s_0,(TVector<double> *)&local_40._s_0
                 ,(TVector<double> *)&local_28._s_0);
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
  }
  return;
}

