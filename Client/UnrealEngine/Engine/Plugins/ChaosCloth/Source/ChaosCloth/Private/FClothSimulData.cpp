// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 1

// FClothSimulData @ 14db8edb0

FClothSimulData * __thiscall
FClothSimulData::FClothSimulData(FClothSimulData *this,FClothSimulData *param_1)

{
  double dVar1;
  
  (this->Positions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Positions).AllocatorInstance.Data = (param_1->Positions).AllocatorInstance.Data;
  (param_1->Positions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Positions).ArrayNum = (param_1->Positions).ArrayNum;
  (this->Positions).ArrayMax = (param_1->Positions).ArrayMax;
  (param_1->Positions).ArrayNum = 0;
  (param_1->Positions).ArrayMax = 0;
  (this->Normals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Normals).AllocatorInstance.Data = (param_1->Normals).AllocatorInstance.Data;
  (param_1->Normals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Normals).ArrayNum = (param_1->Normals).ArrayNum;
  (this->Normals).ArrayMax = (param_1->Normals).ArrayMax;
  (param_1->Normals).ArrayNum = 0;
  (param_1->Normals).ArrayMax = 0;
  dVar1 = (param_1->Transform).Rotation.XY.m128d_f64[1];
  (this->Transform).Rotation.XY.m128d_f64[0] = (param_1->Transform).Rotation.XY.m128d_f64[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Transform).Rotation.ZW.m128d_f64[1];
  (this->Transform).Rotation.ZW.m128d_f64[0] = (param_1->Transform).Rotation.ZW.m128d_f64[0];
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Transform).Translation.XY.m128d_f64[1];
  (this->Transform).Translation.XY.m128d_f64[0] = (param_1->Transform).Translation.XY.m128d_f64[0];
  (this->Transform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Transform).Translation.ZW.m128d_f64[1];
  (this->Transform).Translation.ZW.m128d_f64[0] = (param_1->Transform).Translation.ZW.m128d_f64[0];
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Transform).Scale3D.XY.m128d_f64[1];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (param_1->Transform).Scale3D.XY.m128d_f64[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Transform).Scale3D.ZW.m128d_f64[1];
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (param_1->Transform).Scale3D.ZW.m128d_f64[0];
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->ComponentRelativeTransform).Rotation.XY.m128d_f64[1];
  (this->ComponentRelativeTransform).Rotation.XY.m128d_f64[0] =
       (param_1->ComponentRelativeTransform).Rotation.XY.m128d_f64[0];
  (this->ComponentRelativeTransform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->ComponentRelativeTransform).Rotation.ZW.m128d_f64[1];
  (this->ComponentRelativeTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->ComponentRelativeTransform).Rotation.ZW.m128d_f64[0];
  (this->ComponentRelativeTransform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->ComponentRelativeTransform).Translation.XY.m128d_f64[1];
  (this->ComponentRelativeTransform).Translation.XY.m128d_f64[0] =
       (param_1->ComponentRelativeTransform).Translation.XY.m128d_f64[0];
  (this->ComponentRelativeTransform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->ComponentRelativeTransform).Translation.ZW.m128d_f64[1];
  (this->ComponentRelativeTransform).Translation.ZW.m128d_f64[0] =
       (param_1->ComponentRelativeTransform).Translation.ZW.m128d_f64[0];
  (this->ComponentRelativeTransform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->ComponentRelativeTransform).Scale3D.XY.m128d_f64[1];
  (this->ComponentRelativeTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->ComponentRelativeTransform).Scale3D.XY.m128d_f64[0];
  (this->ComponentRelativeTransform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->ComponentRelativeTransform).Scale3D.ZW.m128d_f64[1];
  (this->ComponentRelativeTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->ComponentRelativeTransform).Scale3D.ZW.m128d_f64[0];
  (this->ComponentRelativeTransform).Scale3D.ZW.m128d_f64[1] = dVar1;
  this->LODIndex = param_1->LODIndex;
  return this;
}

