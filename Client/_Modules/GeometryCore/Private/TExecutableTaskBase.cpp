// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 4

// ExecuteTask @ 1434b8630

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::Geometry::FDynamicMeshAttributeSet::SplitAllBowties'::__l2::<lambda_1>::operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_*>'::__l5::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  UE::Geometry::TDynamicMeshOverlay<float,2>::SplitBowties
            (*(TDynamicMeshOverlay<float,2> **)((longlong)this + 0xd8),true);
  return;
}

// ExecuteTask @ 1434b8650

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::Geometry::FDynamicMeshAttributeSet::SplitAllBowties'::__l2::<lambda_1>::operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>_*>'::__l5::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  UE::Geometry::TDynamicMeshOverlay<float,3>::SplitBowties
            (*(TDynamicMeshOverlay<float,3> **)((longlong)this + 0xd8),true);
  return;
}

// ExecuteTask @ 1434b8670

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::Geometry::FDynamicMeshAttributeSet::SplitAllBowties'::__l2::<lambda_1>::operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_>_*>'::__l5::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  UE::Geometry::TDynamicMeshOverlay<float,4>::SplitBowties
            (*(TDynamicMeshOverlay<float,4> **)((longlong)this + 0xd8),true);
  return;
}

// ExecuteTask @ 1435f9620

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UELocal::ConstructDenseUniformMeshPointSampling<UE::Geometry::FDynamicMesh3>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `UELocal::ConstructDenseUniformMeshPointSampling<UE::Geometry::FDynamicMesh3>'::__l2::<lambda_1>::
  operator()((void *)((longlong)this + 0xd8));
  return;
}

