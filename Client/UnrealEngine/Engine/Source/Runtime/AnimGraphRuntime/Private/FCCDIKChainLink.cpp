// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 1

// FCCDIKChainLink @ 146406f00

FCCDIKChainLink * __thiscall
FCCDIKChainLink::FCCDIKChainLink(FCCDIKChainLink *this,FCCDIKChainLink *param_1)

{
  int iVar1;
  double dVar2;
  
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
  dVar2 = (param_1->LocalTransform).Rotation.XY.m128d_f64[1];
  (this->LocalTransform).Rotation.XY.m128d_f64[0] =
       (param_1->LocalTransform).Rotation.XY.m128d_f64[0];
  (this->LocalTransform).Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->LocalTransform).Rotation.ZW.m128d_f64[1];
  (this->LocalTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->LocalTransform).Rotation.ZW.m128d_f64[0];
  (this->LocalTransform).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->LocalTransform).Translation.XY.m128d_f64[1];
  (this->LocalTransform).Translation.XY.m128d_f64[0] =
       (param_1->LocalTransform).Translation.XY.m128d_f64[0];
  (this->LocalTransform).Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->LocalTransform).Translation.ZW.m128d_f64[1];
  (this->LocalTransform).Translation.ZW.m128d_f64[0] =
       (param_1->LocalTransform).Translation.ZW.m128d_f64[0];
  (this->LocalTransform).Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->LocalTransform).Scale3D.XY.m128d_f64[1];
  (this->LocalTransform).Scale3D.XY.m128d_f64[0] = (param_1->LocalTransform).Scale3D.XY.m128d_f64[0]
  ;
  (this->LocalTransform).Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->LocalTransform).Scale3D.ZW.m128d_f64[1];
  (this->LocalTransform).Scale3D.ZW.m128d_f64[0] = (param_1->LocalTransform).Scale3D.ZW.m128d_f64[0]
  ;
  (this->LocalTransform).Scale3D.ZW.m128d_f64[1] = dVar2;
  iVar1 = param_1->TransformIndex;
  (this->ChildZeroLengthTransformIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->TransformIndex = iVar1;
  (this->ChildZeroLengthTransformIndices).AllocatorInstance.Data =
       (param_1->ChildZeroLengthTransformIndices).AllocatorInstance.Data;
  (param_1->ChildZeroLengthTransformIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->ChildZeroLengthTransformIndices).ArrayNum =
       (param_1->ChildZeroLengthTransformIndices).ArrayNum;
  (this->ChildZeroLengthTransformIndices).ArrayMax =
       (param_1->ChildZeroLengthTransformIndices).ArrayMax;
  (param_1->ChildZeroLengthTransformIndices).ArrayNum = 0;
  (param_1->ChildZeroLengthTransformIndices).ArrayMax = 0;
  this->CurrentAngleDelta = param_1->CurrentAngleDelta;
  return this;
}

