// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlanarCut
// Functions: 3

// FMeshData @ 14c9a1820

FMeshData * __thiscall
UE::PlanarCut::FDynamicMeshCollection::FMeshData::FMeshData(FMeshData *this,FMeshData *param_1)

{
  double dVar1;
  
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&this->AugMesh,&param_1->AugMesh);
  this->TransformIndex = param_1->TransformIndex;
  dVar1 = (param_1->FromCollection).Rotation.XY.m128d_f64[1];
  (this->FromCollection).Rotation.XY.m128d_f64[0] =
       (param_1->FromCollection).Rotation.XY.m128d_f64[0];
  (this->FromCollection).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->FromCollection).Rotation.ZW.m128d_f64[1];
  (this->FromCollection).Rotation.ZW.m128d_f64[0] =
       (param_1->FromCollection).Rotation.ZW.m128d_f64[0];
  (this->FromCollection).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->FromCollection).Translation.XY.m128d_f64[1];
  (this->FromCollection).Translation.XY.m128d_f64[0] =
       (param_1->FromCollection).Translation.XY.m128d_f64[0];
  (this->FromCollection).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->FromCollection).Translation.ZW.m128d_f64[1];
  (this->FromCollection).Translation.ZW.m128d_f64[0] =
       (param_1->FromCollection).Translation.ZW.m128d_f64[0];
  (this->FromCollection).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->FromCollection).Scale3D.XY.m128d_f64[1];
  (this->FromCollection).Scale3D.XY.m128d_f64[0] = (param_1->FromCollection).Scale3D.XY.m128d_f64[0]
  ;
  (this->FromCollection).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->FromCollection).Scale3D.ZW.m128d_f64[1];
  (this->FromCollection).Scale3D.ZW.m128d_f64[0] = (param_1->FromCollection).Scale3D.ZW.m128d_f64[0]
  ;
  (this->FromCollection).Scale3D.ZW.m128d_f64[1] = dVar1;
  this->bHasBounds = param_1->bHasBounds;
  dVar1 = (param_1->Bounds).Min.field0_0x0._s_0.Y;
  (this->Bounds).Min.field0_0x0._s_0.X = (param_1->Bounds).Min.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Bounds).Max.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Z = (param_1->Bounds).Min.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->Bounds).Max.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.Y = (param_1->Bounds).Max.field0_0x0._s_0.Y;
  (this->Bounds).Max.field0_0x0._s_0.Z = dVar1;
  *(undefined8 *)&(this->MeshToCollectionFaceMapping).field_0x0 = 0;
  *(undefined8 *)&(this->MeshToCollectionFaceMapping).field_0x8 = 0;
  *(undefined8 *)&(this->MeshToCollectionFaceMapping).field_0x20 = 0;
  *(undefined4 *)&(this->MeshToCollectionFaceMapping).field_0x28 = 0;
  *(undefined4 *)&(this->MeshToCollectionFaceMapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->MeshToCollectionFaceMapping).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MeshToCollectionFaceMapping).field_0x34 = 0;
  *(undefined8 *)&(this->MeshToCollectionFaceMapping).field_0x40 = 0;
  *(undefined4 *)&(this->MeshToCollectionFaceMapping).field_0x48 = 0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::operator=
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->MeshToCollectionFaceMapping,
             (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &param_1->MeshToCollectionFaceMapping);
  return this;
}

// FMeshData @ 14c9a1920

