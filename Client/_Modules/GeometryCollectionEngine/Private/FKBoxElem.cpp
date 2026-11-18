// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 1

// GetTransform @ 14637c090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __thiscall
FKBoxElem::GetTransform(FKBoxElem *this,TTransform<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TQuat<double> *pTVar4;
  TQuat<double> local_28;
  
  pTVar4 = UE::Math::TRotator<double>::Quaternion(&this->Rotation,&local_28);
  dVar1 = pTVar4->Y;
  dVar2 = pTVar4->Z;
  dVar3 = pTVar4->W;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = pTVar4->X;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (this->Center).field0_0x0._s_0.Y;
  dVar1 = (this->Center).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (this->Center).field0_0x0._s_0.X;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  dVar1 = _UNK_150689688;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar1;
  dVar1 = _UNK_150689518;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar1;
  return __return_storage_ptr__;
}

