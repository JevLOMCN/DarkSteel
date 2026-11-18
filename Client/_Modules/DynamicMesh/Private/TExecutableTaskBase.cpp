// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 11

// ExecuteTask @ 14c8020b0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Geometry::FTransferBoneWeights::TransferWeightsToMesh'::__l50::<lambda_10>,void,void>
::ExecuteTask(void *this)

{
  UE::Geometry::FEigenSparseMatrixAssembler::ExtractResult
            (*(FEigenSparseMatrixAssembler **)((longlong)this + 0xe0),
             *(SparseMatrix<double,0,int> **)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 14c8020d0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::MeshDeformation::ConstructFullCotangentLaplacian<double>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int local_res8 [2];
  
  local_res8[0] =
       MeshDeformation::ComputeNumMatrixElements<UE::Geometry::FDynamicMesh3>
                 (*(FDynamicMesh3 **)((longlong)this + 0xd8),
                  *(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0xe0));
  puVar1 = *(undefined8 **)((longlong)this + 0xe8);
  Core::Private::Function::CheckCallable((void *)*puVar1);
  pcVar2 = (code *)*puVar1;
  plVar4 = puVar1 + 2;
  if ((longlong *)puVar1[5] != (longlong *)0x0) {
    plVar4 = (longlong *)puVar1[5];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,local_res8);
  return;
}

// ExecuteTask @ 14c802140

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::MeshDeformation::ConstructTriangleDataArray<UE::MeshDeformation::CotanTriangleData>'::__l4::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `UE::MeshDeformation::ConstructTriangleDataArray<UE::MeshDeformation::CotanTriangleData>'::__l4::
  <lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 14c802160

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Geometry::FSmoothDynamicMeshVertexSkinWeights::SmoothWeightsAtVerticesWithinDistance'::__l10::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `UE::Geometry::FSmoothDynamicMeshVertexSkinWeights::SmoothWeightsAtVerticesWithinDistance'::__l10
  ::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 14c802180

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::MeshDeformation::ConstructFullCotangentLaplacian<double>'::__l4::<lambda_2>,void,void>
::ExecuteTask(void *this)

{
  `UE::MeshDeformation::ConstructFullCotangentLaplacian<double>'::__l4::<lambda_2>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 14c8021a0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Geometry::FTransferBoneWeights::TransferWeightsToMesh'::__l94::<lambda_5>,void,void>
::ExecuteTask(void *this)

{
  MeshDeformation::ConstructFullIDTCotangentLaplacian<double>
            (*(FDynamicMesh3 **)((longlong)this + 0xd8),
             *(FVertexLinearization **)((longlong)this + 0xe0),
             *(TSparseMatrixAssembler<double> **)((longlong)this + 0xe8),Default,NoArea);
  return;
}

// ExecuteTask @ 14c8021e0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Geometry::FTransferBoneWeights::TransferWeightsToMesh'::__l94::<lambda_6>,void,void>
::ExecuteTask(void *this)

{
  MeshDeformation::ConstructFullIDTCotangentLaplacian<double>
            (*(FDynamicMesh3 **)((longlong)this + 0xd8),
             *(FVertexLinearization **)((longlong)this + 0xe0),
             *(TSparseMatrixAssembler<double> **)((longlong)this + 0xe8),Default,VoronoiArea);
  return;
}

// ExecuteTask @ 14c802220

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Geometry::FTransferBoneWeights::TransferWeightsToMesh'::__l96::<lambda_7>,void,void>
::ExecuteTask(void *this)

{
  MeshDeformation::ConstructFullCotangentLaplacian<double>
            (*(FDynamicMesh3 **)((longlong)this + 0xd8),
             *(FVertexLinearization **)((longlong)this + 0xe0),
             *(TSparseMatrixAssembler<double> **)((longlong)this + 0xe8),Default,NoArea);
  return;
}

// ExecuteTask @ 14c802260

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Geometry::FTransferBoneWeights::TransferWeightsToMesh'::__l96::<lambda_8>,void,void>
::ExecuteTask(void *this)

{
  MeshDeformation::ConstructFullCotangentLaplacian<double>
            (*(FDynamicMesh3 **)((longlong)this + 0xd8),
             *(FVertexLinearization **)((longlong)this + 0xe0),
             *(TSparseMatrixAssembler<double> **)((longlong)this + 0xe8),Default,VoronoiArea);
  return;
}

// ExecuteTask @ 14c8022a0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Geometry::FTransferBoneWeights::TransferWeightsToMesh'::__l50::<lambda_9>,void,void>
::ExecuteTask(void *this)

{
  UE::Geometry::FEigenSparseMatrixAssembler::ExtractResult
            (*(FEigenSparseMatrixAssembler **)((longlong)this + 0xe0),
             *(SparseMatrix<double,0,int> **)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 14c8e1cb0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::MeshDeformation::ConstructTriangleDataArray<UE::MeshDeformation::MeanValueTriangleData>'::__l4::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `UE::MeshDeformation::ConstructTriangleDataArray<UE::MeshDeformation::MeanValueTriangleData>'::
  __l4::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

