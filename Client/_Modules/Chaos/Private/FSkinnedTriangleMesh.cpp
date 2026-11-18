// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 15

// FSkinnedTriangleMesh @ 143dfbc20

FSkinnedTriangleMesh * __thiscall
Chaos::FSkinnedTriangleMesh::FSkinnedTriangleMesh(FSkinnedTriangleMesh *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  FImplicitObject::FImplicitObject((FImplicitObject *)this,2,'\x12');
  *(undefined ***)this = &___7FSkinnedTriangleMesh_Chaos__6B_;
  (this->TriangleMesh).MElements.ArrayNum = 0;
  (this->TriangleMesh).MElements.ArrayMax = 0;
  (this->TriangleMesh).MPointToTriangleMap.ArrayNum = 0;
  (this->TriangleMesh).MPointToTriangleMap.ArrayMax = 0;
  *(undefined8 *)&(this->TriangleMesh).MPointToNeighborsMap.field_0x8 = 0;
  (this->TriangleMesh).MElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriangleMesh).MPointToTriangleMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this->TriangleMesh).MPointToNeighborsMap = 0;
  *(undefined8 *)&(this->TriangleMesh).MPointToNeighborsMap.field_0x20 = 0;
  *(undefined4 *)&(this->TriangleMesh).MPointToNeighborsMap.field_0x28 = 0;
  *(undefined4 *)&(this->TriangleMesh).MPointToNeighborsMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->TriangleMesh).MPointToNeighborsMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TriangleMesh).MPointToNeighborsMap.field_0x34 = 0;
  *(undefined8 *)&(this->TriangleMesh).MPointToNeighborsMap.field_0x40 = 0;
  *(undefined4 *)&(this->TriangleMesh).MPointToNeighborsMap.field_0x48 = 0;
  (this->TriangleMesh).MSegmentMesh.MElements.ArrayNum = 0;
  (this->TriangleMesh).MSegmentMesh.MElements.ArrayMax = 0;
  *(undefined8 *)&(this->TriangleMesh).MSegmentMesh.MPointToEdgeMap.field_0x8 = 0;
  (this->TriangleMesh).MSegmentMesh.MElements.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this->TriangleMesh).MSegmentMesh.MPointToEdgeMap = 0;
  *(undefined8 *)&(this->TriangleMesh).MSegmentMesh.MPointToEdgeMap.field_0x20 = 0;
  *(undefined4 *)&(this->TriangleMesh).MSegmentMesh.MPointToEdgeMap.field_0x28 = 0;
  *(undefined4 *)&(this->TriangleMesh).MSegmentMesh.MPointToEdgeMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->TriangleMesh).MSegmentMesh.MPointToEdgeMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TriangleMesh).MSegmentMesh.MPointToEdgeMap.field_0x34 = 0;
  *(undefined8 *)&(this->TriangleMesh).MSegmentMesh.MPointToEdgeMap.field_0x40 = 0;
  *(undefined4 *)&(this->TriangleMesh).MSegmentMesh.MPointToEdgeMap.field_0x48 = 0;
  *(undefined8 *)&(this->TriangleMesh).MSegmentMesh.MPointToNeighborsMap.field_0x8 = 0;
  *(undefined8 *)&(this->TriangleMesh).MSegmentMesh.MPointToNeighborsMap = 0;
  *(undefined8 *)&(this->TriangleMesh).MSegmentMesh.MPointToNeighborsMap.field_0x20 = 0;
  *(undefined4 *)&(this->TriangleMesh).MSegmentMesh.MPointToNeighborsMap.field_0x28 = 0;
  *(undefined4 *)&(this->TriangleMesh).MSegmentMesh.MPointToNeighborsMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->TriangleMesh).MSegmentMesh.MPointToNeighborsMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TriangleMesh).MSegmentMesh.MPointToNeighborsMap.field_0x34 = 0;
  *(undefined8 *)&(this->TriangleMesh).MSegmentMesh.MPointToNeighborsMap.field_0x40 = 0;
  *(undefined4 *)&(this->TriangleMesh).MSegmentMesh.MPointToNeighborsMap.field_0x48 = 0;
  (this->TriangleMesh).MFaceToEdges.ArrayNum = 0;
  (this->TriangleMesh).MFaceToEdges.ArrayMax = 0;
  (this->TriangleMesh).MEdgeToFaces.ArrayNum = 0;
  (this->TriangleMesh).MEdgeToFaces.ArrayMax = 0;
  (this->TriangleMesh).MStartIdx = 0;
  (this->TriangleMesh).MNumIndices = 0;
  (this->TriangleMesh).MFaceToEdges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriangleMesh).MEdgeToFaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneData).ArrayNum = 0;
  (this->BoneData).ArrayMax = 0;
  (this->UsedBones).ArrayNum = 0;
  (this->UsedBones).ArrayMax = 0;
  (this->BoneData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UsedBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->ReferenceRootTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->ReferenceRootTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->ReferenceRootTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->ReferenceRootTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->ReferenceRootTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->ReferenceRootTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->ReferenceRootTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->ReferenceRootTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->ReferenceRootTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->ReferenceRootTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->ReferenceRootTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->ReferenceRootTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->ReferenceRelativeTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferenceRelativeTransforms).ArrayNum = 0;
  (this->ReferenceRelativeTransforms).ArrayMax = 0;
  (this->ReferencePositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferencePositions).ArrayNum = 0;
  (this->ReferencePositions).ArrayMax = 0;
  *(undefined4 *)&(this->ReferenceBoundingBox).MMin = 0x7f7fffff;
  *(undefined4 *)&(this->ReferenceBoundingBox).MMin.field_0x4 = 0x7f7fffff;
  *(undefined4 *)&(this->ReferenceBoundingBox).MMin.field_0x8 = 0x7f7fffff;
  *(undefined4 *)&(this->ReferenceBoundingBox).MMax = 0xff7fffff;
  *(undefined4 *)&(this->ReferenceBoundingBox).MMax.field_0x4 = 0xff7fffff;
  *(undefined4 *)&(this->ReferenceBoundingBox).MMax.field_0x8 = 0xff7fffff;
  *(undefined4 *)&(this->LocalBoundingBox).MMin = 0x7f7fffff;
  *(undefined4 *)&(this->LocalBoundingBox).MMin.field_0x4 = 0x7f7fffff;
  *(undefined4 *)&(this->LocalBoundingBox).MMin.field_0x8 = 0x7f7fffff;
  *(undefined4 *)&(this->LocalBoundingBox).MMax = 0xff7fffff;
  (this->LocalPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalPositions).ArrayNum = 0;
  (this->LocalPositions).ArrayMax = 0;
  (this->SpatialHash)._padding_ = 0;
  (this->SpatialHash)._padding_ = 0;
  (this->SpatialHash)._padding_ = 0;
  (this->SpatialHash)._padding_ = 0;
  *(undefined4 *)&(this->LocalBoundingBox).MMax.field_0x4 = 0xff7fffff;
  *(undefined4 *)&(this->LocalBoundingBox).MMax.field_0x8 = 0xff7fffff;
  *(undefined4 *)&(this->SpatialHash)._padding_ = 0;
  *(undefined8 *)&(this->SpatialHash).UsedLods = 0;
  *(undefined8 *)&(this->SpatialHash).UsedLods.field_0x8 = 0;
  *(undefined8 *)&(this->SpatialHash).UsedLods.field_0x20 = 0;
  *(undefined4 *)&(this->SpatialHash).UsedLods.field_0x28 = 0;
  *(undefined4 *)&(this->SpatialHash).UsedLods.field_0x2c = 0x80;
  *(undefined4 *)&(this->SpatialHash).UsedLods.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SpatialHash).UsedLods.field_0x34 = 0;
  *(undefined8 *)&(this->SpatialHash).UsedLods.field_0x40 = 0;
  *(undefined4 *)&(this->SpatialHash).UsedLods.field_0x48 = 0;
  (this->SpatialHash).Bounds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpatialHash).Bounds.ArrayNum = 0;
  (this->SpatialHash).Bounds.ArrayMax = 0;
  return this;
}

// FSkinnedTriangleMesh @ 143dfbed0

FSkinnedTriangleMesh * __thiscall
Chaos::FSkinnedTriangleMesh::FSkinnedTriangleMesh
          (FSkinnedTriangleMesh *this,FSkinnedTriangleMesh *param_1)

{
  double dVar1;
  
  FImplicitObject::FImplicitObject((FImplicitObject *)this,2,'\x12');
  *(undefined ***)this = &___7FSkinnedTriangleMesh_Chaos__6B_;
  FTriangleMesh::FTriangleMesh(&this->TriangleMesh,&param_1->TriangleMesh);
  (this->BoneData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneData).AllocatorInstance.Data = (param_1->BoneData).AllocatorInstance.Data;
  (param_1->BoneData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneData).ArrayNum = (param_1->BoneData).ArrayNum;
  (this->BoneData).ArrayMax = (param_1->BoneData).ArrayMax;
  (param_1->BoneData).ArrayNum = 0;
  (param_1->BoneData).ArrayMax = 0;
  (this->UsedBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UsedBones).AllocatorInstance.Data = (param_1->UsedBones).AllocatorInstance.Data;
  (param_1->UsedBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UsedBones).ArrayNum = (param_1->UsedBones).ArrayNum;
  (this->UsedBones).ArrayMax = (param_1->UsedBones).ArrayMax;
  (param_1->UsedBones).ArrayNum = 0;
  (param_1->UsedBones).ArrayMax = 0;
  dVar1 = (param_1->ReferenceRootTransform).Rotation.XY.m128d_f64[1];
  (this->ReferenceRootTransform).Rotation.XY.m128d_f64[0] =
       (param_1->ReferenceRootTransform).Rotation.XY.m128d_f64[0];
  (this->ReferenceRootTransform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->ReferenceRootTransform).Rotation.ZW.m128d_f64[1];
  (this->ReferenceRootTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->ReferenceRootTransform).Rotation.ZW.m128d_f64[0];
  (this->ReferenceRootTransform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->ReferenceRootTransform).Translation.XY.m128d_f64[1];
  (this->ReferenceRootTransform).Translation.XY.m128d_f64[0] =
       (param_1->ReferenceRootTransform).Translation.XY.m128d_f64[0];
  (this->ReferenceRootTransform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->ReferenceRootTransform).Translation.ZW.m128d_f64[1];
  (this->ReferenceRootTransform).Translation.ZW.m128d_f64[0] =
       (param_1->ReferenceRootTransform).Translation.ZW.m128d_f64[0];
  (this->ReferenceRootTransform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->ReferenceRootTransform).Scale3D.XY.m128d_f64[1];
  (this->ReferenceRootTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->ReferenceRootTransform).Scale3D.XY.m128d_f64[0];
  (this->ReferenceRootTransform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->ReferenceRootTransform).Scale3D.ZW.m128d_f64[1];
  (this->ReferenceRootTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->ReferenceRootTransform).Scale3D.ZW.m128d_f64[0];
  (this->ReferenceRootTransform).Scale3D.ZW.m128d_f64[1] = dVar1;
  (this->ReferenceRelativeTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferenceRelativeTransforms).AllocatorInstance.Data =
       (param_1->ReferenceRelativeTransforms).AllocatorInstance.Data;
  (param_1->ReferenceRelativeTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferenceRelativeTransforms).ArrayNum = (param_1->ReferenceRelativeTransforms).ArrayNum;
  (this->ReferenceRelativeTransforms).ArrayMax = (param_1->ReferenceRelativeTransforms).ArrayMax;
  (param_1->ReferenceRelativeTransforms).ArrayNum = 0;
  (param_1->ReferenceRelativeTransforms).ArrayMax = 0;
  (this->ReferencePositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferencePositions).AllocatorInstance.Data =
       (param_1->ReferencePositions).AllocatorInstance.Data;
  (param_1->ReferencePositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferencePositions).ArrayNum = (param_1->ReferencePositions).ArrayNum;
  (this->ReferencePositions).ArrayMax = (param_1->ReferencePositions).ArrayMax;
  (param_1->ReferencePositions).ArrayNum = 0;
  (param_1->ReferencePositions).ArrayMax = 0;
  *(undefined8 *)&(this->ReferenceBoundingBox).MMin =
       *(undefined8 *)&(param_1->ReferenceBoundingBox).MMin;
  *(undefined4 *)&(this->ReferenceBoundingBox).MMin.field_0x8 =
       *(undefined4 *)&(param_1->ReferenceBoundingBox).MMin.field_0x8;
  *(undefined8 *)&(this->ReferenceBoundingBox).MMax =
       *(undefined8 *)&(param_1->ReferenceBoundingBox).MMax;
  *(undefined4 *)&(this->ReferenceBoundingBox).MMax.field_0x8 =
       *(undefined4 *)&(param_1->ReferenceBoundingBox).MMax.field_0x8;
  *(undefined8 *)&(this->LocalBoundingBox).MMin = *(undefined8 *)&(param_1->LocalBoundingBox).MMin;
  *(undefined4 *)&(this->LocalBoundingBox).MMin.field_0x8 =
       *(undefined4 *)&(param_1->LocalBoundingBox).MMin.field_0x8;
  *(undefined8 *)&(this->LocalBoundingBox).MMax = *(undefined8 *)&(param_1->LocalBoundingBox).MMax;
  *(undefined4 *)&(this->LocalBoundingBox).MMax.field_0x8 =
       *(undefined4 *)&(param_1->LocalBoundingBox).MMax.field_0x8;
  (this->LocalPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalPositions).AllocatorInstance.Data = (param_1->LocalPositions).AllocatorInstance.Data;
  (param_1->LocalPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalPositions).ArrayNum = (param_1->LocalPositions).ArrayNum;
  (this->LocalPositions).ArrayMax = (param_1->LocalPositions).ArrayMax;
  (param_1->LocalPositions).ArrayNum = 0;
  (param_1->LocalPositions).ArrayMax = 0;
  (this->SpatialHash)._padding_ = 0;
  (this->SpatialHash)._padding_ = 0;
  (this->SpatialHash)._padding_ = 0;
  (this->SpatialHash)._padding_ = 0;
  *(undefined4 *)&(this->SpatialHash)._padding_ = 0;
  *(undefined8 *)&(this->SpatialHash).UsedLods = 0;
  *(undefined8 *)&(this->SpatialHash).UsedLods.field_0x8 = 0;
  *(undefined8 *)&(this->SpatialHash).UsedLods.field_0x20 = 0;
  *(undefined4 *)&(this->SpatialHash).UsedLods.field_0x28 = 0;
  *(undefined4 *)&(this->SpatialHash).UsedLods.field_0x2c = 0x80;
  *(undefined4 *)&(this->SpatialHash).UsedLods.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SpatialHash).UsedLods.field_0x34 = 0;
  *(undefined8 *)&(this->SpatialHash).UsedLods.field_0x40 = 0;
  *(undefined4 *)&(this->SpatialHash).UsedLods.field_0x48 = 0;
  (this->SpatialHash).Bounds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpatialHash).Bounds.ArrayNum = 0;
  (this->SpatialHash).Bounds.ArrayMax = 0;
  return this;
}

