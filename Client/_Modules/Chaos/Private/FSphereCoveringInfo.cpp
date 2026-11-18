// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// FSphereCoveringInfo @ 144012ac0

FSphereCoveringInfo * __thiscall
FGeometryCollectionConvexUtility::FSphereCoveringInfo::FSphereCoveringInfo
          (FSphereCoveringInfo *this,FSphereCoveringInfo *param_1)

{
  double dVar1;
  
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
  this->SourceBoneIndex = param_1->SourceBoneIndex;
  (this->SphereCovering).Position.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SphereCovering).Position.AllocatorInstance.Data =
       (param_1->SphereCovering).Position.AllocatorInstance.Data;
  (param_1->SphereCovering).Position.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SphereCovering).Position.ArrayNum = (param_1->SphereCovering).Position.ArrayNum;
  (this->SphereCovering).Position.ArrayMax = (param_1->SphereCovering).Position.ArrayMax;
  (param_1->SphereCovering).Position.ArrayNum = 0;
  (param_1->SphereCovering).Position.ArrayMax = 0;
  (this->SphereCovering).Radius.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SphereCovering).Radius.AllocatorInstance.Data =
       (param_1->SphereCovering).Radius.AllocatorInstance.Data;
  (param_1->SphereCovering).Radius.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SphereCovering).Radius.ArrayNum = (param_1->SphereCovering).Radius.ArrayNum;
  (this->SphereCovering).Radius.ArrayMax = (param_1->SphereCovering).Radius.ArrayMax;
  (param_1->SphereCovering).Radius.ArrayNum = 0;
  (param_1->SphereCovering).Radius.ArrayMax = 0;
  return this;
}

