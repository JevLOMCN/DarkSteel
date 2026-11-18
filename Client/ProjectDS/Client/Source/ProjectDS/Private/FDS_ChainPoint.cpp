// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b43a2c0

UScriptStruct * __cdecl FDS_ChainPoint::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ChainPoint.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ChainPoint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ChainPoint,(UObject *)pUVar1,L"DS_ChainPoint"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FDS_ChainPoint.OuterSingleton;
}

// FDS_ChainPoint @ 14b43b930

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FDS_ChainPoint * __thiscall FDS_ChainPoint::FDS_ChainPoint(FDS_ChainPoint *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TQuat<double> *pTVar4;
  TQuat<double> local_28;
  
  this->free = true;
  (this->position).field0_0x0._s_0.X = 0.0;
  (this->position).field0_0x0._s_0.Y = 0.0;
  (this->position).field0_0x0._s_0.Z = 0.0;
  (this->oldPosition).field0_0x0._s_0.X = 0.0;
  (this->oldPosition).field0_0x0._s_0.Y = 0.0;
  (this->oldPosition).field0_0x0._s_0.Z = 0.0;
  (this->velocity).field0_0x0._s_0.X = 0.0;
  (this->velocity).field0_0x0._s_0.Y = 0.0;
  (this->velocity).field0_0x0._s_0.Z = 0.0;
  (this->force).field0_0x0._s_0.X = 0.0;
  (this->force).field0_0x0._s_0.Y = 0.0;
  (this->force).field0_0x0._s_0.Z = 0.0;
  (this->rotation).Pitch = 0.0;
  (this->rotation).Yaw = 0.0;
  (this->rotation).Roll = 0.0;
  pTVar4 = UE::Math::TRotator<double>::Quaternion(&this->rotation,&local_28);
  dVar1 = pTVar4->Y;
  dVar2 = pTVar4->Z;
  dVar3 = pTVar4->W;
  (this->transform).Rotation.XY.m128d_f64[0] = pTVar4->X;
  (this->transform).Rotation.XY.m128d_f64[1] = dVar1;
  (this->transform).Rotation.ZW.m128d_f64[0] = dVar2;
  (this->transform).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar2 = (this->position).field0_0x0._s_0.Y;
  dVar1 = (this->position).field0_0x0._s_0.Z;
  (this->transform).Translation.XY.m128d_f64[0] = (this->position).field0_0x0._s_0.X;
  (this->transform).Translation.XY.m128d_f64[1] = dVar2;
  (this->transform).Translation.ZW.m128d_f64[0] = dVar1;
  (this->transform).Translation.ZW.m128d_f64[1] = 0.0;
  dVar1 = _UNK_150689688;
  (this->transform).Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  (this->transform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = _UNK_150689518;
  (this->transform).Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  (this->transform).Scale3D.ZW.m128d_f64[1] = dVar1;
  this->time = 0.0;
  this->index = 0;
  return this;
}

