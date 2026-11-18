// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 1

// operator() @ 1495ad5c0

void __thiscall
`UE::Geometry::FMeshTriInfoCache::
BuildTriInfoCache<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>'
::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_b0;
  TVector<double>_u_0 local_98 [6];
  
  if ((-1 < param_1) &&
     (param_1 < (*(TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>
                   **)this)->SourceTriangles->ArrayNum)) {
    lVar1 = *(longlong *)((longlong)this + 8);
    uVar5 = (ulonglong)(param_1 & 0x1ff);
    uVar4 = (ulonglong)((uint)param_1 >> 9);
    lVar2 = *(longlong *)(*(longlong *)(lVar1 + 8) + uVar4 * 8);
    lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x38) + uVar4 * 8);
    lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x20) + uVar4 * 8);
    UE::Geometry::
    TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>::
    GetTriVertices(*(TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>
                     **)this,param_1,(TVector<double> *)&local_c8._s_0,
                   (TVector<double> *)&local_b0._s_0,(TVector<double> *)&local_98[0]._s_0);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = __real_3fd5555555555555;
    dVar12 = (local_b0._s_0.Y + local_c8._s_0.Y + (double)local_98[0]._8_8_) *
             __real_3fd5555555555555;
    dVar7 = (local_b0._s_0.Z + local_c8._s_0.Z + (double)local_98[0]._16_8_) *
            __real_3fd5555555555555;
    *(double *)(lVar2 + uVar5 * 0x18) =
         (local_b0._s_0.X + local_c8._s_0.X + (double)local_98[0]._0_8_) * __real_3fd5555555555555;
    *(double *)(lVar2 + 8 + uVar5 * 0x18) = dVar12;
    *(double *)(lVar2 + 0x10 + uVar5 * 0x18) = dVar7;
    dVar13 = ((double)local_98[0]._8_8_ - local_c8._s_0.Y) * (local_b0._s_0.Z - local_c8._s_0.Z) -
             ((double)local_98[0]._16_8_ - local_c8._s_0.Z) * (local_b0._s_0.Y - local_c8._s_0.Y);
    dVar12 = ((double)local_98[0]._0_8_ - local_c8._s_0.X) * (local_b0._s_0.Y - local_c8._s_0.Y) -
             ((double)local_98[0]._8_8_ - local_c8._s_0.Y) * (local_b0._s_0.X - local_c8._s_0.X);
    dVar7 = ((double)local_98[0]._16_8_ - local_c8._s_0.Z) * (local_b0._s_0.X - local_c8._s_0.X) -
            ((double)local_98[0]._0_8_ - local_c8._s_0.X) * (local_b0._s_0.Z - local_c8._s_0.Z);
    dVar8 = 0.0;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = dVar7 * dVar7 + dVar13 * dVar13 + dVar12 * dVar12;
    auVar11 = sqrtpd(auVar10,auVar11);
    dVar9 = auVar11._0_8_;
    if (dVar9 <= 0.0) {
      dVar9 = 0.0;
      dVar7 = 0.0;
      dVar6 = 0.0;
    }
    else {
      dVar6 = __real_3ff0000000000000 / dVar9;
      dVar8 = dVar6 * dVar12;
      dVar7 = dVar6 * dVar7;
      dVar6 = dVar6 * dVar13;
    }
    *(double *)(lVar3 + uVar5 * 8) = dVar9 * __real_3fe0000000000000;
    *(double *)(lVar1 + uVar5 * 0x18) = dVar6;
    *(double *)(lVar1 + 8 + uVar5 * 0x18) = dVar7;
    *(double *)(lVar1 + 0x10 + uVar5 * 0x18) = dVar8;
  }
  return;
}

