// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosNiagara
// Functions: 4

// FNiagaraDIChaosDestruction_GPUData @ 14e981d60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FNiagaraDIChaosDestruction_GPUData * __thiscall
FNiagaraDIChaosDestruction_GPUData::FNiagaraDIChaosDestruction_GPUData
          (FNiagaraDIChaosDestruction_GPUData *this,FNiagaraDIChaosDestruction_GPUData *param_1)

{
  (this->PositionArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PositionArray).AllocatorInstance.Data = (param_1->PositionArray).AllocatorInstance.Data;
  (param_1->PositionArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PositionArray).ArrayNum = (param_1->PositionArray).ArrayNum;
  (this->PositionArray).ArrayMax = (param_1->PositionArray).ArrayMax;
  (param_1->PositionArray).ArrayNum = 0;
  (param_1->PositionArray).ArrayMax = 0;
  (this->VelocityArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VelocityArray).AllocatorInstance.Data = (param_1->VelocityArray).AllocatorInstance.Data;
  (param_1->VelocityArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VelocityArray).ArrayNum = (param_1->VelocityArray).ArrayNum;
  (this->VelocityArray).ArrayMax = (param_1->VelocityArray).ArrayMax;
  (param_1->VelocityArray).ArrayNum = 0;
  (param_1->VelocityArray).ArrayMax = 0;
  (this->ExtentMinArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExtentMinArray).AllocatorInstance.Data = (param_1->ExtentMinArray).AllocatorInstance.Data;
  (param_1->ExtentMinArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExtentMinArray).ArrayNum = (param_1->ExtentMinArray).ArrayNum;
  (this->ExtentMinArray).ArrayMax = (param_1->ExtentMinArray).ArrayMax;
  (param_1->ExtentMinArray).ArrayNum = 0;
  (param_1->ExtentMinArray).ArrayMax = 0;
  (this->ExtentMaxArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExtentMaxArray).AllocatorInstance.Data = (param_1->ExtentMaxArray).AllocatorInstance.Data;
  (param_1->ExtentMaxArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExtentMaxArray).ArrayNum = (param_1->ExtentMaxArray).ArrayNum;
  (this->ExtentMaxArray).ArrayMax = (param_1->ExtentMaxArray).ArrayMax;
  (param_1->ExtentMaxArray).ArrayNum = 0;
  (param_1->ExtentMaxArray).ArrayMax = 0;
  (this->VolumeArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VolumeArray).AllocatorInstance.Data = (param_1->VolumeArray).AllocatorInstance.Data;
  (param_1->VolumeArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VolumeArray).ArrayNum = (param_1->VolumeArray).ArrayNum;
  (this->VolumeArray).ArrayMax = (param_1->VolumeArray).ArrayMax;
  (param_1->VolumeArray).ArrayNum = 0;
  (param_1->VolumeArray).ArrayMax = 0;
  (this->SolverIDArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SolverIDArray).AllocatorInstance.Data = (param_1->SolverIDArray).AllocatorInstance.Data;
  (param_1->SolverIDArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SolverIDArray).ArrayNum = (param_1->SolverIDArray).ArrayNum;
  (this->SolverIDArray).ArrayMax = (param_1->SolverIDArray).ArrayMax;
  (param_1->SolverIDArray).ArrayNum = 0;
  (param_1->SolverIDArray).ArrayMax = 0;
  (this->DensityArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DensityArray).AllocatorInstance.Data = (param_1->DensityArray).AllocatorInstance.Data;
  (param_1->DensityArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DensityArray).ArrayNum = (param_1->DensityArray).ArrayNum;
  (this->DensityArray).ArrayMax = (param_1->DensityArray).ArrayMax;
  (param_1->DensityArray).ArrayNum = 0;
  (param_1->DensityArray).ArrayMax = 0;
  (this->FrictionArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrictionArray).AllocatorInstance.Data = (param_1->FrictionArray).AllocatorInstance.Data;
  (param_1->FrictionArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrictionArray).ArrayNum = (param_1->FrictionArray).ArrayNum;
  (this->FrictionArray).ArrayMax = (param_1->FrictionArray).ArrayMax;
  (param_1->FrictionArray).ArrayNum = 0;
  (param_1->FrictionArray).ArrayMax = 0;
  (this->RestitutionArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RestitutionArray).AllocatorInstance.Data =
       (param_1->RestitutionArray).AllocatorInstance.Data;
  (param_1->RestitutionArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RestitutionArray).ArrayNum = (param_1->RestitutionArray).ArrayNum;
  (this->RestitutionArray).ArrayMax = (param_1->RestitutionArray).ArrayMax;
  (param_1->RestitutionArray).ArrayNum = 0;
  (param_1->RestitutionArray).ArrayMax = 0;
  (this->SurfaceTypeArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SurfaceTypeArray).AllocatorInstance.Data =
       (param_1->SurfaceTypeArray).AllocatorInstance.Data;
  (param_1->SurfaceTypeArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SurfaceTypeArray).ArrayNum = (param_1->SurfaceTypeArray).ArrayNum;
  (this->SurfaceTypeArray).ArrayMax = (param_1->SurfaceTypeArray).ArrayMax;
  (param_1->SurfaceTypeArray).ArrayNum = 0;
  (param_1->SurfaceTypeArray).ArrayMax = 0;
  (this->ColorArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ColorArray).AllocatorInstance.Data = (param_1->ColorArray).AllocatorInstance.Data;
  (param_1->ColorArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ColorArray).ArrayNum = (param_1->ColorArray).ArrayNum;
  (this->ColorArray).ArrayMax = (param_1->ColorArray).ArrayMax;
  (param_1->ColorArray).ArrayNum = 0;
  (param_1->ColorArray).ArrayMax = 0;
  (this->IncomingLocationArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingLocationArray).AllocatorInstance.Data =
       (param_1->IncomingLocationArray).AllocatorInstance.Data;
  (param_1->IncomingLocationArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingLocationArray).ArrayNum = (param_1->IncomingLocationArray).ArrayNum;
  (this->IncomingLocationArray).ArrayMax = (param_1->IncomingLocationArray).ArrayMax;
  (param_1->IncomingLocationArray).ArrayNum = 0;
  (param_1->IncomingLocationArray).ArrayMax = 0;
  (this->IncomingAccumulatedImpulseArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingAccumulatedImpulseArray).AllocatorInstance.Data =
       (param_1->IncomingAccumulatedImpulseArray).AllocatorInstance.Data;
  (param_1->IncomingAccumulatedImpulseArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->IncomingAccumulatedImpulseArray).ArrayNum =
       (param_1->IncomingAccumulatedImpulseArray).ArrayNum;
  (this->IncomingAccumulatedImpulseArray).ArrayMax =
       (param_1->IncomingAccumulatedImpulseArray).ArrayMax;
  (param_1->IncomingAccumulatedImpulseArray).ArrayNum = 0;
  (param_1->IncomingAccumulatedImpulseArray).ArrayMax = 0;
  (this->IncomingNormalArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingNormalArray).AllocatorInstance.Data =
       (param_1->IncomingNormalArray).AllocatorInstance.Data;
  (param_1->IncomingNormalArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingNormalArray).ArrayNum = (param_1->IncomingNormalArray).ArrayNum;
  (this->IncomingNormalArray).ArrayMax = (param_1->IncomingNormalArray).ArrayMax;
  (param_1->IncomingNormalArray).ArrayNum = 0;
  (param_1->IncomingNormalArray).ArrayMax = 0;
  (this->IncomingVelocity1Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingVelocity1Array).AllocatorInstance.Data =
       (param_1->IncomingVelocity1Array).AllocatorInstance.Data;
  (param_1->IncomingVelocity1Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingVelocity1Array).ArrayNum = (param_1->IncomingVelocity1Array).ArrayNum;
  (this->IncomingVelocity1Array).ArrayMax = (param_1->IncomingVelocity1Array).ArrayMax;
  (param_1->IncomingVelocity1Array).ArrayNum = 0;
  (param_1->IncomingVelocity1Array).ArrayMax = 0;
  (this->IncomingVelocity2Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingVelocity2Array).AllocatorInstance.Data =
       (param_1->IncomingVelocity2Array).AllocatorInstance.Data;
  (param_1->IncomingVelocity2Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingVelocity2Array).ArrayNum = (param_1->IncomingVelocity2Array).ArrayNum;
  (this->IncomingVelocity2Array).ArrayMax = (param_1->IncomingVelocity2Array).ArrayMax;
  (param_1->IncomingVelocity2Array).ArrayNum = 0;
  (param_1->IncomingVelocity2Array).ArrayMax = 0;
  (this->IncomingAngularVelocity1Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingAngularVelocity1Array).AllocatorInstance.Data =
       (param_1->IncomingAngularVelocity1Array).AllocatorInstance.Data;
  (param_1->IncomingAngularVelocity1Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingAngularVelocity1Array).ArrayNum = (param_1->IncomingAngularVelocity1Array).ArrayNum
  ;
  (this->IncomingAngularVelocity1Array).ArrayMax = (param_1->IncomingAngularVelocity1Array).ArrayMax
  ;
  (param_1->IncomingAngularVelocity1Array).ArrayNum = 0;
  (param_1->IncomingAngularVelocity1Array).ArrayMax = 0;
  (this->IncomingAngularVelocity2Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingAngularVelocity2Array).AllocatorInstance.Data =
       (param_1->IncomingAngularVelocity2Array).AllocatorInstance.Data;
  (param_1->IncomingAngularVelocity2Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingAngularVelocity2Array).ArrayNum = (param_1->IncomingAngularVelocity2Array).ArrayNum
  ;
  (this->IncomingAngularVelocity2Array).ArrayMax = (param_1->IncomingAngularVelocity2Array).ArrayMax
  ;
  (param_1->IncomingAngularVelocity2Array).ArrayNum = 0;
  (param_1->IncomingAngularVelocity2Array).ArrayMax = 0;
  (this->IncomingMass1Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingMass1Array).AllocatorInstance.Data =
       (param_1->IncomingMass1Array).AllocatorInstance.Data;
  (param_1->IncomingMass1Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingMass1Array).ArrayNum = (param_1->IncomingMass1Array).ArrayNum;
  (this->IncomingMass1Array).ArrayMax = (param_1->IncomingMass1Array).ArrayMax;
  (param_1->IncomingMass1Array).ArrayNum = 0;
  (param_1->IncomingMass1Array).ArrayMax = 0;
  (this->IncomingMass2Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingMass2Array).AllocatorInstance.Data =
       (param_1->IncomingMass2Array).AllocatorInstance.Data;
  (param_1->IncomingMass2Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingMass2Array).ArrayNum = (param_1->IncomingMass2Array).ArrayNum;
  (this->IncomingMass2Array).ArrayMax = (param_1->IncomingMass2Array).ArrayMax;
  (param_1->IncomingMass2Array).ArrayNum = 0;
  (param_1->IncomingMass2Array).ArrayMax = 0;
  (this->IncomingTimeArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingTimeArray).AllocatorInstance.Data =
       (param_1->IncomingTimeArray).AllocatorInstance.Data;
  (param_1->IncomingTimeArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingTimeArray).ArrayNum = (param_1->IncomingTimeArray).ArrayNum;
  (this->IncomingTimeArray).ArrayMax = (param_1->IncomingTimeArray).ArrayMax;
  (param_1->IncomingTimeArray).ArrayNum = 0;
  (param_1->IncomingTimeArray).ArrayMax = 0;
  (this->TransformTranslationArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransformTranslationArray).AllocatorInstance.Data =
       (param_1->TransformTranslationArray).AllocatorInstance.Data;
  (param_1->TransformTranslationArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransformTranslationArray).ArrayNum = (param_1->TransformTranslationArray).ArrayNum;
  (this->TransformTranslationArray).ArrayMax = (param_1->TransformTranslationArray).ArrayMax;
  (param_1->TransformTranslationArray).ArrayNum = 0;
  (param_1->TransformTranslationArray).ArrayMax = 0;
  (this->TransformRotationArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransformRotationArray).AllocatorInstance.Data =
       (param_1->TransformRotationArray).AllocatorInstance.Data;
  (param_1->TransformRotationArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransformRotationArray).ArrayNum = (param_1->TransformRotationArray).ArrayNum;
  (this->TransformRotationArray).ArrayMax = (param_1->TransformRotationArray).ArrayMax;
  (param_1->TransformRotationArray).ArrayNum = 0;
  (param_1->TransformRotationArray).ArrayMax = 0;
  (this->TransformScaleArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransformScaleArray).AllocatorInstance.Data =
       (param_1->TransformScaleArray).AllocatorInstance.Data;
  (param_1->TransformScaleArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransformScaleArray).ArrayNum = (param_1->TransformScaleArray).ArrayNum;
  (this->TransformScaleArray).ArrayMax = (param_1->TransformScaleArray).ArrayMax;
  (param_1->TransformScaleArray).ArrayNum = 0;
  (param_1->TransformScaleArray).ArrayMax = 0;
  (this->BoundsArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoundsArray).AllocatorInstance.Data = (param_1->BoundsArray).AllocatorInstance.Data;
  (param_1->BoundsArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoundsArray).ArrayNum = (param_1->BoundsArray).ArrayNum;
  (this->BoundsArray).ArrayMax = (param_1->BoundsArray).ArrayMax;
  (param_1->BoundsArray).ArrayNum = 0;
  (param_1->BoundsArray).ArrayMax = 0;
  this->SolverTime = param_1->SolverTime;
  this->LastSpawnedPointID = param_1->LastSpawnedPointID;
  this->RDGPositionSRV = param_1->RDGPositionSRV;
  this->RDGVelocitySRV = param_1->RDGVelocitySRV;
  this->RDGExtentMinBufferSRV = param_1->RDGExtentMinBufferSRV;
  this->RDGExtentMaxBufferSRV = param_1->RDGExtentMaxBufferSRV;
  this->RDGVolumeBufferSRV = param_1->RDGVolumeBufferSRV;
  this->RDGSolverIDBufferSRV = param_1->RDGSolverIDBufferSRV;
  this->RDGDensityBufferSRV = param_1->RDGDensityBufferSRV;
  this->RDGFrictionBufferSRV = param_1->RDGFrictionBufferSRV;
  this->RDGRestitutionBufferSRV = param_1->RDGRestitutionBufferSRV;
  this->RDGSurfaceTypeBufferSRV = param_1->RDGSurfaceTypeBufferSRV;
  this->RDGColorBufferSRV = param_1->RDGColorBufferSRV;
  this->RDGIncomingLocationBufferSRV = param_1->RDGIncomingLocationBufferSRV;
  this->RDGIncomingAccumulatedImpulseBufferSRV = param_1->RDGIncomingAccumulatedImpulseBufferSRV;
  this->RDGIncomingNormalBufferSRV = param_1->RDGIncomingNormalBufferSRV;
  this->RDGIncomingVelocity1BufferSRV = param_1->RDGIncomingVelocity1BufferSRV;
  this->RDGIncomingVelocity2BufferSRV = param_1->RDGIncomingVelocity2BufferSRV;
  this->RDGIncomingAngularVelocity1BufferSRV = param_1->RDGIncomingAngularVelocity1BufferSRV;
  this->RDGIncomingAngularVelocity2BufferSRV = param_1->RDGIncomingAngularVelocity2BufferSRV;
  this->RDGIncomingMass1BufferSRV = param_1->RDGIncomingMass1BufferSRV;
  this->RDGIncomingMass2BufferSRV = param_1->RDGIncomingMass2BufferSRV;
  this->RDGIncomingTimeBufferSRV = param_1->RDGIncomingTimeBufferSRV;
  this->RDGTransformTranslationBufferSRV = param_1->RDGTransformTranslationBufferSRV;
  this->RDGTransformRotationBufferSRV = param_1->RDGTransformRotationBufferSRV;
  this->RDGTransformScaleBufferSRV = param_1->RDGTransformScaleBufferSRV;
  this->RDGBoundsBufferSRV = param_1->RDGBoundsBufferSRV;
  return this;
}

