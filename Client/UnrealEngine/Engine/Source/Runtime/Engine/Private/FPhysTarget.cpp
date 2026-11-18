// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FPhysTarget @ 1482d8ec0

/* WARNING: Type propagation algorithm not settling */

FPhysTarget * __thiscall FPhysTarget::FPhysTarget(FPhysTarget *this,FPhysTarget *param_1)

{
  longlong lVar1;
  double dVar2;
  
  (this->Forces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Forces).AllocatorInstance.Data = (param_1->Forces).AllocatorInstance.Data;
  (param_1->Forces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Forces).ArrayNum = (param_1->Forces).ArrayNum;
  (this->Forces).ArrayMax = (param_1->Forces).ArrayMax;
  (param_1->Forces).ArrayNum = 0;
  (param_1->Forces).ArrayMax = 0;
  (this->Torques).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Torques).AllocatorInstance.Data = (param_1->Torques).AllocatorInstance.Data;
  (param_1->Torques).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Torques).ArrayNum = (param_1->Torques).ArrayNum;
  (this->Torques).ArrayMax = (param_1->Torques).ArrayMax;
  (param_1->Torques).ArrayNum = 0;
  (param_1->Torques).ArrayMax = 0;
  (this->RadialForces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RadialForces).AllocatorInstance.Data = (param_1->RadialForces).AllocatorInstance.Data;
  (param_1->RadialForces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RadialForces).ArrayNum = (param_1->RadialForces).ArrayNum;
  (this->RadialForces).ArrayMax = (param_1->RadialForces).ArrayMax;
  (param_1->RadialForces).ArrayNum = 0;
  (param_1->RadialForces).ArrayMax = 0;
  (this->CustomPhysics).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomPhysics).AllocatorInstance.Data = (param_1->CustomPhysics).AllocatorInstance.Data;
  (param_1->CustomPhysics).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomPhysics).ArrayNum = (param_1->CustomPhysics).ArrayNum;
  (this->CustomPhysics).ArrayMax = (param_1->CustomPhysics).ArrayMax;
  (param_1->CustomPhysics).ArrayNum = 0;
  (param_1->CustomPhysics).ArrayMax = 0;
  lVar1 = (param_1->KinematicTarget)._padding_;
  (this->KinematicTarget).BodyInstance = (param_1->KinematicTarget).BodyInstance;
  (this->KinematicTarget)._padding_ = lVar1;
  dVar2 = (param_1->KinematicTarget).TargetTM.Rotation.XY.m128d_f64[1];
  (this->KinematicTarget).TargetTM.Rotation.XY.m128d_f64[0] =
       (param_1->KinematicTarget).TargetTM.Rotation.XY.m128d_f64[0];
  (this->KinematicTarget).TargetTM.Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->KinematicTarget).TargetTM.Rotation.ZW.m128d_f64[1];
  (this->KinematicTarget).TargetTM.Rotation.ZW.m128d_f64[0] =
       (param_1->KinematicTarget).TargetTM.Rotation.ZW.m128d_f64[0];
  (this->KinematicTarget).TargetTM.Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->KinematicTarget).TargetTM.Translation.XY.m128d_f64[1];
  (this->KinematicTarget).TargetTM.Translation.XY.m128d_f64[0] =
       (param_1->KinematicTarget).TargetTM.Translation.XY.m128d_f64[0];
  (this->KinematicTarget).TargetTM.Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->KinematicTarget).TargetTM.Translation.ZW.m128d_f64[1];
  (this->KinematicTarget).TargetTM.Translation.ZW.m128d_f64[0] =
       (param_1->KinematicTarget).TargetTM.Translation.ZW.m128d_f64[0];
  (this->KinematicTarget).TargetTM.Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->KinematicTarget).TargetTM.Scale3D.XY.m128d_f64[1];
  (this->KinematicTarget).TargetTM.Scale3D.XY.m128d_f64[0] =
       (param_1->KinematicTarget).TargetTM.Scale3D.XY.m128d_f64[0];
  (this->KinematicTarget).TargetTM.Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->KinematicTarget).TargetTM.Scale3D.ZW.m128d_f64[1];
  (this->KinematicTarget).TargetTM.Scale3D.ZW.m128d_f64[0] =
       (param_1->KinematicTarget).TargetTM.Scale3D.ZW.m128d_f64[0];
  (this->KinematicTarget).TargetTM.Scale3D.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->KinematicTarget).OriginalTM.Rotation.XY.m128d_f64[1];
  (this->KinematicTarget).OriginalTM.Rotation.XY.m128d_f64[0] =
       (param_1->KinematicTarget).OriginalTM.Rotation.XY.m128d_f64[0];
  (this->KinematicTarget).OriginalTM.Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->KinematicTarget).OriginalTM.Rotation.ZW.m128d_f64[1];
  (this->KinematicTarget).OriginalTM.Rotation.ZW.m128d_f64[0] =
       (param_1->KinematicTarget).OriginalTM.Rotation.ZW.m128d_f64[0];
  (this->KinematicTarget).OriginalTM.Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->KinematicTarget).OriginalTM.Translation.XY.m128d_f64[1];
  (this->KinematicTarget).OriginalTM.Translation.XY.m128d_f64[0] =
       (param_1->KinematicTarget).OriginalTM.Translation.XY.m128d_f64[0];
  (this->KinematicTarget).OriginalTM.Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->KinematicTarget).OriginalTM.Translation.ZW.m128d_f64[1];
  (this->KinematicTarget).OriginalTM.Translation.ZW.m128d_f64[0] =
       (param_1->KinematicTarget).OriginalTM.Translation.ZW.m128d_f64[0];
  (this->KinematicTarget).OriginalTM.Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->KinematicTarget).OriginalTM.Scale3D.XY.m128d_f64[1];
  (this->KinematicTarget).OriginalTM.Scale3D.XY.m128d_f64[0] =
       (param_1->KinematicTarget).OriginalTM.Scale3D.XY.m128d_f64[0];
  (this->KinematicTarget).OriginalTM.Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->KinematicTarget).OriginalTM.Scale3D.ZW.m128d_f64[1];
  (this->KinematicTarget).OriginalTM.Scale3D.ZW.m128d_f64[0] =
       (param_1->KinematicTarget).OriginalTM.Scale3D.ZW.m128d_f64[0];
  (this->KinematicTarget).OriginalTM.Scale3D.ZW.m128d_f64[1] = dVar2;
  this->bKinematicTarget = param_1->bKinematicTarget;
  return this;
}

