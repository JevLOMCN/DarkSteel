// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 1

// FMeshPayload @ 14e708130

FMeshPayload * __thiscall
UE::Interchange::FMeshPayload::FMeshPayload(FMeshPayload *this,FMeshPayload *param_1)

{
  bool bVar1;
  double dVar2;
  
  (this->MeshName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshName).Data.AllocatorInstance.Data = (param_1->MeshName).Data.AllocatorInstance.Data;
  (param_1->MeshName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshName).Data.ArrayNum = (param_1->MeshName).Data.ArrayNum;
  (this->MeshName).Data.ArrayMax = (param_1->MeshName).Data.ArrayMax;
  (param_1->MeshName).Data.ArrayNum = 0;
  (param_1->MeshName).Data.ArrayMax = 0;
  (this->PayloadData).bIsSet = false;
  bVar1 = (param_1->PayloadData).bIsSet;
  (this->PayloadData).bIsSet = bVar1;
  if (bVar1 != false) {
    FMeshPayloadData::FMeshPayloadData
              (&(this->PayloadData).TypedValue,&(param_1->PayloadData).TypedValue);
  }
  dVar2 = (param_1->Transform).Rotation.XY.m128d_f64[1];
  (this->Transform).Rotation.XY.m128d_f64[0] = (param_1->Transform).Rotation.XY.m128d_f64[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Transform).Rotation.ZW.m128d_f64[1];
  (this->Transform).Rotation.ZW.m128d_f64[0] = (param_1->Transform).Rotation.ZW.m128d_f64[0];
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Transform).Translation.XY.m128d_f64[1];
  (this->Transform).Translation.XY.m128d_f64[0] = (param_1->Transform).Translation.XY.m128d_f64[0];
  (this->Transform).Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Transform).Translation.ZW.m128d_f64[1];
  (this->Transform).Translation.ZW.m128d_f64[0] = (param_1->Transform).Translation.ZW.m128d_f64[0];
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Transform).Scale3D.XY.m128d_f64[1];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (param_1->Transform).Scale3D.XY.m128d_f64[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Transform).Scale3D.ZW.m128d_f64[1];
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (param_1->Transform).Scale3D.ZW.m128d_f64[0];
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar2;
  return this;
}