// FSkinnedTriangleMesh @ 143dfc180

FSkinnedTriangleMesh * __thiscall
Chaos::FSkinnedTriangleMesh::FSkinnedTriangleMesh
          (FSkinnedTriangleMesh *this,FTriangleMesh *param_1,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<Chaos::FWeightedInfluenceData,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_4,TTransform<double> *param_5,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_6)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  FSkinnedTriangleMesh *pFVar4;
  TAABB<float,3> *pTVar5;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_38;
  TAABB<float,3> local_28;
  
  FImplicitObject::FImplicitObject((FImplicitObject *)this,2,'\x12');
  *(undefined ***)this = &___7FSkinnedTriangleMesh_Chaos__6B_;
  FTriangleMesh::FTriangleMesh(&this->TriangleMesh,param_1);
  (this->BoneData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneData).AllocatorInstance.Data = (param_3->AllocatorInstance).Data;
  (param_3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->BoneData).ArrayNum = param_3->ArrayNum;
  (this->BoneData).ArrayMax = param_3->ArrayMax;
  param_3->ArrayNum = 0;
  param_3->ArrayMax = 0;
  (this->UsedBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UsedBones).AllocatorInstance.Data = (param_4->AllocatorInstance).Data;
  (param_4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->UsedBones).ArrayNum = param_4->ArrayNum;
  (this->UsedBones).ArrayMax = param_4->ArrayMax;
  param_4->ArrayNum = 0;
  param_4->ArrayMax = 0;
  dVar2 = (param_5->Rotation).XY.m128d_f64[1];
  (this->ReferenceRootTransform).Rotation.XY.m128d_f64[0] = (param_5->Rotation).XY.m128d_f64[0];
  (this->ReferenceRootTransform).Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_5->Rotation).ZW.m128d_f64[1];
  (this->ReferenceRootTransform).Rotation.ZW.m128d_f64[0] = (param_5->Rotation).ZW.m128d_f64[0];
  (this->ReferenceRootTransform).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_5->Translation).XY.m128d_f64[1];
  (this->ReferenceRootTransform).Translation.XY.m128d_f64[0] =
       (param_5->Translation).XY.m128d_f64[0];
  (this->ReferenceRootTransform).Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_5->Translation).ZW.m128d_f64[1];
  (this->ReferenceRootTransform).Translation.ZW.m128d_f64[0] =
       (param_5->Translation).ZW.m128d_f64[0];
  (this->ReferenceRootTransform).Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_5->Scale3D).XY.m128d_f64[1];
  (this->ReferenceRootTransform).Scale3D.XY.m128d_f64[0] = (param_5->Scale3D).XY.m128d_f64[0];
  (this->ReferenceRootTransform).Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_5->Scale3D).ZW.m128d_f64[1];
  (this->ReferenceRootTransform).Scale3D.ZW.m128d_f64[0] = (param_5->Scale3D).ZW.m128d_f64[0];
  (this->ReferenceRootTransform).Scale3D.ZW.m128d_f64[1] = dVar2;
  (this->ReferenceRelativeTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferenceRelativeTransforms).AllocatorInstance.Data = (param_6->AllocatorInstance).Data;
  (param_6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->ReferenceRelativeTransforms).ArrayNum = param_6->ArrayNum;
  (this->ReferenceRelativeTransforms).ArrayMax = param_6->ArrayMax;
  param_6->ArrayNum = 0;
  param_6->ArrayMax = 0;
  (this->ReferencePositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferencePositions).AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->ReferencePositions).ArrayNum = param_2->ArrayNum;
  (this->ReferencePositions).ArrayMax = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  *(undefined4 *)&(this->ReferenceBoundingBox).MMin = 0x7f7fffff;
  *(undefined4 *)&(this->ReferenceBoundingBox).MMin.field_0x4 = 0x7f7fffff;
  *(undefined4 *)&(this->ReferenceBoundingBox).MMin.field_0x8 = 0x7f7fffff;
  *(undefined4 *)&(this->ReferenceBoundingBox).MMax = 0xff7fffff;
  *(undefined4 *)&(this->ReferenceBoundingBox).MMax.field_0x4 = 0xff7fffff;
  *(undefined4 *)&(this->ReferenceBoundingBox).MMax.field_0x8 = 0xff7fffff;
  *(undefined4 *)&(this->LocalBoundingBox).MMin = 0x7f7fffff;
  *(undefined4 *)&(this->LocalBoundingBox).MMin.field_0x4 = 0x7f7fffff;
  *(undefined4 *)&(this->LocalBoundingBox).MMin.field_0x8 = 0x7f7fffff;
  *(undefined4 *)&(this->LocalBoundingBox).MMax = 0xff7fffff;
  *(undefined4 *)&(this->LocalBoundingBox).MMax.field_0x4 = 0xff7fffff;
  *(undefined4 *)&(this->LocalBoundingBox).MMax.field_0x8 = 0xff7fffff;
  (this->LocalPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalPositions).ArrayNum = 0;
  (this->LocalPositions).ArrayMax = 0;
  (this->SpatialHash)._padding_ = 0;
  (this->SpatialHash)._padding_ = 0;
  (this->SpatialHash)._padding_ = 0;
  (this->SpatialHash)._padding_ = 0;
  *(undefined4 *)&(this->SpatialHash)._padding_ = 0;
  *(undefined8 *)&(this->SpatialHash).UsedLods = 0;
  *(undefined8 *)&(this->SpatialHash).UsedLods.field_0x8 = 0;
  *(undefined8 *)&(this->SpatialHash).UsedLods.field_0x20 = 0;
  *(undefined4 *)&(this->SpatialHash).UsedLods.field_0x28 = 0;
  *(undefined4 *)&(this->SpatialHash).UsedLods.field_0x2c = 0x80;
  *(undefined4 *)&(this->SpatialHash).UsedLods.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SpatialHash).UsedLods.field_0x34 = 0;
  *(undefined8 *)&(this->SpatialHash).UsedLods.field_0x40 = 0;
  *(undefined4 *)&(this->SpatialHash).UsedLods.field_0x48 = 0;
  (this->SpatialHash).Bounds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpatialHash).Bounds.ArrayNum = 0;
  (this->SpatialHash).Bounds.ArrayMax = 0;
  local_38.DataPtr = (TVector<float,3> *)(this->ReferencePositions).AllocatorInstance.Data;
  local_38.ArrayNum = (this->ReferencePositions).ArrayNum;
  if (local_38.ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSkinnedTriangleMesh *)(*pcVar1)();
      return pFVar4;
    }
  }
  pTVar5 = CalculateBoundingBox(this,&local_28,&local_38);
  *(undefined8 *)&(this->ReferenceBoundingBox).MMin = *(undefined8 *)&pTVar5->MMin;
  *(undefined4 *)&(this->ReferenceBoundingBox).MMin.field_0x8 =
       *(undefined4 *)&(pTVar5->MMin).field_0x8;
  *(undefined8 *)&(this->ReferenceBoundingBox).MMax = *(undefined8 *)&pTVar5->MMax;
  *(undefined4 *)&(this->ReferenceBoundingBox).MMax.field_0x8 =
       *(undefined4 *)&(pTVar5->MMax).field_0x8;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::operator=
            (&this->LocalPositions,&this->ReferencePositions);
  *(undefined8 *)&(this->LocalBoundingBox).MMin = *(undefined8 *)&(this->ReferenceBoundingBox).MMin;
  *(undefined4 *)&(this->LocalBoundingBox).MMin.field_0x8 =
       *(undefined4 *)&(this->ReferenceBoundingBox).MMin.field_0x8;
  *(undefined8 *)&(this->LocalBoundingBox).MMax = *(undefined8 *)&(this->ReferenceBoundingBox).MMax;
  *(undefined4 *)&(this->LocalBoundingBox).MMax.field_0x8 =
       *(undefined4 *)&(this->ReferenceBoundingBox).MMax.field_0x8;
  return this;
}

// ~FSkinnedTriangleMesh @ 143dfe320

void __thiscall Chaos::FSkinnedTriangleMesh::~FSkinnedTriangleMesh(FSkinnedTriangleMesh *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->SpatialHash).Bounds.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->SpatialHash).UsedLods.field_0x48 = 0;
  pvVar2 = *(void **)&(this->SpatialHash).UsedLods.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->SpatialHash).UsedLods);
  pvVar2 = (void *)(this->SpatialHash)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = (void *)(this->SpatialHash)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->LocalPositions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ReferencePositions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ReferenceRelativeTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UsedBones).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoneData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FTriangleMesh::~FTriangleMesh(&this->TriangleMesh);
  FImplicitObject::~FImplicitObject((FImplicitObject *)this);
  return;
}

// BoundingBox @ 143e13e80