// FNiagaraDIChaosDestruction_GPUData @ 14e9823d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FNiagaraDIChaosDestruction_GPUData * __thiscall
FNiagaraDIChaosDestruction_GPUData::FNiagaraDIChaosDestruction_GPUData
          (FNiagaraDIChaosDestruction_GPUData *this)

{
  (this->PositionArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PositionArray).ArrayNum = 0;
  (this->PositionArray).ArrayMax = 0;
  (this->VelocityArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VelocityArray).ArrayNum = 0;
  (this->VelocityArray).ArrayMax = 0;
  (this->ExtentMinArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExtentMinArray).ArrayNum = 0;
  (this->ExtentMinArray).ArrayMax = 0;
  (this->ExtentMaxArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExtentMaxArray).ArrayNum = 0;
  (this->ExtentMaxArray).ArrayMax = 0;
  (this->VolumeArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VolumeArray).ArrayNum = 0;
  (this->VolumeArray).ArrayMax = 0;
  (this->SolverIDArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SolverIDArray).ArrayNum = 0;
  (this->SolverIDArray).ArrayMax = 0;
  (this->DensityArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DensityArray).ArrayNum = 0;
  (this->DensityArray).ArrayMax = 0;
  (this->FrictionArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrictionArray).ArrayNum = 0;
  (this->FrictionArray).ArrayMax = 0;
  (this->RestitutionArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RestitutionArray).ArrayNum = 0;
  (this->RestitutionArray).ArrayMax = 0;
  (this->SurfaceTypeArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SurfaceTypeArray).ArrayNum = 0;
  (this->SurfaceTypeArray).ArrayMax = 0;
  (this->ColorArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ColorArray).ArrayNum = 0;
  (this->ColorArray).ArrayMax = 0;
  (this->IncomingLocationArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingLocationArray).ArrayNum = 0;
  (this->IncomingLocationArray).ArrayMax = 0;
  (this->IncomingAccumulatedImpulseArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingAccumulatedImpulseArray).ArrayNum = 0;
  (this->IncomingAccumulatedImpulseArray).ArrayMax = 0;
  (this->IncomingNormalArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingNormalArray).ArrayNum = 0;
  (this->IncomingNormalArray).ArrayMax = 0;
  (this->IncomingVelocity1Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingVelocity1Array).ArrayNum = 0;
  (this->IncomingVelocity1Array).ArrayMax = 0;
  (this->IncomingVelocity2Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingVelocity2Array).ArrayNum = 0;
  (this->IncomingVelocity2Array).ArrayMax = 0;
  (this->IncomingAngularVelocity1Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingAngularVelocity1Array).ArrayNum = 0;
  (this->IncomingAngularVelocity1Array).ArrayMax = 0;
  (this->IncomingAngularVelocity2Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingAngularVelocity2Array).ArrayNum = 0;
  (this->IncomingAngularVelocity2Array).ArrayMax = 0;
  (this->IncomingMass1Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingMass1Array).ArrayNum = 0;
  (this->IncomingMass1Array).ArrayMax = 0;
  (this->IncomingMass2Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingMass2Array).ArrayNum = 0;
  (this->IncomingMass2Array).ArrayMax = 0;
  (this->IncomingTimeArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingTimeArray).ArrayNum = 0;
  (this->IncomingTimeArray).ArrayMax = 0;
  (this->TransformTranslationArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransformTranslationArray).ArrayNum = 0;
  (this->TransformTranslationArray).ArrayMax = 0;
  (this->TransformRotationArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransformRotationArray).ArrayNum = 0;
  (this->TransformRotationArray).ArrayMax = 0;
  (this->TransformScaleArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransformScaleArray).ArrayNum = 0;
  (this->TransformScaleArray).ArrayMax = 0;
  (this->BoundsArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoundsArray).ArrayNum = 0;
  (this->BoundsArray).ArrayMax = 0;
  this->RDGPositionSRV = (FRDGBufferSRV *)0x0;
  this->RDGVelocitySRV = (FRDGBufferSRV *)0x0;
  this->RDGExtentMinBufferSRV = (FRDGBufferSRV *)0x0;
  this->RDGExtentMaxBufferSRV = (FRDGBufferSRV *)0x0;
  this->RDGVolumeBufferSRV = (FRDGBufferSRV *)0x0;
  this->RDGSolverIDBufferSRV = (FRDGBufferSRV *)0x0;
  this->RDGDensityBufferSRV = (FRDGBufferSRV *)0x0;
  this->RDGFrictionBufferSRV = (FRDGBufferSRV *)0x0;
  this->RDGRestitutionBufferSRV = (FRDGBufferSRV *)0x0;
  this->RDGSurfaceTypeBufferSRV = (FRDGBufferSRV *)0x0;
  this->RDGColorBufferSRV = (FRDGBufferSRV *)0x0;
  this->RDGIncomingLocationBufferSRV = (FRDGBufferSRV *)0x0;
  this->RDGIncomingAccumulatedImpulseBufferSRV = (FRDGBufferSRV *)0x0;
  this->RDGIncomingNormalBufferSRV = (FRDGBufferSRV *)0x0;
  this->RDGIncomingVelocity1BufferSRV = (FRDGBufferSRV *)0x0;
  this->RDGIncomingVelocity2BufferSRV = (FRDGBufferSRV *)0x0;
  this->RDGIncomingAngularVelocity1BufferSRV = (FRDGBufferSRV *)0x0;
  this->RDGIncomingAngularVelocity2BufferSRV = (FRDGBufferSRV *)0x0;
  this->RDGIncomingMass1BufferSRV = (FRDGBufferSRV *)0x0;
  this->RDGIncomingMass2BufferSRV = (FRDGBufferSRV *)0x0;
  this->RDGIncomingTimeBufferSRV = (FRDGBufferSRV *)0x0;
  this->RDGTransformTranslationBufferSRV = (FRDGBufferSRV *)0x0;
  this->RDGTransformRotationBufferSRV = (FRDGBufferSRV *)0x0;
  this->RDGTransformScaleBufferSRV = (FRDGBufferSRV *)0x0;
  this->RDGBoundsBufferSRV = (FRDGBufferSRV *)0x0;
  return this;
}

