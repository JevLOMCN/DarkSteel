// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 1

// GetTransform @ 14637c160

TTransform<double> * __thiscall
FKSphereElem::GetTransform(FKSphereElem *this,TTransform<double> *__return_storage_ptr__)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)fVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)fVar3;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)fVar4;
  dVar1 = (this->Center).field0_0x0._s_0.Z;
  dVar5 = (this->Center).field0_0x0._s_0.Y;
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (this->Center).field0_0x0._s_0.X;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar5;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)fVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)fVar3;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = (double)fVar4;
  return __return_storage_ptr__;
}