FMeshData * __thiscall
UE::PlanarCut::FDynamicMeshCollection::FMeshData::FMeshData
          (FMeshData *this,FDynamicMesh3 *param_1,int param_2,TTransform<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&this->AugMesh,param_1);
  dVar1 = (param_3->Rotation).XY.m128d_f64[1];
  dVar2 = (param_3->Rotation).ZW.m128d_f64[0];
  dVar3 = (param_3->Rotation).ZW.m128d_f64[1];
  (this->FromCollection).Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
  (this->FromCollection).Rotation.XY.m128d_f64[1] = dVar1;
  this->TransformIndex = param_2;
  dVar1 = (param_3->Translation).XY.m128d_f64[0];
  dVar4 = (param_3->Translation).XY.m128d_f64[1];
  (this->FromCollection).Rotation.ZW.m128d_f64[0] = dVar2;
  (this->FromCollection).Rotation.ZW.m128d_f64[1] = dVar3;
  this->bHasBounds = false;
  dVar2 = (param_3->Translation).ZW.m128d_f64[0];
  dVar3 = (param_3->Translation).ZW.m128d_f64[1];
  (this->FromCollection).Translation.XY.m128d_f64[0] = dVar1;
  (this->FromCollection).Translation.XY.m128d_f64[1] = dVar4;
  dVar1 = (param_3->Scale3D).XY.m128d_f64[0];
  dVar4 = (param_3->Scale3D).XY.m128d_f64[1];
  (this->FromCollection).Translation.ZW.m128d_f64[0] = dVar2;
  (this->FromCollection).Translation.ZW.m128d_f64[1] = dVar3;
  dVar2 = (param_3->Scale3D).ZW.m128d_f64[0];
  dVar3 = (param_3->Scale3D).ZW.m128d_f64[1];
  (this->FromCollection).Scale3D.XY.m128d_f64[0] = dVar1;
  (this->FromCollection).Scale3D.XY.m128d_f64[1] = dVar4;
  (this->FromCollection).Scale3D.ZW.m128d_f64[0] = dVar2;
  (this->FromCollection).Scale3D.ZW.m128d_f64[1] = dVar3;
  (this->Bounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->Bounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->Bounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->Bounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->Bounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->Bounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  *(undefined8 *)&this->MeshToCollectionFaceMapping = 0;
  *(undefined8 *)&(this->MeshToCollectionFaceMapping).field_0x8 = 0;
  *(undefined8 *)&(this->MeshToCollectionFaceMapping).field_0x20 = 0;
  *(undefined4 *)&(this->MeshToCollectionFaceMapping).field_0x28 = 0;
  *(undefined4 *)&(this->MeshToCollectionFaceMapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->MeshToCollectionFaceMapping).field_0x34 = 0;
  *(undefined4 *)&(this->MeshToCollectionFaceMapping).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MeshToCollectionFaceMapping).field_0x40 = 0;
  *(undefined4 *)&(this->MeshToCollectionFaceMapping).field_0x48 = 0;
  return this;
}

// FMeshData @ 14c9a1a30

FMeshData * __thiscall
UE::PlanarCut::FDynamicMeshCollection::FMeshData::FMeshData(FMeshData *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&this->AugMesh);
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->FromCollection).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->FromCollection).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->FromCollection).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->FromCollection).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->FromCollection).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->FromCollection).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->FromCollection).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->FromCollection).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->FromCollection).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->FromCollection).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->FromCollection).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->FromCollection).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  this->bHasBounds = false;
  (this->Bounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->Bounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->Bounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->Bounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->Bounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->Bounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  *(undefined8 *)&this->MeshToCollectionFaceMapping = 0;
  *(undefined8 *)&(this->MeshToCollectionFaceMapping).field_0x8 = 0;
  *(undefined8 *)&(this->MeshToCollectionFaceMapping).field_0x20 = 0;
  *(undefined4 *)&(this->MeshToCollectionFaceMapping).field_0x28 = 0;
  *(undefined4 *)&(this->MeshToCollectionFaceMapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->MeshToCollectionFaceMapping).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MeshToCollectionFaceMapping).field_0x34 = 0;
  *(undefined8 *)&(this->MeshToCollectionFaceMapping).field_0x40 = 0;
  *(undefined4 *)&(this->MeshToCollectionFaceMapping).field_0x48 = 0;
  AugmentedDynamicMesh::Augment(&this->AugMesh,param_1);
  return this;
}