// ~FNiagaraDIChaosDestruction_GPUData @ 14e9843b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FNiagaraDIChaosDestruction_GPUData::~FNiagaraDIChaosDestruction_GPUData
          (FNiagaraDIChaosDestruction_GPUData *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->BoundsArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TransformScaleArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TransformRotationArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TransformTranslationArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IncomingTimeArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IncomingMass2Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IncomingMass1Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IncomingAngularVelocity2Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IncomingAngularVelocity1Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IncomingVelocity2Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IncomingVelocity1Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IncomingNormalArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IncomingAccumulatedImpulseArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IncomingLocationArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ColorArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SurfaceTypeArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RestitutionArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FrictionArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DensityArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SolverIDArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VolumeArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExtentMaxArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExtentMinArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VelocityArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PositionArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ResetAll @ 14e9a5bc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FNiagaraDIChaosDestruction_GPUData::ResetAll(FNiagaraDIChaosDestruction_GPUData *this)

{
  (this->PositionArray).ArrayNum = 0;
  if ((this->PositionArray).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this,0,&(this->PositionArray).ArrayMax);
  }
  (this->VelocityArray).ArrayNum = 0;
  if ((this->VelocityArray).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->VelocityArray).AllocatorInstance,0,&(this->VelocityArray).ArrayMax);
  }
  (this->ExtentMinArray).ArrayNum = 0;
  if ((this->ExtentMinArray).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ExtentMinArray).AllocatorInstance,0,&(this->ExtentMinArray).ArrayMax);
  }
  (this->ExtentMaxArray).ArrayNum = 0;
  if ((this->ExtentMaxArray).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ExtentMaxArray).AllocatorInstance,0,&(this->ExtentMaxArray).ArrayMax);
  }
  (this->VolumeArray).ArrayNum = 0;
  if ((this->VolumeArray).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->VolumeArray).AllocatorInstance,0,&(this->VolumeArray).ArrayMax);
  }
  (this->SolverIDArray).ArrayNum = 0;
  if ((this->SolverIDArray).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SolverIDArray).AllocatorInstance,0,&(this->SolverIDArray).ArrayMax);
  }
  (this->DensityArray).ArrayNum = 0;
  if ((this->DensityArray).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->DensityArray).AllocatorInstance,0,&(this->DensityArray).ArrayMax);
  }
  (this->FrictionArray).ArrayNum = 0;
  if ((this->FrictionArray).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->FrictionArray).AllocatorInstance,0,&(this->FrictionArray).ArrayMax);
  }
  (this->RestitutionArray).ArrayNum = 0;
  if ((this->RestitutionArray).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->RestitutionArray).AllocatorInstance,0,
               &(this->RestitutionArray).ArrayMax);
  }
  (this->SurfaceTypeArray).ArrayNum = 0;
  if ((this->SurfaceTypeArray).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SurfaceTypeArray).AllocatorInstance,0,
               &(this->SurfaceTypeArray).ArrayMax);
  }
  (this->ColorArray).ArrayNum = 0;
  if ((this->ColorArray).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->ColorArray).AllocatorInstance,0,&(this->ColorArray).ArrayMax);
  }
  (this->IncomingLocationArray).ArrayNum = 0;
  if ((this->IncomingLocationArray).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->IncomingLocationArray).AllocatorInstance,0,
               &(this->IncomingLocationArray).ArrayMax);
  }
  (this->IncomingAccumulatedImpulseArray).ArrayNum = 0;
  if ((this->IncomingAccumulatedImpulseArray).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->IncomingAccumulatedImpulseArray).AllocatorInstance,0,
               &(this->IncomingAccumulatedImpulseArray).ArrayMax);
  }
  (this->IncomingNormalArray).ArrayNum = 0;
  if ((this->IncomingNormalArray).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->IncomingNormalArray).AllocatorInstance,0,
               &(this->IncomingNormalArray).ArrayMax);
  }
  (this->IncomingVelocity1Array).ArrayNum = 0;
  if ((this->IncomingVelocity1Array).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->IncomingVelocity1Array).AllocatorInstance,0,
               &(this->IncomingVelocity1Array).ArrayMax);
  }
  (this->IncomingVelocity2Array).ArrayNum = 0;
  if ((this->IncomingVelocity2Array).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->IncomingVelocity2Array).AllocatorInstance,0,
               &(this->IncomingVelocity2Array).ArrayMax);
  }
  (this->IncomingAngularVelocity1Array).ArrayNum = 0;
  if ((this->IncomingAngularVelocity1Array).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->IncomingAngularVelocity1Array).AllocatorInstance,0,
               &(this->IncomingAngularVelocity1Array).ArrayMax);
  }
  (this->IncomingAngularVelocity2Array).ArrayNum = 0;
  if ((this->IncomingAngularVelocity2Array).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->IncomingAngularVelocity2Array).AllocatorInstance,0,
               &(this->IncomingAngularVelocity2Array).ArrayMax);
  }
  (this->IncomingMass1Array).ArrayNum = 0;
  if ((this->IncomingMass1Array).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->IncomingMass1Array).AllocatorInstance,0,
               &(this->IncomingMass1Array).ArrayMax);
  }
  (this->IncomingMass2Array).ArrayNum = 0;
  if ((this->IncomingMass2Array).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->IncomingMass2Array).AllocatorInstance,0,
               &(this->IncomingMass2Array).ArrayMax);
  }
  (this->IncomingTimeArray).ArrayNum = 0;
  if ((this->IncomingTimeArray).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->IncomingTimeArray).AllocatorInstance,0,
               &(this->IncomingTimeArray).ArrayMax);
  }
  (this->TransformTranslationArray).ArrayNum = 0;
  if ((this->TransformTranslationArray).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->TransformTranslationArray).AllocatorInstance,0,
               &(this->TransformTranslationArray).ArrayMax);
  }
  (this->TransformRotationArray).ArrayNum = 0;
  if ((this->TransformRotationArray).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,0,&(this->TransformRotationArray).AllocatorInstance,0,
               &(this->TransformRotationArray).ArrayMax);
  }
  (this->TransformScaleArray).ArrayNum = 0;
  if ((this->TransformScaleArray).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->TransformScaleArray).AllocatorInstance,0,
               &(this->TransformScaleArray).ArrayMax);
  }
  (this->BoundsArray).ArrayNum = 0;
  if ((this->BoundsArray).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->BoundsArray).AllocatorInstance,0,&(this->BoundsArray).ArrayMax);
  }
  return;
}