TAABB<double,3> * __thiscall
Chaos::FSkinnedTriangleMesh::BoundingBox
          (FSkinnedTriangleMesh *this,TAABB<double,3> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  
  uVar3 = __real_ffefffffffffffff;
  fVar1 = *(float *)&(this->LocalBoundingBox).MMin;
  if (fVar1 == __real_7f7fffff) {
    *(undefined8 *)&__return_storage_ptr__->MMin = 0x7fefffffffffffff;
    *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x8 = 0x7fefffffffffffff;
    *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x10 = 0x7fefffffffffffff;
    *(undefined8 *)&__return_storage_ptr__->MMax = uVar3;
    *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x8 = uVar3;
    *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x10 = uVar3;
    return __return_storage_ptr__;
  }
  fVar2 = *(float *)&(this->LocalBoundingBox).MMin.field_0x4;
  *(double *)&(__return_storage_ptr__->MMin).field_0x10 =
       (double)*(float *)&(this->LocalBoundingBox).MMin.field_0x8;
  *(double *)&(__return_storage_ptr__->MMin).field_0x8 = (double)fVar2;
  *(double *)&__return_storage_ptr__->MMin = (double)fVar1;
  fVar1 = *(float *)&(this->LocalBoundingBox).MMax.field_0x4;
  fVar2 = *(float *)&(this->LocalBoundingBox).MMax.field_0x8;
  *(double *)&__return_storage_ptr__->MMax = (double)*(float *)&(this->LocalBoundingBox).MMax;
  *(double *)&(__return_storage_ptr__->MMax).field_0x8 = (double)fVar1;
  *(double *)&(__return_storage_ptr__->MMax).field_0x10 = (double)fVar2;
  return __return_storage_ptr__;
}

// CalculateBoundingBox @ 143e13ff0

TAABB<float,3> * __thiscall
Chaos::FSkinnedTriangleMesh::CalculateBoundingBox
          (FSkinnedTriangleMesh *this,TAABB<float,3> *__return_storage_ptr__,
          TArrayView<Chaos::TVector<float,3>_const_,int> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  TVector<float,3> *pTVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TAABB<float,3> *pTVar8;
  FScriptContainerElement *pFVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 local_res8 [8];
  
  *(undefined4 *)&__return_storage_ptr__->MMin = 0x7f7fffff;
  *(undefined4 *)&(__return_storage_ptr__->MMin).field_0x4 = 0x7f7fffff;
  *(undefined4 *)&(__return_storage_ptr__->MMin).field_0x8 = 0x7f7fffff;
  *(undefined4 *)&__return_storage_ptr__->MMax = 0xff7fffff;
  *(undefined4 *)&(__return_storage_ptr__->MMax).field_0x4 = 0xff7fffff;
  *(undefined4 *)&(__return_storage_ptr__->MMax).field_0x8 = 0xff7fffff;
  pFVar9 = (this->TriangleMesh).MElements.AllocatorInstance.Data;
  iVar2 = (this->TriangleMesh).MElements.ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 0xc;
  while( true ) {
    if ((this->TriangleMesh).MElements.ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::TVector<int,3>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar1) break;
    uVar3 = *(uint *)pFVar9;
    uVar7 = 0;
    if ((int)uVar3 < param_1->ArrayNum) {
      uVar7 = ~uVar3 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TAABB<float,3> *)(*pcVar5)();
        return pTVar8;
      }
    }
    pTVar4 = param_1->DataPtr;
    fVar12 = *(float *)&(__return_storage_ptr__->MMin).field_0x4;
    if (*(float *)&pTVar4[(int)uVar3].field_0x4 <= fVar12) {
      fVar12 = *(float *)&pTVar4[(int)uVar3].field_0x4;
    }
    fVar10 = *(float *)(pTVar4 + (int)uVar3);
    if (*(float *)&__return_storage_ptr__->MMin <= *(float *)(pTVar4 + (int)uVar3)) {
      fVar10 = *(float *)&__return_storage_ptr__->MMin;
    }
    fVar11 = *(float *)&(__return_storage_ptr__->MMin).field_0x8;
    fVar13 = *(float *)&pTVar4[(int)uVar3].field_0x8;
    if (fVar11 <= *(float *)&pTVar4[(int)uVar3].field_0x8) {
      fVar13 = fVar11;
    }
    *(float *)&__return_storage_ptr__->MMin = fVar10;
    *(float *)&(__return_storage_ptr__->MMin).field_0x4 = fVar12;
    *(float *)&(__return_storage_ptr__->MMin).field_0x8 = fVar13;
    fVar12 = *(float *)&(__return_storage_ptr__->MMax).field_0x4;
    if (fVar12 <= *(float *)&pTVar4[(int)uVar3].field_0x4) {
      fVar12 = *(float *)&pTVar4[(int)uVar3].field_0x4;
    }
    fVar10 = *(float *)(pTVar4 + (int)uVar3);
    if (*(float *)(pTVar4 + (int)uVar3) <= *(float *)&__return_storage_ptr__->MMax) {
      fVar10 = *(float *)&__return_storage_ptr__->MMax;
    }
    fVar11 = *(float *)&(__return_storage_ptr__->MMax).field_0x8;
    fVar13 = *(float *)&pTVar4[(int)uVar3].field_0x8;
    if (*(float *)&pTVar4[(int)uVar3].field_0x8 <= fVar11) {
      fVar13 = fVar11;
    }
    *(float *)&__return_storage_ptr__->MMax = fVar10;
    *(float *)&(__return_storage_ptr__->MMax).field_0x4 = fVar12;
    *(float *)&(__return_storage_ptr__->MMax).field_0x8 = fVar13;
    uVar3 = *(uint *)(pFVar9 + 4);
    uVar7 = 0;
    if ((int)uVar3 < param_1->ArrayNum) {
      uVar7 = ~uVar3 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TAABB<float,3> *)(*pcVar5)();
        return pTVar8;
      }
    }
    pTVar4 = param_1->DataPtr;
    fVar12 = *(float *)&(__return_storage_ptr__->MMin).field_0x4;
    fVar10 = *(float *)&(__return_storage_ptr__->MMin).field_0x8;
    if (*(float *)&pTVar4[(int)uVar3].field_0x4 <= fVar12) {
      fVar12 = *(float *)&pTVar4[(int)uVar3].field_0x4;
    }
    if (*(float *)&pTVar4[(int)uVar3].field_0x8 <= fVar10) {
      fVar10 = *(float *)&pTVar4[(int)uVar3].field_0x8;
    }
    fVar11 = *(float *)(pTVar4 + (int)uVar3);
    if (*(float *)&__return_storage_ptr__->MMin <= *(float *)(pTVar4 + (int)uVar3)) {
      fVar11 = *(float *)&__return_storage_ptr__->MMin;
    }
    *(float *)&__return_storage_ptr__->MMin = fVar11;
    *(float *)&(__return_storage_ptr__->MMin).field_0x4 = fVar12;
    *(float *)&(__return_storage_ptr__->MMin).field_0x8 = fVar10;
    fVar12 = *(float *)&__return_storage_ptr__->MMax;
    if (*(float *)&__return_storage_ptr__->MMax <= *(float *)(pTVar4 + (int)uVar3)) {
      fVar12 = *(float *)(pTVar4 + (int)uVar3);
    }
    fVar10 = *(float *)&(__return_storage_ptr__->MMax).field_0x8;
    if (fVar10 <= *(float *)&pTVar4[(int)uVar3].field_0x8) {
      fVar10 = *(float *)&pTVar4[(int)uVar3].field_0x8;
    }
    fVar11 = *(float *)&(__return_storage_ptr__->MMax).field_0x4;
    fVar13 = *(float *)&pTVar4[(int)uVar3].field_0x4;
    if (*(float *)&pTVar4[(int)uVar3].field_0x4 <= fVar11) {
      fVar13 = fVar11;
    }
    *(float *)&__return_storage_ptr__->MMax = fVar12;
    *(float *)&(__return_storage_ptr__->MMax).field_0x4 = fVar13;
    *(float *)&(__return_storage_ptr__->MMax).field_0x8 = fVar10;
    uVar3 = *(uint *)(pFVar9 + 8);
    uVar7 = 0;
    if ((int)uVar3 < param_1->ArrayNum) {
      uVar7 = ~uVar3 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TAABB<float,3> *)(*pcVar5)();
        return pTVar8;
      }
    }
    pTVar4 = param_1->DataPtr;
    pFVar9 = pFVar9 + 0xc;
    fVar12 = *(float *)(pTVar4 + (int)uVar3);
    if (*(float *)&__return_storage_ptr__->MMin <= *(float *)(pTVar4 + (int)uVar3)) {
      fVar12 = *(float *)&__return_storage_ptr__->MMin;
    }
    fVar10 = *(float *)&(__return_storage_ptr__->MMin).field_0x4;
    fVar11 = *(float *)&pTVar4[(int)uVar3].field_0x4;
    if (fVar10 <= *(float *)&pTVar4[(int)uVar3].field_0x4) {
      fVar11 = fVar10;
    }
    fVar10 = *(float *)&(__return_storage_ptr__->MMin).field_0x8;
    fVar13 = *(float *)&pTVar4[(int)uVar3].field_0x8;
    if (fVar10 <= *(float *)&pTVar4[(int)uVar3].field_0x8) {
      fVar13 = fVar10;
    }
    *(float *)&__return_storage_ptr__->MMin = fVar12;
    *(float *)&(__return_storage_ptr__->MMin).field_0x4 = fVar11;
    *(float *)&(__return_storage_ptr__->MMin).field_0x8 = fVar13;
    fVar12 = *(float *)(pTVar4 + (int)uVar3);
    if (*(float *)(pTVar4 + (int)uVar3) <= *(float *)&__return_storage_ptr__->MMax) {
      fVar12 = *(float *)&__return_storage_ptr__->MMax;
    }
    fVar10 = *(float *)&(__return_storage_ptr__->MMax).field_0x4;
    fVar11 = *(float *)&pTVar4[(int)uVar3].field_0x4;
    if (*(float *)&pTVar4[(int)uVar3].field_0x4 <= fVar10) {
      fVar11 = fVar10;
    }
    fVar10 = *(float *)&(__return_storage_ptr__->MMax).field_0x8;
    fVar13 = *(float *)&pTVar4[(int)uVar3].field_0x8;
    if (*(float *)&pTVar4[(int)uVar3].field_0x8 <= fVar10) {
      fVar13 = fVar10;
    }
    *(float *)&__return_storage_ptr__->MMax = fVar12;
    *(float *)&(__return_storage_ptr__->MMax).field_0x4 = fVar11;
    *(float *)&(__return_storage_ptr__->MMax).field_0x8 = fVar13;
  }
  return __return_storage_ptr__;
}

// CopyGeometry @ 143e18260

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::FSkinnedTriangleMesh::CopyGeometry(FSkinnedTriangleMesh *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  FSkinnedTriangleMesh *pFVar7;
  TRefCountPtr<Chaos::FImplicitObject> TVar8;
  FImplicitObject *in_RDX;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_28;
  
  pFVar7 = ::operator_new(0x2e0);
  if (pFVar7 == (FSkinnedTriangleMesh *)0x0) {
    pFVar7 = (FSkinnedTriangleMesh *)0x0;
  }
  else {
    pFVar7 = FSkinnedTriangleMesh(pFVar7);
  }
  local_28.DataPtr = (TVector<int,3> *)(this->TriangleMesh).MElements.AllocatorInstance.Data;
  iVar1 = (this->TriangleMesh).MElements.ArrayNum;
  iVar2 = (this->TriangleMesh).MNumIndices;
  iVar3 = (this->TriangleMesh).MStartIdx;
  if (iVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      TVar8.Reference = (FImplicitObject *)(*pcVar4)();
      return (TRefCountPtr<Chaos::FImplicitObject>)TVar8.Reference;
    }
  }
  local_28.ArrayNum = iVar1;
  FTriangleMesh::Init(&pFVar7->TriangleMesh,&local_28,iVar3,iVar2,false);
  TArray<Chaos::FWeightedInfluenceData,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar7->BoneData,&this->BoneData);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=(&pFVar7->UsedBones,&this->UsedBones);
  dVar5 = (this->ReferenceRootTransform).Rotation.XY.m128d_f64[1];
  (pFVar7->ReferenceRootTransform).Rotation.XY.m128d_f64[0] =
       (this->ReferenceRootTransform).Rotation.XY.m128d_f64[0];
  (pFVar7->ReferenceRootTransform).Rotation.XY.m128d_f64[1] = dVar5;
  dVar5 = (this->ReferenceRootTransform).Rotation.ZW.m128d_f64[1];
  (pFVar7->ReferenceRootTransform).Rotation.ZW.m128d_f64[0] =
       (this->ReferenceRootTransform).Rotation.ZW.m128d_f64[0];
  (pFVar7->ReferenceRootTransform).Rotation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (this->ReferenceRootTransform).Translation.XY.m128d_f64[1];
  (pFVar7->ReferenceRootTransform).Translation.XY.m128d_f64[0] =
       (this->ReferenceRootTransform).Translation.XY.m128d_f64[0];
  (pFVar7->ReferenceRootTransform).Translation.XY.m128d_f64[1] = dVar5;
  dVar5 = (this->ReferenceRootTransform).Translation.ZW.m128d_f64[1];
  (pFVar7->ReferenceRootTransform).Translation.ZW.m128d_f64[0] =
       (this->ReferenceRootTransform).Translation.ZW.m128d_f64[0];
  (pFVar7->ReferenceRootTransform).Translation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (this->ReferenceRootTransform).Scale3D.XY.m128d_f64[1];
  (pFVar7->ReferenceRootTransform).Scale3D.XY.m128d_f64[0] =
       (this->ReferenceRootTransform).Scale3D.XY.m128d_f64[0];
  (pFVar7->ReferenceRootTransform).Scale3D.XY.m128d_f64[1] = dVar5;
  dVar5 = (this->ReferenceRootTransform).Scale3D.ZW.m128d_f64[1];
  (pFVar7->ReferenceRootTransform).Scale3D.ZW.m128d_f64[0] =
       (this->ReferenceRootTransform).Scale3D.ZW.m128d_f64[0];
  (pFVar7->ReferenceRootTransform).Scale3D.ZW.m128d_f64[1] = dVar5;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar7->ReferenceRelativeTransforms,&this->ReferenceRelativeTransforms);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar7->ReferencePositions,&this->ReferencePositions);
  *(undefined8 *)&(pFVar7->ReferenceBoundingBox).MMin =
       *(undefined8 *)&(this->ReferenceBoundingBox).MMin;
  *(undefined4 *)&(pFVar7->ReferenceBoundingBox).MMin.field_0x8 =
       *(undefined4 *)&(this->ReferenceBoundingBox).MMin.field_0x8;
  *(undefined8 *)&(pFVar7->ReferenceBoundingBox).MMax =
       *(undefined8 *)&(this->ReferenceBoundingBox).MMax;
  *(undefined4 *)&(pFVar7->ReferenceBoundingBox).MMax.field_0x8 =
       *(undefined4 *)&(this->ReferenceBoundingBox).MMax.field_0x8;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar7->LocalPositions,&this->LocalPositions);
  *(undefined8 *)&(pFVar7->LocalBoundingBox).MMin = *(undefined8 *)&(this->LocalBoundingBox).MMin;
  *(undefined4 *)&(pFVar7->LocalBoundingBox).MMin.field_0x8 =
       *(undefined4 *)&(this->LocalBoundingBox).MMin.field_0x8;
  *(undefined8 *)&(pFVar7->LocalBoundingBox).MMax = *(undefined8 *)&(this->LocalBoundingBox).MMax;
  *(undefined4 *)&(pFVar7->LocalBoundingBox).MMax.field_0x8 =
       *(undefined4 *)&(this->LocalBoundingBox).MMax.field_0x8;
  in_RDX->_padding_ = (longlong)pFVar7;
  LOCK();
  *(int *)&pFVar7->field_0x8 = *(int *)&pFVar7->field_0x8 + 1;
  UNLOCK();
  return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
}

// CopyGeometryWithScale @ 143e184e0

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::FSkinnedTriangleMesh::CopyGeometryWithScale
          (FSkinnedTriangleMesh *this,TVector<double,3> *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uchar uVar7;
  FSkinnedTriangleMesh *pFVar8;
  TRefCountPtr<Chaos::FImplicitObject> TVar9;
  TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1> *this_00;
  TVector<double,3> *in_R8;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_28;
  
  pFVar8 = ::operator_new(0x2e0);
  if (pFVar8 == (FSkinnedTriangleMesh *)0x0) {
    pFVar8 = (FSkinnedTriangleMesh *)0x0;
  }
  else {
    pFVar8 = FSkinnedTriangleMesh(pFVar8);
  }
  local_28.DataPtr = (TVector<int,3> *)(this->TriangleMesh).MElements.AllocatorInstance.Data;
  iVar1 = (this->TriangleMesh).MElements.ArrayNum;
  iVar2 = (this->TriangleMesh).MNumIndices;
  iVar3 = (this->TriangleMesh).MStartIdx;
  if (iVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      TVar9.Reference = (FImplicitObject *)(*pcVar4)();
      return (TRefCountPtr<Chaos::FImplicitObject>)TVar9.Reference;
    }
  }
  local_28.ArrayNum = iVar1;
  FTriangleMesh::Init(&pFVar8->TriangleMesh,&local_28,iVar3,iVar2,false);
  TArray<Chaos::FWeightedInfluenceData,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar8->BoneData,&this->BoneData);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=(&pFVar8->UsedBones,&this->UsedBones);
  dVar5 = (this->ReferenceRootTransform).Rotation.XY.m128d_f64[1];
  (pFVar8->ReferenceRootTransform).Rotation.XY.m128d_f64[0] =
       (this->ReferenceRootTransform).Rotation.XY.m128d_f64[0];
  (pFVar8->ReferenceRootTransform).Rotation.XY.m128d_f64[1] = dVar5;
  dVar5 = (this->ReferenceRootTransform).Rotation.ZW.m128d_f64[1];
  (pFVar8->ReferenceRootTransform).Rotation.ZW.m128d_f64[0] =
       (this->ReferenceRootTransform).Rotation.ZW.m128d_f64[0];
  (pFVar8->ReferenceRootTransform).Rotation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (this->ReferenceRootTransform).Translation.XY.m128d_f64[1];
  (pFVar8->ReferenceRootTransform).Translation.XY.m128d_f64[0] =
       (this->ReferenceRootTransform).Translation.XY.m128d_f64[0];
  (pFVar8->ReferenceRootTransform).Translation.XY.m128d_f64[1] = dVar5;
  dVar5 = (this->ReferenceRootTransform).Translation.ZW.m128d_f64[1];
  (pFVar8->ReferenceRootTransform).Translation.ZW.m128d_f64[0] =
       (this->ReferenceRootTransform).Translation.ZW.m128d_f64[0];
  (pFVar8->ReferenceRootTransform).Translation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (this->ReferenceRootTransform).Scale3D.XY.m128d_f64[1];
  (pFVar8->ReferenceRootTransform).Scale3D.XY.m128d_f64[0] =
       (this->ReferenceRootTransform).Scale3D.XY.m128d_f64[0];
  (pFVar8->ReferenceRootTransform).Scale3D.XY.m128d_f64[1] = dVar5;
  dVar5 = (this->ReferenceRootTransform).Scale3D.ZW.m128d_f64[1];
  (pFVar8->ReferenceRootTransform).Scale3D.ZW.m128d_f64[0] =
       (this->ReferenceRootTransform).Scale3D.ZW.m128d_f64[0];
  (pFVar8->ReferenceRootTransform).Scale3D.ZW.m128d_f64[1] = dVar5;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar8->ReferenceRelativeTransforms,&this->ReferenceRelativeTransforms);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar8->ReferencePositions,&this->ReferencePositions);
  *(undefined8 *)&(pFVar8->ReferenceBoundingBox).MMin =
       *(undefined8 *)&(this->ReferenceBoundingBox).MMin;
  *(undefined4 *)&(pFVar8->ReferenceBoundingBox).MMin.field_0x8 =
       *(undefined4 *)&(this->ReferenceBoundingBox).MMin.field_0x8;
  *(undefined8 *)&(pFVar8->ReferenceBoundingBox).MMax =
       *(undefined8 *)&(this->ReferenceBoundingBox).MMax;
  *(undefined4 *)&(pFVar8->ReferenceBoundingBox).MMax.field_0x8 =
       *(undefined4 *)&(this->ReferenceBoundingBox).MMax.field_0x8;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar8->LocalPositions,&this->LocalPositions);
  *(undefined8 *)&(pFVar8->LocalBoundingBox).MMin = *(undefined8 *)&(this->LocalBoundingBox).MMin;
  *(undefined4 *)&(pFVar8->LocalBoundingBox).MMin.field_0x8 =
       *(undefined4 *)&(this->LocalBoundingBox).MMin.field_0x8;
  *(undefined8 *)&(pFVar8->LocalBoundingBox).MMax = *(undefined8 *)&(this->LocalBoundingBox).MMax;
  *(undefined4 *)&(pFVar8->LocalBoundingBox).MMax.field_0x8 =
       *(undefined4 *)&(this->LocalBoundingBox).MMax.field_0x8;
  this_00 = ::operator_new(0x78);
  if (this_00 == (TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1> *)0x0) {
    *(undefined8 *)param_1 = 0;
  }
  else {
    uVar7 = FImplicitObject::GetType((FImplicitObject *)pFVar8);
    FImplicitObjectScaled::FImplicitObjectScaled((FImplicitObjectScaled *)this_00,2,uVar7);
    this_00->_padding_ =
         (longlong)&___7__TImplicitObjectScaled_VFSkinnedTriangleMesh_Chaos___00_Chaos__6B_;
    (this_00->MObject).Reference = pFVar8;
    LOCK();
    *(int *)&pFVar8->field_0x8 = *(int *)&pFVar8->field_0x8 + 1;
    UNLOCK();
    if (*(int *)&pFVar8->field_0x8 == 1) {
      LOCK();
      *(undefined4 *)&pFVar8->field_0xc = 1;
      UNLOCK();
    }
    TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1>::InitScaledImplicit(this_00,in_R8,0.0);
    *(TImplicitObjectScaled<Chaos::FSkinnedTriangleMesh,1> **)param_1 = this_00;
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
}

// FinalizeConstruction @ 143e1e3c0

void __thiscall Chaos::FSkinnedTriangleMesh::FinalizeConstruction(FSkinnedTriangleMesh *this)

{
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::operator=
            (&this->LocalPositions,&this->ReferencePositions);
  *(undefined8 *)&(this->LocalBoundingBox).MMin = *(undefined8 *)&(this->ReferenceBoundingBox).MMin;
  *(undefined4 *)&(this->LocalBoundingBox).MMin.field_0x8 =
       *(undefined4 *)&(this->ReferenceBoundingBox).MMin.field_0x8;
  *(undefined8 *)&(this->LocalBoundingBox).MMax = *(undefined8 *)&(this->ReferenceBoundingBox).MMax;
  *(undefined4 *)&(this->LocalBoundingBox).MMax.field_0x8 =
       *(undefined4 *)&(this->ReferenceBoundingBox).MMax.field_0x8;
  return;
}

// GetTypeHash @ 143e2cce0

uint __thiscall Chaos::FSkinnedTriangleMesh::GetTypeHash(FSkinnedTriangleMesh *this)

{
  FScriptContainerElement FVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 local_res8 [8];
  
  uVar5 = 0;
  pFVar7 = (this->TriangleMesh).MElements.AllocatorInstance.Data;
  for (lVar13 = (longlong)(this->TriangleMesh).MElements.ArrayNum; lVar13 != 0; lVar13 = lVar13 + -1
      ) {
    uVar10 = *(uint *)pFVar7;
    uVar10 = *(uint *)(pFVar7 + 4) + uVar10 * 0x40 + (uVar10 >> 2) + 0x9e3779b9 ^ uVar10;
    uVar5 = uVar5 ^ (uVar5 >> 2) +
                    (*(uint *)(pFVar7 + 8) + uVar10 * 0x40 + (uVar10 >> 2) + 0x9e3779b9 ^ uVar10) +
                    uVar5 * 0x40 + -0x61c88647;
    pFVar7 = pFVar7 + 0xc;
  }
  iVar3 = (this->BoneData).ArrayNum;
  pFVar7 = (this->BoneData).AllocatorInstance.Data;
  pFVar6 = pFVar7 + (longlong)iVar3 * 0x4c;
  while( true ) {
    if ((this->BoneData).ArrayNum != iVar3) {
      `TCheckedPointerIterator<Chaos::FWeightedInfluenceData_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar6) break;
    FVar1 = *pFVar7;
    uVar10 = (uint)(byte)FVar1;
    if (FVar1 != (FScriptContainerElement)0x0) {
      pFVar11 = pFVar7 + 0x1c;
      uVar14 = (ulonglong)(byte)FVar1;
      pFVar12 = pFVar7;
      do {
        pFVar12 = pFVar12 + 2;
        uVar2 = *(ushort *)pFVar12;
        uVar8 = uVar10 - uVar2 ^ (uint)(uVar2 >> 0xd);
        uVar10 = (-0x61c88647 - uVar8) - (uint)uVar2 ^ uVar8 << 8;
        uVar4 = (uVar2 - uVar10) - uVar8 ^ uVar10 >> 0xd;
        uVar9 = (uVar8 - uVar4) - uVar10 ^ uVar4 >> 0xc;
        uVar10 = (uVar10 - uVar9) - uVar4 ^ uVar9 << 0x10;
        uVar8 = (uVar4 - uVar10) - uVar9 ^ uVar10 >> 5;
        uVar9 = (uVar9 - uVar8) - uVar10 ^ uVar8 >> 3;
        uVar4 = (uVar10 - uVar9) - uVar8 ^ uVar9 << 10;
        uVar10 = *(uint *)pFVar11;
        uVar8 = ((uVar8 - uVar4) - uVar9 ^ uVar4 >> 0xf) - uVar10 ^ uVar10 >> 0xd;
        uVar4 = (-0x61c88647 - uVar8) - uVar10 ^ uVar8 << 8;
        uVar9 = (uVar10 - uVar4) - uVar8 ^ uVar4 >> 0xd;
        uVar8 = (uVar8 - uVar9) - uVar4 ^ uVar9 >> 0xc;
        uVar10 = (uVar4 - uVar8) - uVar9 ^ uVar8 << 0x10;
        uVar9 = (uVar9 - uVar10) - uVar8 ^ uVar10 >> 5;
        uVar4 = (uVar8 - uVar9) - uVar10 ^ uVar9 >> 3;
        pFVar11 = pFVar11 + 4;
        uVar10 = (uVar10 - uVar4) - uVar9 ^ uVar4 << 10;
        uVar10 = (uVar9 - uVar10) - uVar4 ^ uVar10 >> 0xf;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    uVar5 = uVar5 - uVar10 ^ uVar10 >> 0xd;
    uVar4 = (-0x61c88647 - uVar5) - uVar10 ^ uVar5 << 8;
    uVar8 = (uVar10 - uVar4) - uVar5 ^ uVar4 >> 0xd;
    uVar5 = (uVar5 - uVar8) - uVar4 ^ uVar8 >> 0xc;
    uVar10 = (uVar4 - uVar5) - uVar8 ^ uVar5 << 0x10;
    uVar4 = (uVar8 - uVar10) - uVar5 ^ uVar10 >> 5;
    uVar5 = (uVar5 - uVar4) - uVar10 ^ uVar4 >> 3;
    uVar10 = (uVar10 - uVar5) - uVar4 ^ uVar5 << 10;
    uVar5 = (uVar4 - uVar10) - uVar5 ^ uVar10 >> 0xf;
    pFVar7 = pFVar7 + 0x4c;
  }
  pFVar7 = (this->ReferencePositions).AllocatorInstance.Data;
  for (lVar13 = (longlong)(this->ReferencePositions).ArrayNum; lVar13 != 0; lVar13 = lVar13 + -1) {
    uVar10 = *(uint *)pFVar7;
    uVar10 = uVar10 * 0x40 + *(uint *)(pFVar7 + 4) + (uVar10 >> 2) + 0x9e3779b9 ^ uVar10;
    uVar5 = uVar5 ^ (uVar5 >> 2) +
                    (uVar10 * 0x40 + -0x61c88647 + *(uint *)(pFVar7 + 8) + (uVar10 >> 2) ^ uVar10) +
                    uVar5 * 0x40 + -0x61c88647;
    pFVar7 = pFVar7 + 0xc;
  }
  return uVar5;
}

// PhiWithNormal @ 143e379f0

double __thiscall
Chaos::FSkinnedTriangleMesh::PhiWithNormal
          (FSkinnedTriangleMesh *this,TVector<double,3> *param_1,TVector<double,3> *param_2)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_7094425471999278957>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SkinnedTriangleMesh.h"
                     ,0x93,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    dVar3 = (double)(*pcVar1)();
    return dVar3;
  }
  return __real_7fefffffffffffff;
}

// Serialize @ 143e4b920

void __thiscall
Chaos::FSkinnedTriangleMesh::Serialize(FSkinnedTriangleMesh *this,FChaosArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  
  FImplicitObject::SerializeImp((FImplicitObject *)this,(FArchive *)param_1);
  TArrayPrivateFriend::Serialize<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>
            ((FArchive *)param_1,&(this->TriangleMesh).MElements);
  piVar1 = &(this->TriangleMesh).MStartIdx;
  piVar2 = *(int **)param_1->_padding_;
  if ((int *)((undefined8 *)param_1->_padding_)[1] < piVar2 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
  }
  piVar1 = &(this->TriangleMesh).MNumIndices;
  piVar2 = *(int **)param_1->_padding_;
  if ((int *)((undefined8 *)param_1->_padding_)[1] < piVar2 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
  }
  if ((param_1->_padding_ & 1) != 0) {
    FTriangleMesh::ResetAuxiliaryStructures(&this->TriangleMesh);
  }
  TArrayPrivateFriend::Serialize<Chaos::FWeightedInfluenceData,TSizedDefaultAllocator<32>_>
            ((FArchive *)param_1,&this->BoneData);
  TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>
            ((FArchive *)param_1,&this->UsedBones);
  UE::Math::operator<<((FArchive *)param_1,&this->ReferenceRootTransform);
  TArrayPrivateFriend::Serialize<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>
            ((FArchive *)param_1,&this->ReferenceRelativeTransforms);
  TArrayPrivateFriend::Serialize<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>
            ((FArchive *)param_1,&this->ReferencePositions);
  TBox<float,3>::SerializeAsAABB((FArchive *)param_1,&this->ReferenceBoundingBox);
  if ((param_1->_padding_ & 1) != 0) {
    FinalizeConstruction(this);
  }
  return;
}

// SerializeImp @ 143e4bfb0

void __thiscall
Chaos::FSkinnedTriangleMesh::SerializeImp(FSkinnedTriangleMesh *this,FArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  
  FImplicitObject::SerializeImp((FImplicitObject *)this,param_1);
  TArrayPrivateFriend::Serialize<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>
            (param_1,&(this->TriangleMesh).MElements);
  piVar1 = &(this->TriangleMesh).MStartIdx;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &(this->TriangleMesh).MNumIndices;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    FTriangleMesh::ResetAuxiliaryStructures(&this->TriangleMesh);
  }
  TArrayPrivateFriend::Serialize<Chaos::FWeightedInfluenceData,TSizedDefaultAllocator<32>_>
            (param_1,&this->BoneData);
  TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>(param_1,&this->UsedBones);
  UE::Math::operator<<(param_1,&this->ReferenceRootTransform);
  TArrayPrivateFriend::Serialize<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>
            (param_1,&this->ReferenceRelativeTransforms);
  TArrayPrivateFriend::Serialize<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>
            (param_1,&this->ReferencePositions);
  TBox<float,3>::SerializeAsAABB(param_1,&this->ReferenceBoundingBox);
  if ((param_1->field_0x28 & 1) != 0) {
    FinalizeConstruction(this);
  }
  return;
}

// SkinPositions @ 143e4f020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::FSkinnedTriangleMesh::SkinPositions
          (FSkinnedTriangleMesh *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<Chaos::TVector<float,3>,int> *param_2)

{
  int iVar1;
  TVector<float,3> *pTVar2;
  code *pcVar3;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_218 [32];
  FScriptContainerElement *local_1f8;
  longlong local_1f0;
  uint local_1e8;
  FScriptContainerElement *local_1e0;
  TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> local_1d8;
  FScriptContainerElement *local_1c8;
  undefined8 local_1c0;
  float local_1b8;
  undefined8 local_1b4;
  float local_1ac;
  undefined8 local_1a8;
  float local_1a0;
  undefined8 local_19c;
  float local_194;
  undefined8 local_190;
  float local_188;
  undefined8 local_184;
  float local_17c;
  undefined8 local_178;
  float local_170;
  undefined8 local_16c;
  float local_164;
  undefined8 local_160;
  float local_158;
  undefined8 local_154;
  float local_14c;
  undefined8 local_148;
  float local_140;
  undefined8 local_13c;
  float local_134;
  TArrayView<Chaos::TVector<float,3>,int> *local_130;
  TTransform<double> local_128;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_218;
  local_130 = param_2;
  if ((param_2->ArrayNum != (this->BoneData).ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Positions.Num() == BoneData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SkinnedTriangleMesh.cpp"
                         ,0x66,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_1->ArrayNum != (this->ReferenceRelativeTransforms).ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("RelativeTransforms.Num() == ReferenceRelativeTransforms.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SkinnedTriangleMesh.cpp"
                         ,0x67,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.ArrayNum = 0;
  local_1d8.ArrayMax = 0;
  TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>::SetNum
            (&local_1d8,param_1->ArrayNum,Default);
  uVar9 = 0;
  if (0 < param_1->ArrayNum) {
    lVar10 = 0;
    do {
      iVar1 = (this->ReferenceRelativeTransforms).ArrayNum;
      uVar11 = ~uVar9 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar9 < iVar1) {
        uVar6 = uVar11;
      }
      if (uVar6 == 0) {
        local_1f8 = (FScriptContainerElement *)(longlong)(int)uVar9;
        local_1f0 = (longlong)iVar1;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_1c8 = (this->ReferenceRelativeTransforms).AllocatorInstance.Data;
      pFVar14 = (FScriptContainerElement *)(longlong)(int)uVar9;
      uVar6 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar6 = uVar11;
      }
      if ((uVar6 == 0) &&
         (local_1f8 = pFVar14, local_1f0 = (longlong)param_1->ArrayNum,
         bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_128.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_128.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_128.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_128.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_128.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_128.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_128.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_128.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_128.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_128.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_128.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_128.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_128.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_128.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_128.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_128.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_128.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_128.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply
                (&local_128,(TTransform<double> *)(local_1c8 + (longlong)pFVar14 * 0x60),
                 (TTransform<double> *)
                 ((param_1->AllocatorInstance).Data + (longlong)pFVar14 * 0x60));
      fVar15 = (float)local_128.Rotation.ZW.m128d_f64[0];
      fVar18 = (float)local_128.Rotation.ZW.m128d_f64[1];
      uVar6 = 0;
      if ((int)uVar9 < local_1d8.ArrayNum) {
        uVar6 = uVar11;
      }
      fVar23 = (float)local_128.Rotation.XY.m128d_f64[0];
      fVar24 = (float)local_128.Rotation.XY.m128d_f64[1];
      fVar16 = (float)local_128.Translation.ZW.m128d_f64[0];
      fVar19 = (float)local_128.Translation.ZW.m128d_f64[1];
      fVar25 = (float)local_128.Translation.XY.m128d_f64[0];
      fVar26 = (float)local_128.Translation.XY.m128d_f64[1];
      fVar17 = (float)local_128.Scale3D.ZW.m128d_f64[0];
      fVar20 = (float)local_128.Scale3D.ZW.m128d_f64[1];
      fVar27 = (float)local_128.Scale3D.XY.m128d_f64[0];
      fVar28 = (float)local_128.Scale3D.XY.m128d_f64[1];
      if ((uVar6 == 0) &&
         (local_1f8 = pFVar14, local_1f0 = (longlong)local_1d8.ArrayNum,
         bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar9 = uVar9 + 1;
      pFVar14 = local_1d8.AllocatorInstance.Data + lVar10;
      *(float *)pFVar14 = fVar23;
      *(float *)(pFVar14 + 4) = fVar24;
      *(float *)(pFVar14 + 8) = fVar15;
      *(float *)(pFVar14 + 0xc) = fVar18;
      pFVar14 = local_1d8.AllocatorInstance.Data + lVar10 + 0x10;
      *(float *)pFVar14 = fVar25;
      *(float *)(pFVar14 + 4) = fVar26;
      *(float *)(pFVar14 + 8) = fVar16;
      *(float *)(pFVar14 + 0xc) = fVar19;
      pFVar14 = local_1d8.AllocatorInstance.Data + lVar10 + 0x20;
      *(float *)pFVar14 = fVar27;
      *(float *)(pFVar14 + 4) = fVar28;
      *(float *)(pFVar14 + 8) = fVar17;
      *(float *)(pFVar14 + 0xc) = fVar20;
      lVar10 = lVar10 + 0x30;
    } while ((int)uVar9 < param_1->ArrayNum);
  }
  uVar9 = 0;
  if ((this->BoneData).ArrayNum < 1) {
LAB_143e500c4:
    if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.AllocatorInstance.Data);
    }
    return;
  }
  lVar13 = 0;
  lVar10 = 0;
  local_1c8 = (FScriptContainerElement *)0x0;
LAB_143e4f300:
  iVar1 = (this->BoneData).ArrayNum;
  uVar11 = ~uVar9 >> 0x1f;
  uVar6 = 0;
  if ((int)uVar9 < iVar1) {
    uVar6 = uVar11;
  }
  if (uVar6 == 0) {
    local_1f8 = (FScriptContainerElement *)(longlong)(int)uVar9;
    local_1f0 = (longlong)iVar1;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = (this->BoneData).ArrayNum;
  pFVar14 = (this->BoneData).AllocatorInstance.Data;
  uVar6 = 0;
  if ((int)uVar9 < iVar1) {
    uVar6 = uVar11;
  }
  if ((uVar6 == 0) &&
     (local_1f8 = local_1c8, local_1f0 = (longlong)iVar1,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar5
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->ReferencePositions).ArrayNum;
  pFVar12 = (this->BoneData).AllocatorInstance.Data;
  uVar6 = 0;
  if ((int)uVar9 < iVar1) {
    uVar6 = uVar11;
  }
  if (uVar6 == 0) {
    local_1f8 = local_1c8;
    local_1f0 = (longlong)iVar1;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = (this->BoneData).ArrayNum;
  local_1e0 = (this->ReferencePositions).AllocatorInstance.Data;
  fVar15 = 0.0;
  uVar6 = 0;
  if ((int)uVar9 < iVar1) {
    uVar6 = uVar11;
  }
  fVar16 = 0.0;
  fVar18 = 0.0;
  if (uVar6 == 0) {
    local_1f8 = local_1c8;
    local_1f0 = (longlong)iVar1;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  fVar17 = 0.0;
  fVar19 = 0.0;
  fVar20 = 0.0;
  switch((this->BoneData).AllocatorInstance.Data[lVar10]) {
  case (FScriptContainerElement)0x0:
    goto switchD_143e4f487_caseD_0;
  case (FScriptContainerElement)0x1:
    break;
  default:
    pFVar8 = (FScriptContainerElement *)(ulonglong)*(ushort *)(pFVar14 + lVar10 + 0x18);
    fVar18 = *(float *)(pFVar12 + lVar10 + 0x48);
    local_1e8 = (uint)*(ushort *)(pFVar14 + lVar10 + 0x18);
    if (local_1d8.ArrayNum <= (int)local_1e8) {
      local_1f8 = pFVar8;
      local_1f0 = (longlong)local_1d8.ArrayNum;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar8 = (FScriptContainerElement *)(ulonglong)local_1e8;
    }
    uVar7 = (ulonglong)pFVar8 & 0xffff;
    pFVar8 = local_1d8.AllocatorInstance.Data + uVar7 * 0x30;
    fVar17 = *(float *)pFVar8;
    fVar19 = *(float *)(pFVar8 + 4);
    fVar16 = *(float *)(pFVar8 + 8);
    fVar20 = *(float *)(pFVar8 + 0xc);
    pFVar8 = local_1d8.AllocatorInstance.Data + uVar7 * 0x30 + 0x20;
    fVar15 = (float)*(undefined8 *)(local_1e0 + lVar13) * *(float *)pFVar8;
    fVar26 = (float)((ulonglong)*(undefined8 *)(local_1e0 + lVar13) >> 0x20) *
             *(float *)(pFVar8 + 4);
    fVar27 = *(float *)(local_1e0 + lVar13 + 8) * *(float *)(pFVar8 + 8);
    fVar23 = fVar26 * fVar17 - fVar15 * fVar19;
    fVar24 = fVar27 * fVar19 - fVar26 * fVar16;
    fVar25 = fVar15 * fVar16 - fVar27 * fVar17;
    fVar24 = fVar24 + fVar24;
    fVar25 = fVar25 + fVar25;
    fVar23 = fVar23 + fVar23;
    pFVar8 = local_1d8.AllocatorInstance.Data + uVar7 * 0x30 + 0x10;
    fVar15 = fVar20 * fVar24 + fVar15 + (fVar23 * fVar19 - fVar25 * fVar16) + *(float *)pFVar8;
    fVar16 = fVar20 * fVar25 + fVar26 + (fVar24 * fVar16 - fVar23 * fVar17) + *(float *)(pFVar8 + 4)
    ;
    local_1c0 = CONCAT44(fVar16,fVar15);
    local_1b8 = fVar20 * fVar23 + fVar27 + (fVar25 * fVar17 - fVar24 * fVar19) +
                *(float *)(pFVar8 + 8);
    fVar15 = fVar18 * fVar15;
    fVar16 = fVar18 * fVar16;
    fVar18 = fVar18 * local_1b8;
  case (FScriptContainerElement)0xb:
    pFVar8 = (FScriptContainerElement *)(ulonglong)*(ushort *)(pFVar14 + lVar10 + 0x16);
    fVar17 = *(float *)(pFVar12 + lVar10 + 0x44);
    local_1e8 = (uint)*(ushort *)(pFVar14 + lVar10 + 0x16);
    if (local_1d8.ArrayNum <= (int)local_1e8) {
      local_1f8 = pFVar8;
      local_1f0 = (longlong)local_1d8.ArrayNum;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar8 = (FScriptContainerElement *)(ulonglong)local_1e8;
    }
    uVar7 = (ulonglong)pFVar8 & 0xffff;
    pFVar8 = local_1d8.AllocatorInstance.Data + uVar7 * 0x30;
    fVar19 = *(float *)pFVar8;
    fVar20 = *(float *)(pFVar8 + 4);
    fVar23 = *(float *)(pFVar8 + 8);
    fVar24 = *(float *)(pFVar8 + 0xc);
    pFVar8 = local_1d8.AllocatorInstance.Data + uVar7 * 0x30 + 0x20;
    fVar28 = (float)*(undefined8 *)(local_1e0 + lVar13) * *(float *)pFVar8;
    fVar21 = (float)((ulonglong)*(undefined8 *)(local_1e0 + lVar13) >> 0x20) *
             *(float *)(pFVar8 + 4);
    fVar22 = *(float *)(local_1e0 + lVar13 + 8) * *(float *)(pFVar8 + 8);
    fVar25 = fVar21 * fVar19 - fVar28 * fVar20;
    fVar26 = fVar22 * fVar20 - fVar21 * fVar23;
    fVar27 = fVar28 * fVar23 - fVar22 * fVar19;
    fVar26 = fVar26 + fVar26;
    fVar27 = fVar27 + fVar27;
    fVar25 = fVar25 + fVar25;
    pFVar8 = local_1d8.AllocatorInstance.Data + uVar7 * 0x30 + 0x10;
    fVar28 = fVar24 * fVar26 + fVar28 + (fVar25 * fVar20 - fVar27 * fVar23) + *(float *)pFVar8;
    fVar23 = fVar24 * fVar27 + fVar21 + (fVar26 * fVar23 - fVar25 * fVar19) + *(float *)(pFVar8 + 4)
    ;
    local_1b4 = CONCAT44(fVar23,fVar28);
    local_1ac = fVar24 * fVar25 + fVar22 + (fVar27 * fVar19 - fVar26 * fVar20) +
                *(float *)(pFVar8 + 8);
    fVar15 = fVar15 + fVar17 * fVar28;
    fVar16 = fVar16 + fVar17 * fVar23;
    fVar18 = fVar18 + fVar17 * local_1ac;
  case (FScriptContainerElement)0xa:
    pFVar8 = (FScriptContainerElement *)(ulonglong)*(ushort *)(pFVar14 + lVar10 + 0x14);
    fVar17 = *(float *)(pFVar12 + lVar10 + 0x40);
    local_1e8 = (uint)*(ushort *)(pFVar14 + lVar10 + 0x14);
    if (local_1d8.ArrayNum <= (int)local_1e8) {
      local_1f8 = pFVar8;
      local_1f0 = (longlong)local_1d8.ArrayNum;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar8 = (FScriptContainerElement *)(ulonglong)local_1e8;
    }
    uVar7 = (ulonglong)pFVar8 & 0xffff;
    pFVar8 = local_1d8.AllocatorInstance.Data + uVar7 * 0x30;
    fVar19 = *(float *)pFVar8;
    fVar20 = *(float *)(pFVar8 + 4);
    fVar23 = *(float *)(pFVar8 + 8);
    fVar24 = *(float *)(pFVar8 + 0xc);
    pFVar8 = local_1d8.AllocatorInstance.Data + uVar7 * 0x30 + 0x20;
    fVar28 = (float)*(undefined8 *)(local_1e0 + lVar13) * *(float *)pFVar8;
    fVar21 = (float)((ulonglong)*(undefined8 *)(local_1e0 + lVar13) >> 0x20) *
             *(float *)(pFVar8 + 4);
    fVar22 = *(float *)(local_1e0 + lVar13 + 8) * *(float *)(pFVar8 + 8);
    fVar25 = fVar21 * fVar19 - fVar28 * fVar20;
    fVar26 = fVar22 * fVar20 - fVar21 * fVar23;
    fVar27 = fVar28 * fVar23 - fVar22 * fVar19;
    fVar26 = fVar26 + fVar26;
    fVar27 = fVar27 + fVar27;
    fVar25 = fVar25 + fVar25;
    pFVar8 = local_1d8.AllocatorInstance.Data + uVar7 * 0x30 + 0x10;
    fVar28 = fVar24 * fVar26 + fVar28 + (fVar25 * fVar20 - fVar27 * fVar23) + *(float *)pFVar8;
    fVar23 = fVar24 * fVar27 + fVar21 + (fVar26 * fVar23 - fVar25 * fVar19) + *(float *)(pFVar8 + 4)
    ;
    local_1a8 = CONCAT44(fVar23,fVar28);
    local_1a0 = fVar24 * fVar25 + fVar22 + (fVar27 * fVar19 - fVar26 * fVar20) +
                *(float *)(pFVar8 + 8);
    fVar15 = fVar15 + fVar17 * fVar28;
    fVar16 = fVar16 + fVar17 * fVar23;
    fVar18 = fVar18 + local_1a0 * fVar17;
  case (FScriptContainerElement)0x9:
    pFVar8 = (FScriptContainerElement *)(ulonglong)*(ushort *)(pFVar14 + lVar10 + 0x12);
    fVar17 = *(float *)(pFVar12 + lVar10 + 0x3c);
    local_1e8 = (uint)*(ushort *)(pFVar14 + lVar10 + 0x12);
    if (local_1d8.ArrayNum <= (int)local_1e8) {
      local_1f8 = pFVar8;
      local_1f0 = (longlong)local_1d8.ArrayNum;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar8 = (FScriptContainerElement *)(ulonglong)local_1e8;
    }
    uVar7 = (ulonglong)pFVar8 & 0xffff;
    pFVar8 = local_1d8.AllocatorInstance.Data + uVar7 * 0x30;
    fVar19 = *(float *)pFVar8;
    fVar20 = *(float *)(pFVar8 + 4);
    fVar23 = *(float *)(pFVar8 + 8);
    fVar24 = *(float *)(pFVar8 + 0xc);
    pFVar8 = local_1d8.AllocatorInstance.Data + uVar7 * 0x30 + 0x20;
    fVar28 = (float)*(undefined8 *)(local_1e0 + lVar13) * *(float *)pFVar8;
    fVar21 = (float)((ulonglong)*(undefined8 *)(local_1e0 + lVar13) >> 0x20) *
             *(float *)(pFVar8 + 4);
    fVar22 = *(float *)(local_1e0 + lVar13 + 8) * *(float *)(pFVar8 + 8);
    fVar25 = fVar21 * fVar19 - fVar28 * fVar20;
    fVar26 = fVar22 * fVar20 - fVar21 * fVar23;
    fVar27 = fVar28 * fVar23 - fVar22 * fVar19;
    fVar26 = fVar26 + fVar26;
    fVar27 = fVar27 + fVar27;
    fVar25 = fVar25 + fVar25;
    pFVar8 = local_1d8.AllocatorInstance.Data + uVar7 * 0x30 + 0x10;
    fVar28 = fVar24 * fVar26 + fVar28 + (fVar25 * fVar20 - fVar27 * fVar23) + *(float *)pFVar8;
    fVar23 = fVar24 * fVar27 + fVar21 + (fVar26 * fVar23 - fVar25 * fVar19) + *(float *)(pFVar8 + 4)
    ;
    local_19c = CONCAT44(fVar23,fVar28);
    local_194 = fVar24 * fVar25 + fVar22 + (fVar27 * fVar19 - fVar26 * fVar20) +
                *(float *)(pFVar8 + 8);
    fVar18 = fVar18 + local_194 * fVar17;
    fVar15 = fVar15 + fVar28 * fVar17;
    fVar16 = fVar16 + fVar23 * fVar17;
  case (FScriptContainerElement)0x8:
    pFVar8 = (FScriptContainerElement *)(ulonglong)*(ushort *)(pFVar14 + lVar10 + 0x10);
    fVar17 = *(float *)(pFVar12 + lVar10 + 0x38);
    local_1e8 = (uint)*(ushort *)(pFVar14 + lVar10 + 0x10);
    if (local_1d8.ArrayNum <= (int)local_1e8) {
      local_1f8 = pFVar8;
      local_1f0 = (longlong)local_1d8.ArrayNum;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar8 = (FScriptContainerElement *)(ulonglong)local_1e8;
    }
    uVar7 = (ulonglong)pFVar8 & 0xffff;
    pFVar8 = local_1d8.AllocatorInstance.Data + uVar7 * 0x30;
    fVar19 = *(float *)pFVar8;
    fVar20 = *(float *)(pFVar8 + 4);
    fVar23 = *(float *)(pFVar8 + 8);
    fVar24 = *(float *)(pFVar8 + 0xc);
    pFVar8 = local_1d8.AllocatorInstance.Data + uVar7 * 0x30 + 0x20;
    fVar28 = (float)*(undefined8 *)(local_1e0 + lVar13) * *(float *)pFVar8;
    fVar21 = (float)((ulonglong)*(undefined8 *)(local_1e0 + lVar13) >> 0x20) *
             *(float *)(pFVar8 + 4);
    fVar22 = *(float *)(local_1e0 + lVar13 + 8) * *(float *)(pFVar8 + 8);
    fVar25 = fVar21 * fVar19 - fVar28 * fVar20;
    fVar26 = fVar22 * fVar20 - fVar21 * fVar23;
    fVar27 = fVar28 * fVar23 - fVar22 * fVar19;
    fVar26 = fVar26 + fVar26;
    fVar27 = fVar27 + fVar27;
    fVar25 = fVar25 + fVar25;
    pFVar8 = local_1d8.AllocatorInstance.Data + uVar7 * 0x30 + 0x10;
    fVar28 = fVar24 * fVar26 + fVar28 + (fVar25 * fVar20 - fVar27 * fVar23) + *(float *)pFVar8;
    fVar23 = fVar24 * fVar27 + fVar21 + (fVar26 * fVar23 - fVar25 * fVar19) + *(float *)(pFVar8 + 4)
    ;
    local_190 = CONCAT44(fVar23,fVar28);
    local_188 = fVar24 * fVar25 + fVar22 + (fVar27 * fVar19 - fVar26 * fVar20) +
                *(float *)(pFVar8 + 8);
    fVar18 = fVar18 + local_188 * fVar17;
    fVar15 = fVar15 + fVar28 * fVar17;
    fVar16 = fVar16 + fVar23 * fVar17;
  case (FScriptContainerElement)0x7:
    pFVar8 = (FScriptContainerElement *)(ulonglong)*(ushort *)(pFVar14 + lVar10 + 0xe);
    fVar17 = *(float *)(pFVar12 + lVar10 + 0x34);
    local_1e8 = (uint)*(ushort *)(pFVar14 + lVar10 + 0xe);
    if (local_1d8.ArrayNum <= (int)local_1e8) {
      local_1f8 = pFVar8;
      local_1f0 = (longlong)local_1d8.ArrayNum;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar8 = (FScriptContainerElement *)(ulonglong)local_1e8;
    }
    uVar7 = (ulonglong)pFVar8 & 0xffff;
    pFVar8 = local_1d8.AllocatorInstance.Data + uVar7 * 0x30;
    fVar19 = *(float *)pFVar8;
    fVar20 = *(float *)(pFVar8 + 4);
    fVar23 = *(float *)(pFVar8 + 8);
    fVar24 = *(float *)(pFVar8 + 0xc);
    pFVar8 = local_1d8.AllocatorInstance.Data + uVar7 * 0x30 + 0x20;
    fVar28 = (float)*(undefined8 *)(local_1e0 + lVar13) * *(float *)pFVar8;
    fVar21 = (float)((ulonglong)*(undefined8 *)(local_1e0 + lVar13) >> 0x20) *
             *(float *)(pFVar8 + 4);
    fVar22 = *(float *)(local_1e0 + lVar13 + 8) * *(float *)(pFVar8 + 8);
    fVar25 = fVar21 * fVar19 - fVar28 * fVar20;
    fVar26 = fVar22 * fVar20 - fVar21 * fVar23;
    fVar27 = fVar28 * fVar23 - fVar22 * fVar19;
    fVar26 = fVar26 + fVar26;
    fVar27 = fVar27 + fVar27;
    fVar25 = fVar25 + fVar25;
    pFVar8 = local_1d8.AllocatorInstance.Data + uVar7 * 0x30 + 0x10;
    fVar28 = fVar24 * fVar26 + fVar28 + (fVar25 * fVar20 - fVar27 * fVar23) + *(float *)pFVar8;
    fVar23 = fVar24 * fVar27 + fVar21 + (fVar26 * fVar23 - fVar25 * fVar19) + *(float *)(pFVar8 + 4)
    ;
    local_184 = CONCAT44(fVar23,fVar28);
    local_17c = fVar24 * fVar25 + fVar22 + (fVar27 * fVar19 - fVar26 * fVar20) +
                *(float *)(pFVar8 + 8);
    fVar15 = fVar15 + fVar17 * fVar28;
    fVar16 = fVar16 + fVar17 * fVar23;
    fVar18 = fVar18 + fVar17 * local_17c;
  case (FScriptContainerElement)0x6:
    pFVar8 = (FScriptContainerElement *)(ulonglong)*(ushort *)(pFVar14 + lVar10 + 0xc);
    fVar17 = *(float *)(pFVar12 + lVar10 + 0x30);
    local_1e8 = (uint)*(ushort *)(pFVar14 + lVar10 + 0xc);
    if (local_1d8.ArrayNum <= (int)local_1e8) {
      local_1f8 = pFVar8;
      local_1f0 = (longlong)local_1d8.ArrayNum;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar8 = (FScriptContainerElement *)(ulonglong)local_1e8;
    }
    uVar7 = (ulonglong)pFVar8 & 0xffff;
    pFVar8 = local_1d8.AllocatorInstance.Data + uVar7 * 0x30;
    fVar19 = *(float *)pFVar8;
    fVar20 = *(float *)(pFVar8 + 4);
    fVar23 = *(float *)(pFVar8 + 8);
    fVar24 = *(float *)(pFVar8 + 0xc);
    pFVar8 = local_1d8.AllocatorInstance.Data + uVar7 * 0x30 + 0x20;
    fVar28 = (float)*(undefined8 *)(local_1e0 + lVar13) * *(float *)pFVar8;
    fVar21 = (float)((ulonglong)*(undefined8 *)(local_1e0 + lVar13) >> 0x20) *
             *(float *)(pFVar8 + 4);
    fVar22 = *(float *)(local_1e0 + lVar13 + 8) * *(float *)(pFVar8 + 8);
    fVar25 = fVar21 * fVar19 - fVar20 * fVar28;
    fVar26 = fVar22 * fVar20 - fVar23 * fVar21;
    fVar27 = fVar28 * fVar23 - fVar19 * fVar22;
    fVar26 = fVar26 + fVar26;
    fVar27 = fVar27 + fVar27;
    fVar25 = fVar25 + fVar25;
    pFVar8 = local_1d8.AllocatorInstance.Data + uVar7 * 0x30 + 0x10;
    fVar28 = fVar24 * fVar26 + fVar28 + (fVar25 * fVar20 - fVar27 * fVar23) + *(float *)pFVar8;
    fVar23 = fVar24 * fVar27 + fVar21 + (fVar26 * fVar23 - fVar25 * fVar19) + *(float *)(pFVar8 + 4)
    ;
    local_178 = CONCAT44(fVar23,fVar28);
    local_170 = fVar24 * fVar25 + fVar22 + (fVar27 * fVar19 - fVar26 * fVar20) +
                *(float *)(pFVar8 + 8);
    fVar15 = fVar15 + fVar17 * fVar28;
    fVar16 = fVar16 + fVar17 * fVar23;
    fVar18 = fVar18 + local_170 * fVar17;
  case (FScriptContainerElement)0x5:
    pFVar8 = (FScriptContainerElement *)(ulonglong)*(ushort *)(pFVar14 + lVar10 + 10);
    fVar17 = *(float *)(pFVar12 + lVar10 + 0x2c);
    local_1e8 = (uint)*(ushort *)(pFVar14 + lVar10 + 10);
    if (local_1d8.ArrayNum <= (int)local_1e8) {
      local_1f8 = pFVar8;
      local_1f0 = (longlong)local_1d8.ArrayNum;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar8 = (FScriptContainerElement *)(ulonglong)local_1e8;
    }
    uVar7 = (ulonglong)pFVar8 & 0xffff;
    pFVar8 = local_1d8.AllocatorInstance.Data + uVar7 * 0x30;
    fVar19 = *(float *)pFVar8;
    fVar20 = *(float *)(pFVar8 + 4);
    fVar23 = *(float *)(pFVar8 + 8);
    fVar24 = *(float *)(pFVar8 + 0xc);
    pFVar8 = local_1d8.AllocatorInstance.Data + uVar7 * 0x30 + 0x20;
    fVar28 = (float)*(undefined8 *)(local_1e0 + lVar13) * *(float *)pFVar8;
    fVar21 = (float)((ulonglong)*(undefined8 *)(local_1e0 + lVar13) >> 0x20) *
             *(float *)(pFVar8 + 4);
    fVar22 = *(float *)(local_1e0 + lVar13 + 8) * *(float *)(pFVar8 + 8);
    fVar25 = fVar21 * fVar19 - fVar20 * fVar28;
    fVar26 = fVar22 * fVar20 - fVar23 * fVar21;
    fVar27 = fVar28 * fVar23 - fVar19 * fVar22;
    fVar26 = fVar26 + fVar26;
    fVar27 = fVar27 + fVar27;
    fVar25 = fVar25 + fVar25;
    pFVar8 = local_1d8.AllocatorInstance.Data + uVar7 * 0x30 + 0x10;
    fVar28 = fVar24 * fVar26 + fVar28 + (fVar25 * fVar20 - fVar27 * fVar23) + *(float *)pFVar8;
    fVar23 = fVar24 * fVar27 + fVar21 + (fVar26 * fVar23 - fVar25 * fVar19) + *(float *)(pFVar8 + 4)
    ;
    local_16c = CONCAT44(fVar23,fVar28);
    local_164 = fVar24 * fVar25 + fVar22 + (fVar27 * fVar19 - fVar26 * fVar20) +
                *(float *)(pFVar8 + 8);
    fVar15 = fVar15 + fVar17 * fVar28;
    fVar16 = fVar16 + fVar17 * fVar23;
    fVar18 = fVar18 + local_164 * fVar17;
  case (FScriptContainerElement)0x4:
    pFVar8 = (FScriptContainerElement *)(ulonglong)*(ushort *)(pFVar14 + lVar10 + 8);
    fVar17 = *(float *)(pFVar12 + lVar10 + 0x28);
    local_1e8 = (uint)*(ushort *)(pFVar14 + lVar10 + 8);
    if (local_1d8.ArrayNum <= (int)local_1e8) {
      local_1f8 = pFVar8;
      local_1f0 = (longlong)local_1d8.ArrayNum;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar8 = (FScriptContainerElement *)(ulonglong)local_1e8;
    }
    uVar7 = (ulonglong)pFVar8 & 0xffff;
    pFVar8 = local_1d8.AllocatorInstance.Data + uVar7 * 0x30;
    fVar19 = *(float *)pFVar8;
    fVar20 = *(float *)(pFVar8 + 4);
    fVar23 = *(float *)(pFVar8 + 8);
    fVar24 = *(float *)(pFVar8 + 0xc);
    pFVar8 = local_1d8.AllocatorInstance.Data + uVar7 * 0x30 + 0x20;
    fVar28 = (float)*(undefined8 *)(local_1e0 + lVar13) * *(float *)pFVar8;
    fVar21 = (float)((ulonglong)*(undefined8 *)(local_1e0 + lVar13) >> 0x20) *
             *(float *)(pFVar8 + 4);
    fVar22 = *(float *)(local_1e0 + lVar13 + 8) * *(float *)(pFVar8 + 8);
    fVar25 = fVar21 * fVar19 - fVar20 * fVar28;
    fVar26 = fVar22 * fVar20 - fVar23 * fVar21;
    fVar27 = fVar28 * fVar23 - fVar19 * fVar22;
    fVar26 = fVar26 + fVar26;
    fVar27 = fVar27 + fVar27;
    fVar25 = fVar25 + fVar25;
    pFVar8 = local_1d8.AllocatorInstance.Data + uVar7 * 0x30 + 0x10;
    fVar28 = fVar24 * fVar26 + fVar28 + (fVar25 * fVar20 - fVar27 * fVar23) + *(float *)pFVar8;
    fVar23 = fVar24 * fVar27 + fVar21 + (fVar26 * fVar23 - fVar25 * fVar19) + *(float *)(pFVar8 + 4)
    ;
    local_160 = CONCAT44(fVar23,fVar28);
    local_158 = fVar24 * fVar25 + fVar22 + (fVar27 * fVar19 - fVar26 * fVar20) +
                *(float *)(pFVar8 + 8);
    fVar18 = fVar18 + local_158 * fVar17;
    fVar15 = fVar15 + fVar28 * fVar17;
    fVar16 = fVar16 + fVar23 * fVar17;
  case (FScriptContainerElement)0x3:
    pFVar8 = (FScriptContainerElement *)(ulonglong)*(ushort *)(pFVar14 + lVar10 + 6);
    fVar17 = *(float *)(pFVar12 + lVar10 + 0x24);
    local_1e8 = (uint)*(ushort *)(pFVar14 + lVar10 + 6);
    if (local_1d8.ArrayNum <= (int)local_1e8) {
      local_1f8 = pFVar8;
      local_1f0 = (longlong)local_1d8.ArrayNum;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar8 = (FScriptContainerElement *)(ulonglong)local_1e8;
    }
    uVar7 = (ulonglong)pFVar8 & 0xffff;
    pFVar8 = local_1d8.AllocatorInstance.Data + uVar7 * 0x30;
    fVar19 = *(float *)pFVar8;
    fVar20 = *(float *)(pFVar8 + 4);
    fVar23 = *(float *)(pFVar8 + 8);
    fVar24 = *(float *)(pFVar8 + 0xc);
    pFVar8 = local_1d8.AllocatorInstance.Data + uVar7 * 0x30 + 0x20;
    fVar28 = (float)*(undefined8 *)(local_1e0 + lVar13) * *(float *)pFVar8;
    fVar21 = (float)((ulonglong)*(undefined8 *)(local_1e0 + lVar13) >> 0x20) *
             *(float *)(pFVar8 + 4);
    fVar22 = *(float *)(local_1e0 + lVar13 + 8) * *(float *)(pFVar8 + 8);
    fVar25 = fVar21 * fVar19 - fVar20 * fVar28;
    fVar26 = fVar22 * fVar20 - fVar23 * fVar21;
    fVar27 = fVar28 * fVar23 - fVar19 * fVar22;
    fVar26 = fVar26 + fVar26;
    fVar27 = fVar27 + fVar27;
    fVar25 = fVar25 + fVar25;
    pFVar8 = local_1d8.AllocatorInstance.Data + uVar7 * 0x30 + 0x10;
    fVar28 = fVar24 * fVar26 + fVar28 + (fVar25 * fVar20 - fVar27 * fVar23) + *(float *)pFVar8;
    fVar23 = fVar24 * fVar27 + fVar21 + (fVar26 * fVar23 - fVar25 * fVar19) + *(float *)(pFVar8 + 4)
    ;
    local_154 = CONCAT44(fVar23,fVar28);
    local_14c = fVar24 * fVar25 + fVar22 + (fVar27 * fVar19 - fVar26 * fVar20) +
                *(float *)(pFVar8 + 8);
    fVar18 = fVar18 + local_14c * fVar17;
    fVar15 = fVar15 + fVar28 * fVar17;
    fVar16 = fVar16 + fVar23 * fVar17;
  case (FScriptContainerElement)0x2:
    pFVar8 = (FScriptContainerElement *)(ulonglong)*(ushort *)(pFVar14 + lVar10 + 4);
    fVar17 = *(float *)(pFVar12 + lVar10 + 0x20);
    local_1e8 = (uint)*(ushort *)(pFVar14 + lVar10 + 4);
    if (local_1d8.ArrayNum <= (int)local_1e8) {
      local_1f8 = pFVar8;
      local_1f0 = (longlong)local_1d8.ArrayNum;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar8 = (FScriptContainerElement *)(ulonglong)local_1e8;
    }
    uVar7 = (ulonglong)pFVar8 & 0xffff;
    pFVar8 = local_1d8.AllocatorInstance.Data + uVar7 * 0x30;
    fVar19 = *(float *)pFVar8;
    fVar20 = *(float *)(pFVar8 + 4);
    fVar23 = *(float *)(pFVar8 + 8);
    fVar24 = *(float *)(pFVar8 + 0xc);
    pFVar8 = local_1d8.AllocatorInstance.Data + uVar7 * 0x30 + 0x20;
    fVar28 = (float)*(undefined8 *)(local_1e0 + lVar13) * *(float *)pFVar8;
    fVar21 = (float)((ulonglong)*(undefined8 *)(local_1e0 + lVar13) >> 0x20) *
             *(float *)(pFVar8 + 4);
    fVar22 = *(float *)(local_1e0 + lVar13 + 8) * *(float *)(pFVar8 + 8);
    fVar25 = fVar21 * fVar19 - fVar28 * fVar20;
    fVar26 = fVar22 * fVar20 - fVar21 * fVar23;
    fVar27 = fVar28 * fVar23 - fVar22 * fVar19;
    fVar26 = fVar26 + fVar26;
    fVar27 = fVar27 + fVar27;
    fVar25 = fVar25 + fVar25;
    pFVar8 = local_1d8.AllocatorInstance.Data + uVar7 * 0x30 + 0x10;
    fVar28 = fVar24 * fVar26 + fVar28 + (fVar25 * fVar20 - fVar27 * fVar23) + *(float *)pFVar8;
    fVar23 = fVar24 * fVar27 + fVar21 + (fVar26 * fVar23 - fVar25 * fVar19) + *(float *)(pFVar8 + 4)
    ;
    local_148 = CONCAT44(fVar23,fVar28);
    local_140 = fVar24 * fVar25 + fVar22 + (fVar27 * fVar19 - fVar26 * fVar20) +
                *(float *)(pFVar8 + 8);
    fVar15 = fVar15 + fVar28 * fVar17;
    fVar16 = fVar16 + fVar23 * fVar17;
    fVar18 = fVar18 + fVar17 * local_140;
  }
  fVar20 = *(float *)(pFVar12 + lVar10 + 0x1c);
  pFVar12 = (FScriptContainerElement *)(ulonglong)*(ushort *)(pFVar14 + lVar10 + 2);
  if ((local_1d8.ArrayNum <= (int)(uint)*(ushort *)(pFVar14 + lVar10 + 2)) &&
     (local_1f8 = pFVar12, local_1f0 = (longlong)local_1d8.ArrayNum,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar5
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar14 = local_1d8.AllocatorInstance.Data + (longlong)pFVar12 * 0x30;
  fVar17 = *(float *)pFVar14;
  fVar19 = *(float *)(pFVar14 + 4);
  fVar23 = *(float *)(pFVar14 + 8);
  fVar24 = *(float *)(pFVar14 + 0xc);
  pFVar14 = local_1d8.AllocatorInstance.Data + (longlong)pFVar12 * 0x30 + 0x20;
  fVar28 = (float)*(undefined8 *)(local_1e0 + lVar13) * *(float *)pFVar14;
  fVar21 = (float)((ulonglong)*(undefined8 *)(local_1e0 + lVar13) >> 0x20) * *(float *)(pFVar14 + 4)
  ;
  fVar22 = *(float *)(local_1e0 + lVar13 + 8) * *(float *)(pFVar14 + 8);
  fVar25 = fVar21 * fVar17 - fVar28 * fVar19;
  fVar26 = fVar22 * fVar19 - fVar21 * fVar23;
  fVar27 = fVar28 * fVar23 - fVar22 * fVar17;
  fVar26 = fVar26 + fVar26;
  fVar27 = fVar27 + fVar27;
  fVar25 = fVar25 + fVar25;
  pFVar14 = local_1d8.AllocatorInstance.Data + (longlong)pFVar12 * 0x30 + 0x10;
  fVar28 = fVar24 * fVar26 + fVar28 + (fVar25 * fVar19 - fVar27 * fVar23) + *(float *)pFVar14;
  fVar23 = fVar24 * fVar27 + fVar21 + (fVar26 * fVar23 - fVar25 * fVar17) + *(float *)(pFVar14 + 4);
  local_13c = CONCAT44(fVar23,fVar28);
  local_134 = fVar24 * fVar25 + fVar22 + (fVar27 * fVar17 - fVar26 * fVar19) +
              *(float *)(pFVar14 + 8);
  fVar17 = fVar20 * local_134 + fVar18;
  fVar19 = fVar23 * fVar20 + fVar16;
  fVar20 = fVar28 * fVar20 + fVar15;
switchD_143e4f487_caseD_0:
  pTVar4 = local_130;
  uVar6 = 0;
  if ((int)uVar9 < local_130->ArrayNum) {
    uVar6 = uVar11;
  }
  if (uVar6 == 0) {
    local_1f8 = (FScriptContainerElement *)(longlong)(int)uVar9;
    local_1f0 = (longlong)local_130->ArrayNum;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar2 = pTVar4->DataPtr;
  uVar9 = uVar9 + 1;
  lVar10 = lVar10 + 0x4c;
  local_1c8 = local_1c8 + 1;
  *(float *)(&pTVar2->field_0x0 + lVar13) = fVar20;
  *(float *)(&pTVar2->field_0x4 + lVar13) = fVar19;
  *(float *)(&pTVar2->field_0x8 + lVar13) = fVar17;
  lVar13 = lVar13 + 0xc;
  if ((this->BoneData).ArrayNum <= (int)uVar9) goto LAB_143e500c4;
  goto LAB_143e4f300;
}

// UpdateSpatialHierarchy @ 143e61c10

void __thiscall
Chaos::FSkinnedTriangleMesh::UpdateSpatialHierarchy(FSkinnedTriangleMesh *this,float param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_38;
  TTriangleMeshBvData<float> local_28 [2];
  
  local_38.DataPtr = (TVector<float,3> *)(this->LocalPositions).AllocatorInstance.Data;
  iVar1 = (this->LocalPositions).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_28[0].TmData = &this->TriangleMesh;
  local_28[0].Points = &local_38;
  local_38.ArrayNum = iVar1;
  THierarchicalSpatialHash<int,float>::Initialize<Chaos::TTriangleMeshBvData<float>_>
            (&this->SpatialHash,local_28,param_1);
  return;
}

